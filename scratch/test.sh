#!/bin/bash

preinit=$1 # don't add file extension
nevents=$2
njobs=$3
kine=$4
tar=$5
field=$6
workflowname="sim_gmn_SBS"
workflowname+="$4"
workflowname+="_"
workflowname+="$5"
workflowname+="_"
workflowname+="$6"
workflowname+="per"

wflow='sim_gmn_SBS'$4'_'$5'_'$6'per'

echo -e "\n $workflowname \n"

echo -e "\n $wflow \n"
