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


- BB_HCal_Coorelations: Contains scripts which produce elastic correlations between the HCal hadron and BigBite e' elastic correlations. Useful with limited statistics and insufficient optics to verify signal in HCal.
- clusterTiming: Produces plots comparing fADC time between cluster elements for evaluation of HCal DB parameter sbs.hcal.tmax for max timing cut on cluster element inclusion.
- config: Contains PMT serial numbers and layout in calorimeter.
- DB_old: Contains old and out-of-use database parameters with timestamps for reference or rollback.
- detection_efficiency: Produces plots which evaluate the relative detection efficiency between protons and neutrons in the calorimeter.
- displays: Produces interactive GUIs which allow for viewing of full waveform data from the calorimeter. Also contains similar display GUIs for clustering and the dedicated trigger signal fADC.
- energyCalibration: The central platform containing scripts necessary to produce fADC gain parameters (included in the HCal DB file db_sbs.hcal.dat) from in-beam signal. With these parameters can also produce target HV parameters for reset. NOTE: Changing HV should not be done unless absolutely necessary. Consult SME before making any changes to HV.
- GUI: Repo of all necessary GUI to control HCal functions for recording purposes. NOTE: These copies are not meant to be active for use.
- HV: Contains HV GUI configuration files for record.
- oldCode (Under Maintenance): Contains many out-of-use scripts used to produce simple comparisons and plots. Also contains alpha extraction, PMT quantum efficiency analysis, and cosmic fADC gain calibration scripts. These last three are under maintenance and will be moved up to hcal when complete.
- outFiles: Contains larger .root output analysis files which are kept for comparisons.
- parseElastics: Script to process several data files into a single large root file with tuned elastic cuts to reduce the file size and centralize elastic cut parameters.
- protonDisplay: Contains a script to make simple elastic cuts available without tracking information on LH2 data over sparse statistics for use during commissioning to find signal and evaluate functionality of HCal.
- misc: Has several miscillaneous scripts and files to evaluate parameters and modify the analysis environment. These include HCal BBCal trigger time difference evaluation and a gmn tree generator script.
- setFiles: Contains files which contain current HCal detector configurations and characteristics used for analysis throughout the platform.
- signal_centering: Simple script used to center fADC time in the ADC window with limited information from BigBite. Constructed in response to the sudden-latency-shift issues from GMn running 2021.
- TDC_alignment: Scripts to evaluate the timing resolution and produced offset parameters to align TDC/fADC time signals corresponding to elastic events.
- timingCalibration: Scripts to correct timing signals by event via observation of timewalk, TOF, and trigger jitter. 
- TOF (*temporary/under-construction*): Contains standalone script to evaluate the time-of-flight corrections to timing calibrations for HCal. Will be added to timingCalibration when complete
- trigger_analysis: Computes the timing difference between the various triggers including LED/Cosmic-paddles/Overlapping-regions/BBCal/etc triggers.

This repository is used and maintained by Sebastian Seeds (sseeds@jlab.org).
