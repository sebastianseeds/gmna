#!bin/sh

echo "\n"
echo "--------------------------------------------------------------------"
echo "Setup script run and environment parameters loaded for GMn analysis."
echo "Current JLab environment " ${JLAB_VERSION}
echo "--------------------------------------------------------------------"
echo "\n"

#Set environment variables in bash
setenv CONFIG_DIR /w/halla-scshelf2102/sbs/seeds/gmn_analysis/gmna/include/config
setenv GMN_DATA_DIR /w/halla-scshelf2102/sbs/sbs-gmn
setenv PARSE_OUTPUT_DIR /lustre19/expphy/volatile/halla/sbs/seeds/parse

#Include path to header files
#setenv PATH /w/halla-scshelf2102/sbs/seeds/gmn_analysis/gmna/include:${PATH}
#setenv LD_LIBRARY_PATH /w/halla-scshelf2102/sbs/seeds/gmn_analysis/gmna/include:${LD_LIBRARY_PATH}
