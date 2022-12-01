# gmna
**GMn Analysis Platform**

The purpose of this repository is to provide a software platform for analysis of GMn data. It consists of three essential utilities.
- Parse Elastics. This function takes the often very large set of events generated during the experiment and parses it back to a much smaller number of events based on very wide elastic cuts placed on track, HCal, BBCal, and physics variables.
- HCal Analysis. This function employs several scripts to evaluate the performance of the Hadron Calorimeter during GMn including detection efficiency and timing resolution.
- Physics Analysis. This function generates distributions of elastic events, places cuts, and extracts yields. From these yields and other experimental parameters, GMn and nTPE are calculated.

Before running any analysis, first do:
>source setup_gmna.sh

This will set the appropriate environment variables. Note that some retooling of these paths WILL be necessary for each user's environment.

It should be noted also that this platform is still under construction!

Please see [wiki](sbs.jlab.org/wiki/index.php/Main_Page) for more information.
---
Directory and subdirectory descriptions follow:
## include
- config: This directory contains several configuration files for each of the experimental configurations analyzed with this platform. Each of these files contains the location of all replayed root files analyzed, global cuts, and experimental parameters for each of the scripts which require them.
- gmna.h: This file provides a set of detector and global experimental parameters usable by all scripts in this platform.
## parse
- oldCode: Contains several iterative versions of the two remaining scripts which are used. These versions contain scripts which are used during active improvement of the working scripts.
- pelas.C: This script places wide cuts on all current-pass replays of each kinematic passed by the user and returns a root file parsed in both events and structure. It should be noted that this script must be run by the analyzer, not by native root to accomodate THaRun libraries. Usage:
>analyzer -l 'pelas.C(<kinematic>)'

Here, kinematic refers to any of the nominal kinematics in GMn. So, kinematic = { 4, 7, 8, 9, 11, 14 }.
- pelas_sh.C: This script places only global cuts on elastics over all events and returns the same tree parsed only by events. This may be run with the analyzer or by native root. Usage:
>root -l 'pelas_sh.C(<kinematic>)'

Here, kinematic refers to any of the nominal kinematics in GMn. So, kinematic = { 4, 7, 8, 9, 11, 14 }
## hcal
- hcal_det_eff: This directory contains scripts to evaluate the proton and neutron detection efficiency of hcal. Instructions for these scripts forthcoming..
- hcal_time: This directory contains scripts to evaluate the timing resolution of hcal. This directory also contains scripts to evaluate accelerator RF structure and Hodoscope timing as well, as they pertain to the hcal resolution. Instructions for these scripts forthcoming..
## physics
- hcal_tof: This directory contains scripts to evaluate the time of flight of the proton and neutron from Monte Carlo (G4SBS). Some shell scripting exists in the next category to automate the simulation process. Note that a working build of G4SBS is not compatible with the newest version of Geant and as such must be constructed from [here](github.com/JeffersonLab/g4sbs) under JLab version 2.4 (or 2.5).
- gmn: This directory contains scripts used to evaluate the best possible cuts to produce elastic "delta" plots in hcal and to evaluate the proton and neutron yields across several experimental kinematics. Instructions for these scripts forthcoming..
- ntpe: This directory contains similar scripts as gmn/ but extracts nTPE. Instructions for these scripts forthcoming..
## shell
- tof: This directory contains shell scripts for running simulations to produce root files for further analysis with HCal TOF scripts. Instructions for these scripts forthcoming..
- ana: This directory contains shell scripts for running elastic simulations over various kinematics to evaluate various contributions to backgrounds and for comparisons to experimental results.

This repository is used and maintained by Sebastian Seeds (sseeds@jlab.org).
