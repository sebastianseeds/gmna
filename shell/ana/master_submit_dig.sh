#!/bin/bash

#sseeds 12.1.22 - Script adapted from PDatta's digitization farm submission framework to simulate SBS8/9 and digitize the data for replay and comparison. Makes use of the farm's queue functionality.
#Usage: ./master_submit_dig.sh <preinit script> <number events per job> <number of jobs> <kinematic> <target> <field setting in percent>

preinit=$1 # don't add file extension
nevents=$2
njobs=$3
kine=$4
tar=$5
field=$6
workflowname='sim_gmn_SBS'$4'_'$5'_'$6'per'
swif2 create $workflowname
#Should specify a single directory on volatile to store g4sbs, sbsdig, & replayed files.
outdirpath='/lustre19/expphy/volatile/halla/sbs/sseeds/simulation/SBS'$4'_'$5'_'$6'per'
#Validating the number of arguments provided
if [[ "$#" -ne 6 ]]; then
    echo -e "\n Error: Incorrect syntax. "
    echo -e " This script expects 6 arguments: <preinit> <nevents> <njobs> <kine> <target> <field>\n"
    exit;
fi

for ((i=1; i<=$njobs; i++))
do
    # lets submit g4sbs jobs first
    outfilename=$preinit'_job_'$i'.root'
    postscript=$preinit'_job_'$i'.mac'
    g4sbsjobname=$preinit'_job_'$i

    g4sbsscript='/w/halla-scshelf2102/sbs/seeds/gmn_analysis/gmna/shell/ana/run_g4sim.sh'

    swif2 add-job -workflow $workflowname -partition production -name $g4sbsjobname -cores 1 -disk 5GB -ram 1500MB $g4sbsscript $preinit $postscript $nevents $outfilename $outdirpath

    # now, it's time for digitization
    txtfile=$preinit'_job_'$i'.txt'
    sbsdigjobname=$preinit'_dig_job_'$i
    sbsdiginfile=$outdirpath'/'$outfilename

    sbsdigscript='/w/halla-scshelf2102/sbs/seeds/gmn_analysis/gmna/shell/ana/run_dig.sh'
    
    swif2 add-job -workflow $workflowname -antecedent $g4sbsjobname -partition production -name $sbsdigjobname -cores 1 -disk 5GB -ram 1500MB $sbsdigscript $txtfile $sbsdiginfile

    # finally, lets replay the digitized data
    digreplayinfile=$preinit'_job_'$i
    digreplayjobname=$preinit'_dig_replay_job_'$i

    digreplayscript='/w/halla-scshelf2102/sbs/seeds/gmn_analysis/gmna/shell/ana/run_dig_replay.sh'
    
    swif2 add-job -workflow $workflowname -antecedent $sbsdigjobname -partition production -name $digreplayjobname -cores 1 -disk 5GB -ram 1500MB $digreplayscript $digreplayinfile $outdirpath
done

# run the workflow and then print status
swif2 run $workflowname
echo -e "\n Getting workflow status.. \n"
swif2 status $workflowname
