#!/bin/bash

#SBATCH --partition=production
#SBATCH --account=halla
#SBATCH --mem-per-cpu=1500

echo 'working directory ='
echo $PWD

SWIF_JOB_WORK_DIR=$PWD
echo 'swif_job_work_dir='$SWIF_JOB_WORK_DIR

MODULES=/etc/profile.d/modules.sh 

if [[ $(type -t module) != function && -r ${MODULES} ]]; then 
source ${MODULES} 
fi 

if [ -d /apps/modulefiles ]; then 
module use /apps/modulefiles 
fi 

# setup farm environments
source /site/12gev_phys/softenv.sh 2.5
module load gcc/9.2.0 
ldd /work/halla/sbs/ANALYZER/install/bin/analyzer |& grep not
#ldd /work/halla/sbs/seeds/analyzer/install/bin/analyzer |& grep not

# setup analyzer specific environments
#export ANALYZER=/work/halla/sbs/seeds/analyzer/install
export ANALYZER=/work/halla/sbs/ANALYZER/install
source $ANALYZER/bin/setup.sh
#source /work/halla/sbs/seeds/sbsoffline/install/bin/sbsenv.sh
source /work/halla/sbs/SBS_OFFLINE/install/bin/sbsenv.csh

export SBS_REPLAY=/work/halla/sbs/SBS_REPLAY/SBS-replay
export ANALYZER_CONFIGPATH=$SBS_REPLAY/replay
export DB_DIR=$SBS_REPLAY/DB_MC

export OUT_DIR=$SWIF_JOB_WORK_DIR
#export LOG_DIR=$SWIF_JOB_WORK_DIR

# executing the replay script
inputfile=$1
datadir=$2

export DATA_DIR=$datadir

cp $SBS/run_replay_here/.rootrc $SWIF_JOB_WORK_DIR

analyzer -b -q 'replay_gmn_mc.C+("'$inputfile'")'

outputfile=$OUT_DIR'/replayed_'$inputfile'.root'
mv $outputfile $DATA_DIR
