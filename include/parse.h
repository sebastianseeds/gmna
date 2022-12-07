#ifndef PARSE_H
#define PARSE_H

// Declaration of leaf types for chain (from MakeClass())
Double_t        C_targx;
Double_t        C_targy;
Int_t           C_Ndata_bb_eps_over_etot;
Double_t        C_bb_eps_over_etot[100];   //[Ndata.bb.eps_over_etot]
Int_t           C_Ndata_bb_etot_over_p;
Double_t        C_bb_etot_over_p[100];   //[Ndata.bb.etot_over_p]
Int_t           C_Ndata_bb_gem_hit_ADCU;
Double_t        C_bb_gem_hit_ADCU[100];   //[Ndata.bb.gem.hit.ADCU]
Int_t           C_Ndata_bb_gem_hit_ADCU_deconv;
Double_t        C_bb_gem_hit_ADCU_deconv[100];   //[Ndata.bb.gem.hit.ADCU_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCV;
Double_t        C_bb_gem_hit_ADCV[100];   //[Ndata.bb.gem.hit.ADCV]
Int_t           C_Ndata_bb_gem_hit_ADCV_deconv;
Double_t        C_bb_gem_hit_ADCV_deconv[100];   //[Ndata.bb.gem.hit.ADCV_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCasym;
Double_t        C_bb_gem_hit_ADCasym[100];   //[Ndata.bb.gem.hit.ADCasym]
Int_t           C_Ndata_bb_gem_hit_ADCasym_deconv;
Double_t        C_bb_gem_hit_ADCasym_deconv[100];   //[Ndata.bb.gem.hit.ADCasym_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCavg;
Double_t        C_bb_gem_hit_ADCavg[100];   //[Ndata.bb.gem.hit.ADCavg]
Int_t           C_Ndata_bb_gem_hit_ADCavg_deconv;
Double_t        C_bb_gem_hit_ADCavg_deconv[100];   //[Ndata.bb.gem.hit.ADCavg_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCfrac0_Umax;
Double_t        C_bb_gem_hit_ADCfrac0_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac0_Umax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac0_Vmax;
Double_t        C_bb_gem_hit_ADCfrac0_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac0_Vmax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac1_Umax;
Double_t        C_bb_gem_hit_ADCfrac1_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac1_Umax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac1_Vmax;
Double_t        C_bb_gem_hit_ADCfrac1_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac1_Vmax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac2_Umax;
Double_t        C_bb_gem_hit_ADCfrac2_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac2_Umax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac2_Vmax;
Double_t        C_bb_gem_hit_ADCfrac2_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac2_Vmax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac3_Umax;
Double_t        C_bb_gem_hit_ADCfrac3_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac3_Umax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac3_Vmax;
Double_t        C_bb_gem_hit_ADCfrac3_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac3_Vmax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac4_Umax;
Double_t        C_bb_gem_hit_ADCfrac4_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac4_Umax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac4_Vmax;
Double_t        C_bb_gem_hit_ADCfrac4_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac4_Vmax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac5_Umax;
Double_t        C_bb_gem_hit_ADCfrac5_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac5_Umax]
Int_t           C_Ndata_bb_gem_hit_ADCfrac5_Vmax;
Double_t        C_bb_gem_hit_ADCfrac5_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac5_Vmax]
Int_t           C_Ndata_bb_gem_hit_ADCmaxcomboUclust_deconv;
Double_t        C_bb_gem_hit_ADCmaxcomboUclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxcomboUclust_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCmaxcomboVclust_deconv;
Double_t        C_bb_gem_hit_ADCmaxcomboVclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxcomboVclust_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCmaxsampU;
Double_t        C_bb_gem_hit_ADCmaxsampU[100];   //[Ndata.bb.gem.hit.ADCmaxsampU]
Int_t           C_Ndata_bb_gem_hit_ADCmaxsampUclust;
Double_t        C_bb_gem_hit_ADCmaxsampUclust[100];   //[Ndata.bb.gem.hit.ADCmaxsampUclust]
Int_t           C_Ndata_bb_gem_hit_ADCmaxsampUclust_deconv;
Double_t        C_bb_gem_hit_ADCmaxsampUclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxsampUclust_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCmaxsampV;
Double_t        C_bb_gem_hit_ADCmaxsampV[100];   //[Ndata.bb.gem.hit.ADCmaxsampV]
Int_t           C_Ndata_bb_gem_hit_ADCmaxsampVclust;
Double_t        C_bb_gem_hit_ADCmaxsampVclust[100];   //[Ndata.bb.gem.hit.ADCmaxsampVclust]
Int_t           C_Ndata_bb_gem_hit_ADCmaxsampVclust_deconv;
Double_t        C_bb_gem_hit_ADCmaxsampVclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxsampVclust_deconv]
Int_t           C_Ndata_bb_gem_hit_ADCmaxstripU;
Double_t        C_bb_gem_hit_ADCmaxstripU[100];   //[Ndata.bb.gem.hit.ADCmaxstripU]
Int_t           C_Ndata_bb_gem_hit_ADCmaxstripV;
Double_t        C_bb_gem_hit_ADCmaxstripV[100];   //[Ndata.bb.gem.hit.ADCmaxstripV]
Int_t           C_Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_U;
Double_t        C_bb_gem_hit_BUILD_ALL_SAMPLES_U[100];   //[Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_U]
Int_t           C_Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_V;
Double_t        C_bb_gem_hit_BUILD_ALL_SAMPLES_V[100];   //[Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_V]
Int_t           C_Ndata_bb_gem_hit_CM_GOOD_U;
Double_t        C_bb_gem_hit_CM_GOOD_U[100];   //[Ndata.bb.gem.hit.CM_GOOD_U]
Int_t           C_Ndata_bb_gem_hit_CM_GOOD_V;
Double_t        C_bb_gem_hit_CM_GOOD_V[100];   //[Ndata.bb.gem.hit.CM_GOOD_V]
Int_t           C_Ndata_bb_gem_hit_DeconvADC0_Umax;
Double_t        C_bb_gem_hit_DeconvADC0_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC0_Umax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC0_Vmax;
Double_t        C_bb_gem_hit_DeconvADC0_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC0_Vmax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC1_Umax;
Double_t        C_bb_gem_hit_DeconvADC1_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC1_Umax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC1_Vmax;
Double_t        C_bb_gem_hit_DeconvADC1_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC1_Vmax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC2_Umax;
Double_t        C_bb_gem_hit_DeconvADC2_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC2_Umax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC2_Vmax;
Double_t        C_bb_gem_hit_DeconvADC2_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC2_Vmax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC3_Umax;
Double_t        C_bb_gem_hit_DeconvADC3_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC3_Umax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC3_Vmax;
Double_t        C_bb_gem_hit_DeconvADC3_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC3_Vmax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC4_Umax;
Double_t        C_bb_gem_hit_DeconvADC4_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC4_Umax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC4_Vmax;
Double_t        C_bb_gem_hit_DeconvADC4_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC4_Vmax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC5_Umax;
Double_t        C_bb_gem_hit_DeconvADC5_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC5_Umax]
Int_t           C_Ndata_bb_gem_hit_DeconvADC5_Vmax;
Double_t        C_bb_gem_hit_DeconvADC5_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC5_Vmax]
Int_t           C_Ndata_bb_gem_hit_DeconvADCmaxcomboU;
Double_t        C_bb_gem_hit_DeconvADCmaxcomboU[100];   //[Ndata.bb.gem.hit.DeconvADCmaxcomboU]
Int_t           C_Ndata_bb_gem_hit_DeconvADCmaxcomboV;
Double_t        C_bb_gem_hit_DeconvADCmaxcomboV[100];   //[Ndata.bb.gem.hit.DeconvADCmaxcomboV]
Int_t           C_Ndata_bb_gem_hit_DeconvADCmaxsampU;
Double_t        C_bb_gem_hit_DeconvADCmaxsampU[100];   //[Ndata.bb.gem.hit.DeconvADCmaxsampU]
Int_t           C_Ndata_bb_gem_hit_DeconvADCmaxsampV;
Double_t        C_bb_gem_hit_DeconvADCmaxsampV[100];   //[Ndata.bb.gem.hit.DeconvADCmaxsampV]
Int_t           C_Ndata_bb_gem_hit_DeconvADCmaxstripU;
Double_t        C_bb_gem_hit_DeconvADCmaxstripU[100];   //[Ndata.bb.gem.hit.DeconvADCmaxstripU]
Int_t           C_Ndata_bb_gem_hit_DeconvADCmaxstripV;
Double_t        C_bb_gem_hit_DeconvADCmaxstripV[100];   //[Ndata.bb.gem.hit.DeconvADCmaxstripV]
Int_t           C_Ndata_bb_gem_hit_ENABLE_CM_U;
Double_t        C_bb_gem_hit_ENABLE_CM_U[100];   //[Ndata.bb.gem.hit.ENABLE_CM_U]
Int_t           C_Ndata_bb_gem_hit_ENABLE_CM_V;
Double_t        C_bb_gem_hit_ENABLE_CM_V[100];   //[Ndata.bb.gem.hit.ENABLE_CM_V]
Int_t           C_Ndata_bb_gem_hit_Tavg;
Double_t        C_bb_gem_hit_Tavg[100];   //[Ndata.bb.gem.hit.Tavg]
Int_t           C_Ndata_bb_gem_hit_Tavg_deconv;
Double_t        C_bb_gem_hit_Tavg_deconv[100];   //[Ndata.bb.gem.hit.Tavg_deconv]
Int_t           C_Ndata_bb_gem_hit_Utime;
Double_t        C_bb_gem_hit_Utime[100];   //[Ndata.bb.gem.hit.Utime]
Int_t           C_Ndata_bb_gem_hit_UtimeDeconv;
Double_t        C_bb_gem_hit_UtimeDeconv[100];   //[Ndata.bb.gem.hit.UtimeDeconv]
Int_t           C_Ndata_bb_gem_hit_UtimeMaxStrip;
Double_t        C_bb_gem_hit_UtimeMaxStrip[100];   //[Ndata.bb.gem.hit.UtimeMaxStrip]
Int_t           C_Ndata_bb_gem_hit_UtimeMaxStripDeconv;
Double_t        C_bb_gem_hit_UtimeMaxStripDeconv[100];   //[Ndata.bb.gem.hit.UtimeMaxStripDeconv]
Int_t           C_Ndata_bb_gem_hit_UtimeMaxStripFit;
Double_t        C_bb_gem_hit_UtimeMaxStripFit[100];   //[Ndata.bb.gem.hit.UtimeMaxStripFit]
Int_t           C_Ndata_bb_gem_hit_Vtime;
Double_t        C_bb_gem_hit_Vtime[100];   //[Ndata.bb.gem.hit.Vtime]
Int_t           C_Ndata_bb_gem_hit_VtimeDeconv;
Double_t        C_bb_gem_hit_VtimeDeconv[100];   //[Ndata.bb.gem.hit.VtimeDeconv]
Int_t           C_Ndata_bb_gem_hit_VtimeMaxStrip;
Double_t        C_bb_gem_hit_VtimeMaxStrip[100];   //[Ndata.bb.gem.hit.VtimeMaxStrip]
Int_t           C_Ndata_bb_gem_hit_VtimeMaxStripDeconv;
Double_t        C_bb_gem_hit_VtimeMaxStripDeconv[100];   //[Ndata.bb.gem.hit.VtimeMaxStripDeconv]
Int_t           C_Ndata_bb_gem_hit_VtimeMaxStripFit;
Double_t        C_bb_gem_hit_VtimeMaxStripFit[100];   //[Ndata.bb.gem.hit.VtimeMaxStripFit]
Int_t           C_Ndata_bb_gem_hit_ccor_clust;
Double_t        C_bb_gem_hit_ccor_clust[100];   //[Ndata.bb.gem.hit.ccor_clust]
Int_t           C_Ndata_bb_gem_hit_ccor_clust_deconv;
Double_t        C_bb_gem_hit_ccor_clust_deconv[100];   //[Ndata.bb.gem.hit.ccor_clust_deconv]
Int_t           C_Ndata_bb_gem_hit_ccor_strip;
Double_t        C_bb_gem_hit_ccor_strip[100];   //[Ndata.bb.gem.hit.ccor_strip]
Int_t           C_Ndata_bb_gem_hit_ccor_strip_deconv;
Double_t        C_bb_gem_hit_ccor_strip_deconv[100];   //[Ndata.bb.gem.hit.ccor_strip_deconv]
Int_t           C_Ndata_bb_gem_hit_deltat;
Double_t        C_bb_gem_hit_deltat[100];   //[Ndata.bb.gem.hit.deltat]
Int_t           C_Ndata_bb_gem_hit_deltat_deconv;
Double_t        C_bb_gem_hit_deltat_deconv[100];   //[Ndata.bb.gem.hit.deltat_deconv]
Int_t           C_Ndata_bb_gem_hit_eresidu;
Double_t        C_bb_gem_hit_eresidu[100];   //[Ndata.bb.gem.hit.eresidu]
Int_t           C_Ndata_bb_gem_hit_eresidv;
Double_t        C_bb_gem_hit_eresidv[100];   //[Ndata.bb.gem.hit.eresidv]
Int_t           C_Ndata_bb_gem_hit_icombomaxUclustDeconv;
Double_t        C_bb_gem_hit_icombomaxUclustDeconv[100];   //[Ndata.bb.gem.hit.icombomaxUclustDeconv]
Int_t           C_Ndata_bb_gem_hit_icombomaxUstripDeconv;
Double_t        C_bb_gem_hit_icombomaxUstripDeconv[100];   //[Ndata.bb.gem.hit.icombomaxUstripDeconv]
Int_t           C_Ndata_bb_gem_hit_icombomaxVclustDeconv;
Double_t        C_bb_gem_hit_icombomaxVclustDeconv[100];   //[Ndata.bb.gem.hit.icombomaxVclustDeconv]
Int_t           C_Ndata_bb_gem_hit_icombomaxVstripDeconv;
Double_t        C_bb_gem_hit_icombomaxVstripDeconv[100];   //[Ndata.bb.gem.hit.icombomaxVstripDeconv]
Int_t           C_Ndata_bb_gem_hit_isampmaxUclust;
Double_t        C_bb_gem_hit_isampmaxUclust[100];   //[Ndata.bb.gem.hit.isampmaxUclust]
Int_t           C_Ndata_bb_gem_hit_isampmaxUclustDeconv;
Double_t        C_bb_gem_hit_isampmaxUclustDeconv[100];   //[Ndata.bb.gem.hit.isampmaxUclustDeconv]
Int_t           C_Ndata_bb_gem_hit_isampmaxUstrip;
Double_t        C_bb_gem_hit_isampmaxUstrip[100];   //[Ndata.bb.gem.hit.isampmaxUstrip]
Int_t           C_Ndata_bb_gem_hit_isampmaxUstripDeconv;
Double_t        C_bb_gem_hit_isampmaxUstripDeconv[100];   //[Ndata.bb.gem.hit.isampmaxUstripDeconv]
Int_t           C_Ndata_bb_gem_hit_isampmaxVclust;
Double_t        C_bb_gem_hit_isampmaxVclust[100];   //[Ndata.bb.gem.hit.isampmaxVclust]
Int_t           C_Ndata_bb_gem_hit_isampmaxVclustDeconv;
Double_t        C_bb_gem_hit_isampmaxVclustDeconv[100];   //[Ndata.bb.gem.hit.isampmaxVclustDeconv]
Int_t           C_Ndata_bb_gem_hit_isampmaxVstrip;
Double_t        C_bb_gem_hit_isampmaxVstrip[100];   //[Ndata.bb.gem.hit.isampmaxVstrip]
Int_t           C_Ndata_bb_gem_hit_isampmaxVstripDeconv;
Double_t        C_bb_gem_hit_isampmaxVstripDeconv[100];   //[Ndata.bb.gem.hit.isampmaxVstripDeconv]
Int_t           C_Ndata_bb_gem_hit_layer;
Double_t        C_bb_gem_hit_layer[100];   //[Ndata.bb.gem.hit.layer]
Int_t           C_Ndata_bb_gem_hit_module;
Double_t        C_bb_gem_hit_module[100];   //[Ndata.bb.gem.hit.module]
Int_t           C_Ndata_bb_gem_hit_nstripu;
Double_t        C_bb_gem_hit_nstripu[100];   //[Ndata.bb.gem.hit.nstripu]
Int_t           C_Ndata_bb_gem_hit_nstripv;
Double_t        C_bb_gem_hit_nstripv[100];   //[Ndata.bb.gem.hit.nstripv]
Int_t           C_Ndata_bb_gem_hit_residu;
Double_t        C_bb_gem_hit_residu[100];   //[Ndata.bb.gem.hit.residu]
Int_t           C_Ndata_bb_gem_hit_residv;
Double_t        C_bb_gem_hit_residv[100];   //[Ndata.bb.gem.hit.residv]
Int_t           C_Ndata_bb_gem_hit_trackindex;
Double_t        C_bb_gem_hit_trackindex[100];   //[Ndata.bb.gem.hit.trackindex]
Int_t           C_Ndata_bb_gem_hit_u;
Double_t        C_bb_gem_hit_u[100];   //[Ndata.bb.gem.hit.u]
Int_t           C_Ndata_bb_gem_hit_umoment;
Double_t        C_bb_gem_hit_umoment[100];   //[Ndata.bb.gem.hit.umoment]
Int_t           C_Ndata_bb_gem_hit_usigma;
Double_t        C_bb_gem_hit_usigma[100];   //[Ndata.bb.gem.hit.usigma]
Int_t           C_Ndata_bb_gem_hit_ustriphi;
Double_t        C_bb_gem_hit_ustriphi[100];   //[Ndata.bb.gem.hit.ustriphi]
Int_t           C_Ndata_bb_gem_hit_ustriplo;
Double_t        C_bb_gem_hit_ustriplo[100];   //[Ndata.bb.gem.hit.ustriplo]
Int_t           C_Ndata_bb_gem_hit_ustripmax;
Double_t        C_bb_gem_hit_ustripmax[100];   //[Ndata.bb.gem.hit.ustripmax]
Int_t           C_Ndata_bb_gem_hit_v;
Double_t        C_bb_gem_hit_v[100];   //[Ndata.bb.gem.hit.v]
Int_t           C_Ndata_bb_gem_hit_vmoment;
Double_t        C_bb_gem_hit_vmoment[100];   //[Ndata.bb.gem.hit.vmoment]
Int_t           C_Ndata_bb_gem_hit_vsigma;
Double_t        C_bb_gem_hit_vsigma[100];   //[Ndata.bb.gem.hit.vsigma]
Int_t           C_Ndata_bb_gem_hit_vstriphi;
Double_t        C_bb_gem_hit_vstriphi[100];   //[Ndata.bb.gem.hit.vstriphi]
Int_t           C_Ndata_bb_gem_hit_vstriplo;
Double_t        C_bb_gem_hit_vstriplo[100];   //[Ndata.bb.gem.hit.vstriplo]
Int_t           C_Ndata_bb_gem_hit_vstripmax;
Double_t        C_bb_gem_hit_vstripmax[100];   //[Ndata.bb.gem.hit.vstripmax]
Int_t           C_Ndata_bb_gem_hit_xglobal;
Double_t        C_bb_gem_hit_xglobal[100];   //[Ndata.bb.gem.hit.xglobal]
Int_t           C_Ndata_bb_gem_hit_xlocal;
Double_t        C_bb_gem_hit_xlocal[100];   //[Ndata.bb.gem.hit.xlocal]
Int_t           C_Ndata_bb_gem_hit_yglobal;
Double_t        C_bb_gem_hit_yglobal[100];   //[Ndata.bb.gem.hit.yglobal]
Int_t           C_Ndata_bb_gem_hit_ylocal;
Double_t        C_bb_gem_hit_ylocal[100];   //[Ndata.bb.gem.hit.ylocal]
Int_t           C_Ndata_bb_gem_hit_zglobal;
Double_t        C_bb_gem_hit_zglobal[100];   //[Ndata.bb.gem.hit.zglobal]
Int_t           C_Ndata_bb_gem_n2Dhit_layer;
Double_t        C_bb_gem_n2Dhit_layer[100];   //[Ndata.bb.gem.n2Dhit_layer]
Int_t           C_Ndata_bb_gem_nclustu_layer;
Double_t        C_bb_gem_nclustu_layer[100];   //[Ndata.bb.gem.nclustu_layer]
Int_t           C_Ndata_bb_gem_nclustv_layer;
Double_t        C_bb_gem_nclustv_layer[100];   //[Ndata.bb.gem.nclustv_layer]
Int_t           C_Ndata_bb_gem_nstripsu_layer;
Double_t        C_bb_gem_nstripsu_layer[100];   //[Ndata.bb.gem.nstripsu_layer]
Int_t           C_Ndata_bb_gem_nstripsv_layer;
Double_t        C_bb_gem_nstripsv_layer[100];   //[Ndata.bb.gem.nstripsv_layer]
Int_t           C_Ndata_bb_gem_track_chi2ndf;
Double_t        C_bb_gem_track_chi2ndf[100];   //[Ndata.bb.gem.track.chi2ndf]
Int_t           C_Ndata_bb_gem_track_nhits;
Double_t        C_bb_gem_track_nhits[100];   //[Ndata.bb.gem.track.nhits]
Int_t           C_Ndata_bb_gem_track_x;
Double_t        C_bb_gem_track_x[100];   //[Ndata.bb.gem.track.x]
Int_t           C_Ndata_bb_gem_track_xp;
Double_t        C_bb_gem_track_xp[100];   //[Ndata.bb.gem.track.xp]
Int_t           C_Ndata_bb_gem_track_y;
Double_t        C_bb_gem_track_y[100];   //[Ndata.bb.gem.track.y]
Int_t           C_Ndata_bb_gem_track_yp;
Double_t        C_bb_gem_track_yp[100];   //[Ndata.bb.gem.track.yp]
Int_t           C_Ndata_bb_grinch_tdc_hit_amp;
Double_t        C_bb_grinch_tdc_hit_amp[100];   //[Ndata.bb.grinch_tdc.hit.amp]
Int_t           C_Ndata_bb_grinch_tdc_hit_col;
Double_t        C_bb_grinch_tdc_hit_col[100];   //[Ndata.bb.grinch_tdc.hit.col]
Int_t           C_Ndata_bb_grinch_tdc_hit_pmtnum;
Double_t        C_bb_grinch_tdc_hit_pmtnum[100];   //[Ndata.bb.grinch_tdc.hit.pmtnum]
Int_t           C_Ndata_bb_grinch_tdc_hit_row;
Double_t        C_bb_grinch_tdc_hit_row[100];   //[Ndata.bb.grinch_tdc.hit.row]
Int_t           C_Ndata_bb_grinch_tdc_hit_time;
Double_t        C_bb_grinch_tdc_hit_time[100];   //[Ndata.bb.grinch_tdc.hit.time]
Int_t           C_Ndata_bb_grinch_tdc_hit_xhit;
Double_t        C_bb_grinch_tdc_hit_xhit[100];   //[Ndata.bb.grinch_tdc.hit.xhit]
Int_t           C_Ndata_bb_grinch_tdc_hit_yhit;
Double_t        C_bb_grinch_tdc_hit_yhit[100];   //[Ndata.bb.grinch_tdc.hit.yhit]
Int_t           C_Ndata_bb_hodotdc_clus_bar_tdc_id;
Double_t        C_bb_hodotdc_clus_bar_tdc_id[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.id]
Int_t           C_Ndata_bb_hodotdc_clus_bar_tdc_itrack;
Double_t        C_bb_hodotdc_clus_bar_tdc_itrack[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.itrack]
Int_t           C_Ndata_bb_hodotdc_clus_bar_tdc_meantime;
Double_t        C_bb_hodotdc_clus_bar_tdc_meantime[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.meantime]
Int_t           C_Ndata_bb_hodotdc_clus_bar_tdc_meantot;
Double_t        C_bb_hodotdc_clus_bar_tdc_meantot[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.meantot]
Int_t           C_Ndata_bb_hodotdc_clus_bar_tdc_timediff;
Double_t        C_bb_hodotdc_clus_bar_tdc_timediff[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.timediff]
Int_t           C_Ndata_bb_hodotdc_clus_bar_tdc_timehitpos;
Double_t        C_bb_hodotdc_clus_bar_tdc_timehitpos[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.timehitpos]
Int_t           C_Ndata_bb_hodotdc_clus_bar_tdc_vpos;
Double_t        C_bb_hodotdc_clus_bar_tdc_vpos[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.vpos]
Int_t           C_Ndata_bb_hodotdc_clus_id;
Double_t        C_bb_hodotdc_clus_id[100];   //[Ndata.bb.hodotdc.clus.id]
Int_t           C_Ndata_bb_hodotdc_clus_size;
Double_t        C_bb_hodotdc_clus_size[100];   //[Ndata.bb.hodotdc.clus.size]
Int_t           C_Ndata_bb_hodotdc_clus_tdiff;
Double_t        C_bb_hodotdc_clus_tdiff[100];   //[Ndata.bb.hodotdc.clus.tdiff]
Int_t           C_Ndata_bb_hodotdc_clus_tmean;
Double_t        C_bb_hodotdc_clus_tmean[100];   //[Ndata.bb.hodotdc.clus.tmean]
Int_t           C_Ndata_bb_hodotdc_clus_totmean;
Double_t        C_bb_hodotdc_clus_totmean[100];   //[Ndata.bb.hodotdc.clus.totmean]
Int_t           C_Ndata_bb_hodotdc_clus_trackindex;
Double_t        C_bb_hodotdc_clus_trackindex[100];   //[Ndata.bb.hodotdc.clus.trackindex]
Int_t           C_Ndata_bb_hodotdc_clus_xmean;
Double_t        C_bb_hodotdc_clus_xmean[100];   //[Ndata.bb.hodotdc.clus.xmean]
Int_t           C_Ndata_bb_hodotdc_clus_ymean;
Double_t        C_bb_hodotdc_clus_ymean[100];   //[Ndata.bb.hodotdc.clus.ymean]
Int_t           C_Ndata_bb_ps_clus_atime;
Double_t        C_bb_ps_clus_atime[100];   //[Ndata.bb.ps.clus.atime]
Int_t           C_Ndata_bb_ps_clus_col;
Double_t        C_bb_ps_clus_col[100];   //[Ndata.bb.ps.clus.col]
Int_t           C_Ndata_bb_ps_clus_e;
Double_t        C_bb_ps_clus_e[100];   //[Ndata.bb.ps.clus.e]
Int_t           C_Ndata_bb_ps_clus_e_c;
Double_t        C_bb_ps_clus_e_c[100];   //[Ndata.bb.ps.clus.e_c]
Int_t           C_Ndata_bb_ps_clus_eblk;
Double_t        C_bb_ps_clus_eblk[100];   //[Ndata.bb.ps.clus.eblk]
Int_t           C_Ndata_bb_ps_clus_eblk_c;
Double_t        C_bb_ps_clus_eblk_c[100];   //[Ndata.bb.ps.clus.eblk_c]
Int_t           C_Ndata_bb_ps_clus_id;
Double_t        C_bb_ps_clus_id[100];   //[Ndata.bb.ps.clus.id]
Int_t           C_Ndata_bb_ps_clus_nblk;
Double_t        C_bb_ps_clus_nblk[100];   //[Ndata.bb.ps.clus.nblk]
Int_t           C_Ndata_bb_ps_clus_row;
Double_t        C_bb_ps_clus_row[100];   //[Ndata.bb.ps.clus.row]
Int_t           C_Ndata_bb_ps_clus_tdctime;
Double_t        C_bb_ps_clus_tdctime[100];   //[Ndata.bb.ps.clus.tdctime]
Int_t           C_Ndata_bb_ps_clus_x;
Double_t        C_bb_ps_clus_x[100];   //[Ndata.bb.ps.clus.x]
Int_t           C_Ndata_bb_ps_clus_y;
Double_t        C_bb_ps_clus_y[100];   //[Ndata.bb.ps.clus.y]
Int_t           C_Ndata_bb_ps_clus_blk_atime;
Double_t        C_bb_ps_clus_blk_atime[100];   //[Ndata.bb.ps.clus_blk.atime]
Int_t           C_Ndata_bb_ps_clus_blk_col;
Double_t        C_bb_ps_clus_blk_col[100];   //[Ndata.bb.ps.clus_blk.col]
Int_t           C_Ndata_bb_ps_clus_blk_e;
Double_t        C_bb_ps_clus_blk_e[100];   //[Ndata.bb.ps.clus_blk.e]
Int_t           C_Ndata_bb_ps_clus_blk_e_c;
Double_t        C_bb_ps_clus_blk_e_c[100];   //[Ndata.bb.ps.clus_blk.e_c]
Int_t           C_Ndata_bb_ps_clus_blk_id;
Double_t        C_bb_ps_clus_blk_id[100];   //[Ndata.bb.ps.clus_blk.id]
Int_t           C_Ndata_bb_ps_clus_blk_row;
Double_t        C_bb_ps_clus_blk_row[100];   //[Ndata.bb.ps.clus_blk.row]
Int_t           C_Ndata_bb_ps_clus_blk_tdctime;
Double_t        C_bb_ps_clus_blk_tdctime[100];   //[Ndata.bb.ps.clus_blk.tdctime]
Int_t           C_Ndata_bb_ps_clus_blk_x;
Double_t        C_bb_ps_clus_blk_x[100];   //[Ndata.bb.ps.clus_blk.x]
Int_t           C_Ndata_bb_ps_clus_blk_y;
Double_t        C_bb_ps_clus_blk_y[100];   //[Ndata.bb.ps.clus_blk.y]
Int_t           C_Ndata_bb_sh_clus_atime;
Double_t        C_bb_sh_clus_atime[100];   //[Ndata.bb.sh.clus.atime]
Int_t           C_Ndata_bb_sh_clus_col;
Double_t        C_bb_sh_clus_col[100];   //[Ndata.bb.sh.clus.col]
Int_t           C_Ndata_bb_sh_clus_e;
Double_t        C_bb_sh_clus_e[100];   //[Ndata.bb.sh.clus.e]
Int_t           C_Ndata_bb_sh_clus_e_c;
Double_t        C_bb_sh_clus_e_c[100];   //[Ndata.bb.sh.clus.e_c]
Int_t           C_Ndata_bb_sh_clus_eblk;
Double_t        C_bb_sh_clus_eblk[100];   //[Ndata.bb.sh.clus.eblk]
Int_t           C_Ndata_bb_sh_clus_eblk_c;
Double_t        C_bb_sh_clus_eblk_c[100];   //[Ndata.bb.sh.clus.eblk_c]
Int_t           C_Ndata_bb_sh_clus_id;
Double_t        C_bb_sh_clus_id[100];   //[Ndata.bb.sh.clus.id]
Int_t           C_Ndata_bb_sh_clus_nblk;
Double_t        C_bb_sh_clus_nblk[100];   //[Ndata.bb.sh.clus.nblk]
Int_t           C_Ndata_bb_sh_clus_row;
Double_t        C_bb_sh_clus_row[100];   //[Ndata.bb.sh.clus.row]
Int_t           C_Ndata_bb_sh_clus_tdctime;
Double_t        C_bb_sh_clus_tdctime[100];   //[Ndata.bb.sh.clus.tdctime]
Int_t           C_Ndata_bb_sh_clus_x;
Double_t        C_bb_sh_clus_x[100];   //[Ndata.bb.sh.clus.x]
Int_t           C_Ndata_bb_sh_clus_y;
Double_t        C_bb_sh_clus_y[100];   //[Ndata.bb.sh.clus.y]
Int_t           C_Ndata_bb_sh_clus_blk_atime;
Double_t        C_bb_sh_clus_blk_atime[100];   //[Ndata.bb.sh.clus_blk.atime]
Int_t           C_Ndata_bb_sh_clus_blk_col;
Double_t        C_bb_sh_clus_blk_col[100];   //[Ndata.bb.sh.clus_blk.col]
Int_t           C_Ndata_bb_sh_clus_blk_e;
Double_t        C_bb_sh_clus_blk_e[100];   //[Ndata.bb.sh.clus_blk.e]
Int_t           C_Ndata_bb_sh_clus_blk_e_c;
Double_t        C_bb_sh_clus_blk_e_c[100];   //[Ndata.bb.sh.clus_blk.e_c]
Int_t           C_Ndata_bb_sh_clus_blk_id;
Double_t        C_bb_sh_clus_blk_id[100];   //[Ndata.bb.sh.clus_blk.id]
Int_t           C_Ndata_bb_sh_clus_blk_row;
Double_t        C_bb_sh_clus_blk_row[100];   //[Ndata.bb.sh.clus_blk.row]
Int_t           C_Ndata_bb_sh_clus_blk_tdctime;
Double_t        C_bb_sh_clus_blk_tdctime[100];   //[Ndata.bb.sh.clus_blk.tdctime]
Int_t           C_Ndata_bb_sh_clus_blk_x;
Double_t        C_bb_sh_clus_blk_x[100];   //[Ndata.bb.sh.clus_blk.x]
Int_t           C_Ndata_bb_sh_clus_blk_y;
Double_t        C_bb_sh_clus_blk_y[100];   //[Ndata.bb.sh.clus_blk.y]
Int_t           C_Ndata_bb_tdctrig_tdc;
Double_t        C_bb_tdctrig_tdc[100];   //[Ndata.bb.tdctrig.tdc]
Int_t           C_Ndata_bb_tdctrig_tdcelemID;
Double_t        C_bb_tdctrig_tdcelemID[100];   //[Ndata.bb.tdctrig.tdcelemID]
Int_t           C_Ndata_bb_tr_beta;
Double_t        C_bb_tr_beta[100];   //[Ndata.bb.tr.beta]
Int_t           C_Ndata_bb_tr_chi2;
Double_t        C_bb_tr_chi2[100];   //[Ndata.bb.tr.chi2]
Int_t           C_Ndata_bb_tr_d_ph;
Double_t        C_bb_tr_d_ph[100];   //[Ndata.bb.tr.d_ph]
Int_t           C_Ndata_bb_tr_d_th;
Double_t        C_bb_tr_d_th[100];   //[Ndata.bb.tr.d_th]
Int_t           C_Ndata_bb_tr_d_x;
Double_t        C_bb_tr_d_x[100];   //[Ndata.bb.tr.d_x]
Int_t           C_Ndata_bb_tr_d_y;
Double_t        C_bb_tr_d_y[100];   //[Ndata.bb.tr.d_y]
Int_t           C_Ndata_bb_tr_dbeta;
Double_t        C_bb_tr_dbeta[100];   //[Ndata.bb.tr.dbeta]
Int_t           C_Ndata_bb_tr_dtime;
Double_t        C_bb_tr_dtime[100];   //[Ndata.bb.tr.dtime]
Int_t           C_Ndata_bb_tr_flag;
Double_t        C_bb_tr_flag[100];   //[Ndata.bb.tr.flag]
Int_t           C_Ndata_bb_tr_ndof;
Double_t        C_bb_tr_ndof[100];   //[Ndata.bb.tr.ndof]
Int_t           C_Ndata_bb_tr_p;
Double_t        C_bb_tr_p[100];   //[Ndata.bb.tr.p]
Int_t           C_Ndata_bb_tr_pathl;
Double_t        C_bb_tr_pathl[100];   //[Ndata.bb.tr.pathl]
Int_t           C_Ndata_bb_tr_ph;
Double_t        C_bb_tr_ph[100];   //[Ndata.bb.tr.ph]
Int_t           C_Ndata_bb_tr_px;
Double_t        C_bb_tr_px[100];   //[Ndata.bb.tr.px]
Int_t           C_Ndata_bb_tr_py;
Double_t        C_bb_tr_py[100];   //[Ndata.bb.tr.py]
Int_t           C_Ndata_bb_tr_pz;
Double_t        C_bb_tr_pz[100];   //[Ndata.bb.tr.pz]
Int_t           C_Ndata_bb_tr_r_ph;
Double_t        C_bb_tr_r_ph[100];   //[Ndata.bb.tr.r_ph]
Int_t           C_Ndata_bb_tr_r_th;
Double_t        C_bb_tr_r_th[100];   //[Ndata.bb.tr.r_th]
Int_t           C_Ndata_bb_tr_r_x;
Double_t        C_bb_tr_r_x[100];   //[Ndata.bb.tr.r_x]
Int_t           C_Ndata_bb_tr_r_y;
Double_t        C_bb_tr_r_y[100];   //[Ndata.bb.tr.r_y]
Int_t           C_Ndata_bb_tr_tg_dp;
Double_t        C_bb_tr_tg_dp[100];   //[Ndata.bb.tr.tg_dp]
Int_t           C_Ndata_bb_tr_tg_ph;
Double_t        C_bb_tr_tg_ph[100];   //[Ndata.bb.tr.tg_ph]
Int_t           C_Ndata_bb_tr_tg_th;
Double_t        C_bb_tr_tg_th[100];   //[Ndata.bb.tr.tg_th]
Int_t           C_Ndata_bb_tr_tg_x;
Double_t        C_bb_tr_tg_x[100];   //[Ndata.bb.tr.tg_x]
Int_t           C_Ndata_bb_tr_tg_y;
Double_t        C_bb_tr_tg_y[100];   //[Ndata.bb.tr.tg_y]
Int_t           C_Ndata_bb_tr_th;
Double_t        C_bb_tr_th[100];   //[Ndata.bb.tr.th]
Int_t           C_Ndata_bb_tr_time;
Double_t        C_bb_tr_time[100];   //[Ndata.bb.tr.time]
Int_t           C_Ndata_bb_tr_vx;
Double_t        C_bb_tr_vx[100];   //[Ndata.bb.tr.vx]
Int_t           C_Ndata_bb_tr_vy;
Double_t        C_bb_tr_vy[100];   //[Ndata.bb.tr.vy]
Int_t           C_Ndata_bb_tr_vz;
Double_t        C_bb_tr_vz[100];   //[Ndata.bb.tr.vz]
Int_t           C_Ndata_bb_tr_x;
Double_t        C_bb_tr_x[100];   //[Ndata.bb.tr.x]
Int_t           C_Ndata_bb_tr_y;
Double_t        C_bb_tr_y[100];   //[Ndata.bb.tr.y]
Int_t           C_Ndata_bb_x_bcp;
Double_t        C_bb_x_bcp[100];   //[Ndata.bb.x_bcp]
Int_t           C_Ndata_bb_x_fcp;
Double_t        C_bb_x_fcp[100];   //[Ndata.bb.x_fcp]
Int_t           C_Ndata_bb_y_bcp;
Double_t        C_bb_y_bcp[100];   //[Ndata.bb.y_bcp]
Int_t           C_Ndata_bb_y_fcp;
Double_t        C_bb_y_fcp[100];   //[Ndata.bb.y_fcp]
Int_t           C_Ndata_bb_z_bcp;
Double_t        C_bb_z_bcp[100];   //[Ndata.bb.z_bcp]
Int_t           C_Ndata_bb_z_fcp;
Double_t        C_bb_z_fcp[100];   //[Ndata.bb.z_fcp]
Int_t           C_Ndata_sbs_hcal_clus_atime;
Double_t        C_sbs_hcal_clus_atime[100];   //[Ndata.sbs.hcal.clus.atime]
Int_t           C_Ndata_sbs_hcal_clus_col;
Double_t        C_sbs_hcal_clus_col[100];   //[Ndata.sbs.hcal.clus.col]
Int_t           C_Ndata_sbs_hcal_clus_e;
Double_t        C_sbs_hcal_clus_e[100];   //[Ndata.sbs.hcal.clus.e]
Int_t           C_Ndata_sbs_hcal_clus_e_c;
Double_t        C_sbs_hcal_clus_e_c[100];   //[Ndata.sbs.hcal.clus.e_c]
Int_t           C_Ndata_sbs_hcal_clus_eblk;
Double_t        C_sbs_hcal_clus_eblk[100];   //[Ndata.sbs.hcal.clus.eblk]
Int_t           C_Ndata_sbs_hcal_clus_eblk_c;
Double_t        C_sbs_hcal_clus_eblk_c[100];   //[Ndata.sbs.hcal.clus.eblk_c]
Int_t           C_Ndata_sbs_hcal_clus_id;
Double_t        C_sbs_hcal_clus_id[100];   //[Ndata.sbs.hcal.clus.id]
Int_t           C_Ndata_sbs_hcal_clus_nblk;
Double_t        C_sbs_hcal_clus_nblk[100];   //[Ndata.sbs.hcal.clus.nblk]
Int_t           C_Ndata_sbs_hcal_clus_row;
Double_t        C_sbs_hcal_clus_row[100];   //[Ndata.sbs.hcal.clus.row]
Int_t           C_Ndata_sbs_hcal_clus_tdctime;
Double_t        C_sbs_hcal_clus_tdctime[100];   //[Ndata.sbs.hcal.clus.tdctime]
Int_t           C_Ndata_sbs_hcal_clus_x;
Double_t        C_sbs_hcal_clus_x[100];   //[Ndata.sbs.hcal.clus.x]
Int_t           C_Ndata_sbs_hcal_clus_y;
Double_t        C_sbs_hcal_clus_y[100];   //[Ndata.sbs.hcal.clus.y]
Int_t           C_Ndata_sbs_hcal_clus_blk_atime;
Double_t        C_sbs_hcal_clus_blk_atime[100];   //[Ndata.sbs.hcal.clus_blk.atime]
Int_t           C_Ndata_sbs_hcal_clus_blk_col;
Double_t        C_sbs_hcal_clus_blk_col[100];   //[Ndata.sbs.hcal.clus_blk.col]
Int_t           C_Ndata_sbs_hcal_clus_blk_e;
Double_t        C_sbs_hcal_clus_blk_e[100];   //[Ndata.sbs.hcal.clus_blk.e]
Int_t           C_Ndata_sbs_hcal_clus_blk_e_c;
Double_t        C_sbs_hcal_clus_blk_e_c[100];   //[Ndata.sbs.hcal.clus_blk.e_c]
Int_t           C_Ndata_sbs_hcal_clus_blk_id;
Double_t        C_sbs_hcal_clus_blk_id[100];   //[Ndata.sbs.hcal.clus_blk.id]
Int_t           C_Ndata_sbs_hcal_clus_blk_row;
Double_t        C_sbs_hcal_clus_blk_row[100];   //[Ndata.sbs.hcal.clus_blk.row]
Int_t           C_Ndata_sbs_hcal_clus_blk_tdctime;
Double_t        C_sbs_hcal_clus_blk_tdctime[100];   //[Ndata.sbs.hcal.clus_blk.tdctime]
Int_t           C_Ndata_sbs_hcal_clus_blk_x;
Double_t        C_sbs_hcal_clus_blk_x[100];   //[Ndata.sbs.hcal.clus_blk.x]
Int_t           C_Ndata_sbs_hcal_clus_blk_y;
Double_t        C_sbs_hcal_clus_blk_y[100];   //[Ndata.sbs.hcal.clus_blk.y]
Double_t        C_BB_gold_beta;
Double_t        C_BB_gold_dp;
Double_t        C_BB_gold_index;
Double_t        C_BB_gold_ok;
Double_t        C_BB_gold_p;
Double_t        C_BB_gold_ph;
Double_t        C_BB_gold_px;
Double_t        C_BB_gold_py;
Double_t        C_BB_gold_pz;
Double_t        C_BB_gold_th;
Double_t        C_BB_gold_x;
Double_t        C_BB_gold_y;
Double_t        C_Lrb_BPMA_rawcur_1;
Double_t        C_Lrb_BPMA_rawcur_2;
Double_t        C_Lrb_BPMA_rawcur_3;
Double_t        C_Lrb_BPMA_rawcur_4;
Double_t        C_Lrb_BPMA_rotpos1;
Double_t        C_Lrb_BPMA_rotpos2;
Double_t        C_Lrb_BPMA_x;
Double_t        C_Lrb_BPMA_y;
Double_t        C_Lrb_BPMA_z;
Double_t        C_Lrb_BPMB_rawcur_1;
Double_t        C_Lrb_BPMB_rawcur_2;
Double_t        C_Lrb_BPMB_rawcur_3;
Double_t        C_Lrb_BPMB_rawcur_4;
Double_t        C_Lrb_BPMB_rotpos1;
Double_t        C_Lrb_BPMB_rotpos2;
Double_t        C_Lrb_BPMB_x;
Double_t        C_Lrb_BPMB_y;
Double_t        C_Lrb_BPMB_z;
Double_t        C_Lrb_Raster_bpma_x;
Double_t        C_Lrb_Raster_bpma_y;
Double_t        C_Lrb_Raster_bpma_z;
Double_t        C_Lrb_Raster_bpmb_x;
Double_t        C_Lrb_Raster_bpmb_y;
Double_t        C_Lrb_Raster_bpmb_z;
Double_t        C_Lrb_Raster_rawcur_x;
Double_t        C_Lrb_Raster_rawcur_y;
Double_t        C_Lrb_Raster_rawslope_x;
Double_t        C_Lrb_Raster_rawslope_y;
Double_t        C_Lrb_Raster_target_dir_x;
Double_t        C_Lrb_Raster_target_dir_y;
Double_t        C_Lrb_Raster_target_dir_z;
Double_t        C_Lrb_Raster_target_x;
Double_t        C_Lrb_Raster_target_y;
Double_t        C_Lrb_Raster_target_z;
Double_t        C_Lrb_Raster2_bpma_x;
Double_t        C_Lrb_Raster2_bpma_y;
Double_t        C_Lrb_Raster2_bpma_z;
Double_t        C_Lrb_Raster2_bpmb_x;
Double_t        C_Lrb_Raster2_bpmb_y;
Double_t        C_Lrb_Raster2_bpmb_z;
Double_t        C_Lrb_Raster2_rawcur_x;
Double_t        C_Lrb_Raster2_rawcur_y;
Double_t        C_Lrb_Raster2_rawslope_x;
Double_t        C_Lrb_Raster2_rawslope_y;
Double_t        C_Lrb_Raster2_target_dir_x;
Double_t        C_Lrb_Raster2_target_dir_y;
Double_t        C_Lrb_Raster2_target_dir_z;
Double_t        C_Lrb_Raster2_target_x;
Double_t        C_Lrb_Raster2_target_y;
Double_t        C_Lrb_Raster2_target_z;
Double_t        C_Lrb_dir_x;
Double_t        C_Lrb_dir_y;
Double_t        C_Lrb_dir_z;
Double_t        C_Lrb_e;
Double_t        C_Lrb_ok;
Double_t        C_Lrb_p;
Double_t        C_Lrb_ph;
Double_t        C_Lrb_pol;
Double_t        C_Lrb_px;
Double_t        C_Lrb_py;
Double_t        C_Lrb_pz;
Double_t        C_Lrb_th;
Double_t        C_Lrb_x;
Double_t        C_Lrb_xpos;
Double_t        C_Lrb_y;
Double_t        C_Lrb_ypos;
Double_t        C_Lrb_z;
Double_t        C_Lrb_zpos;
Double_t        C_SBSrb_BPMA_rawcur_1;
Double_t        C_SBSrb_BPMA_rawcur_2;
Double_t        C_SBSrb_BPMA_rawcur_3;
Double_t        C_SBSrb_BPMA_rawcur_4;
Double_t        C_SBSrb_BPMA_rotpos1;
Double_t        C_SBSrb_BPMA_rotpos2;
Double_t        C_SBSrb_BPMA_x;
Double_t        C_SBSrb_BPMA_y;
Double_t        C_SBSrb_BPMA_z;
Double_t        C_SBSrb_BPMB_rawcur_1;
Double_t        C_SBSrb_BPMB_rawcur_2;
Double_t        C_SBSrb_BPMB_rawcur_3;
Double_t        C_SBSrb_BPMB_rawcur_4;
Double_t        C_SBSrb_BPMB_rotpos1;
Double_t        C_SBSrb_BPMB_rotpos2;
Double_t        C_SBSrb_BPMB_x;
Double_t        C_SBSrb_BPMB_y;
Double_t        C_SBSrb_BPMB_z;
Double_t        C_SBSrb_Raster_bpma_x;
Double_t        C_SBSrb_Raster_bpma_y;
Double_t        C_SBSrb_Raster_bpma_z;
Double_t        C_SBSrb_Raster_bpmb_x;
Double_t        C_SBSrb_Raster_bpmb_y;
Double_t        C_SBSrb_Raster_bpmb_z;
Double_t        C_SBSrb_Raster_rawcur_x;
Double_t        C_SBSrb_Raster_rawcur_y;
Double_t        C_SBSrb_Raster_rawslope_x;
Double_t        C_SBSrb_Raster_rawslope_y;
Double_t        C_SBSrb_Raster_target_dir_x;
Double_t        C_SBSrb_Raster_target_dir_y;
Double_t        C_SBSrb_Raster_target_dir_z;
Double_t        C_SBSrb_Raster_target_x;
Double_t        C_SBSrb_Raster_target_y;
Double_t        C_SBSrb_Raster_target_z;
Double_t        C_SBSrb_Raster2_bpma_x;
Double_t        C_SBSrb_Raster2_bpma_y;
Double_t        C_SBSrb_Raster2_bpma_z;
Double_t        C_SBSrb_Raster2_bpmb_x;
Double_t        C_SBSrb_Raster2_bpmb_y;
Double_t        C_SBSrb_Raster2_bpmb_z;
Double_t        C_SBSrb_Raster2_rawcur_x;
Double_t        C_SBSrb_Raster2_rawcur_y;
Double_t        C_SBSrb_Raster2_rawslope_x;
Double_t        C_SBSrb_Raster2_rawslope_y;
Double_t        C_SBSrb_Raster2_target_dir_x;
Double_t        C_SBSrb_Raster2_target_dir_y;
Double_t        C_SBSrb_Raster2_target_dir_z;
Double_t        C_SBSrb_Raster2_target_x;
Double_t        C_SBSrb_Raster2_target_y;
Double_t        C_SBSrb_Raster2_target_z;
Double_t        C_SBSrb_dir_x;
Double_t        C_SBSrb_dir_y;
Double_t        C_SBSrb_dir_z;
Double_t        C_SBSrb_e;
Double_t        C_SBSrb_ok;
Double_t        C_SBSrb_p;
Double_t        C_SBSrb_ph;
Double_t        C_SBSrb_pol;
Double_t        C_SBSrb_px;
Double_t        C_SBSrb_py;
Double_t        C_SBSrb_pz;
Double_t        C_SBSrb_th;
Double_t        C_SBSrb_x;
Double_t        C_SBSrb_xpos;
Double_t        C_SBSrb_y;
Double_t        C_SBSrb_ypos;
Double_t        C_SBSrb_z;
Double_t        C_SBSrb_zpos;
Double_t        C_bb_gem_hit_ngoodhits;
Double_t        C_bb_gem_m0_clust_nclustu;
Double_t        C_bb_gem_m0_clust_nclustu_tot;
Double_t        C_bb_gem_m0_clust_nclustv;
Double_t        C_bb_gem_m0_clust_nclustv_tot;
Double_t        C_bb_gem_m0_strip_nstrips_keep;
Double_t        C_bb_gem_m0_strip_nstrips_keepU;
Double_t        C_bb_gem_m0_strip_nstrips_keepV;
Double_t        C_bb_gem_m0_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m0_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m0_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m0_strip_nstripsfired;
Double_t        C_bb_gem_m1_clust_nclustu;
Double_t        C_bb_gem_m1_clust_nclustu_tot;
Double_t        C_bb_gem_m1_clust_nclustv;
Double_t        C_bb_gem_m1_clust_nclustv_tot;
Double_t        C_bb_gem_m1_strip_nstrips_keep;
Double_t        C_bb_gem_m1_strip_nstrips_keepU;
Double_t        C_bb_gem_m1_strip_nstrips_keepV;
Double_t        C_bb_gem_m1_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m1_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m1_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m1_strip_nstripsfired;
Double_t        C_bb_gem_m10_clust_nclustu;
Double_t        C_bb_gem_m10_clust_nclustu_tot;
Double_t        C_bb_gem_m10_clust_nclustv;
Double_t        C_bb_gem_m10_clust_nclustv_tot;
Double_t        C_bb_gem_m10_strip_nstrips_keep;
Double_t        C_bb_gem_m10_strip_nstrips_keepU;
Double_t        C_bb_gem_m10_strip_nstrips_keepV;
Double_t        C_bb_gem_m10_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m10_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m10_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m10_strip_nstripsfired;
Double_t        C_bb_gem_m11_clust_nclustu;
Double_t        C_bb_gem_m11_clust_nclustu_tot;
Double_t        C_bb_gem_m11_clust_nclustv;
Double_t        C_bb_gem_m11_clust_nclustv_tot;
Double_t        C_bb_gem_m11_strip_nstrips_keep;
Double_t        C_bb_gem_m11_strip_nstrips_keepU;
Double_t        C_bb_gem_m11_strip_nstrips_keepV;
Double_t        C_bb_gem_m11_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m11_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m11_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m11_strip_nstripsfired;
Double_t        C_bb_gem_m2_clust_nclustu;
Double_t        C_bb_gem_m2_clust_nclustu_tot;
Double_t        C_bb_gem_m2_clust_nclustv;
Double_t        C_bb_gem_m2_clust_nclustv_tot;
Double_t        C_bb_gem_m2_strip_nstrips_keep;
Double_t        C_bb_gem_m2_strip_nstrips_keepU;
Double_t        C_bb_gem_m2_strip_nstrips_keepV;
Double_t        C_bb_gem_m2_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m2_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m2_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m2_strip_nstripsfired;
Double_t        C_bb_gem_m3_clust_nclustu;
Double_t        C_bb_gem_m3_clust_nclustu_tot;
Double_t        C_bb_gem_m3_clust_nclustv;
Double_t        C_bb_gem_m3_clust_nclustv_tot;
Double_t        C_bb_gem_m3_strip_nstrips_keep;
Double_t        C_bb_gem_m3_strip_nstrips_keepU;
Double_t        C_bb_gem_m3_strip_nstrips_keepV;
Double_t        C_bb_gem_m3_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m3_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m3_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m3_strip_nstripsfired;
Double_t        C_bb_gem_m4_clust_nclustu;
Double_t        C_bb_gem_m4_clust_nclustu_tot;
Double_t        C_bb_gem_m4_clust_nclustv;
Double_t        C_bb_gem_m4_clust_nclustv_tot;
Double_t        C_bb_gem_m4_strip_nstrips_keep;
Double_t        C_bb_gem_m4_strip_nstrips_keepU;
Double_t        C_bb_gem_m4_strip_nstrips_keepV;
Double_t        C_bb_gem_m4_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m4_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m4_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m4_strip_nstripsfired;
Double_t        C_bb_gem_m5_clust_nclustu;
Double_t        C_bb_gem_m5_clust_nclustu_tot;
Double_t        C_bb_gem_m5_clust_nclustv;
Double_t        C_bb_gem_m5_clust_nclustv_tot;
Double_t        C_bb_gem_m5_strip_nstrips_keep;
Double_t        C_bb_gem_m5_strip_nstrips_keepU;
Double_t        C_bb_gem_m5_strip_nstrips_keepV;
Double_t        C_bb_gem_m5_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m5_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m5_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m5_strip_nstripsfired;
Double_t        C_bb_gem_m6_clust_nclustu;
Double_t        C_bb_gem_m6_clust_nclustu_tot;
Double_t        C_bb_gem_m6_clust_nclustv;
Double_t        C_bb_gem_m6_clust_nclustv_tot;
Double_t        C_bb_gem_m6_strip_nstrips_keep;
Double_t        C_bb_gem_m6_strip_nstrips_keepU;
Double_t        C_bb_gem_m6_strip_nstrips_keepV;
Double_t        C_bb_gem_m6_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m6_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m6_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m6_strip_nstripsfired;
Double_t        C_bb_gem_m7_clust_nclustu;
Double_t        C_bb_gem_m7_clust_nclustu_tot;
Double_t        C_bb_gem_m7_clust_nclustv;
Double_t        C_bb_gem_m7_clust_nclustv_tot;
Double_t        C_bb_gem_m7_strip_nstrips_keep;
Double_t        C_bb_gem_m7_strip_nstrips_keepU;
Double_t        C_bb_gem_m7_strip_nstrips_keepV;
Double_t        C_bb_gem_m7_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m7_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m7_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m7_strip_nstripsfired;
Double_t        C_bb_gem_m8_clust_nclustu;
Double_t        C_bb_gem_m8_clust_nclustu_tot;
Double_t        C_bb_gem_m8_clust_nclustv;
Double_t        C_bb_gem_m8_clust_nclustv_tot;
Double_t        C_bb_gem_m8_strip_nstrips_keep;
Double_t        C_bb_gem_m8_strip_nstrips_keepU;
Double_t        C_bb_gem_m8_strip_nstrips_keepV;
Double_t        C_bb_gem_m8_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m8_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m8_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m8_strip_nstripsfired;
Double_t        C_bb_gem_m9_clust_nclustu;
Double_t        C_bb_gem_m9_clust_nclustu_tot;
Double_t        C_bb_gem_m9_clust_nclustv;
Double_t        C_bb_gem_m9_clust_nclustv_tot;
Double_t        C_bb_gem_m9_strip_nstrips_keep;
Double_t        C_bb_gem_m9_strip_nstrips_keepU;
Double_t        C_bb_gem_m9_strip_nstrips_keepV;
Double_t        C_bb_gem_m9_strip_nstrips_keep_lmax;
Double_t        C_bb_gem_m9_strip_nstrips_keep_lmaxU;
Double_t        C_bb_gem_m9_strip_nstrips_keep_lmaxV;
Double_t        C_bb_gem_m9_strip_nstripsfired;
Double_t        C_bb_gem_nlayershit;
Double_t        C_bb_gem_nlayershitu;
Double_t        C_bb_gem_nlayershituv;
Double_t        C_bb_gem_nlayershitv;
Double_t        C_bb_gem_track_besttrack;
Double_t        C_bb_gem_track_ntrack;
Double_t        C_bb_grinch_tdc_ngoodhits;
Double_t        C_bb_hodotdc_nclus;
Double_t        C_bb_ps_atimeblk;
Double_t        C_bb_ps_colblk;
Double_t        C_bb_ps_e;
Double_t        C_bb_ps_e_c;
Double_t        C_bb_ps_eblk;
Double_t        C_bb_ps_eblk_c;
Double_t        C_bb_ps_idblk;
Double_t        C_bb_ps_index;
Double_t        C_bb_ps_nblk;
Double_t        C_bb_ps_nclus;
Double_t        C_bb_ps_ngoodADChits;
Double_t        C_bb_ps_rowblk;
Double_t        C_bb_ps_x;
Double_t        C_bb_ps_y;
Double_t        C_bb_sh_atimeblk;
Double_t        C_bb_sh_colblk;
Double_t        C_bb_sh_e;
Double_t        C_bb_sh_e_c;
Double_t        C_bb_sh_eblk;
Double_t        C_bb_sh_eblk_c;
Double_t        C_bb_sh_idblk;
Double_t        C_bb_sh_index;
Double_t        C_bb_sh_nblk;
Double_t        C_bb_sh_nclus;
Double_t        C_bb_sh_ngoodADChits;
Double_t        C_bb_sh_rowblk;
Double_t        C_bb_sh_x;
Double_t        C_bb_sh_y;
Double_t        C_bb_tr_n;
Double_t        C_bb_ts_over_threshold;
Double_t        C_e_kine_Q2;
Double_t        C_e_kine_W2;
Double_t        C_e_kine_angle;
Double_t        C_e_kine_epsilon;
Double_t        C_e_kine_nu;
Double_t        C_e_kine_omega;
Double_t        C_e_kine_ph_q;
Double_t        C_e_kine_q3m;
Double_t        C_e_kine_q_x;
Double_t        C_e_kine_q_y;
Double_t        C_e_kine_q_z;
Double_t        C_e_kine_th_q;
Double_t        C_e_kine_x_bj;
Double_t        C_sbs_hcal_atimeblk;
Double_t        C_sbs_hcal_colblk;
Double_t        C_sbs_hcal_e;
Double_t        C_sbs_hcal_e_c;
Double_t        C_sbs_hcal_eblk;
Double_t        C_sbs_hcal_eblk_c;
Double_t        C_sbs_hcal_idblk;
Double_t        C_sbs_hcal_index;
Double_t        C_sbs_hcal_nblk;
Double_t        C_sbs_hcal_nclus;
Double_t        C_sbs_hcal_ngoodADChits;
Double_t        C_sbs_hcal_rowblk;
Double_t        C_sbs_hcal_tdctimeblk;
Double_t        C_sbs_hcal_x;
Double_t        C_sbs_hcal_y;
Double_t        C_singletrack;
Double_t        C_anytrack;
Double_t        C_halla_p;
Double_t        C_hac_bcm_average;
Double_t        C_IPM1H04A_XPOS;
Double_t        C_IPM1H04A_YPOS;
Double_t        C_IPM1H04E_XPOS;
Double_t        C_IPM1H04E_YPOS;
Double_t        C_IBC1H04CRCUR2;
Double_t        C_hac_bcm_dvm1_read;
Double_t        C_hac_bcm_dvm2_read;
Double_t        C_hac_bcm_dvm1_current;
Double_t        C_hac_bcm_dvm2_current;
Double_t        C_hac_bcm_A1;
Double_t        C_hac_bcm_A2;
Double_t        C_HALLA_p;
//THaEvent        *Event_Branch;
ULong64_t       C_fEvtHdr_fEvtTime;
UInt_t          C_fEvtHdr_fEvtNum;
UInt_t          C_fEvtHdr_fEvtType;
UInt_t          C_fEvtHdr_fEvtLen;
Int_t           C_fEvtHdr_fHelicity;
UInt_t          C_fEvtHdr_fTrigBits;
UInt_t          C_fEvtHdr_fRun;


// Declaration of leaf types for tree (from MakeClass())
Double_t        targx;
Double_t        targy;
Int_t           Ndata_bb_eps_over_etot;
Double_t        bb_eps_over_etot[100];   //[Ndata.bb.eps_over_etot]
Int_t           Ndata_bb_etot_over_p;
Double_t        bb_etot_over_p[100];   //[Ndata.bb.etot_over_p]
Int_t           Ndata_bb_gem_hit_ADCU;
Double_t        bb_gem_hit_ADCU[100];   //[Ndata.bb.gem.hit.ADCU]
Int_t           Ndata_bb_gem_hit_ADCU_deconv;
Double_t        bb_gem_hit_ADCU_deconv[100];   //[Ndata.bb.gem.hit.ADCU_deconv]
Int_t           Ndata_bb_gem_hit_ADCV;
Double_t        bb_gem_hit_ADCV[100];   //[Ndata.bb.gem.hit.ADCV]
Int_t           Ndata_bb_gem_hit_ADCV_deconv;
Double_t        bb_gem_hit_ADCV_deconv[100];   //[Ndata.bb.gem.hit.ADCV_deconv]
Int_t           Ndata_bb_gem_hit_ADCasym;
Double_t        bb_gem_hit_ADCasym[100];   //[Ndata.bb.gem.hit.ADCasym]
Int_t           Ndata_bb_gem_hit_ADCasym_deconv;
Double_t        bb_gem_hit_ADCasym_deconv[100];   //[Ndata.bb.gem.hit.ADCasym_deconv]
Int_t           Ndata_bb_gem_hit_ADCavg;
Double_t        bb_gem_hit_ADCavg[100];   //[Ndata.bb.gem.hit.ADCavg]
Int_t           Ndata_bb_gem_hit_ADCavg_deconv;
Double_t        bb_gem_hit_ADCavg_deconv[100];   //[Ndata.bb.gem.hit.ADCavg_deconv]
Int_t           Ndata_bb_gem_hit_ADCfrac0_Umax;
Double_t        bb_gem_hit_ADCfrac0_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac0_Umax]
Int_t           Ndata_bb_gem_hit_ADCfrac0_Vmax;
Double_t        bb_gem_hit_ADCfrac0_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac0_Vmax]
Int_t           Ndata_bb_gem_hit_ADCfrac1_Umax;
Double_t        bb_gem_hit_ADCfrac1_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac1_Umax]
Int_t           Ndata_bb_gem_hit_ADCfrac1_Vmax;
Double_t        bb_gem_hit_ADCfrac1_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac1_Vmax]
Int_t           Ndata_bb_gem_hit_ADCfrac2_Umax;
Double_t        bb_gem_hit_ADCfrac2_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac2_Umax]
Int_t           Ndata_bb_gem_hit_ADCfrac2_Vmax;
Double_t        bb_gem_hit_ADCfrac2_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac2_Vmax]
Int_t           Ndata_bb_gem_hit_ADCfrac3_Umax;
Double_t        bb_gem_hit_ADCfrac3_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac3_Umax]
Int_t           Ndata_bb_gem_hit_ADCfrac3_Vmax;
Double_t        bb_gem_hit_ADCfrac3_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac3_Vmax]
Int_t           Ndata_bb_gem_hit_ADCfrac4_Umax;
Double_t        bb_gem_hit_ADCfrac4_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac4_Umax]
Int_t           Ndata_bb_gem_hit_ADCfrac4_Vmax;
Double_t        bb_gem_hit_ADCfrac4_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac4_Vmax]
Int_t           Ndata_bb_gem_hit_ADCfrac5_Umax;
Double_t        bb_gem_hit_ADCfrac5_Umax[100];   //[Ndata.bb.gem.hit.ADCfrac5_Umax]
Int_t           Ndata_bb_gem_hit_ADCfrac5_Vmax;
Double_t        bb_gem_hit_ADCfrac5_Vmax[100];   //[Ndata.bb.gem.hit.ADCfrac5_Vmax]
Int_t           Ndata_bb_gem_hit_ADCmaxcomboUclust_deconv;
Double_t        bb_gem_hit_ADCmaxcomboUclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxcomboUclust_deconv]
Int_t           Ndata_bb_gem_hit_ADCmaxcomboVclust_deconv;
Double_t        bb_gem_hit_ADCmaxcomboVclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxcomboVclust_deconv]
Int_t           Ndata_bb_gem_hit_ADCmaxsampU;
Double_t        bb_gem_hit_ADCmaxsampU[100];   //[Ndata.bb.gem.hit.ADCmaxsampU]
Int_t           Ndata_bb_gem_hit_ADCmaxsampUclust;
Double_t        bb_gem_hit_ADCmaxsampUclust[100];   //[Ndata.bb.gem.hit.ADCmaxsampUclust]
Int_t           Ndata_bb_gem_hit_ADCmaxsampUclust_deconv;
Double_t        bb_gem_hit_ADCmaxsampUclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxsampUclust_deconv]
Int_t           Ndata_bb_gem_hit_ADCmaxsampV;
Double_t        bb_gem_hit_ADCmaxsampV[100];   //[Ndata.bb.gem.hit.ADCmaxsampV]
Int_t           Ndata_bb_gem_hit_ADCmaxsampVclust;
Double_t        bb_gem_hit_ADCmaxsampVclust[100];   //[Ndata.bb.gem.hit.ADCmaxsampVclust]
Int_t           Ndata_bb_gem_hit_ADCmaxsampVclust_deconv;
Double_t        bb_gem_hit_ADCmaxsampVclust_deconv[100];   //[Ndata.bb.gem.hit.ADCmaxsampVclust_deconv]
Int_t           Ndata_bb_gem_hit_ADCmaxstripU;
Double_t        bb_gem_hit_ADCmaxstripU[100];   //[Ndata.bb.gem.hit.ADCmaxstripU]
Int_t           Ndata_bb_gem_hit_ADCmaxstripV;
Double_t        bb_gem_hit_ADCmaxstripV[100];   //[Ndata.bb.gem.hit.ADCmaxstripV]
Int_t           Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_U;
Double_t        bb_gem_hit_BUILD_ALL_SAMPLES_U[100];   //[Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_U]
Int_t           Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_V;
Double_t        bb_gem_hit_BUILD_ALL_SAMPLES_V[100];   //[Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_V]
Int_t           Ndata_bb_gem_hit_CM_GOOD_U;
Double_t        bb_gem_hit_CM_GOOD_U[100];   //[Ndata.bb.gem.hit.CM_GOOD_U]
Int_t           Ndata_bb_gem_hit_CM_GOOD_V;
Double_t        bb_gem_hit_CM_GOOD_V[100];   //[Ndata.bb.gem.hit.CM_GOOD_V]
Int_t           Ndata_bb_gem_hit_DeconvADC0_Umax;
Double_t        bb_gem_hit_DeconvADC0_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC0_Umax]
Int_t           Ndata_bb_gem_hit_DeconvADC0_Vmax;
Double_t        bb_gem_hit_DeconvADC0_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC0_Vmax]
Int_t           Ndata_bb_gem_hit_DeconvADC1_Umax;
Double_t        bb_gem_hit_DeconvADC1_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC1_Umax]
Int_t           Ndata_bb_gem_hit_DeconvADC1_Vmax;
Double_t        bb_gem_hit_DeconvADC1_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC1_Vmax]
Int_t           Ndata_bb_gem_hit_DeconvADC2_Umax;
Double_t        bb_gem_hit_DeconvADC2_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC2_Umax]
Int_t           Ndata_bb_gem_hit_DeconvADC2_Vmax;
Double_t        bb_gem_hit_DeconvADC2_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC2_Vmax]
Int_t           Ndata_bb_gem_hit_DeconvADC3_Umax;
Double_t        bb_gem_hit_DeconvADC3_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC3_Umax]
Int_t           Ndata_bb_gem_hit_DeconvADC3_Vmax;
Double_t        bb_gem_hit_DeconvADC3_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC3_Vmax]
Int_t           Ndata_bb_gem_hit_DeconvADC4_Umax;
Double_t        bb_gem_hit_DeconvADC4_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC4_Umax]
Int_t           Ndata_bb_gem_hit_DeconvADC4_Vmax;
Double_t        bb_gem_hit_DeconvADC4_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC4_Vmax]
Int_t           Ndata_bb_gem_hit_DeconvADC5_Umax;
Double_t        bb_gem_hit_DeconvADC5_Umax[100];   //[Ndata.bb.gem.hit.DeconvADC5_Umax]
Int_t           Ndata_bb_gem_hit_DeconvADC5_Vmax;
Double_t        bb_gem_hit_DeconvADC5_Vmax[100];   //[Ndata.bb.gem.hit.DeconvADC5_Vmax]
Int_t           Ndata_bb_gem_hit_DeconvADCmaxcomboU;
Double_t        bb_gem_hit_DeconvADCmaxcomboU[100];   //[Ndata.bb.gem.hit.DeconvADCmaxcomboU]
Int_t           Ndata_bb_gem_hit_DeconvADCmaxcomboV;
Double_t        bb_gem_hit_DeconvADCmaxcomboV[100];   //[Ndata.bb.gem.hit.DeconvADCmaxcomboV]
Int_t           Ndata_bb_gem_hit_DeconvADCmaxsampU;
Double_t        bb_gem_hit_DeconvADCmaxsampU[100];   //[Ndata.bb.gem.hit.DeconvADCmaxsampU]
Int_t           Ndata_bb_gem_hit_DeconvADCmaxsampV;
Double_t        bb_gem_hit_DeconvADCmaxsampV[100];   //[Ndata.bb.gem.hit.DeconvADCmaxsampV]
Int_t           Ndata_bb_gem_hit_DeconvADCmaxstripU;
Double_t        bb_gem_hit_DeconvADCmaxstripU[100];   //[Ndata.bb.gem.hit.DeconvADCmaxstripU]
Int_t           Ndata_bb_gem_hit_DeconvADCmaxstripV;
Double_t        bb_gem_hit_DeconvADCmaxstripV[100];   //[Ndata.bb.gem.hit.DeconvADCmaxstripV]
Int_t           Ndata_bb_gem_hit_ENABLE_CM_U;
Double_t        bb_gem_hit_ENABLE_CM_U[100];   //[Ndata.bb.gem.hit.ENABLE_CM_U]
Int_t           Ndata_bb_gem_hit_ENABLE_CM_V;
Double_t        bb_gem_hit_ENABLE_CM_V[100];   //[Ndata.bb.gem.hit.ENABLE_CM_V]
Int_t           Ndata_bb_gem_hit_Tavg;
Double_t        bb_gem_hit_Tavg[100];   //[Ndata.bb.gem.hit.Tavg]
Int_t           Ndata_bb_gem_hit_Tavg_deconv;
Double_t        bb_gem_hit_Tavg_deconv[100];   //[Ndata.bb.gem.hit.Tavg_deconv]
Int_t           Ndata_bb_gem_hit_Utime;
Double_t        bb_gem_hit_Utime[100];   //[Ndata.bb.gem.hit.Utime]
Int_t           Ndata_bb_gem_hit_UtimeDeconv;
Double_t        bb_gem_hit_UtimeDeconv[100];   //[Ndata.bb.gem.hit.UtimeDeconv]
Int_t           Ndata_bb_gem_hit_UtimeMaxStrip;
Double_t        bb_gem_hit_UtimeMaxStrip[100];   //[Ndata.bb.gem.hit.UtimeMaxStrip]
Int_t           Ndata_bb_gem_hit_UtimeMaxStripDeconv;
Double_t        bb_gem_hit_UtimeMaxStripDeconv[100];   //[Ndata.bb.gem.hit.UtimeMaxStripDeconv]
Int_t           Ndata_bb_gem_hit_UtimeMaxStripFit;
Double_t        bb_gem_hit_UtimeMaxStripFit[100];   //[Ndata.bb.gem.hit.UtimeMaxStripFit]
Int_t           Ndata_bb_gem_hit_Vtime;
Double_t        bb_gem_hit_Vtime[100];   //[Ndata.bb.gem.hit.Vtime]
Int_t           Ndata_bb_gem_hit_VtimeDeconv;
Double_t        bb_gem_hit_VtimeDeconv[100];   //[Ndata.bb.gem.hit.VtimeDeconv]
Int_t           Ndata_bb_gem_hit_VtimeMaxStrip;
Double_t        bb_gem_hit_VtimeMaxStrip[100];   //[Ndata.bb.gem.hit.VtimeMaxStrip]
Int_t           Ndata_bb_gem_hit_VtimeMaxStripDeconv;
Double_t        bb_gem_hit_VtimeMaxStripDeconv[100];   //[Ndata.bb.gem.hit.VtimeMaxStripDeconv]
Int_t           Ndata_bb_gem_hit_VtimeMaxStripFit;
Double_t        bb_gem_hit_VtimeMaxStripFit[100];   //[Ndata.bb.gem.hit.VtimeMaxStripFit]
Int_t           Ndata_bb_gem_hit_ccor_clust;
Double_t        bb_gem_hit_ccor_clust[100];   //[Ndata.bb.gem.hit.ccor_clust]
Int_t           Ndata_bb_gem_hit_ccor_clust_deconv;
Double_t        bb_gem_hit_ccor_clust_deconv[100];   //[Ndata.bb.gem.hit.ccor_clust_deconv]
Int_t           Ndata_bb_gem_hit_ccor_strip;
Double_t        bb_gem_hit_ccor_strip[100];   //[Ndata.bb.gem.hit.ccor_strip]
Int_t           Ndata_bb_gem_hit_ccor_strip_deconv;
Double_t        bb_gem_hit_ccor_strip_deconv[100];   //[Ndata.bb.gem.hit.ccor_strip_deconv]
Int_t           Ndata_bb_gem_hit_deltat;
Double_t        bb_gem_hit_deltat[100];   //[Ndata.bb.gem.hit.deltat]
Int_t           Ndata_bb_gem_hit_deltat_deconv;
Double_t        bb_gem_hit_deltat_deconv[100];   //[Ndata.bb.gem.hit.deltat_deconv]
Int_t           Ndata_bb_gem_hit_eresidu;
Double_t        bb_gem_hit_eresidu[100];   //[Ndata.bb.gem.hit.eresidu]
Int_t           Ndata_bb_gem_hit_eresidv;
Double_t        bb_gem_hit_eresidv[100];   //[Ndata.bb.gem.hit.eresidv]
Int_t           Ndata_bb_gem_hit_icombomaxUclustDeconv;
Double_t        bb_gem_hit_icombomaxUclustDeconv[100];   //[Ndata.bb.gem.hit.icombomaxUclustDeconv]
Int_t           Ndata_bb_gem_hit_icombomaxUstripDeconv;
Double_t        bb_gem_hit_icombomaxUstripDeconv[100];   //[Ndata.bb.gem.hit.icombomaxUstripDeconv]
Int_t           Ndata_bb_gem_hit_icombomaxVclustDeconv;
Double_t        bb_gem_hit_icombomaxVclustDeconv[100];   //[Ndata.bb.gem.hit.icombomaxVclustDeconv]
Int_t           Ndata_bb_gem_hit_icombomaxVstripDeconv;
Double_t        bb_gem_hit_icombomaxVstripDeconv[100];   //[Ndata.bb.gem.hit.icombomaxVstripDeconv]
Int_t           Ndata_bb_gem_hit_isampmaxUclust;
Double_t        bb_gem_hit_isampmaxUclust[100];   //[Ndata.bb.gem.hit.isampmaxUclust]
Int_t           Ndata_bb_gem_hit_isampmaxUclustDeconv;
Double_t        bb_gem_hit_isampmaxUclustDeconv[100];   //[Ndata.bb.gem.hit.isampmaxUclustDeconv]
Int_t           Ndata_bb_gem_hit_isampmaxUstrip;
Double_t        bb_gem_hit_isampmaxUstrip[100];   //[Ndata.bb.gem.hit.isampmaxUstrip]
Int_t           Ndata_bb_gem_hit_isampmaxUstripDeconv;
Double_t        bb_gem_hit_isampmaxUstripDeconv[100];   //[Ndata.bb.gem.hit.isampmaxUstripDeconv]
Int_t           Ndata_bb_gem_hit_isampmaxVclust;
Double_t        bb_gem_hit_isampmaxVclust[100];   //[Ndata.bb.gem.hit.isampmaxVclust]
Int_t           Ndata_bb_gem_hit_isampmaxVclustDeconv;
Double_t        bb_gem_hit_isampmaxVclustDeconv[100];   //[Ndata.bb.gem.hit.isampmaxVclustDeconv]
Int_t           Ndata_bb_gem_hit_isampmaxVstrip;
Double_t        bb_gem_hit_isampmaxVstrip[100];   //[Ndata.bb.gem.hit.isampmaxVstrip]
Int_t           Ndata_bb_gem_hit_isampmaxVstripDeconv;
Double_t        bb_gem_hit_isampmaxVstripDeconv[100];   //[Ndata.bb.gem.hit.isampmaxVstripDeconv]
Int_t           Ndata_bb_gem_hit_layer;
Double_t        bb_gem_hit_layer[100];   //[Ndata.bb.gem.hit.layer]
Int_t           Ndata_bb_gem_hit_module;
Double_t        bb_gem_hit_module[100];   //[Ndata.bb.gem.hit.module]
Int_t           Ndata_bb_gem_hit_nstripu;
Double_t        bb_gem_hit_nstripu[100];   //[Ndata.bb.gem.hit.nstripu]
Int_t           Ndata_bb_gem_hit_nstripv;
Double_t        bb_gem_hit_nstripv[100];   //[Ndata.bb.gem.hit.nstripv]
Int_t           Ndata_bb_gem_hit_residu;
Double_t        bb_gem_hit_residu[100];   //[Ndata.bb.gem.hit.residu]
Int_t           Ndata_bb_gem_hit_residv;
Double_t        bb_gem_hit_residv[100];   //[Ndata.bb.gem.hit.residv]
Int_t           Ndata_bb_gem_hit_trackindex;
Double_t        bb_gem_hit_trackindex[100];   //[Ndata.bb.gem.hit.trackindex]
Int_t           Ndata_bb_gem_hit_u;
Double_t        bb_gem_hit_u[100];   //[Ndata.bb.gem.hit.u]
Int_t           Ndata_bb_gem_hit_umoment;
Double_t        bb_gem_hit_umoment[100];   //[Ndata.bb.gem.hit.umoment]
Int_t           Ndata_bb_gem_hit_usigma;
Double_t        bb_gem_hit_usigma[100];   //[Ndata.bb.gem.hit.usigma]
Int_t           Ndata_bb_gem_hit_ustriphi;
Double_t        bb_gem_hit_ustriphi[100];   //[Ndata.bb.gem.hit.ustriphi]
Int_t           Ndata_bb_gem_hit_ustriplo;
Double_t        bb_gem_hit_ustriplo[100];   //[Ndata.bb.gem.hit.ustriplo]
Int_t           Ndata_bb_gem_hit_ustripmax;
Double_t        bb_gem_hit_ustripmax[100];   //[Ndata.bb.gem.hit.ustripmax]
Int_t           Ndata_bb_gem_hit_v;
Double_t        bb_gem_hit_v[100];   //[Ndata.bb.gem.hit.v]
Int_t           Ndata_bb_gem_hit_vmoment;
Double_t        bb_gem_hit_vmoment[100];   //[Ndata.bb.gem.hit.vmoment]
Int_t           Ndata_bb_gem_hit_vsigma;
Double_t        bb_gem_hit_vsigma[100];   //[Ndata.bb.gem.hit.vsigma]
Int_t           Ndata_bb_gem_hit_vstriphi;
Double_t        bb_gem_hit_vstriphi[100];   //[Ndata.bb.gem.hit.vstriphi]
Int_t           Ndata_bb_gem_hit_vstriplo;
Double_t        bb_gem_hit_vstriplo[100];   //[Ndata.bb.gem.hit.vstriplo]
Int_t           Ndata_bb_gem_hit_vstripmax;
Double_t        bb_gem_hit_vstripmax[100];   //[Ndata.bb.gem.hit.vstripmax]
Int_t           Ndata_bb_gem_hit_xglobal;
Double_t        bb_gem_hit_xglobal[100];   //[Ndata.bb.gem.hit.xglobal]
Int_t           Ndata_bb_gem_hit_xlocal;
Double_t        bb_gem_hit_xlocal[100];   //[Ndata.bb.gem.hit.xlocal]
Int_t           Ndata_bb_gem_hit_yglobal;
Double_t        bb_gem_hit_yglobal[100];   //[Ndata.bb.gem.hit.yglobal]
Int_t           Ndata_bb_gem_hit_ylocal;
Double_t        bb_gem_hit_ylocal[100];   //[Ndata.bb.gem.hit.ylocal]
Int_t           Ndata_bb_gem_hit_zglobal;
Double_t        bb_gem_hit_zglobal[100];   //[Ndata.bb.gem.hit.zglobal]
Int_t           Ndata_bb_gem_n2Dhit_layer;
Double_t        bb_gem_n2Dhit_layer[100];   //[Ndata.bb.gem.n2Dhit_layer]
Int_t           Ndata_bb_gem_nclustu_layer;
Double_t        bb_gem_nclustu_layer[100];   //[Ndata.bb.gem.nclustu_layer]
Int_t           Ndata_bb_gem_nclustv_layer;
Double_t        bb_gem_nclustv_layer[100];   //[Ndata.bb.gem.nclustv_layer]
Int_t           Ndata_bb_gem_nstripsu_layer;
Double_t        bb_gem_nstripsu_layer[100];   //[Ndata.bb.gem.nstripsu_layer]
Int_t           Ndata_bb_gem_nstripsv_layer;
Double_t        bb_gem_nstripsv_layer[100];   //[Ndata.bb.gem.nstripsv_layer]
Int_t           Ndata_bb_gem_track_chi2ndf;
Double_t        bb_gem_track_chi2ndf[100];   //[Ndata.bb.gem.track.chi2ndf]
Int_t           Ndata_bb_gem_track_nhits;
Double_t        bb_gem_track_nhits[100];   //[Ndata.bb.gem.track.nhits]
Int_t           Ndata_bb_gem_track_x;
Double_t        bb_gem_track_x[100];   //[Ndata.bb.gem.track.x]
Int_t           Ndata_bb_gem_track_xp;
Double_t        bb_gem_track_xp[100];   //[Ndata.bb.gem.track.xp]
Int_t           Ndata_bb_gem_track_y;
Double_t        bb_gem_track_y[100];   //[Ndata.bb.gem.track.y]
Int_t           Ndata_bb_gem_track_yp;
Double_t        bb_gem_track_yp[100];   //[Ndata.bb.gem.track.yp]
Int_t           Ndata_bb_grinch_tdc_hit_amp;
Double_t        bb_grinch_tdc_hit_amp[100];   //[Ndata.bb.grinch_tdc.hit.amp]
Int_t           Ndata_bb_grinch_tdc_hit_col;
Double_t        bb_grinch_tdc_hit_col[100];   //[Ndata.bb.grinch_tdc.hit.col]
Int_t           Ndata_bb_grinch_tdc_hit_pmtnum;
Double_t        bb_grinch_tdc_hit_pmtnum[100];   //[Ndata.bb.grinch_tdc.hit.pmtnum]
Int_t           Ndata_bb_grinch_tdc_hit_row;
Double_t        bb_grinch_tdc_hit_row[100];   //[Ndata.bb.grinch_tdc.hit.row]
Int_t           Ndata_bb_grinch_tdc_hit_time;
Double_t        bb_grinch_tdc_hit_time[100];   //[Ndata.bb.grinch_tdc.hit.time]
Int_t           Ndata_bb_grinch_tdc_hit_xhit;
Double_t        bb_grinch_tdc_hit_xhit[100];   //[Ndata.bb.grinch_tdc.hit.xhit]
Int_t           Ndata_bb_grinch_tdc_hit_yhit;
Double_t        bb_grinch_tdc_hit_yhit[100];   //[Ndata.bb.grinch_tdc.hit.yhit]
Int_t           Ndata_bb_hodotdc_clus_bar_tdc_id;
Double_t        bb_hodotdc_clus_bar_tdc_id[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.id]
Int_t           Ndata_bb_hodotdc_clus_bar_tdc_itrack;
Double_t        bb_hodotdc_clus_bar_tdc_itrack[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.itrack]
Int_t           Ndata_bb_hodotdc_clus_bar_tdc_meantime;
Double_t        bb_hodotdc_clus_bar_tdc_meantime[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.meantime]
Int_t           Ndata_bb_hodotdc_clus_bar_tdc_meantot;
Double_t        bb_hodotdc_clus_bar_tdc_meantot[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.meantot]
Int_t           Ndata_bb_hodotdc_clus_bar_tdc_timediff;
Double_t        bb_hodotdc_clus_bar_tdc_timediff[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.timediff]
Int_t           Ndata_bb_hodotdc_clus_bar_tdc_timehitpos;
Double_t        bb_hodotdc_clus_bar_tdc_timehitpos[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.timehitpos]
Int_t           Ndata_bb_hodotdc_clus_bar_tdc_vpos;
Double_t        bb_hodotdc_clus_bar_tdc_vpos[100];   //[Ndata.bb.hodotdc.clus.bar.tdc.vpos]
Int_t           Ndata_bb_hodotdc_clus_id;
Double_t        bb_hodotdc_clus_id[100];   //[Ndata.bb.hodotdc.clus.id]
Int_t           Ndata_bb_hodotdc_clus_size;
Double_t        bb_hodotdc_clus_size[100];   //[Ndata.bb.hodotdc.clus.size]
Int_t           Ndata_bb_hodotdc_clus_tdiff;
Double_t        bb_hodotdc_clus_tdiff[100];   //[Ndata.bb.hodotdc.clus.tdiff]
Int_t           Ndata_bb_hodotdc_clus_tmean;
Double_t        bb_hodotdc_clus_tmean[100];   //[Ndata.bb.hodotdc.clus.tmean]
Int_t           Ndata_bb_hodotdc_clus_totmean;
Double_t        bb_hodotdc_clus_totmean[100];   //[Ndata.bb.hodotdc.clus.totmean]
Int_t           Ndata_bb_hodotdc_clus_trackindex;
Double_t        bb_hodotdc_clus_trackindex[100];   //[Ndata.bb.hodotdc.clus.trackindex]
Int_t           Ndata_bb_hodotdc_clus_xmean;
Double_t        bb_hodotdc_clus_xmean[100];   //[Ndata.bb.hodotdc.clus.xmean]
Int_t           Ndata_bb_hodotdc_clus_ymean;
Double_t        bb_hodotdc_clus_ymean[100];   //[Ndata.bb.hodotdc.clus.ymean]
Int_t           Ndata_bb_ps_clus_atime;
Double_t        bb_ps_clus_atime[100];   //[Ndata.bb.ps.clus.atime]
Int_t           Ndata_bb_ps_clus_col;
Double_t        bb_ps_clus_col[100];   //[Ndata.bb.ps.clus.col]
Int_t           Ndata_bb_ps_clus_e;
Double_t        bb_ps_clus_e[100];   //[Ndata.bb.ps.clus.e]
Int_t           Ndata_bb_ps_clus_e_c;
Double_t        bb_ps_clus_e_c[100];   //[Ndata.bb.ps.clus.e_c]
Int_t           Ndata_bb_ps_clus_eblk;
Double_t        bb_ps_clus_eblk[100];   //[Ndata.bb.ps.clus.eblk]
Int_t           Ndata_bb_ps_clus_eblk_c;
Double_t        bb_ps_clus_eblk_c[100];   //[Ndata.bb.ps.clus.eblk_c]
Int_t           Ndata_bb_ps_clus_id;
Double_t        bb_ps_clus_id[100];   //[Ndata.bb.ps.clus.id]
Int_t           Ndata_bb_ps_clus_nblk;
Double_t        bb_ps_clus_nblk[100];   //[Ndata.bb.ps.clus.nblk]
Int_t           Ndata_bb_ps_clus_row;
Double_t        bb_ps_clus_row[100];   //[Ndata.bb.ps.clus.row]
Int_t           Ndata_bb_ps_clus_tdctime;
Double_t        bb_ps_clus_tdctime[100];   //[Ndata.bb.ps.clus.tdctime]
Int_t           Ndata_bb_ps_clus_x;
Double_t        bb_ps_clus_x[100];   //[Ndata.bb.ps.clus.x]
Int_t           Ndata_bb_ps_clus_y;
Double_t        bb_ps_clus_y[100];   //[Ndata.bb.ps.clus.y]
Int_t           Ndata_bb_ps_clus_blk_atime;
Double_t        bb_ps_clus_blk_atime[100];   //[Ndata.bb.ps.clus_blk.atime]
Int_t           Ndata_bb_ps_clus_blk_col;
Double_t        bb_ps_clus_blk_col[100];   //[Ndata.bb.ps.clus_blk.col]
Int_t           Ndata_bb_ps_clus_blk_e;
Double_t        bb_ps_clus_blk_e[100];   //[Ndata.bb.ps.clus_blk.e]
Int_t           Ndata_bb_ps_clus_blk_e_c;
Double_t        bb_ps_clus_blk_e_c[100];   //[Ndata.bb.ps.clus_blk.e_c]
Int_t           Ndata_bb_ps_clus_blk_id;
Double_t        bb_ps_clus_blk_id[100];   //[Ndata.bb.ps.clus_blk.id]
Int_t           Ndata_bb_ps_clus_blk_row;
Double_t        bb_ps_clus_blk_row[100];   //[Ndata.bb.ps.clus_blk.row]
Int_t           Ndata_bb_ps_clus_blk_tdctime;
Double_t        bb_ps_clus_blk_tdctime[100];   //[Ndata.bb.ps.clus_blk.tdctime]
Int_t           Ndata_bb_ps_clus_blk_x;
Double_t        bb_ps_clus_blk_x[100];   //[Ndata.bb.ps.clus_blk.x]
Int_t           Ndata_bb_ps_clus_blk_y;
Double_t        bb_ps_clus_blk_y[100];   //[Ndata.bb.ps.clus_blk.y]
Int_t           Ndata_bb_sh_clus_atime;
Double_t        bb_sh_clus_atime[100];   //[Ndata.bb.sh.clus.atime]
Int_t           Ndata_bb_sh_clus_col;
Double_t        bb_sh_clus_col[100];   //[Ndata.bb.sh.clus.col]
Int_t           Ndata_bb_sh_clus_e;
Double_t        bb_sh_clus_e[100];   //[Ndata.bb.sh.clus.e]
Int_t           Ndata_bb_sh_clus_e_c;
Double_t        bb_sh_clus_e_c[100];   //[Ndata.bb.sh.clus.e_c]
Int_t           Ndata_bb_sh_clus_eblk;
Double_t        bb_sh_clus_eblk[100];   //[Ndata.bb.sh.clus.eblk]
Int_t           Ndata_bb_sh_clus_eblk_c;
Double_t        bb_sh_clus_eblk_c[100];   //[Ndata.bb.sh.clus.eblk_c]
Int_t           Ndata_bb_sh_clus_id;
Double_t        bb_sh_clus_id[100];   //[Ndata.bb.sh.clus.id]
Int_t           Ndata_bb_sh_clus_nblk;
Double_t        bb_sh_clus_nblk[100];   //[Ndata.bb.sh.clus.nblk]
Int_t           Ndata_bb_sh_clus_row;
Double_t        bb_sh_clus_row[100];   //[Ndata.bb.sh.clus.row]
Int_t           Ndata_bb_sh_clus_tdctime;
Double_t        bb_sh_clus_tdctime[100];   //[Ndata.bb.sh.clus.tdctime]
Int_t           Ndata_bb_sh_clus_x;
Double_t        bb_sh_clus_x[100];   //[Ndata.bb.sh.clus.x]
Int_t           Ndata_bb_sh_clus_y;
Double_t        bb_sh_clus_y[100];   //[Ndata.bb.sh.clus.y]
Int_t           Ndata_bb_sh_clus_blk_atime;
Double_t        bb_sh_clus_blk_atime[100];   //[Ndata.bb.sh.clus_blk.atime]
Int_t           Ndata_bb_sh_clus_blk_col;
Double_t        bb_sh_clus_blk_col[100];   //[Ndata.bb.sh.clus_blk.col]
Int_t           Ndata_bb_sh_clus_blk_e;
Double_t        bb_sh_clus_blk_e[100];   //[Ndata.bb.sh.clus_blk.e]
Int_t           Ndata_bb_sh_clus_blk_e_c;
Double_t        bb_sh_clus_blk_e_c[100];   //[Ndata.bb.sh.clus_blk.e_c]
Int_t           Ndata_bb_sh_clus_blk_id;
Double_t        bb_sh_clus_blk_id[100];   //[Ndata.bb.sh.clus_blk.id]
Int_t           Ndata_bb_sh_clus_blk_row;
Double_t        bb_sh_clus_blk_row[100];   //[Ndata.bb.sh.clus_blk.row]
Int_t           Ndata_bb_sh_clus_blk_tdctime;
Double_t        bb_sh_clus_blk_tdctime[100];   //[Ndata.bb.sh.clus_blk.tdctime]
Int_t           Ndata_bb_sh_clus_blk_x;
Double_t        bb_sh_clus_blk_x[100];   //[Ndata.bb.sh.clus_blk.x]
Int_t           Ndata_bb_sh_clus_blk_y;
Double_t        bb_sh_clus_blk_y[100];   //[Ndata.bb.sh.clus_blk.y]
Int_t           Ndata_bb_tdctrig_tdc;
Double_t        bb_tdctrig_tdc[100];   //[Ndata.bb.tdctrig.tdc]
Int_t           Ndata_bb_tdctrig_tdcelemID;
Double_t        bb_tdctrig_tdcelemID[100];   //[Ndata.bb.tdctrig.tdcelemID]
Int_t           Ndata_bb_tr_beta;
Double_t        bb_tr_beta[100];   //[Ndata.bb.tr.beta]
Int_t           Ndata_bb_tr_chi2;
Double_t        bb_tr_chi2[100];   //[Ndata.bb.tr.chi2]
Int_t           Ndata_bb_tr_d_ph;
Double_t        bb_tr_d_ph[100];   //[Ndata.bb.tr.d_ph]
Int_t           Ndata_bb_tr_d_th;
Double_t        bb_tr_d_th[100];   //[Ndata.bb.tr.d_th]
Int_t           Ndata_bb_tr_d_x;
Double_t        bb_tr_d_x[100];   //[Ndata.bb.tr.d_x]
Int_t           Ndata_bb_tr_d_y;
Double_t        bb_tr_d_y[100];   //[Ndata.bb.tr.d_y]
Int_t           Ndata_bb_tr_dbeta;
Double_t        bb_tr_dbeta[100];   //[Ndata.bb.tr.dbeta]
Int_t           Ndata_bb_tr_dtime;
Double_t        bb_tr_dtime[100];   //[Ndata.bb.tr.dtime]
Int_t           Ndata_bb_tr_flag;
Double_t        bb_tr_flag[100];   //[Ndata.bb.tr.flag]
Int_t           Ndata_bb_tr_ndof;
Double_t        bb_tr_ndof[100];   //[Ndata.bb.tr.ndof]
Int_t           Ndata_bb_tr_p;
Double_t        bb_tr_p[100];   //[Ndata.bb.tr.p]
Int_t           Ndata_bb_tr_pathl;
Double_t        bb_tr_pathl[100];   //[Ndata.bb.tr.pathl]
Int_t           Ndata_bb_tr_ph;
Double_t        bb_tr_ph[100];   //[Ndata.bb.tr.ph]
Int_t           Ndata_bb_tr_px;
Double_t        bb_tr_px[100];   //[Ndata.bb.tr.px]
Int_t           Ndata_bb_tr_py;
Double_t        bb_tr_py[100];   //[Ndata.bb.tr.py]
Int_t           Ndata_bb_tr_pz;
Double_t        bb_tr_pz[100];   //[Ndata.bb.tr.pz]
Int_t           Ndata_bb_tr_r_ph;
Double_t        bb_tr_r_ph[100];   //[Ndata.bb.tr.r_ph]
Int_t           Ndata_bb_tr_r_th;
Double_t        bb_tr_r_th[100];   //[Ndata.bb.tr.r_th]
Int_t           Ndata_bb_tr_r_x;
Double_t        bb_tr_r_x[100];   //[Ndata.bb.tr.r_x]
Int_t           Ndata_bb_tr_r_y;
Double_t        bb_tr_r_y[100];   //[Ndata.bb.tr.r_y]
Int_t           Ndata_bb_tr_tg_dp;
Double_t        bb_tr_tg_dp[100];   //[Ndata.bb.tr.tg_dp]
Int_t           Ndata_bb_tr_tg_ph;
Double_t        bb_tr_tg_ph[100];   //[Ndata.bb.tr.tg_ph]
Int_t           Ndata_bb_tr_tg_th;
Double_t        bb_tr_tg_th[100];   //[Ndata.bb.tr.tg_th]
Int_t           Ndata_bb_tr_tg_x;
Double_t        bb_tr_tg_x[100];   //[Ndata.bb.tr.tg_x]
Int_t           Ndata_bb_tr_tg_y;
Double_t        bb_tr_tg_y[100];   //[Ndata.bb.tr.tg_y]
Int_t           Ndata_bb_tr_th;
Double_t        bb_tr_th[100];   //[Ndata.bb.tr.th]
Int_t           Ndata_bb_tr_time;
Double_t        bb_tr_time[100];   //[Ndata.bb.tr.time]
Int_t           Ndata_bb_tr_vx;
Double_t        bb_tr_vx[100];   //[Ndata.bb.tr.vx]
Int_t           Ndata_bb_tr_vy;
Double_t        bb_tr_vy[100];   //[Ndata.bb.tr.vy]
Int_t           Ndata_bb_tr_vz;
Double_t        bb_tr_vz[100];   //[Ndata.bb.tr.vz]
Int_t           Ndata_bb_tr_x;
Double_t        bb_tr_x[100];   //[Ndata.bb.tr.x]
Int_t           Ndata_bb_tr_y;
Double_t        bb_tr_y[100];   //[Ndata.bb.tr.y]
Int_t           Ndata_bb_x_bcp;
Double_t        bb_x_bcp[100];   //[Ndata.bb.x_bcp]
Int_t           Ndata_bb_x_fcp;
Double_t        bb_x_fcp[100];   //[Ndata.bb.x_fcp]
Int_t           Ndata_bb_y_bcp;
Double_t        bb_y_bcp[100];   //[Ndata.bb.y_bcp]
Int_t           Ndata_bb_y_fcp;
Double_t        bb_y_fcp[100];   //[Ndata.bb.y_fcp]
Int_t           Ndata_bb_z_bcp;
Double_t        bb_z_bcp[100];   //[Ndata.bb.z_bcp]
Int_t           Ndata_bb_z_fcp;
Double_t        bb_z_fcp[100];   //[Ndata.bb.z_fcp]
Int_t           Ndata_sbs_hcal_clus_atime;
Double_t        sbs_hcal_clus_atime[100];   //[Ndata.sbs.hcal.clus.atime]
Int_t           Ndata_sbs_hcal_clus_col;
Double_t        sbs_hcal_clus_col[100];   //[Ndata.sbs.hcal.clus.col]
Int_t           Ndata_sbs_hcal_clus_e;
Double_t        sbs_hcal_clus_e[100];   //[Ndata.sbs.hcal.clus.e]
Int_t           Ndata_sbs_hcal_clus_e_c;
Double_t        sbs_hcal_clus_e_c[100];   //[Ndata.sbs.hcal.clus.e_c]
Int_t           Ndata_sbs_hcal_clus_eblk;
Double_t        sbs_hcal_clus_eblk[100];   //[Ndata.sbs.hcal.clus.eblk]
Int_t           Ndata_sbs_hcal_clus_eblk_c;
Double_t        sbs_hcal_clus_eblk_c[100];   //[Ndata.sbs.hcal.clus.eblk_c]
Int_t           Ndata_sbs_hcal_clus_id;
Double_t        sbs_hcal_clus_id[100];   //[Ndata.sbs.hcal.clus.id]
Int_t           Ndata_sbs_hcal_clus_nblk;
Double_t        sbs_hcal_clus_nblk[100];   //[Ndata.sbs.hcal.clus.nblk]
Int_t           Ndata_sbs_hcal_clus_row;
Double_t        sbs_hcal_clus_row[100];   //[Ndata.sbs.hcal.clus.row]
Int_t           Ndata_sbs_hcal_clus_tdctime;
Double_t        sbs_hcal_clus_tdctime[100];   //[Ndata.sbs.hcal.clus.tdctime]
Int_t           Ndata_sbs_hcal_clus_x;
Double_t        sbs_hcal_clus_x[100];   //[Ndata.sbs.hcal.clus.x]
Int_t           Ndata_sbs_hcal_clus_y;
Double_t        sbs_hcal_clus_y[100];   //[Ndata.sbs.hcal.clus.y]
Int_t           Ndata_sbs_hcal_clus_blk_atime;
Double_t        sbs_hcal_clus_blk_atime[100];   //[Ndata.sbs.hcal.clus_blk.atime]
Int_t           Ndata_sbs_hcal_clus_blk_col;
Double_t        sbs_hcal_clus_blk_col[100];   //[Ndata.sbs.hcal.clus_blk.col]
Int_t           Ndata_sbs_hcal_clus_blk_e;
Double_t        sbs_hcal_clus_blk_e[100];   //[Ndata.sbs.hcal.clus_blk.e]
Int_t           Ndata_sbs_hcal_clus_blk_e_c;
Double_t        sbs_hcal_clus_blk_e_c[100];   //[Ndata.sbs.hcal.clus_blk.e_c]
Int_t           Ndata_sbs_hcal_clus_blk_id;
Double_t        sbs_hcal_clus_blk_id[100];   //[Ndata.sbs.hcal.clus_blk.id]
Int_t           Ndata_sbs_hcal_clus_blk_row;
Double_t        sbs_hcal_clus_blk_row[100];   //[Ndata.sbs.hcal.clus_blk.row]
Int_t           Ndata_sbs_hcal_clus_blk_tdctime;
Double_t        sbs_hcal_clus_blk_tdctime[100];   //[Ndata.sbs.hcal.clus_blk.tdctime]
Int_t           Ndata_sbs_hcal_clus_blk_x;
Double_t        sbs_hcal_clus_blk_x[100];   //[Ndata.sbs.hcal.clus_blk.x]
Int_t           Ndata_sbs_hcal_clus_blk_y;
Double_t        sbs_hcal_clus_blk_y[100];   //[Ndata.sbs.hcal.clus_blk.y]
Double_t        BB_gold_beta;
Double_t        BB_gold_dp;
Double_t        BB_gold_index;
Double_t        BB_gold_ok;
Double_t        BB_gold_p;
Double_t        BB_gold_ph;
Double_t        BB_gold_px;
Double_t        BB_gold_py;
Double_t        BB_gold_pz;
Double_t        BB_gold_th;
Double_t        BB_gold_x;
Double_t        BB_gold_y;
Double_t        Lrb_BPMA_rawcur_1;
Double_t        Lrb_BPMA_rawcur_2;
Double_t        Lrb_BPMA_rawcur_3;
Double_t        Lrb_BPMA_rawcur_4;
Double_t        Lrb_BPMA_rotpos1;
Double_t        Lrb_BPMA_rotpos2;
Double_t        Lrb_BPMA_x;
Double_t        Lrb_BPMA_y;
Double_t        Lrb_BPMA_z;
Double_t        Lrb_BPMB_rawcur_1;
Double_t        Lrb_BPMB_rawcur_2;
Double_t        Lrb_BPMB_rawcur_3;
Double_t        Lrb_BPMB_rawcur_4;
Double_t        Lrb_BPMB_rotpos1;
Double_t        Lrb_BPMB_rotpos2;
Double_t        Lrb_BPMB_x;
Double_t        Lrb_BPMB_y;
Double_t        Lrb_BPMB_z;
Double_t        Lrb_Raster_bpma_x;
Double_t        Lrb_Raster_bpma_y;
Double_t        Lrb_Raster_bpma_z;
Double_t        Lrb_Raster_bpmb_x;
Double_t        Lrb_Raster_bpmb_y;
Double_t        Lrb_Raster_bpmb_z;
Double_t        Lrb_Raster_rawcur_x;
Double_t        Lrb_Raster_rawcur_y;
Double_t        Lrb_Raster_rawslope_x;
Double_t        Lrb_Raster_rawslope_y;
Double_t        Lrb_Raster_target_dir_x;
Double_t        Lrb_Raster_target_dir_y;
Double_t        Lrb_Raster_target_dir_z;
Double_t        Lrb_Raster_target_x;
Double_t        Lrb_Raster_target_y;
Double_t        Lrb_Raster_target_z;
Double_t        Lrb_Raster2_bpma_x;
Double_t        Lrb_Raster2_bpma_y;
Double_t        Lrb_Raster2_bpma_z;
Double_t        Lrb_Raster2_bpmb_x;
Double_t        Lrb_Raster2_bpmb_y;
Double_t        Lrb_Raster2_bpmb_z;
Double_t        Lrb_Raster2_rawcur_x;
Double_t        Lrb_Raster2_rawcur_y;
Double_t        Lrb_Raster2_rawslope_x;
Double_t        Lrb_Raster2_rawslope_y;
Double_t        Lrb_Raster2_target_dir_x;
Double_t        Lrb_Raster2_target_dir_y;
Double_t        Lrb_Raster2_target_dir_z;
Double_t        Lrb_Raster2_target_x;
Double_t        Lrb_Raster2_target_y;
Double_t        Lrb_Raster2_target_z;
Double_t        Lrb_dir_x;
Double_t        Lrb_dir_y;
Double_t        Lrb_dir_z;
Double_t        Lrb_e;
Double_t        Lrb_ok;
Double_t        Lrb_p;
Double_t        Lrb_ph;
Double_t        Lrb_pol;
Double_t        Lrb_px;
Double_t        Lrb_py;
Double_t        Lrb_pz;
Double_t        Lrb_th;
Double_t        Lrb_x;
Double_t        Lrb_xpos;
Double_t        Lrb_y;
Double_t        Lrb_ypos;
Double_t        Lrb_z;
Double_t        Lrb_zpos;
Double_t        SBSrb_BPMA_rawcur_1;
Double_t        SBSrb_BPMA_rawcur_2;
Double_t        SBSrb_BPMA_rawcur_3;
Double_t        SBSrb_BPMA_rawcur_4;
Double_t        SBSrb_BPMA_rotpos1;
Double_t        SBSrb_BPMA_rotpos2;
Double_t        SBSrb_BPMA_x;
Double_t        SBSrb_BPMA_y;
Double_t        SBSrb_BPMA_z;
Double_t        SBSrb_BPMB_rawcur_1;
Double_t        SBSrb_BPMB_rawcur_2;
Double_t        SBSrb_BPMB_rawcur_3;
Double_t        SBSrb_BPMB_rawcur_4;
Double_t        SBSrb_BPMB_rotpos1;
Double_t        SBSrb_BPMB_rotpos2;
Double_t        SBSrb_BPMB_x;
Double_t        SBSrb_BPMB_y;
Double_t        SBSrb_BPMB_z;
Double_t        SBSrb_Raster_bpma_x;
Double_t        SBSrb_Raster_bpma_y;
Double_t        SBSrb_Raster_bpma_z;
Double_t        SBSrb_Raster_bpmb_x;
Double_t        SBSrb_Raster_bpmb_y;
Double_t        SBSrb_Raster_bpmb_z;
Double_t        SBSrb_Raster_rawcur_x;
Double_t        SBSrb_Raster_rawcur_y;
Double_t        SBSrb_Raster_rawslope_x;
Double_t        SBSrb_Raster_rawslope_y;
Double_t        SBSrb_Raster_target_dir_x;
Double_t        SBSrb_Raster_target_dir_y;
Double_t        SBSrb_Raster_target_dir_z;
Double_t        SBSrb_Raster_target_x;
Double_t        SBSrb_Raster_target_y;
Double_t        SBSrb_Raster_target_z;
Double_t        SBSrb_Raster2_bpma_x;
Double_t        SBSrb_Raster2_bpma_y;
Double_t        SBSrb_Raster2_bpma_z;
Double_t        SBSrb_Raster2_bpmb_x;
Double_t        SBSrb_Raster2_bpmb_y;
Double_t        SBSrb_Raster2_bpmb_z;
Double_t        SBSrb_Raster2_rawcur_x;
Double_t        SBSrb_Raster2_rawcur_y;
Double_t        SBSrb_Raster2_rawslope_x;
Double_t        SBSrb_Raster2_rawslope_y;
Double_t        SBSrb_Raster2_target_dir_x;
Double_t        SBSrb_Raster2_target_dir_y;
Double_t        SBSrb_Raster2_target_dir_z;
Double_t        SBSrb_Raster2_target_x;
Double_t        SBSrb_Raster2_target_y;
Double_t        SBSrb_Raster2_target_z;
Double_t        SBSrb_dir_x;
Double_t        SBSrb_dir_y;
Double_t        SBSrb_dir_z;
Double_t        SBSrb_e;
Double_t        SBSrb_ok;
Double_t        SBSrb_p;
Double_t        SBSrb_ph;
Double_t        SBSrb_pol;
Double_t        SBSrb_px;
Double_t        SBSrb_py;
Double_t        SBSrb_pz;
Double_t        SBSrb_th;
Double_t        SBSrb_x;
Double_t        SBSrb_xpos;
Double_t        SBSrb_y;
Double_t        SBSrb_ypos;
Double_t        SBSrb_z;
Double_t        SBSrb_zpos;
Double_t        bb_gem_hit_ngoodhits;
Double_t        bb_gem_m0_clust_nclustu;
Double_t        bb_gem_m0_clust_nclustu_tot;
Double_t        bb_gem_m0_clust_nclustv;
Double_t        bb_gem_m0_clust_nclustv_tot;
Double_t        bb_gem_m0_strip_nstrips_keep;
Double_t        bb_gem_m0_strip_nstrips_keepU;
Double_t        bb_gem_m0_strip_nstrips_keepV;
Double_t        bb_gem_m0_strip_nstrips_keep_lmax;
Double_t        bb_gem_m0_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m0_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m0_strip_nstripsfired;
Double_t        bb_gem_m1_clust_nclustu;
Double_t        bb_gem_m1_clust_nclustu_tot;
Double_t        bb_gem_m1_clust_nclustv;
Double_t        bb_gem_m1_clust_nclustv_tot;
Double_t        bb_gem_m1_strip_nstrips_keep;
Double_t        bb_gem_m1_strip_nstrips_keepU;
Double_t        bb_gem_m1_strip_nstrips_keepV;
Double_t        bb_gem_m1_strip_nstrips_keep_lmax;
Double_t        bb_gem_m1_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m1_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m1_strip_nstripsfired;
Double_t        bb_gem_m10_clust_nclustu;
Double_t        bb_gem_m10_clust_nclustu_tot;
Double_t        bb_gem_m10_clust_nclustv;
Double_t        bb_gem_m10_clust_nclustv_tot;
Double_t        bb_gem_m10_strip_nstrips_keep;
Double_t        bb_gem_m10_strip_nstrips_keepU;
Double_t        bb_gem_m10_strip_nstrips_keepV;
Double_t        bb_gem_m10_strip_nstrips_keep_lmax;
Double_t        bb_gem_m10_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m10_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m10_strip_nstripsfired;
Double_t        bb_gem_m11_clust_nclustu;
Double_t        bb_gem_m11_clust_nclustu_tot;
Double_t        bb_gem_m11_clust_nclustv;
Double_t        bb_gem_m11_clust_nclustv_tot;
Double_t        bb_gem_m11_strip_nstrips_keep;
Double_t        bb_gem_m11_strip_nstrips_keepU;
Double_t        bb_gem_m11_strip_nstrips_keepV;
Double_t        bb_gem_m11_strip_nstrips_keep_lmax;
Double_t        bb_gem_m11_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m11_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m11_strip_nstripsfired;
Double_t        bb_gem_m2_clust_nclustu;
Double_t        bb_gem_m2_clust_nclustu_tot;
Double_t        bb_gem_m2_clust_nclustv;
Double_t        bb_gem_m2_clust_nclustv_tot;
Double_t        bb_gem_m2_strip_nstrips_keep;
Double_t        bb_gem_m2_strip_nstrips_keepU;
Double_t        bb_gem_m2_strip_nstrips_keepV;
Double_t        bb_gem_m2_strip_nstrips_keep_lmax;
Double_t        bb_gem_m2_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m2_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m2_strip_nstripsfired;
Double_t        bb_gem_m3_clust_nclustu;
Double_t        bb_gem_m3_clust_nclustu_tot;
Double_t        bb_gem_m3_clust_nclustv;
Double_t        bb_gem_m3_clust_nclustv_tot;
Double_t        bb_gem_m3_strip_nstrips_keep;
Double_t        bb_gem_m3_strip_nstrips_keepU;
Double_t        bb_gem_m3_strip_nstrips_keepV;
Double_t        bb_gem_m3_strip_nstrips_keep_lmax;
Double_t        bb_gem_m3_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m3_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m3_strip_nstripsfired;
Double_t        bb_gem_m4_clust_nclustu;
Double_t        bb_gem_m4_clust_nclustu_tot;
Double_t        bb_gem_m4_clust_nclustv;
Double_t        bb_gem_m4_clust_nclustv_tot;
Double_t        bb_gem_m4_strip_nstrips_keep;
Double_t        bb_gem_m4_strip_nstrips_keepU;
Double_t        bb_gem_m4_strip_nstrips_keepV;
Double_t        bb_gem_m4_strip_nstrips_keep_lmax;
Double_t        bb_gem_m4_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m4_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m4_strip_nstripsfired;
Double_t        bb_gem_m5_clust_nclustu;
Double_t        bb_gem_m5_clust_nclustu_tot;
Double_t        bb_gem_m5_clust_nclustv;
Double_t        bb_gem_m5_clust_nclustv_tot;
Double_t        bb_gem_m5_strip_nstrips_keep;
Double_t        bb_gem_m5_strip_nstrips_keepU;
Double_t        bb_gem_m5_strip_nstrips_keepV;
Double_t        bb_gem_m5_strip_nstrips_keep_lmax;
Double_t        bb_gem_m5_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m5_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m5_strip_nstripsfired;
Double_t        bb_gem_m6_clust_nclustu;
Double_t        bb_gem_m6_clust_nclustu_tot;
Double_t        bb_gem_m6_clust_nclustv;
Double_t        bb_gem_m6_clust_nclustv_tot;
Double_t        bb_gem_m6_strip_nstrips_keep;
Double_t        bb_gem_m6_strip_nstrips_keepU;
Double_t        bb_gem_m6_strip_nstrips_keepV;
Double_t        bb_gem_m6_strip_nstrips_keep_lmax;
Double_t        bb_gem_m6_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m6_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m6_strip_nstripsfired;
Double_t        bb_gem_m7_clust_nclustu;
Double_t        bb_gem_m7_clust_nclustu_tot;
Double_t        bb_gem_m7_clust_nclustv;
Double_t        bb_gem_m7_clust_nclustv_tot;
Double_t        bb_gem_m7_strip_nstrips_keep;
Double_t        bb_gem_m7_strip_nstrips_keepU;
Double_t        bb_gem_m7_strip_nstrips_keepV;
Double_t        bb_gem_m7_strip_nstrips_keep_lmax;
Double_t        bb_gem_m7_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m7_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m7_strip_nstripsfired;
Double_t        bb_gem_m8_clust_nclustu;
Double_t        bb_gem_m8_clust_nclustu_tot;
Double_t        bb_gem_m8_clust_nclustv;
Double_t        bb_gem_m8_clust_nclustv_tot;
Double_t        bb_gem_m8_strip_nstrips_keep;
Double_t        bb_gem_m8_strip_nstrips_keepU;
Double_t        bb_gem_m8_strip_nstrips_keepV;
Double_t        bb_gem_m8_strip_nstrips_keep_lmax;
Double_t        bb_gem_m8_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m8_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m8_strip_nstripsfired;
Double_t        bb_gem_m9_clust_nclustu;
Double_t        bb_gem_m9_clust_nclustu_tot;
Double_t        bb_gem_m9_clust_nclustv;
Double_t        bb_gem_m9_clust_nclustv_tot;
Double_t        bb_gem_m9_strip_nstrips_keep;
Double_t        bb_gem_m9_strip_nstrips_keepU;
Double_t        bb_gem_m9_strip_nstrips_keepV;
Double_t        bb_gem_m9_strip_nstrips_keep_lmax;
Double_t        bb_gem_m9_strip_nstrips_keep_lmaxU;
Double_t        bb_gem_m9_strip_nstrips_keep_lmaxV;
Double_t        bb_gem_m9_strip_nstripsfired;
Double_t        bb_gem_nlayershit;
Double_t        bb_gem_nlayershitu;
Double_t        bb_gem_nlayershituv;
Double_t        bb_gem_nlayershitv;
Double_t        bb_gem_track_besttrack;
Double_t        bb_gem_track_ntrack;
Double_t        bb_grinch_tdc_ngoodhits;
Double_t        bb_hodotdc_nclus;
Double_t        bb_ps_atimeblk;
Double_t        bb_ps_colblk;
Double_t        bb_ps_e;
Double_t        bb_ps_e_c;
Double_t        bb_ps_eblk;
Double_t        bb_ps_eblk_c;
Double_t        bb_ps_idblk;
Double_t        bb_ps_index;
Double_t        bb_ps_nblk;
Double_t        bb_ps_nclus;
Double_t        bb_ps_ngoodADChits;
Double_t        bb_ps_rowblk;
Double_t        bb_ps_x;
Double_t        bb_ps_y;
Double_t        bb_sh_atimeblk;
Double_t        bb_sh_colblk;
Double_t        bb_sh_e;
Double_t        bb_sh_e_c;
Double_t        bb_sh_eblk;
Double_t        bb_sh_eblk_c;
Double_t        bb_sh_idblk;
Double_t        bb_sh_index;
Double_t        bb_sh_nblk;
Double_t        bb_sh_nclus;
Double_t        bb_sh_ngoodADChits;
Double_t        bb_sh_rowblk;
Double_t        bb_sh_x;
Double_t        bb_sh_y;
Double_t        bb_tr_n;
Double_t        bb_ts_over_threshold;
Double_t        e_kine_Q2;
Double_t        e_kine_W2;
Double_t        e_kine_angle;
Double_t        e_kine_epsilon;
Double_t        e_kine_nu;
Double_t        e_kine_omega;
Double_t        e_kine_ph_q;
Double_t        e_kine_q3m;
Double_t        e_kine_q_x;
Double_t        e_kine_q_y;
Double_t        e_kine_q_z;
Double_t        e_kine_th_q;
Double_t        e_kine_x_bj;
Double_t        sbs_hcal_atimeblk;
Double_t        sbs_hcal_colblk;
Double_t        sbs_hcal_e;
Double_t        sbs_hcal_e_c;
Double_t        sbs_hcal_eblk;
Double_t        sbs_hcal_eblk_c;
Double_t        sbs_hcal_idblk;
Double_t        sbs_hcal_index;
Double_t        sbs_hcal_nblk;
Double_t        sbs_hcal_nclus;
Double_t        sbs_hcal_ngoodADChits;
Double_t        sbs_hcal_rowblk;
Double_t        sbs_hcal_tdctimeblk;
Double_t        sbs_hcal_x;
Double_t        sbs_hcal_y;
Double_t        singletrack;
Double_t        anytrack;
Double_t        halla_p;
Double_t        hac_bcm_average;
Double_t        IPM1H04A_XPOS;
Double_t        IPM1H04A_YPOS;
Double_t        IPM1H04E_XPOS;
Double_t        IPM1H04E_YPOS;
Double_t        IBC1H04CRCUR2;
Double_t        hac_bcm_dvm1_read;
Double_t        hac_bcm_dvm2_read;
Double_t        hac_bcm_dvm1_current;
Double_t        hac_bcm_dvm2_current;
Double_t        hac_bcm_A1;
Double_t        hac_bcm_A2;
Double_t        HALLA_p;
//THaEvent        *Event_Branch;
ULong64_t       fEvtHdr_fEvtTime;
UInt_t          fEvtHdr_fEvtNum;
UInt_t          fEvtHdr_fEvtType;
UInt_t          fEvtHdr_fEvtLen;
Int_t           fEvtHdr_fHelicity;
UInt_t          fEvtHdr_fTrigBits;
UInt_t          fEvtHdr_fRun;

void TreeInit(TTree *fTree)
{
   // Set branch addresses and branch pointers
   //if (!tree) return;
   //fTree = tree;
   //fCurrent = -1;
   fTree->SetMakeClass(1);

   fTree->SetBranchAddress("targx", &targx);
   fTree->SetBranchAddress("targy", &targy);
   fTree->SetBranchAddress("Ndata.bb.eps_over_etot", &Ndata_bb_eps_over_etot);
   fTree->SetBranchAddress("bb.eps_over_etot", bb_eps_over_etot);
   fTree->SetBranchAddress("Ndata.bb.etot_over_p", &Ndata_bb_etot_over_p);
   fTree->SetBranchAddress("bb.etot_over_p", bb_etot_over_p);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCU", &Ndata_bb_gem_hit_ADCU);
   fTree->SetBranchAddress("bb.gem.hit.ADCU", bb_gem_hit_ADCU);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCU_deconv", &Ndata_bb_gem_hit_ADCU_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCU_deconv", bb_gem_hit_ADCU_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCV", &Ndata_bb_gem_hit_ADCV);
   fTree->SetBranchAddress("bb.gem.hit.ADCV", bb_gem_hit_ADCV);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCV_deconv", &Ndata_bb_gem_hit_ADCV_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCV_deconv", bb_gem_hit_ADCV_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCasym", &Ndata_bb_gem_hit_ADCasym);
   fTree->SetBranchAddress("bb.gem.hit.ADCasym", bb_gem_hit_ADCasym);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCasym_deconv", &Ndata_bb_gem_hit_ADCasym_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCasym_deconv", bb_gem_hit_ADCasym_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCavg", &Ndata_bb_gem_hit_ADCavg);
   fTree->SetBranchAddress("bb.gem.hit.ADCavg", bb_gem_hit_ADCavg);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCavg_deconv", &Ndata_bb_gem_hit_ADCavg_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCavg_deconv", bb_gem_hit_ADCavg_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac0_Umax", &Ndata_bb_gem_hit_ADCfrac0_Umax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac0_Umax", bb_gem_hit_ADCfrac0_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac0_Vmax", &Ndata_bb_gem_hit_ADCfrac0_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac0_Vmax", bb_gem_hit_ADCfrac0_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac1_Umax", &Ndata_bb_gem_hit_ADCfrac1_Umax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac1_Umax", bb_gem_hit_ADCfrac1_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac1_Vmax", &Ndata_bb_gem_hit_ADCfrac1_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac1_Vmax", bb_gem_hit_ADCfrac1_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac2_Umax", &Ndata_bb_gem_hit_ADCfrac2_Umax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac2_Umax", bb_gem_hit_ADCfrac2_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac2_Vmax", &Ndata_bb_gem_hit_ADCfrac2_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac2_Vmax", bb_gem_hit_ADCfrac2_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac3_Umax", &Ndata_bb_gem_hit_ADCfrac3_Umax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac3_Umax", bb_gem_hit_ADCfrac3_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac3_Vmax", &Ndata_bb_gem_hit_ADCfrac3_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac3_Vmax", bb_gem_hit_ADCfrac3_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac4_Umax", &Ndata_bb_gem_hit_ADCfrac4_Umax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac4_Umax", bb_gem_hit_ADCfrac4_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac4_Vmax", &Ndata_bb_gem_hit_ADCfrac4_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac4_Vmax", bb_gem_hit_ADCfrac4_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac5_Umax", &Ndata_bb_gem_hit_ADCfrac5_Umax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac5_Umax", bb_gem_hit_ADCfrac5_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac5_Vmax", &Ndata_bb_gem_hit_ADCfrac5_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.ADCfrac5_Vmax", bb_gem_hit_ADCfrac5_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxcomboUclust_deconv", &Ndata_bb_gem_hit_ADCmaxcomboUclust_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxcomboUclust_deconv", bb_gem_hit_ADCmaxcomboUclust_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxcomboVclust_deconv", &Ndata_bb_gem_hit_ADCmaxcomboVclust_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxcomboVclust_deconv", bb_gem_hit_ADCmaxcomboVclust_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampU", &Ndata_bb_gem_hit_ADCmaxsampU);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxsampU", bb_gem_hit_ADCmaxsampU);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampUclust", &Ndata_bb_gem_hit_ADCmaxsampUclust);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxsampUclust", bb_gem_hit_ADCmaxsampUclust);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampUclust_deconv", &Ndata_bb_gem_hit_ADCmaxsampUclust_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxsampUclust_deconv", bb_gem_hit_ADCmaxsampUclust_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampV", &Ndata_bb_gem_hit_ADCmaxsampV);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxsampV", bb_gem_hit_ADCmaxsampV);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampVclust", &Ndata_bb_gem_hit_ADCmaxsampVclust);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxsampVclust", bb_gem_hit_ADCmaxsampVclust);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampVclust_deconv", &Ndata_bb_gem_hit_ADCmaxsampVclust_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxsampVclust_deconv", bb_gem_hit_ADCmaxsampVclust_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxstripU", &Ndata_bb_gem_hit_ADCmaxstripU);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxstripU", bb_gem_hit_ADCmaxstripU);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxstripV", &Ndata_bb_gem_hit_ADCmaxstripV);
   fTree->SetBranchAddress("bb.gem.hit.ADCmaxstripV", bb_gem_hit_ADCmaxstripV);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_U", &Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_U);
   fTree->SetBranchAddress("bb.gem.hit.BUILD_ALL_SAMPLES_U", bb_gem_hit_BUILD_ALL_SAMPLES_U);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_V", &Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_V);
   fTree->SetBranchAddress("bb.gem.hit.BUILD_ALL_SAMPLES_V", bb_gem_hit_BUILD_ALL_SAMPLES_V);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.CM_GOOD_U", &Ndata_bb_gem_hit_CM_GOOD_U);
   fTree->SetBranchAddress("bb.gem.hit.CM_GOOD_U", bb_gem_hit_CM_GOOD_U);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.CM_GOOD_V", &Ndata_bb_gem_hit_CM_GOOD_V);
   fTree->SetBranchAddress("bb.gem.hit.CM_GOOD_V", bb_gem_hit_CM_GOOD_V);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC0_Umax", &Ndata_bb_gem_hit_DeconvADC0_Umax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC0_Umax", bb_gem_hit_DeconvADC0_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC0_Vmax", &Ndata_bb_gem_hit_DeconvADC0_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC0_Vmax", bb_gem_hit_DeconvADC0_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC1_Umax", &Ndata_bb_gem_hit_DeconvADC1_Umax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC1_Umax", bb_gem_hit_DeconvADC1_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC1_Vmax", &Ndata_bb_gem_hit_DeconvADC1_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC1_Vmax", bb_gem_hit_DeconvADC1_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC2_Umax", &Ndata_bb_gem_hit_DeconvADC2_Umax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC2_Umax", bb_gem_hit_DeconvADC2_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC2_Vmax", &Ndata_bb_gem_hit_DeconvADC2_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC2_Vmax", bb_gem_hit_DeconvADC2_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC3_Umax", &Ndata_bb_gem_hit_DeconvADC3_Umax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC3_Umax", bb_gem_hit_DeconvADC3_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC3_Vmax", &Ndata_bb_gem_hit_DeconvADC3_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC3_Vmax", bb_gem_hit_DeconvADC3_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC4_Umax", &Ndata_bb_gem_hit_DeconvADC4_Umax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC4_Umax", bb_gem_hit_DeconvADC4_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC4_Vmax", &Ndata_bb_gem_hit_DeconvADC4_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC4_Vmax", bb_gem_hit_DeconvADC4_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC5_Umax", &Ndata_bb_gem_hit_DeconvADC5_Umax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC5_Umax", bb_gem_hit_DeconvADC5_Umax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC5_Vmax", &Ndata_bb_gem_hit_DeconvADC5_Vmax);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADC5_Vmax", bb_gem_hit_DeconvADC5_Vmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxcomboU", &Ndata_bb_gem_hit_DeconvADCmaxcomboU);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADCmaxcomboU", bb_gem_hit_DeconvADCmaxcomboU);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxcomboV", &Ndata_bb_gem_hit_DeconvADCmaxcomboV);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADCmaxcomboV", bb_gem_hit_DeconvADCmaxcomboV);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxsampU", &Ndata_bb_gem_hit_DeconvADCmaxsampU);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADCmaxsampU", bb_gem_hit_DeconvADCmaxsampU);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxsampV", &Ndata_bb_gem_hit_DeconvADCmaxsampV);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADCmaxsampV", bb_gem_hit_DeconvADCmaxsampV);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxstripU", &Ndata_bb_gem_hit_DeconvADCmaxstripU);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADCmaxstripU", bb_gem_hit_DeconvADCmaxstripU);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxstripV", &Ndata_bb_gem_hit_DeconvADCmaxstripV);
   fTree->SetBranchAddress("bb.gem.hit.DeconvADCmaxstripV", bb_gem_hit_DeconvADCmaxstripV);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ENABLE_CM_U", &Ndata_bb_gem_hit_ENABLE_CM_U);
   fTree->SetBranchAddress("bb.gem.hit.ENABLE_CM_U", bb_gem_hit_ENABLE_CM_U);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ENABLE_CM_V", &Ndata_bb_gem_hit_ENABLE_CM_V);
   fTree->SetBranchAddress("bb.gem.hit.ENABLE_CM_V", bb_gem_hit_ENABLE_CM_V);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.Tavg", &Ndata_bb_gem_hit_Tavg);
   fTree->SetBranchAddress("bb.gem.hit.Tavg", bb_gem_hit_Tavg);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.Tavg_deconv", &Ndata_bb_gem_hit_Tavg_deconv);
   fTree->SetBranchAddress("bb.gem.hit.Tavg_deconv", bb_gem_hit_Tavg_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.Utime", &Ndata_bb_gem_hit_Utime);
   fTree->SetBranchAddress("bb.gem.hit.Utime", bb_gem_hit_Utime);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.UtimeDeconv", &Ndata_bb_gem_hit_UtimeDeconv);
   fTree->SetBranchAddress("bb.gem.hit.UtimeDeconv", bb_gem_hit_UtimeDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.UtimeMaxStrip", &Ndata_bb_gem_hit_UtimeMaxStrip);
   fTree->SetBranchAddress("bb.gem.hit.UtimeMaxStrip", bb_gem_hit_UtimeMaxStrip);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.UtimeMaxStripDeconv", &Ndata_bb_gem_hit_UtimeMaxStripDeconv);
   fTree->SetBranchAddress("bb.gem.hit.UtimeMaxStripDeconv", bb_gem_hit_UtimeMaxStripDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.UtimeMaxStripFit", &Ndata_bb_gem_hit_UtimeMaxStripFit);
   fTree->SetBranchAddress("bb.gem.hit.UtimeMaxStripFit", bb_gem_hit_UtimeMaxStripFit);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.Vtime", &Ndata_bb_gem_hit_Vtime);
   fTree->SetBranchAddress("bb.gem.hit.Vtime", bb_gem_hit_Vtime);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.VtimeDeconv", &Ndata_bb_gem_hit_VtimeDeconv);
   fTree->SetBranchAddress("bb.gem.hit.VtimeDeconv", bb_gem_hit_VtimeDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.VtimeMaxStrip", &Ndata_bb_gem_hit_VtimeMaxStrip);
   fTree->SetBranchAddress("bb.gem.hit.VtimeMaxStrip", bb_gem_hit_VtimeMaxStrip);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.VtimeMaxStripDeconv", &Ndata_bb_gem_hit_VtimeMaxStripDeconv);
   fTree->SetBranchAddress("bb.gem.hit.VtimeMaxStripDeconv", bb_gem_hit_VtimeMaxStripDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.VtimeMaxStripFit", &Ndata_bb_gem_hit_VtimeMaxStripFit);
   fTree->SetBranchAddress("bb.gem.hit.VtimeMaxStripFit", bb_gem_hit_VtimeMaxStripFit);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ccor_clust", &Ndata_bb_gem_hit_ccor_clust);
   fTree->SetBranchAddress("bb.gem.hit.ccor_clust", bb_gem_hit_ccor_clust);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ccor_clust_deconv", &Ndata_bb_gem_hit_ccor_clust_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ccor_clust_deconv", bb_gem_hit_ccor_clust_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ccor_strip", &Ndata_bb_gem_hit_ccor_strip);
   fTree->SetBranchAddress("bb.gem.hit.ccor_strip", bb_gem_hit_ccor_strip);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ccor_strip_deconv", &Ndata_bb_gem_hit_ccor_strip_deconv);
   fTree->SetBranchAddress("bb.gem.hit.ccor_strip_deconv", bb_gem_hit_ccor_strip_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.deltat", &Ndata_bb_gem_hit_deltat);
   fTree->SetBranchAddress("bb.gem.hit.deltat", bb_gem_hit_deltat);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.deltat_deconv", &Ndata_bb_gem_hit_deltat_deconv);
   fTree->SetBranchAddress("bb.gem.hit.deltat_deconv", bb_gem_hit_deltat_deconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.eresidu", &Ndata_bb_gem_hit_eresidu);
   fTree->SetBranchAddress("bb.gem.hit.eresidu", bb_gem_hit_eresidu);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.eresidv", &Ndata_bb_gem_hit_eresidv);
   fTree->SetBranchAddress("bb.gem.hit.eresidv", bb_gem_hit_eresidv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.icombomaxUclustDeconv", &Ndata_bb_gem_hit_icombomaxUclustDeconv);
   fTree->SetBranchAddress("bb.gem.hit.icombomaxUclustDeconv", bb_gem_hit_icombomaxUclustDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.icombomaxUstripDeconv", &Ndata_bb_gem_hit_icombomaxUstripDeconv);
   fTree->SetBranchAddress("bb.gem.hit.icombomaxUstripDeconv", bb_gem_hit_icombomaxUstripDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.icombomaxVclustDeconv", &Ndata_bb_gem_hit_icombomaxVclustDeconv);
   fTree->SetBranchAddress("bb.gem.hit.icombomaxVclustDeconv", bb_gem_hit_icombomaxVclustDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.icombomaxVstripDeconv", &Ndata_bb_gem_hit_icombomaxVstripDeconv);
   fTree->SetBranchAddress("bb.gem.hit.icombomaxVstripDeconv", bb_gem_hit_icombomaxVstripDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUclust", &Ndata_bb_gem_hit_isampmaxUclust);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxUclust", bb_gem_hit_isampmaxUclust);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUclustDeconv", &Ndata_bb_gem_hit_isampmaxUclustDeconv);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxUclustDeconv", bb_gem_hit_isampmaxUclustDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUstrip", &Ndata_bb_gem_hit_isampmaxUstrip);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxUstrip", bb_gem_hit_isampmaxUstrip);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUstripDeconv", &Ndata_bb_gem_hit_isampmaxUstripDeconv);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxUstripDeconv", bb_gem_hit_isampmaxUstripDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVclust", &Ndata_bb_gem_hit_isampmaxVclust);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxVclust", bb_gem_hit_isampmaxVclust);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVclustDeconv", &Ndata_bb_gem_hit_isampmaxVclustDeconv);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxVclustDeconv", bb_gem_hit_isampmaxVclustDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVstrip", &Ndata_bb_gem_hit_isampmaxVstrip);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxVstrip", bb_gem_hit_isampmaxVstrip);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVstripDeconv", &Ndata_bb_gem_hit_isampmaxVstripDeconv);
   fTree->SetBranchAddress("bb.gem.hit.isampmaxVstripDeconv", bb_gem_hit_isampmaxVstripDeconv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.layer", &Ndata_bb_gem_hit_layer);
   fTree->SetBranchAddress("bb.gem.hit.layer", bb_gem_hit_layer);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.module", &Ndata_bb_gem_hit_module);
   fTree->SetBranchAddress("bb.gem.hit.module", bb_gem_hit_module);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.nstripu", &Ndata_bb_gem_hit_nstripu);
   fTree->SetBranchAddress("bb.gem.hit.nstripu", bb_gem_hit_nstripu);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.nstripv", &Ndata_bb_gem_hit_nstripv);
   fTree->SetBranchAddress("bb.gem.hit.nstripv", bb_gem_hit_nstripv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.residu", &Ndata_bb_gem_hit_residu);
   fTree->SetBranchAddress("bb.gem.hit.residu", bb_gem_hit_residu);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.residv", &Ndata_bb_gem_hit_residv);
   fTree->SetBranchAddress("bb.gem.hit.residv", bb_gem_hit_residv);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.trackindex", &Ndata_bb_gem_hit_trackindex);
   fTree->SetBranchAddress("bb.gem.hit.trackindex", bb_gem_hit_trackindex);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.u", &Ndata_bb_gem_hit_u);
   fTree->SetBranchAddress("bb.gem.hit.u", bb_gem_hit_u);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.umoment", &Ndata_bb_gem_hit_umoment);
   fTree->SetBranchAddress("bb.gem.hit.umoment", bb_gem_hit_umoment);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.usigma", &Ndata_bb_gem_hit_usigma);
   fTree->SetBranchAddress("bb.gem.hit.usigma", bb_gem_hit_usigma);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ustriphi", &Ndata_bb_gem_hit_ustriphi);
   fTree->SetBranchAddress("bb.gem.hit.ustriphi", bb_gem_hit_ustriphi);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ustriplo", &Ndata_bb_gem_hit_ustriplo);
   fTree->SetBranchAddress("bb.gem.hit.ustriplo", bb_gem_hit_ustriplo);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ustripmax", &Ndata_bb_gem_hit_ustripmax);
   fTree->SetBranchAddress("bb.gem.hit.ustripmax", bb_gem_hit_ustripmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.v", &Ndata_bb_gem_hit_v);
   fTree->SetBranchAddress("bb.gem.hit.v", bb_gem_hit_v);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.vmoment", &Ndata_bb_gem_hit_vmoment);
   fTree->SetBranchAddress("bb.gem.hit.vmoment", bb_gem_hit_vmoment);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.vsigma", &Ndata_bb_gem_hit_vsigma);
   fTree->SetBranchAddress("bb.gem.hit.vsigma", bb_gem_hit_vsigma);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.vstriphi", &Ndata_bb_gem_hit_vstriphi);
   fTree->SetBranchAddress("bb.gem.hit.vstriphi", bb_gem_hit_vstriphi);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.vstriplo", &Ndata_bb_gem_hit_vstriplo);
   fTree->SetBranchAddress("bb.gem.hit.vstriplo", bb_gem_hit_vstriplo);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.vstripmax", &Ndata_bb_gem_hit_vstripmax);
   fTree->SetBranchAddress("bb.gem.hit.vstripmax", bb_gem_hit_vstripmax);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.xglobal", &Ndata_bb_gem_hit_xglobal);
   fTree->SetBranchAddress("bb.gem.hit.xglobal", bb_gem_hit_xglobal);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.xlocal", &Ndata_bb_gem_hit_xlocal);
   fTree->SetBranchAddress("bb.gem.hit.xlocal", bb_gem_hit_xlocal);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.yglobal", &Ndata_bb_gem_hit_yglobal);
   fTree->SetBranchAddress("bb.gem.hit.yglobal", bb_gem_hit_yglobal);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.ylocal", &Ndata_bb_gem_hit_ylocal);
   fTree->SetBranchAddress("bb.gem.hit.ylocal", bb_gem_hit_ylocal);
   fTree->SetBranchAddress("Ndata.bb.gem.hit.zglobal", &Ndata_bb_gem_hit_zglobal);
   fTree->SetBranchAddress("bb.gem.hit.zglobal", bb_gem_hit_zglobal);
   fTree->SetBranchAddress("Ndata.bb.gem.n2Dhit_layer", &Ndata_bb_gem_n2Dhit_layer);
   fTree->SetBranchAddress("bb.gem.n2Dhit_layer", bb_gem_n2Dhit_layer);
   fTree->SetBranchAddress("Ndata.bb.gem.nclustu_layer", &Ndata_bb_gem_nclustu_layer);
   fTree->SetBranchAddress("bb.gem.nclustu_layer", bb_gem_nclustu_layer);
   fTree->SetBranchAddress("Ndata.bb.gem.nclustv_layer", &Ndata_bb_gem_nclustv_layer);
   fTree->SetBranchAddress("bb.gem.nclustv_layer", bb_gem_nclustv_layer);
   fTree->SetBranchAddress("Ndata.bb.gem.nstripsu_layer", &Ndata_bb_gem_nstripsu_layer);
   fTree->SetBranchAddress("bb.gem.nstripsu_layer", bb_gem_nstripsu_layer);
   fTree->SetBranchAddress("Ndata.bb.gem.nstripsv_layer", &Ndata_bb_gem_nstripsv_layer);
   fTree->SetBranchAddress("bb.gem.nstripsv_layer", bb_gem_nstripsv_layer);
   fTree->SetBranchAddress("Ndata.bb.gem.track.chi2ndf", &Ndata_bb_gem_track_chi2ndf);
   fTree->SetBranchAddress("bb.gem.track.chi2ndf", bb_gem_track_chi2ndf);
   fTree->SetBranchAddress("Ndata.bb.gem.track.nhits", &Ndata_bb_gem_track_nhits);
   fTree->SetBranchAddress("bb.gem.track.nhits", bb_gem_track_nhits);
   fTree->SetBranchAddress("Ndata.bb.gem.track.x", &Ndata_bb_gem_track_x);
   fTree->SetBranchAddress("bb.gem.track.x", bb_gem_track_x);
   fTree->SetBranchAddress("Ndata.bb.gem.track.xp", &Ndata_bb_gem_track_xp);
   fTree->SetBranchAddress("bb.gem.track.xp", bb_gem_track_xp);
   fTree->SetBranchAddress("Ndata.bb.gem.track.y", &Ndata_bb_gem_track_y);
   fTree->SetBranchAddress("bb.gem.track.y", bb_gem_track_y);
   fTree->SetBranchAddress("Ndata.bb.gem.track.yp", &Ndata_bb_gem_track_yp);
   fTree->SetBranchAddress("bb.gem.track.yp", bb_gem_track_yp);
   fTree->SetBranchAddress("Ndata.bb.grinch_tdc.hit.amp", &Ndata_bb_grinch_tdc_hit_amp);
   fTree->SetBranchAddress("bb.grinch_tdc.hit.amp", bb_grinch_tdc_hit_amp);
   fTree->SetBranchAddress("Ndata.bb.grinch_tdc.hit.col", &Ndata_bb_grinch_tdc_hit_col);
   fTree->SetBranchAddress("bb.grinch_tdc.hit.col", bb_grinch_tdc_hit_col);
   fTree->SetBranchAddress("Ndata.bb.grinch_tdc.hit.pmtnum", &Ndata_bb_grinch_tdc_hit_pmtnum);
   fTree->SetBranchAddress("bb.grinch_tdc.hit.pmtnum", bb_grinch_tdc_hit_pmtnum);
   fTree->SetBranchAddress("Ndata.bb.grinch_tdc.hit.row", &Ndata_bb_grinch_tdc_hit_row);
   fTree->SetBranchAddress("bb.grinch_tdc.hit.row", bb_grinch_tdc_hit_row);
   fTree->SetBranchAddress("Ndata.bb.grinch_tdc.hit.time", &Ndata_bb_grinch_tdc_hit_time);
   fTree->SetBranchAddress("bb.grinch_tdc.hit.time", bb_grinch_tdc_hit_time);
   fTree->SetBranchAddress("Ndata.bb.grinch_tdc.hit.xhit", &Ndata_bb_grinch_tdc_hit_xhit);
   fTree->SetBranchAddress("bb.grinch_tdc.hit.xhit", bb_grinch_tdc_hit_xhit);
   fTree->SetBranchAddress("Ndata.bb.grinch_tdc.hit.yhit", &Ndata_bb_grinch_tdc_hit_yhit);
   fTree->SetBranchAddress("bb.grinch_tdc.hit.yhit", bb_grinch_tdc_hit_yhit);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.id", &Ndata_bb_hodotdc_clus_bar_tdc_id);
   fTree->SetBranchAddress("bb.hodotdc.clus.bar.tdc.id", bb_hodotdc_clus_bar_tdc_id);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.itrack", &Ndata_bb_hodotdc_clus_bar_tdc_itrack);
   fTree->SetBranchAddress("bb.hodotdc.clus.bar.tdc.itrack", bb_hodotdc_clus_bar_tdc_itrack);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.meantime", &Ndata_bb_hodotdc_clus_bar_tdc_meantime);
   fTree->SetBranchAddress("bb.hodotdc.clus.bar.tdc.meantime", bb_hodotdc_clus_bar_tdc_meantime);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.meantot", &Ndata_bb_hodotdc_clus_bar_tdc_meantot);
   fTree->SetBranchAddress("bb.hodotdc.clus.bar.tdc.meantot", bb_hodotdc_clus_bar_tdc_meantot);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.timediff", &Ndata_bb_hodotdc_clus_bar_tdc_timediff);
   fTree->SetBranchAddress("bb.hodotdc.clus.bar.tdc.timediff", bb_hodotdc_clus_bar_tdc_timediff);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.timehitpos", &Ndata_bb_hodotdc_clus_bar_tdc_timehitpos);
   fTree->SetBranchAddress("bb.hodotdc.clus.bar.tdc.timehitpos", bb_hodotdc_clus_bar_tdc_timehitpos);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.vpos", &Ndata_bb_hodotdc_clus_bar_tdc_vpos);
   fTree->SetBranchAddress("bb.hodotdc.clus.bar.tdc.vpos", bb_hodotdc_clus_bar_tdc_vpos);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.id", &Ndata_bb_hodotdc_clus_id);
   fTree->SetBranchAddress("bb.hodotdc.clus.id", bb_hodotdc_clus_id);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.size", &Ndata_bb_hodotdc_clus_size);
   fTree->SetBranchAddress("bb.hodotdc.clus.size", bb_hodotdc_clus_size);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.tdiff", &Ndata_bb_hodotdc_clus_tdiff);
   fTree->SetBranchAddress("bb.hodotdc.clus.tdiff", bb_hodotdc_clus_tdiff);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.tmean", &Ndata_bb_hodotdc_clus_tmean);
   fTree->SetBranchAddress("bb.hodotdc.clus.tmean", bb_hodotdc_clus_tmean);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.totmean", &Ndata_bb_hodotdc_clus_totmean);
   fTree->SetBranchAddress("bb.hodotdc.clus.totmean", bb_hodotdc_clus_totmean);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.trackindex", &Ndata_bb_hodotdc_clus_trackindex);
   fTree->SetBranchAddress("bb.hodotdc.clus.trackindex", bb_hodotdc_clus_trackindex);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.xmean", &Ndata_bb_hodotdc_clus_xmean);
   fTree->SetBranchAddress("bb.hodotdc.clus.xmean", bb_hodotdc_clus_xmean);
   fTree->SetBranchAddress("Ndata.bb.hodotdc.clus.ymean", &Ndata_bb_hodotdc_clus_ymean);
   fTree->SetBranchAddress("bb.hodotdc.clus.ymean", bb_hodotdc_clus_ymean);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.atime", &Ndata_bb_ps_clus_atime);
   fTree->SetBranchAddress("bb.ps.clus.atime", bb_ps_clus_atime);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.col", &Ndata_bb_ps_clus_col);
   fTree->SetBranchAddress("bb.ps.clus.col", bb_ps_clus_col);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.e", &Ndata_bb_ps_clus_e);
   fTree->SetBranchAddress("bb.ps.clus.e", bb_ps_clus_e);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.e_c", &Ndata_bb_ps_clus_e_c);
   fTree->SetBranchAddress("bb.ps.clus.e_c", bb_ps_clus_e_c);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.eblk", &Ndata_bb_ps_clus_eblk);
   fTree->SetBranchAddress("bb.ps.clus.eblk", bb_ps_clus_eblk);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.eblk_c", &Ndata_bb_ps_clus_eblk_c);
   fTree->SetBranchAddress("bb.ps.clus.eblk_c", bb_ps_clus_eblk_c);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.id", &Ndata_bb_ps_clus_id);
   fTree->SetBranchAddress("bb.ps.clus.id", bb_ps_clus_id);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.nblk", &Ndata_bb_ps_clus_nblk);
   fTree->SetBranchAddress("bb.ps.clus.nblk", bb_ps_clus_nblk);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.row", &Ndata_bb_ps_clus_row);
   fTree->SetBranchAddress("bb.ps.clus.row", bb_ps_clus_row);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.tdctime", &Ndata_bb_ps_clus_tdctime);
   fTree->SetBranchAddress("bb.ps.clus.tdctime", bb_ps_clus_tdctime);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.x", &Ndata_bb_ps_clus_x);
   fTree->SetBranchAddress("bb.ps.clus.x", bb_ps_clus_x);
   fTree->SetBranchAddress("Ndata.bb.ps.clus.y", &Ndata_bb_ps_clus_y);
   fTree->SetBranchAddress("bb.ps.clus.y", bb_ps_clus_y);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.atime", &Ndata_bb_ps_clus_blk_atime);
   fTree->SetBranchAddress("bb.ps.clus_blk.atime", bb_ps_clus_blk_atime);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.col", &Ndata_bb_ps_clus_blk_col);
   fTree->SetBranchAddress("bb.ps.clus_blk.col", bb_ps_clus_blk_col);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.e", &Ndata_bb_ps_clus_blk_e);
   fTree->SetBranchAddress("bb.ps.clus_blk.e", bb_ps_clus_blk_e);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.e_c", &Ndata_bb_ps_clus_blk_e_c);
   fTree->SetBranchAddress("bb.ps.clus_blk.e_c", bb_ps_clus_blk_e_c);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.id", &Ndata_bb_ps_clus_blk_id);
   fTree->SetBranchAddress("bb.ps.clus_blk.id", bb_ps_clus_blk_id);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.row", &Ndata_bb_ps_clus_blk_row);
   fTree->SetBranchAddress("bb.ps.clus_blk.row", bb_ps_clus_blk_row);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.tdctime", &Ndata_bb_ps_clus_blk_tdctime);
   fTree->SetBranchAddress("bb.ps.clus_blk.tdctime", bb_ps_clus_blk_tdctime);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.x", &Ndata_bb_ps_clus_blk_x);
   fTree->SetBranchAddress("bb.ps.clus_blk.x", bb_ps_clus_blk_x);
   fTree->SetBranchAddress("Ndata.bb.ps.clus_blk.y", &Ndata_bb_ps_clus_blk_y);
   fTree->SetBranchAddress("bb.ps.clus_blk.y", bb_ps_clus_blk_y);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.atime", &Ndata_bb_sh_clus_atime);
   fTree->SetBranchAddress("bb.sh.clus.atime", bb_sh_clus_atime);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.col", &Ndata_bb_sh_clus_col);
   fTree->SetBranchAddress("bb.sh.clus.col", bb_sh_clus_col);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.e", &Ndata_bb_sh_clus_e);
   fTree->SetBranchAddress("bb.sh.clus.e", bb_sh_clus_e);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.e_c", &Ndata_bb_sh_clus_e_c);
   fTree->SetBranchAddress("bb.sh.clus.e_c", bb_sh_clus_e_c);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.eblk", &Ndata_bb_sh_clus_eblk);
   fTree->SetBranchAddress("bb.sh.clus.eblk", bb_sh_clus_eblk);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.eblk_c", &Ndata_bb_sh_clus_eblk_c);
   fTree->SetBranchAddress("bb.sh.clus.eblk_c", bb_sh_clus_eblk_c);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.id", &Ndata_bb_sh_clus_id);
   fTree->SetBranchAddress("bb.sh.clus.id", bb_sh_clus_id);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.nblk", &Ndata_bb_sh_clus_nblk);
   fTree->SetBranchAddress("bb.sh.clus.nblk", bb_sh_clus_nblk);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.row", &Ndata_bb_sh_clus_row);
   fTree->SetBranchAddress("bb.sh.clus.row", bb_sh_clus_row);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.tdctime", &Ndata_bb_sh_clus_tdctime);
   fTree->SetBranchAddress("bb.sh.clus.tdctime", bb_sh_clus_tdctime);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.x", &Ndata_bb_sh_clus_x);
   fTree->SetBranchAddress("bb.sh.clus.x", bb_sh_clus_x);
   fTree->SetBranchAddress("Ndata.bb.sh.clus.y", &Ndata_bb_sh_clus_y);
   fTree->SetBranchAddress("bb.sh.clus.y", bb_sh_clus_y);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.atime", &Ndata_bb_sh_clus_blk_atime);
   fTree->SetBranchAddress("bb.sh.clus_blk.atime", bb_sh_clus_blk_atime);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.col", &Ndata_bb_sh_clus_blk_col);
   fTree->SetBranchAddress("bb.sh.clus_blk.col", bb_sh_clus_blk_col);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.e", &Ndata_bb_sh_clus_blk_e);
   fTree->SetBranchAddress("bb.sh.clus_blk.e", bb_sh_clus_blk_e);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.e_c", &Ndata_bb_sh_clus_blk_e_c);
   fTree->SetBranchAddress("bb.sh.clus_blk.e_c", bb_sh_clus_blk_e_c);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.id", &Ndata_bb_sh_clus_blk_id);
   fTree->SetBranchAddress("bb.sh.clus_blk.id", bb_sh_clus_blk_id);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.row", &Ndata_bb_sh_clus_blk_row);
   fTree->SetBranchAddress("bb.sh.clus_blk.row", bb_sh_clus_blk_row);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.tdctime", &Ndata_bb_sh_clus_blk_tdctime);
   fTree->SetBranchAddress("bb.sh.clus_blk.tdctime", bb_sh_clus_blk_tdctime);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.x", &Ndata_bb_sh_clus_blk_x);
   fTree->SetBranchAddress("bb.sh.clus_blk.x", bb_sh_clus_blk_x);
   fTree->SetBranchAddress("Ndata.bb.sh.clus_blk.y", &Ndata_bb_sh_clus_blk_y);
   fTree->SetBranchAddress("bb.sh.clus_blk.y", bb_sh_clus_blk_y);
   fTree->SetBranchAddress("Ndata.bb.tdctrig.tdc", &Ndata_bb_tdctrig_tdc);
   fTree->SetBranchAddress("bb.tdctrig.tdc", bb_tdctrig_tdc);
   fTree->SetBranchAddress("Ndata.bb.tdctrig.tdcelemID", &Ndata_bb_tdctrig_tdcelemID);
   fTree->SetBranchAddress("bb.tdctrig.tdcelemID", bb_tdctrig_tdcelemID);
   fTree->SetBranchAddress("Ndata.bb.tr.beta", &Ndata_bb_tr_beta);
   fTree->SetBranchAddress("bb.tr.beta", bb_tr_beta);
   fTree->SetBranchAddress("Ndata.bb.tr.chi2", &Ndata_bb_tr_chi2);
   fTree->SetBranchAddress("bb.tr.chi2", bb_tr_chi2);
   fTree->SetBranchAddress("Ndata.bb.tr.d_ph", &Ndata_bb_tr_d_ph);
   fTree->SetBranchAddress("bb.tr.d_ph", bb_tr_d_ph);
   fTree->SetBranchAddress("Ndata.bb.tr.d_th", &Ndata_bb_tr_d_th);
   fTree->SetBranchAddress("bb.tr.d_th", bb_tr_d_th);
   fTree->SetBranchAddress("Ndata.bb.tr.d_x", &Ndata_bb_tr_d_x);
   fTree->SetBranchAddress("bb.tr.d_x", bb_tr_d_x);
   fTree->SetBranchAddress("Ndata.bb.tr.d_y", &Ndata_bb_tr_d_y);
   fTree->SetBranchAddress("bb.tr.d_y", bb_tr_d_y);
   fTree->SetBranchAddress("Ndata.bb.tr.dbeta", &Ndata_bb_tr_dbeta);
   fTree->SetBranchAddress("bb.tr.dbeta", bb_tr_dbeta);
   fTree->SetBranchAddress("Ndata.bb.tr.dtime", &Ndata_bb_tr_dtime);
   fTree->SetBranchAddress("bb.tr.dtime", bb_tr_dtime);
   fTree->SetBranchAddress("Ndata.bb.tr.flag", &Ndata_bb_tr_flag);
   fTree->SetBranchAddress("bb.tr.flag", bb_tr_flag);
   fTree->SetBranchAddress("Ndata.bb.tr.ndof", &Ndata_bb_tr_ndof);
   fTree->SetBranchAddress("bb.tr.ndof", bb_tr_ndof);
   fTree->SetBranchAddress("Ndata.bb.tr.p", &Ndata_bb_tr_p);
   fTree->SetBranchAddress("bb.tr.p", bb_tr_p);
   fTree->SetBranchAddress("Ndata.bb.tr.pathl", &Ndata_bb_tr_pathl);
   fTree->SetBranchAddress("bb.tr.pathl", bb_tr_pathl);
   fTree->SetBranchAddress("Ndata.bb.tr.ph", &Ndata_bb_tr_ph);
   fTree->SetBranchAddress("bb.tr.ph", bb_tr_ph);
   fTree->SetBranchAddress("Ndata.bb.tr.px", &Ndata_bb_tr_px);
   fTree->SetBranchAddress("bb.tr.px", bb_tr_px);
   fTree->SetBranchAddress("Ndata.bb.tr.py", &Ndata_bb_tr_py);
   fTree->SetBranchAddress("bb.tr.py", bb_tr_py);
   fTree->SetBranchAddress("Ndata.bb.tr.pz", &Ndata_bb_tr_pz);
   fTree->SetBranchAddress("bb.tr.pz", bb_tr_pz);
   fTree->SetBranchAddress("Ndata.bb.tr.r_ph", &Ndata_bb_tr_r_ph);
   fTree->SetBranchAddress("bb.tr.r_ph", bb_tr_r_ph);
   fTree->SetBranchAddress("Ndata.bb.tr.r_th", &Ndata_bb_tr_r_th);
   fTree->SetBranchAddress("bb.tr.r_th", bb_tr_r_th);
   fTree->SetBranchAddress("Ndata.bb.tr.r_x", &Ndata_bb_tr_r_x);
   fTree->SetBranchAddress("bb.tr.r_x", bb_tr_r_x);
   fTree->SetBranchAddress("Ndata.bb.tr.r_y", &Ndata_bb_tr_r_y);
   fTree->SetBranchAddress("bb.tr.r_y", bb_tr_r_y);
   fTree->SetBranchAddress("Ndata.bb.tr.tg_dp", &Ndata_bb_tr_tg_dp);
   fTree->SetBranchAddress("bb.tr.tg_dp", bb_tr_tg_dp);
   fTree->SetBranchAddress("Ndata.bb.tr.tg_ph", &Ndata_bb_tr_tg_ph);
   fTree->SetBranchAddress("bb.tr.tg_ph", bb_tr_tg_ph);
   fTree->SetBranchAddress("Ndata.bb.tr.tg_th", &Ndata_bb_tr_tg_th);
   fTree->SetBranchAddress("bb.tr.tg_th", bb_tr_tg_th);
   fTree->SetBranchAddress("Ndata.bb.tr.tg_x", &Ndata_bb_tr_tg_x);
   fTree->SetBranchAddress("bb.tr.tg_x", bb_tr_tg_x);
   fTree->SetBranchAddress("Ndata.bb.tr.tg_y", &Ndata_bb_tr_tg_y);
   fTree->SetBranchAddress("bb.tr.tg_y", bb_tr_tg_y);
   fTree->SetBranchAddress("Ndata.bb.tr.th", &Ndata_bb_tr_th);
   fTree->SetBranchAddress("bb.tr.th", bb_tr_th);
   fTree->SetBranchAddress("Ndata.bb.tr.time", &Ndata_bb_tr_time);
   fTree->SetBranchAddress("bb.tr.time", bb_tr_time);
   fTree->SetBranchAddress("Ndata.bb.tr.vx", &Ndata_bb_tr_vx);
   fTree->SetBranchAddress("bb.tr.vx", bb_tr_vx);
   fTree->SetBranchAddress("Ndata.bb.tr.vy", &Ndata_bb_tr_vy);
   fTree->SetBranchAddress("bb.tr.vy", bb_tr_vy);
   fTree->SetBranchAddress("Ndata.bb.tr.vz", &Ndata_bb_tr_vz);
   fTree->SetBranchAddress("bb.tr.vz", bb_tr_vz);
   fTree->SetBranchAddress("Ndata.bb.tr.x", &Ndata_bb_tr_x);
   fTree->SetBranchAddress("bb.tr.x", bb_tr_x);
   fTree->SetBranchAddress("Ndata.bb.tr.y", &Ndata_bb_tr_y);
   fTree->SetBranchAddress("bb.tr.y", bb_tr_y);
   fTree->SetBranchAddress("Ndata.bb.x_bcp", &Ndata_bb_x_bcp);
   fTree->SetBranchAddress("bb.x_bcp", bb_x_bcp);
   fTree->SetBranchAddress("Ndata.bb.x_fcp", &Ndata_bb_x_fcp);
   fTree->SetBranchAddress("bb.x_fcp", bb_x_fcp);
   fTree->SetBranchAddress("Ndata.bb.y_bcp", &Ndata_bb_y_bcp);
   fTree->SetBranchAddress("bb.y_bcp", bb_y_bcp);
   fTree->SetBranchAddress("Ndata.bb.y_fcp", &Ndata_bb_y_fcp);
   fTree->SetBranchAddress("bb.y_fcp", bb_y_fcp);
   fTree->SetBranchAddress("Ndata.bb.z_bcp", &Ndata_bb_z_bcp);
   fTree->SetBranchAddress("bb.z_bcp", bb_z_bcp);
   fTree->SetBranchAddress("Ndata.bb.z_fcp", &Ndata_bb_z_fcp);
   fTree->SetBranchAddress("bb.z_fcp", bb_z_fcp);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.atime", &Ndata_sbs_hcal_clus_atime);
   fTree->SetBranchAddress("sbs.hcal.clus.atime", sbs_hcal_clus_atime);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.col", &Ndata_sbs_hcal_clus_col);
   fTree->SetBranchAddress("sbs.hcal.clus.col", sbs_hcal_clus_col);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.e", &Ndata_sbs_hcal_clus_e);
   fTree->SetBranchAddress("sbs.hcal.clus.e", sbs_hcal_clus_e);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.e_c", &Ndata_sbs_hcal_clus_e_c);
   fTree->SetBranchAddress("sbs.hcal.clus.e_c", sbs_hcal_clus_e_c);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.eblk", &Ndata_sbs_hcal_clus_eblk);
   fTree->SetBranchAddress("sbs.hcal.clus.eblk", sbs_hcal_clus_eblk);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.eblk_c", &Ndata_sbs_hcal_clus_eblk_c);
   fTree->SetBranchAddress("sbs.hcal.clus.eblk_c", sbs_hcal_clus_eblk_c);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.id", &Ndata_sbs_hcal_clus_id);
   fTree->SetBranchAddress("sbs.hcal.clus.id", sbs_hcal_clus_id);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.nblk", &Ndata_sbs_hcal_clus_nblk);
   fTree->SetBranchAddress("sbs.hcal.clus.nblk", sbs_hcal_clus_nblk);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.row", &Ndata_sbs_hcal_clus_row);
   fTree->SetBranchAddress("sbs.hcal.clus.row", sbs_hcal_clus_row);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.tdctime", &Ndata_sbs_hcal_clus_tdctime);
   fTree->SetBranchAddress("sbs.hcal.clus.tdctime", sbs_hcal_clus_tdctime);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.x", &Ndata_sbs_hcal_clus_x);
   fTree->SetBranchAddress("sbs.hcal.clus.x", sbs_hcal_clus_x);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus.y", &Ndata_sbs_hcal_clus_y);
   fTree->SetBranchAddress("sbs.hcal.clus.y", sbs_hcal_clus_y);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.atime", &Ndata_sbs_hcal_clus_blk_atime);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.atime", sbs_hcal_clus_blk_atime);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.col", &Ndata_sbs_hcal_clus_blk_col);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.col", sbs_hcal_clus_blk_col);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.e", &Ndata_sbs_hcal_clus_blk_e);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.e", sbs_hcal_clus_blk_e);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.e_c", &Ndata_sbs_hcal_clus_blk_e_c);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.e_c", sbs_hcal_clus_blk_e_c);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.id", &Ndata_sbs_hcal_clus_blk_id);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.id", sbs_hcal_clus_blk_id);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.row", &Ndata_sbs_hcal_clus_blk_row);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.row", sbs_hcal_clus_blk_row);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.tdctime", &Ndata_sbs_hcal_clus_blk_tdctime);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.tdctime", sbs_hcal_clus_blk_tdctime);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.x", &Ndata_sbs_hcal_clus_blk_x);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.x", sbs_hcal_clus_blk_x);
   fTree->SetBranchAddress("Ndata.sbs.hcal.clus_blk.y", &Ndata_sbs_hcal_clus_blk_y);
   fTree->SetBranchAddress("sbs.hcal.clus_blk.y", sbs_hcal_clus_blk_y);
   fTree->SetBranchAddress("BB.gold.beta", &BB_gold_beta);
   fTree->SetBranchAddress("BB.gold.dp", &BB_gold_dp);
   fTree->SetBranchAddress("BB.gold.index", &BB_gold_index);
   fTree->SetBranchAddress("BB.gold.ok", &BB_gold_ok);
   fTree->SetBranchAddress("BB.gold.p", &BB_gold_p);
   fTree->SetBranchAddress("BB.gold.ph", &BB_gold_ph);
   fTree->SetBranchAddress("BB.gold.px", &BB_gold_px);
   fTree->SetBranchAddress("BB.gold.py", &BB_gold_py);
   fTree->SetBranchAddress("BB.gold.pz", &BB_gold_pz);
   fTree->SetBranchAddress("BB.gold.th", &BB_gold_th);
   fTree->SetBranchAddress("BB.gold.x", &BB_gold_x);
   fTree->SetBranchAddress("BB.gold.y", &BB_gold_y);
   fTree->SetBranchAddress("Lrb.BPMA.rawcur.1", &Lrb_BPMA_rawcur_1);
   fTree->SetBranchAddress("Lrb.BPMA.rawcur.2", &Lrb_BPMA_rawcur_2);
   fTree->SetBranchAddress("Lrb.BPMA.rawcur.3", &Lrb_BPMA_rawcur_3);
   fTree->SetBranchAddress("Lrb.BPMA.rawcur.4", &Lrb_BPMA_rawcur_4);
   fTree->SetBranchAddress("Lrb.BPMA.rotpos1", &Lrb_BPMA_rotpos1);
   fTree->SetBranchAddress("Lrb.BPMA.rotpos2", &Lrb_BPMA_rotpos2);
   fTree->SetBranchAddress("Lrb.BPMA.x", &Lrb_BPMA_x);
   fTree->SetBranchAddress("Lrb.BPMA.y", &Lrb_BPMA_y);
   fTree->SetBranchAddress("Lrb.BPMA.z", &Lrb_BPMA_z);
   fTree->SetBranchAddress("Lrb.BPMB.rawcur.1", &Lrb_BPMB_rawcur_1);
   fTree->SetBranchAddress("Lrb.BPMB.rawcur.2", &Lrb_BPMB_rawcur_2);
   fTree->SetBranchAddress("Lrb.BPMB.rawcur.3", &Lrb_BPMB_rawcur_3);
   fTree->SetBranchAddress("Lrb.BPMB.rawcur.4", &Lrb_BPMB_rawcur_4);
   fTree->SetBranchAddress("Lrb.BPMB.rotpos1", &Lrb_BPMB_rotpos1);
   fTree->SetBranchAddress("Lrb.BPMB.rotpos2", &Lrb_BPMB_rotpos2);
   fTree->SetBranchAddress("Lrb.BPMB.x", &Lrb_BPMB_x);
   fTree->SetBranchAddress("Lrb.BPMB.y", &Lrb_BPMB_y);
   fTree->SetBranchAddress("Lrb.BPMB.z", &Lrb_BPMB_z);
   fTree->SetBranchAddress("Lrb.Raster.bpma.x", &Lrb_Raster_bpma_x);
   fTree->SetBranchAddress("Lrb.Raster.bpma.y", &Lrb_Raster_bpma_y);
   fTree->SetBranchAddress("Lrb.Raster.bpma.z", &Lrb_Raster_bpma_z);
   fTree->SetBranchAddress("Lrb.Raster.bpmb.x", &Lrb_Raster_bpmb_x);
   fTree->SetBranchAddress("Lrb.Raster.bpmb.y", &Lrb_Raster_bpmb_y);
   fTree->SetBranchAddress("Lrb.Raster.bpmb.z", &Lrb_Raster_bpmb_z);
   fTree->SetBranchAddress("Lrb.Raster.rawcur.x", &Lrb_Raster_rawcur_x);
   fTree->SetBranchAddress("Lrb.Raster.rawcur.y", &Lrb_Raster_rawcur_y);
   fTree->SetBranchAddress("Lrb.Raster.rawslope.x", &Lrb_Raster_rawslope_x);
   fTree->SetBranchAddress("Lrb.Raster.rawslope.y", &Lrb_Raster_rawslope_y);
   fTree->SetBranchAddress("Lrb.Raster.target.dir.x", &Lrb_Raster_target_dir_x);
   fTree->SetBranchAddress("Lrb.Raster.target.dir.y", &Lrb_Raster_target_dir_y);
   fTree->SetBranchAddress("Lrb.Raster.target.dir.z", &Lrb_Raster_target_dir_z);
   fTree->SetBranchAddress("Lrb.Raster.target.x", &Lrb_Raster_target_x);
   fTree->SetBranchAddress("Lrb.Raster.target.y", &Lrb_Raster_target_y);
   fTree->SetBranchAddress("Lrb.Raster.target.z", &Lrb_Raster_target_z);
   fTree->SetBranchAddress("Lrb.Raster2.bpma.x", &Lrb_Raster2_bpma_x);
   fTree->SetBranchAddress("Lrb.Raster2.bpma.y", &Lrb_Raster2_bpma_y);
   fTree->SetBranchAddress("Lrb.Raster2.bpma.z", &Lrb_Raster2_bpma_z);
   fTree->SetBranchAddress("Lrb.Raster2.bpmb.x", &Lrb_Raster2_bpmb_x);
   fTree->SetBranchAddress("Lrb.Raster2.bpmb.y", &Lrb_Raster2_bpmb_y);
   fTree->SetBranchAddress("Lrb.Raster2.bpmb.z", &Lrb_Raster2_bpmb_z);
   fTree->SetBranchAddress("Lrb.Raster2.rawcur.x", &Lrb_Raster2_rawcur_x);
   fTree->SetBranchAddress("Lrb.Raster2.rawcur.y", &Lrb_Raster2_rawcur_y);
   fTree->SetBranchAddress("Lrb.Raster2.rawslope.x", &Lrb_Raster2_rawslope_x);
   fTree->SetBranchAddress("Lrb.Raster2.rawslope.y", &Lrb_Raster2_rawslope_y);
   fTree->SetBranchAddress("Lrb.Raster2.target.dir.x", &Lrb_Raster2_target_dir_x);
   fTree->SetBranchAddress("Lrb.Raster2.target.dir.y", &Lrb_Raster2_target_dir_y);
   fTree->SetBranchAddress("Lrb.Raster2.target.dir.z", &Lrb_Raster2_target_dir_z);
   fTree->SetBranchAddress("Lrb.Raster2.target.x", &Lrb_Raster2_target_x);
   fTree->SetBranchAddress("Lrb.Raster2.target.y", &Lrb_Raster2_target_y);
   fTree->SetBranchAddress("Lrb.Raster2.target.z", &Lrb_Raster2_target_z);
   fTree->SetBranchAddress("Lrb.dir.x", &Lrb_dir_x);
   fTree->SetBranchAddress("Lrb.dir.y", &Lrb_dir_y);
   fTree->SetBranchAddress("Lrb.dir.z", &Lrb_dir_z);
   fTree->SetBranchAddress("Lrb.e", &Lrb_e);
   fTree->SetBranchAddress("Lrb.ok", &Lrb_ok);
   fTree->SetBranchAddress("Lrb.p", &Lrb_p);
   fTree->SetBranchAddress("Lrb.ph", &Lrb_ph);
   fTree->SetBranchAddress("Lrb.pol", &Lrb_pol);
   fTree->SetBranchAddress("Lrb.px", &Lrb_px);
   fTree->SetBranchAddress("Lrb.py", &Lrb_py);
   fTree->SetBranchAddress("Lrb.pz", &Lrb_pz);
   fTree->SetBranchAddress("Lrb.th", &Lrb_th);
   fTree->SetBranchAddress("Lrb.x", &Lrb_x);
   fTree->SetBranchAddress("Lrb.xpos", &Lrb_xpos);
   fTree->SetBranchAddress("Lrb.y", &Lrb_y);
   fTree->SetBranchAddress("Lrb.ypos", &Lrb_ypos);
   fTree->SetBranchAddress("Lrb.z", &Lrb_z);
   fTree->SetBranchAddress("Lrb.zpos", &Lrb_zpos);
   fTree->SetBranchAddress("SBSrb.BPMA.rawcur.1", &SBSrb_BPMA_rawcur_1);
   fTree->SetBranchAddress("SBSrb.BPMA.rawcur.2", &SBSrb_BPMA_rawcur_2);
   fTree->SetBranchAddress("SBSrb.BPMA.rawcur.3", &SBSrb_BPMA_rawcur_3);
   fTree->SetBranchAddress("SBSrb.BPMA.rawcur.4", &SBSrb_BPMA_rawcur_4);
   fTree->SetBranchAddress("SBSrb.BPMA.rotpos1", &SBSrb_BPMA_rotpos1);
   fTree->SetBranchAddress("SBSrb.BPMA.rotpos2", &SBSrb_BPMA_rotpos2);
   fTree->SetBranchAddress("SBSrb.BPMA.x", &SBSrb_BPMA_x);
   fTree->SetBranchAddress("SBSrb.BPMA.y", &SBSrb_BPMA_y);
   fTree->SetBranchAddress("SBSrb.BPMA.z", &SBSrb_BPMA_z);
   fTree->SetBranchAddress("SBSrb.BPMB.rawcur.1", &SBSrb_BPMB_rawcur_1);
   fTree->SetBranchAddress("SBSrb.BPMB.rawcur.2", &SBSrb_BPMB_rawcur_2);
   fTree->SetBranchAddress("SBSrb.BPMB.rawcur.3", &SBSrb_BPMB_rawcur_3);
   fTree->SetBranchAddress("SBSrb.BPMB.rawcur.4", &SBSrb_BPMB_rawcur_4);
   fTree->SetBranchAddress("SBSrb.BPMB.rotpos1", &SBSrb_BPMB_rotpos1);
   fTree->SetBranchAddress("SBSrb.BPMB.rotpos2", &SBSrb_BPMB_rotpos2);
   fTree->SetBranchAddress("SBSrb.BPMB.x", &SBSrb_BPMB_x);
   fTree->SetBranchAddress("SBSrb.BPMB.y", &SBSrb_BPMB_y);
   fTree->SetBranchAddress("SBSrb.BPMB.z", &SBSrb_BPMB_z);
   fTree->SetBranchAddress("SBSrb.Raster.bpma.x", &SBSrb_Raster_bpma_x);
   fTree->SetBranchAddress("SBSrb.Raster.bpma.y", &SBSrb_Raster_bpma_y);
   fTree->SetBranchAddress("SBSrb.Raster.bpma.z", &SBSrb_Raster_bpma_z);
   fTree->SetBranchAddress("SBSrb.Raster.bpmb.x", &SBSrb_Raster_bpmb_x);
   fTree->SetBranchAddress("SBSrb.Raster.bpmb.y", &SBSrb_Raster_bpmb_y);
   fTree->SetBranchAddress("SBSrb.Raster.bpmb.z", &SBSrb_Raster_bpmb_z);
   fTree->SetBranchAddress("SBSrb.Raster.rawcur.x", &SBSrb_Raster_rawcur_x);
   fTree->SetBranchAddress("SBSrb.Raster.rawcur.y", &SBSrb_Raster_rawcur_y);
   fTree->SetBranchAddress("SBSrb.Raster.rawslope.x", &SBSrb_Raster_rawslope_x);
   fTree->SetBranchAddress("SBSrb.Raster.rawslope.y", &SBSrb_Raster_rawslope_y);
   fTree->SetBranchAddress("SBSrb.Raster.target.dir.x", &SBSrb_Raster_target_dir_x);
   fTree->SetBranchAddress("SBSrb.Raster.target.dir.y", &SBSrb_Raster_target_dir_y);
   fTree->SetBranchAddress("SBSrb.Raster.target.dir.z", &SBSrb_Raster_target_dir_z);
   fTree->SetBranchAddress("SBSrb.Raster.target.x", &SBSrb_Raster_target_x);
   fTree->SetBranchAddress("SBSrb.Raster.target.y", &SBSrb_Raster_target_y);
   fTree->SetBranchAddress("SBSrb.Raster.target.z", &SBSrb_Raster_target_z);
   fTree->SetBranchAddress("SBSrb.Raster2.bpma.x", &SBSrb_Raster2_bpma_x);
   fTree->SetBranchAddress("SBSrb.Raster2.bpma.y", &SBSrb_Raster2_bpma_y);
   fTree->SetBranchAddress("SBSrb.Raster2.bpma.z", &SBSrb_Raster2_bpma_z);
   fTree->SetBranchAddress("SBSrb.Raster2.bpmb.x", &SBSrb_Raster2_bpmb_x);
   fTree->SetBranchAddress("SBSrb.Raster2.bpmb.y", &SBSrb_Raster2_bpmb_y);
   fTree->SetBranchAddress("SBSrb.Raster2.bpmb.z", &SBSrb_Raster2_bpmb_z);
   fTree->SetBranchAddress("SBSrb.Raster2.rawcur.x", &SBSrb_Raster2_rawcur_x);
   fTree->SetBranchAddress("SBSrb.Raster2.rawcur.y", &SBSrb_Raster2_rawcur_y);
   fTree->SetBranchAddress("SBSrb.Raster2.rawslope.x", &SBSrb_Raster2_rawslope_x);
   fTree->SetBranchAddress("SBSrb.Raster2.rawslope.y", &SBSrb_Raster2_rawslope_y);
   fTree->SetBranchAddress("SBSrb.Raster2.target.dir.x", &SBSrb_Raster2_target_dir_x);
   fTree->SetBranchAddress("SBSrb.Raster2.target.dir.y", &SBSrb_Raster2_target_dir_y);
   fTree->SetBranchAddress("SBSrb.Raster2.target.dir.z", &SBSrb_Raster2_target_dir_z);
   fTree->SetBranchAddress("SBSrb.Raster2.target.x", &SBSrb_Raster2_target_x);
   fTree->SetBranchAddress("SBSrb.Raster2.target.y", &SBSrb_Raster2_target_y);
   fTree->SetBranchAddress("SBSrb.Raster2.target.z", &SBSrb_Raster2_target_z);
   fTree->SetBranchAddress("SBSrb.dir.x", &SBSrb_dir_x);
   fTree->SetBranchAddress("SBSrb.dir.y", &SBSrb_dir_y);
   fTree->SetBranchAddress("SBSrb.dir.z", &SBSrb_dir_z);
   fTree->SetBranchAddress("SBSrb.e", &SBSrb_e);
   fTree->SetBranchAddress("SBSrb.ok", &SBSrb_ok);
   fTree->SetBranchAddress("SBSrb.p", &SBSrb_p);
   fTree->SetBranchAddress("SBSrb.ph", &SBSrb_ph);
   fTree->SetBranchAddress("SBSrb.pol", &SBSrb_pol);
   fTree->SetBranchAddress("SBSrb.px", &SBSrb_px);
   fTree->SetBranchAddress("SBSrb.py", &SBSrb_py);
   fTree->SetBranchAddress("SBSrb.pz", &SBSrb_pz);
   fTree->SetBranchAddress("SBSrb.th", &SBSrb_th);
   fTree->SetBranchAddress("SBSrb.x", &SBSrb_x);
   fTree->SetBranchAddress("SBSrb.xpos", &SBSrb_xpos);
   fTree->SetBranchAddress("SBSrb.y", &SBSrb_y);
   fTree->SetBranchAddress("SBSrb.ypos", &SBSrb_ypos);
   fTree->SetBranchAddress("SBSrb.z", &SBSrb_z);
   fTree->SetBranchAddress("SBSrb.zpos", &SBSrb_zpos);
   fTree->SetBranchAddress("bb.gem.hit.ngoodhits", &bb_gem_hit_ngoodhits);
   fTree->SetBranchAddress("bb.gem.m0.clust.nclustu", &bb_gem_m0_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m0.clust.nclustu_tot", &bb_gem_m0_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m0.clust.nclustv", &bb_gem_m0_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m0.clust.nclustv_tot", &bb_gem_m0_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m0.strip.nstrips_keep", &bb_gem_m0_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m0.strip.nstrips_keepU", &bb_gem_m0_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m0.strip.nstrips_keepV", &bb_gem_m0_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m0.strip.nstrips_keep_lmax", &bb_gem_m0_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m0.strip.nstrips_keep_lmaxU", &bb_gem_m0_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m0.strip.nstrips_keep_lmaxV", &bb_gem_m0_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m0.strip.nstripsfired", &bb_gem_m0_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m1.clust.nclustu", &bb_gem_m1_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m1.clust.nclustu_tot", &bb_gem_m1_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m1.clust.nclustv", &bb_gem_m1_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m1.clust.nclustv_tot", &bb_gem_m1_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m1.strip.nstrips_keep", &bb_gem_m1_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m1.strip.nstrips_keepU", &bb_gem_m1_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m1.strip.nstrips_keepV", &bb_gem_m1_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m1.strip.nstrips_keep_lmax", &bb_gem_m1_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m1.strip.nstrips_keep_lmaxU", &bb_gem_m1_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m1.strip.nstrips_keep_lmaxV", &bb_gem_m1_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m1.strip.nstripsfired", &bb_gem_m1_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m10.clust.nclustu", &bb_gem_m10_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m10.clust.nclustu_tot", &bb_gem_m10_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m10.clust.nclustv", &bb_gem_m10_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m10.clust.nclustv_tot", &bb_gem_m10_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m10.strip.nstrips_keep", &bb_gem_m10_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m10.strip.nstrips_keepU", &bb_gem_m10_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m10.strip.nstrips_keepV", &bb_gem_m10_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m10.strip.nstrips_keep_lmax", &bb_gem_m10_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m10.strip.nstrips_keep_lmaxU", &bb_gem_m10_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m10.strip.nstrips_keep_lmaxV", &bb_gem_m10_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m10.strip.nstripsfired", &bb_gem_m10_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m11.clust.nclustu", &bb_gem_m11_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m11.clust.nclustu_tot", &bb_gem_m11_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m11.clust.nclustv", &bb_gem_m11_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m11.clust.nclustv_tot", &bb_gem_m11_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m11.strip.nstrips_keep", &bb_gem_m11_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m11.strip.nstrips_keepU", &bb_gem_m11_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m11.strip.nstrips_keepV", &bb_gem_m11_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m11.strip.nstrips_keep_lmax", &bb_gem_m11_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m11.strip.nstrips_keep_lmaxU", &bb_gem_m11_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m11.strip.nstrips_keep_lmaxV", &bb_gem_m11_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m11.strip.nstripsfired", &bb_gem_m11_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m2.clust.nclustu", &bb_gem_m2_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m2.clust.nclustu_tot", &bb_gem_m2_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m2.clust.nclustv", &bb_gem_m2_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m2.clust.nclustv_tot", &bb_gem_m2_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m2.strip.nstrips_keep", &bb_gem_m2_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m2.strip.nstrips_keepU", &bb_gem_m2_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m2.strip.nstrips_keepV", &bb_gem_m2_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m2.strip.nstrips_keep_lmax", &bb_gem_m2_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m2.strip.nstrips_keep_lmaxU", &bb_gem_m2_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m2.strip.nstrips_keep_lmaxV", &bb_gem_m2_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m2.strip.nstripsfired", &bb_gem_m2_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m3.clust.nclustu", &bb_gem_m3_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m3.clust.nclustu_tot", &bb_gem_m3_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m3.clust.nclustv", &bb_gem_m3_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m3.clust.nclustv_tot", &bb_gem_m3_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m3.strip.nstrips_keep", &bb_gem_m3_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m3.strip.nstrips_keepU", &bb_gem_m3_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m3.strip.nstrips_keepV", &bb_gem_m3_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m3.strip.nstrips_keep_lmax", &bb_gem_m3_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m3.strip.nstrips_keep_lmaxU", &bb_gem_m3_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m3.strip.nstrips_keep_lmaxV", &bb_gem_m3_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m3.strip.nstripsfired", &bb_gem_m3_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m4.clust.nclustu", &bb_gem_m4_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m4.clust.nclustu_tot", &bb_gem_m4_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m4.clust.nclustv", &bb_gem_m4_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m4.clust.nclustv_tot", &bb_gem_m4_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m4.strip.nstrips_keep", &bb_gem_m4_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m4.strip.nstrips_keepU", &bb_gem_m4_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m4.strip.nstrips_keepV", &bb_gem_m4_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m4.strip.nstrips_keep_lmax", &bb_gem_m4_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m4.strip.nstrips_keep_lmaxU", &bb_gem_m4_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m4.strip.nstrips_keep_lmaxV", &bb_gem_m4_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m4.strip.nstripsfired", &bb_gem_m4_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m5.clust.nclustu", &bb_gem_m5_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m5.clust.nclustu_tot", &bb_gem_m5_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m5.clust.nclustv", &bb_gem_m5_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m5.clust.nclustv_tot", &bb_gem_m5_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m5.strip.nstrips_keep", &bb_gem_m5_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m5.strip.nstrips_keepU", &bb_gem_m5_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m5.strip.nstrips_keepV", &bb_gem_m5_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m5.strip.nstrips_keep_lmax", &bb_gem_m5_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m5.strip.nstrips_keep_lmaxU", &bb_gem_m5_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m5.strip.nstrips_keep_lmaxV", &bb_gem_m5_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m5.strip.nstripsfired", &bb_gem_m5_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m6.clust.nclustu", &bb_gem_m6_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m6.clust.nclustu_tot", &bb_gem_m6_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m6.clust.nclustv", &bb_gem_m6_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m6.clust.nclustv_tot", &bb_gem_m6_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m6.strip.nstrips_keep", &bb_gem_m6_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m6.strip.nstrips_keepU", &bb_gem_m6_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m6.strip.nstrips_keepV", &bb_gem_m6_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m6.strip.nstrips_keep_lmax", &bb_gem_m6_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m6.strip.nstrips_keep_lmaxU", &bb_gem_m6_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m6.strip.nstrips_keep_lmaxV", &bb_gem_m6_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m6.strip.nstripsfired", &bb_gem_m6_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m7.clust.nclustu", &bb_gem_m7_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m7.clust.nclustu_tot", &bb_gem_m7_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m7.clust.nclustv", &bb_gem_m7_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m7.clust.nclustv_tot", &bb_gem_m7_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m7.strip.nstrips_keep", &bb_gem_m7_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m7.strip.nstrips_keepU", &bb_gem_m7_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m7.strip.nstrips_keepV", &bb_gem_m7_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m7.strip.nstrips_keep_lmax", &bb_gem_m7_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m7.strip.nstrips_keep_lmaxU", &bb_gem_m7_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m7.strip.nstrips_keep_lmaxV", &bb_gem_m7_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m7.strip.nstripsfired", &bb_gem_m7_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m8.clust.nclustu", &bb_gem_m8_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m8.clust.nclustu_tot", &bb_gem_m8_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m8.clust.nclustv", &bb_gem_m8_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m8.clust.nclustv_tot", &bb_gem_m8_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m8.strip.nstrips_keep", &bb_gem_m8_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m8.strip.nstrips_keepU", &bb_gem_m8_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m8.strip.nstrips_keepV", &bb_gem_m8_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m8.strip.nstrips_keep_lmax", &bb_gem_m8_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m8.strip.nstrips_keep_lmaxU", &bb_gem_m8_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m8.strip.nstrips_keep_lmaxV", &bb_gem_m8_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m8.strip.nstripsfired", &bb_gem_m8_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.m9.clust.nclustu", &bb_gem_m9_clust_nclustu);
   fTree->SetBranchAddress("bb.gem.m9.clust.nclustu_tot", &bb_gem_m9_clust_nclustu_tot);
   fTree->SetBranchAddress("bb.gem.m9.clust.nclustv", &bb_gem_m9_clust_nclustv);
   fTree->SetBranchAddress("bb.gem.m9.clust.nclustv_tot", &bb_gem_m9_clust_nclustv_tot);
   fTree->SetBranchAddress("bb.gem.m9.strip.nstrips_keep", &bb_gem_m9_strip_nstrips_keep);
   fTree->SetBranchAddress("bb.gem.m9.strip.nstrips_keepU", &bb_gem_m9_strip_nstrips_keepU);
   fTree->SetBranchAddress("bb.gem.m9.strip.nstrips_keepV", &bb_gem_m9_strip_nstrips_keepV);
   fTree->SetBranchAddress("bb.gem.m9.strip.nstrips_keep_lmax", &bb_gem_m9_strip_nstrips_keep_lmax);
   fTree->SetBranchAddress("bb.gem.m9.strip.nstrips_keep_lmaxU", &bb_gem_m9_strip_nstrips_keep_lmaxU);
   fTree->SetBranchAddress("bb.gem.m9.strip.nstrips_keep_lmaxV", &bb_gem_m9_strip_nstrips_keep_lmaxV);
   fTree->SetBranchAddress("bb.gem.m9.strip.nstripsfired", &bb_gem_m9_strip_nstripsfired);
   fTree->SetBranchAddress("bb.gem.nlayershit", &bb_gem_nlayershit);
   fTree->SetBranchAddress("bb.gem.nlayershitu", &bb_gem_nlayershitu);
   fTree->SetBranchAddress("bb.gem.nlayershituv", &bb_gem_nlayershituv);
   fTree->SetBranchAddress("bb.gem.nlayershitv", &bb_gem_nlayershitv);
   fTree->SetBranchAddress("bb.gem.track.besttrack", &bb_gem_track_besttrack);
   fTree->SetBranchAddress("bb.gem.track.ntrack", &bb_gem_track_ntrack);
   fTree->SetBranchAddress("bb.grinch_tdc.ngoodhits", &bb_grinch_tdc_ngoodhits);
   fTree->SetBranchAddress("bb.hodotdc.nclus", &bb_hodotdc_nclus);
   fTree->SetBranchAddress("bb.ps.atimeblk", &bb_ps_atimeblk);
   fTree->SetBranchAddress("bb.ps.colblk", &bb_ps_colblk);
   fTree->SetBranchAddress("bb.ps.e", &bb_ps_e);
   fTree->SetBranchAddress("bb.ps.e_c", &bb_ps_e_c);
   fTree->SetBranchAddress("bb.ps.eblk", &bb_ps_eblk);
   fTree->SetBranchAddress("bb.ps.eblk_c", &bb_ps_eblk_c);
   fTree->SetBranchAddress("bb.ps.idblk", &bb_ps_idblk);
   fTree->SetBranchAddress("bb.ps.index", &bb_ps_index);
   fTree->SetBranchAddress("bb.ps.nblk", &bb_ps_nblk);
   fTree->SetBranchAddress("bb.ps.nclus", &bb_ps_nclus);
   fTree->SetBranchAddress("bb.ps.ngoodADChits", &bb_ps_ngoodADChits);
   fTree->SetBranchAddress("bb.ps.rowblk", &bb_ps_rowblk);
   fTree->SetBranchAddress("bb.ps.x", &bb_ps_x);
   fTree->SetBranchAddress("bb.ps.y", &bb_ps_y);
   fTree->SetBranchAddress("bb.sh.atimeblk", &bb_sh_atimeblk);
   fTree->SetBranchAddress("bb.sh.colblk", &bb_sh_colblk);
   fTree->SetBranchAddress("bb.sh.e", &bb_sh_e);
   fTree->SetBranchAddress("bb.sh.e_c", &bb_sh_e_c);
   fTree->SetBranchAddress("bb.sh.eblk", &bb_sh_eblk);
   fTree->SetBranchAddress("bb.sh.eblk_c", &bb_sh_eblk_c);
   fTree->SetBranchAddress("bb.sh.idblk", &bb_sh_idblk);
   fTree->SetBranchAddress("bb.sh.index", &bb_sh_index);
   fTree->SetBranchAddress("bb.sh.nblk", &bb_sh_nblk);
   fTree->SetBranchAddress("bb.sh.nclus", &bb_sh_nclus);
   fTree->SetBranchAddress("bb.sh.ngoodADChits", &bb_sh_ngoodADChits);
   fTree->SetBranchAddress("bb.sh.rowblk", &bb_sh_rowblk);
   fTree->SetBranchAddress("bb.sh.x", &bb_sh_x);
   fTree->SetBranchAddress("bb.sh.y", &bb_sh_y);
   fTree->SetBranchAddress("bb.tr.n", &bb_tr_n);
   fTree->SetBranchAddress("bb.ts.over_threshold", &bb_ts_over_threshold);
   fTree->SetBranchAddress("e.kine.Q2", &e_kine_Q2);
   fTree->SetBranchAddress("e.kine.W2", &e_kine_W2);
   fTree->SetBranchAddress("e.kine.angle", &e_kine_angle);
   fTree->SetBranchAddress("e.kine.epsilon", &e_kine_epsilon);
   fTree->SetBranchAddress("e.kine.nu", &e_kine_nu);
   fTree->SetBranchAddress("e.kine.omega", &e_kine_omega);
   fTree->SetBranchAddress("e.kine.ph_q", &e_kine_ph_q);
   fTree->SetBranchAddress("e.kine.q3m", &e_kine_q3m);
   fTree->SetBranchAddress("e.kine.q_x", &e_kine_q_x);
   fTree->SetBranchAddress("e.kine.q_y", &e_kine_q_y);
   fTree->SetBranchAddress("e.kine.q_z", &e_kine_q_z);
   fTree->SetBranchAddress("e.kine.th_q", &e_kine_th_q);
   fTree->SetBranchAddress("e.kine.x_bj", &e_kine_x_bj);
   fTree->SetBranchAddress("sbs.hcal.atimeblk", &sbs_hcal_atimeblk);
   fTree->SetBranchAddress("sbs.hcal.colblk", &sbs_hcal_colblk);
   fTree->SetBranchAddress("sbs.hcal.e", &sbs_hcal_e);
   fTree->SetBranchAddress("sbs.hcal.e_c", &sbs_hcal_e_c);
   fTree->SetBranchAddress("sbs.hcal.eblk", &sbs_hcal_eblk);
   fTree->SetBranchAddress("sbs.hcal.eblk_c", &sbs_hcal_eblk_c);
   fTree->SetBranchAddress("sbs.hcal.idblk", &sbs_hcal_idblk);
   fTree->SetBranchAddress("sbs.hcal.index", &sbs_hcal_index);
   fTree->SetBranchAddress("sbs.hcal.nblk", &sbs_hcal_nblk);
   fTree->SetBranchAddress("sbs.hcal.nclus", &sbs_hcal_nclus);
   fTree->SetBranchAddress("sbs.hcal.ngoodADChits", &sbs_hcal_ngoodADChits);
   fTree->SetBranchAddress("sbs.hcal.rowblk", &sbs_hcal_rowblk);
   fTree->SetBranchAddress("sbs.hcal.tdctimeblk", &sbs_hcal_tdctimeblk);
   fTree->SetBranchAddress("sbs.hcal.x", &sbs_hcal_x);
   fTree->SetBranchAddress("sbs.hcal.y", &sbs_hcal_y);
   fTree->SetBranchAddress("singletrack", &singletrack);
   fTree->SetBranchAddress("anytrack", &anytrack);
   fTree->SetBranchAddress("halla_p", &halla_p);
   fTree->SetBranchAddress("hac_bcm_average", &hac_bcm_average);
   fTree->SetBranchAddress("IPM1H04A.XPOS", &IPM1H04A_XPOS);
   fTree->SetBranchAddress("IPM1H04A.YPOS", &IPM1H04A_YPOS);
   fTree->SetBranchAddress("IPM1H04E.XPOS", &IPM1H04E_XPOS);
   fTree->SetBranchAddress("IPM1H04E.YPOS", &IPM1H04E_YPOS);
   fTree->SetBranchAddress("IBC1H04CRCUR2", &IBC1H04CRCUR2);
   fTree->SetBranchAddress("hac_bcm_dvm1_read", &hac_bcm_dvm1_read);
   fTree->SetBranchAddress("hac_bcm_dvm2_read", &hac_bcm_dvm2_read);
   fTree->SetBranchAddress("hac_bcm_dvm1_current", &hac_bcm_dvm1_current);
   fTree->SetBranchAddress("hac_bcm_dvm2_current", &hac_bcm_dvm2_current);
   fTree->SetBranchAddress("hac_bcm_A1", &hac_bcm_A1);
   fTree->SetBranchAddress("hac_bcm_A2", &hac_bcm_A2);
   fTree->SetBranchAddress("HALLA_p", &HALLA_p);
   fTree->SetBranchAddress("fEvtHdr.fEvtTime", &fEvtHdr_fEvtTime);
   fTree->SetBranchAddress("fEvtHdr.fEvtNum", &fEvtHdr_fEvtNum);
   fTree->SetBranchAddress("fEvtHdr.fEvtType", &fEvtHdr_fEvtType);
   fTree->SetBranchAddress("fEvtHdr.fEvtLen", &fEvtHdr_fEvtLen);
   fTree->SetBranchAddress("fEvtHdr.fHelicity", &fEvtHdr_fHelicity);
   fTree->SetBranchAddress("fEvtHdr.fTrigBits", &fEvtHdr_fTrigBits);
   fTree->SetBranchAddress("fEvtHdr.fRun", &fEvtHdr_fRun);
}

// Set up all branches for clone
void CloneInit(TTree *fClone)
{
   fClone->SetMakeClass(1);

   fClone->Branch("targx", &targx, "targx/D");
   fClone->Branch("targy", &targy, "targy/D");
   fClone->Branch("Ndata.bb.eps_over_etot", &Ndata_bb_eps_over_etot, "Ndata.bb.eps_over_etot/I");
   fClone->Branch("bb.eps_over_etot", bb_eps_over_etot, "bb.eps_over_etot[Ndata.bb.eps_over_etot]/D");
   fClone->Branch("Ndata.bb.etot_over_p", &Ndata_bb_etot_over_p, "Ndata.bb.etot_over_p/I");
   fClone->Branch("bb.etot_over_p", bb_etot_over_p, "bb.etot_over_p[Ndata.bb.etot_over_p]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCU", &Ndata_bb_gem_hit_ADCU, "Ndata.bb.gem.hit.ADCU/I");
   fClone->Branch("bb.gem.hit.ADCU", bb_gem_hit_ADCU, "bb.gem.hit.ADCU[Ndata.bb.gem.hit.ADCU]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCU_deconv", &Ndata_bb_gem_hit_ADCU_deconv, "Ndata.bb.gem.hit.ADCU_deconv/I");
   fClone->Branch("bb.gem.hit.ADCU_deconv", bb_gem_hit_ADCU_deconv, "bb.gem.hit.ADCU_deconv[Ndata.bb.gem.hit.ADCU_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCV", &Ndata_bb_gem_hit_ADCV, "Ndata.bb.gem.hit.ADCV/I");
   fClone->Branch("bb.gem.hit.ADCV", bb_gem_hit_ADCV, "bb.gem.hit.ADCV[Ndata.bb.gem.hit.ADCV]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCV_deconv", &Ndata_bb_gem_hit_ADCV_deconv, "Ndata.bb.gem.hit.ADCV_deconv/I");
   fClone->Branch("bb.gem.hit.ADCV_deconv", bb_gem_hit_ADCV_deconv, "bb.gem.hit.ADCV_deconv[Ndata.bb.gem.hit.ADCV_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCasym", &Ndata_bb_gem_hit_ADCasym, "Ndata.bb.gem.hit.ADCasym/I");
   fClone->Branch("bb.gem.hit.ADCasym", bb_gem_hit_ADCasym, "bb.gem.hit.ADCasym[Ndata.bb.gem.hit.ADCasym]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCasym_deconv", &Ndata_bb_gem_hit_ADCasym_deconv, "Ndata.bb.gem.hit.ADCasym_deconv/I");
   fClone->Branch("bb.gem.hit.ADCasym_deconv", bb_gem_hit_ADCasym_deconv, "bb.gem.hit.ADCasym_deconv[Ndata.bb.gem.hit.ADCasym_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCavg", &Ndata_bb_gem_hit_ADCavg, "Ndata.bb.gem.hit.ADCavg/I");
   fClone->Branch("bb.gem.hit.ADCavg", bb_gem_hit_ADCavg, "bb.gem.hit.ADCavg[Ndata.bb.gem.hit.ADCavg]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCavg_deconv", &Ndata_bb_gem_hit_ADCavg_deconv, "Ndata.bb.gem.hit.ADCavg_deconv/I");
   fClone->Branch("bb.gem.hit.ADCavg_deconv", bb_gem_hit_ADCavg_deconv, "bb.gem.hit.ADCavg_deconv[Ndata.bb.gem.hit.ADCavg_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac0_Umax", &Ndata_bb_gem_hit_ADCfrac0_Umax, "Ndata.bb.gem.hit.ADCfrac0_Umax/I");
   fClone->Branch("bb.gem.hit.ADCfrac0_Umax", bb_gem_hit_ADCfrac0_Umax, "bb.gem.hit.ADCfrac0_Umax[Ndata.bb.gem.hit.ADCfrac0_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac0_Vmax", &Ndata_bb_gem_hit_ADCfrac0_Vmax, "Ndata.bb.gem.hit.ADCfrac0_Vmax/I");
   fClone->Branch("bb.gem.hit.ADCfrac0_Vmax", bb_gem_hit_ADCfrac0_Vmax, "bb.gem.hit.ADCfrac0_Vmax[Ndata.bb.gem.hit.ADCfrac0_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac1_Umax", &Ndata_bb_gem_hit_ADCfrac1_Umax, "Ndata.bb.gem.hit.ADCfrac1_Umax/I");
   fClone->Branch("bb.gem.hit.ADCfrac1_Umax", bb_gem_hit_ADCfrac1_Umax, "bb.gem.hit.ADCfrac1_Umax[Ndata.bb.gem.hit.ADCfrac1_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac1_Vmax", &Ndata_bb_gem_hit_ADCfrac1_Vmax, "Ndata.bb.gem.hit.ADCfrac1_Vmax/I");
   fClone->Branch("bb.gem.hit.ADCfrac1_Vmax", bb_gem_hit_ADCfrac1_Vmax, "bb.gem.hit.ADCfrac1_Vmax[Ndata.bb.gem.hit.ADCfrac1_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac2_Umax", &Ndata_bb_gem_hit_ADCfrac2_Umax, "Ndata.bb.gem.hit.ADCfrac2_Umax/I");
   fClone->Branch("bb.gem.hit.ADCfrac2_Umax", bb_gem_hit_ADCfrac2_Umax, "bb.gem.hit.ADCfrac2_Umax[Ndata.bb.gem.hit.ADCfrac2_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac2_Vmax", &Ndata_bb_gem_hit_ADCfrac2_Vmax, "Ndata.bb.gem.hit.ADCfrac2_Vmax/I");
   fClone->Branch("bb.gem.hit.ADCfrac2_Vmax", bb_gem_hit_ADCfrac2_Vmax, "bb.gem.hit.ADCfrac2_Vmax[Ndata.bb.gem.hit.ADCfrac2_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac3_Umax", &Ndata_bb_gem_hit_ADCfrac3_Umax, "Ndata.bb.gem.hit.ADCfrac3_Umax/I");
   fClone->Branch("bb.gem.hit.ADCfrac3_Umax", bb_gem_hit_ADCfrac3_Umax, "bb.gem.hit.ADCfrac3_Umax[Ndata.bb.gem.hit.ADCfrac3_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac3_Vmax", &Ndata_bb_gem_hit_ADCfrac3_Vmax, "Ndata.bb.gem.hit.ADCfrac3_Vmax/I");
   fClone->Branch("bb.gem.hit.ADCfrac3_Vmax", bb_gem_hit_ADCfrac3_Vmax, "bb.gem.hit.ADCfrac3_Vmax[Ndata.bb.gem.hit.ADCfrac3_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac4_Umax", &Ndata_bb_gem_hit_ADCfrac4_Umax, "Ndata.bb.gem.hit.ADCfrac4_Umax/I");
   fClone->Branch("bb.gem.hit.ADCfrac4_Umax", bb_gem_hit_ADCfrac4_Umax, "bb.gem.hit.ADCfrac4_Umax[Ndata.bb.gem.hit.ADCfrac4_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac4_Vmax", &Ndata_bb_gem_hit_ADCfrac4_Vmax, "Ndata.bb.gem.hit.ADCfrac4_Vmax/I");
   fClone->Branch("bb.gem.hit.ADCfrac4_Vmax", bb_gem_hit_ADCfrac4_Vmax, "bb.gem.hit.ADCfrac4_Vmax[Ndata.bb.gem.hit.ADCfrac4_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac5_Umax", &Ndata_bb_gem_hit_ADCfrac5_Umax, "Ndata.bb.gem.hit.ADCfrac5_Umax/I");
   fClone->Branch("bb.gem.hit.ADCfrac5_Umax", bb_gem_hit_ADCfrac5_Umax, "bb.gem.hit.ADCfrac5_Umax[Ndata.bb.gem.hit.ADCfrac5_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCfrac5_Vmax", &Ndata_bb_gem_hit_ADCfrac5_Vmax, "Ndata.bb.gem.hit.ADCfrac5_Vmax/I");
   fClone->Branch("bb.gem.hit.ADCfrac5_Vmax", bb_gem_hit_ADCfrac5_Vmax, "bb.gem.hit.ADCfrac5_Vmax[Ndata.bb.gem.hit.ADCfrac5_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxcomboUclust_deconv", &Ndata_bb_gem_hit_ADCmaxcomboUclust_deconv, "Ndata.bb.gem.hit.ADCmaxcomboUclust_deconv/I");
   fClone->Branch("bb.gem.hit.ADCmaxcomboUclust_deconv", bb_gem_hit_ADCmaxcomboUclust_deconv, "bb.gem.hit.ADCmaxcomboUclust_deconv[Ndata.bb.gem.hit.ADCmaxcomboUclust_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxcomboVclust_deconv", &Ndata_bb_gem_hit_ADCmaxcomboVclust_deconv, "Ndata.bb.gem.hit.ADCmaxcomboVclust_deconv/I");
   fClone->Branch("bb.gem.hit.ADCmaxcomboVclust_deconv", bb_gem_hit_ADCmaxcomboVclust_deconv, "bb.gem.hit.ADCmaxcomboVclust_deconv[Ndata.bb.gem.hit.ADCmaxcomboVclust_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxsampU", &Ndata_bb_gem_hit_ADCmaxsampU, "Ndata.bb.gem.hit.ADCmaxsampU/I");
   fClone->Branch("bb.gem.hit.ADCmaxsampU", bb_gem_hit_ADCmaxsampU, "bb.gem.hit.ADCmaxsampU[Ndata.bb.gem.hit.ADCmaxsampU]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxsampUclust", &Ndata_bb_gem_hit_ADCmaxsampUclust, "Ndata.bb.gem.hit.ADCmaxsampUclust/I");
   fClone->Branch("bb.gem.hit.ADCmaxsampUclust", bb_gem_hit_ADCmaxsampUclust, "bb.gem.hit.ADCmaxsampUclust[Ndata.bb.gem.hit.ADCmaxsampUclust]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxsampUclust_deconv", &Ndata_bb_gem_hit_ADCmaxsampUclust_deconv, "Ndata.bb.gem.hit.ADCmaxsampUclust_deconv/I");
   fClone->Branch("bb.gem.hit.ADCmaxsampUclust_deconv", bb_gem_hit_ADCmaxsampUclust_deconv, "bb.gem.hit.ADCmaxsampUclust_deconv[Ndata.bb.gem.hit.ADCmaxsampUclust_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxsampV", &Ndata_bb_gem_hit_ADCmaxsampV, "Ndata.bb.gem.hit.ADCmaxsampV/I");
   fClone->Branch("bb.gem.hit.ADCmaxsampV", bb_gem_hit_ADCmaxsampV, "bb.gem.hit.ADCmaxsampV[Ndata.bb.gem.hit.ADCmaxsampV]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxsampVclust", &Ndata_bb_gem_hit_ADCmaxsampVclust, "Ndata.bb.gem.hit.ADCmaxsampVclust/I");
   fClone->Branch("bb.gem.hit.ADCmaxsampVclust", bb_gem_hit_ADCmaxsampVclust, "bb.gem.hit.ADCmaxsampVclust[Ndata.bb.gem.hit.ADCmaxsampVclust]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxsampVclust_deconv", &Ndata_bb_gem_hit_ADCmaxsampVclust_deconv, "Ndata.bb.gem.hit.ADCmaxsampVclust_deconv/I");
   fClone->Branch("bb.gem.hit.ADCmaxsampVclust_deconv", bb_gem_hit_ADCmaxsampVclust_deconv, "bb.gem.hit.ADCmaxsampVclust_deconv[Ndata.bb.gem.hit.ADCmaxsampVclust_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxstripU", &Ndata_bb_gem_hit_ADCmaxstripU, "Ndata.bb.gem.hit.ADCmaxstripU/I");
   fClone->Branch("bb.gem.hit.ADCmaxstripU", bb_gem_hit_ADCmaxstripU, "bb.gem.hit.ADCmaxstripU[Ndata.bb.gem.hit.ADCmaxstripU]/D");
   fClone->Branch("Ndata.bb.gem.hit.ADCmaxstripV", &Ndata_bb_gem_hit_ADCmaxstripV, "Ndata.bb.gem.hit.ADCmaxstripV/I");
   fClone->Branch("bb.gem.hit.ADCmaxstripV", bb_gem_hit_ADCmaxstripV, "bb.gem.hit.ADCmaxstripV[Ndata.bb.gem.hit.ADCmaxstripV]/D");
   fClone->Branch("Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_U", &Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_U, "Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_U/I");
   fClone->Branch("bb.gem.hit.BUILD_ALL_SAMPLES_U", bb_gem_hit_BUILD_ALL_SAMPLES_U, "bb.gem.hit.BUILD_ALL_SAMPLES_U[Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_U]/D");
   fClone->Branch("Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_V", &Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_V, "Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_V/I");
   fClone->Branch("bb.gem.hit.BUILD_ALL_SAMPLES_V", bb_gem_hit_BUILD_ALL_SAMPLES_V, "bb.gem.hit.BUILD_ALL_SAMPLES_V[Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_V]/D");
   fClone->Branch("Ndata.bb.gem.hit.CM_GOOD_U", &Ndata_bb_gem_hit_CM_GOOD_U, "Ndata.bb.gem.hit.CM_GOOD_U/I");
   fClone->Branch("bb.gem.hit.CM_GOOD_U", bb_gem_hit_CM_GOOD_U, "bb.gem.hit.CM_GOOD_U[Ndata.bb.gem.hit.CM_GOOD_U]/D");
   fClone->Branch("Ndata.bb.gem.hit.CM_GOOD_V", &Ndata_bb_gem_hit_CM_GOOD_V, "Ndata.bb.gem.hit.CM_GOOD_V/I");
   fClone->Branch("bb.gem.hit.CM_GOOD_V", bb_gem_hit_CM_GOOD_V, "bb.gem.hit.CM_GOOD_V[Ndata.bb.gem.hit.CM_GOOD_V]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC0_Umax", &Ndata_bb_gem_hit_DeconvADC0_Umax, "Ndata.bb.gem.hit.DeconvADC0_Umax/I");
   fClone->Branch("bb.gem.hit.DeconvADC0_Umax", bb_gem_hit_DeconvADC0_Umax, "bb.gem.hit.DeconvADC0_Umax[Ndata.bb.gem.hit.DeconvADC0_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC0_Vmax", &Ndata_bb_gem_hit_DeconvADC0_Vmax, "Ndata.bb.gem.hit.DeconvADC0_Vmax/I");
   fClone->Branch("bb.gem.hit.DeconvADC0_Vmax", bb_gem_hit_DeconvADC0_Vmax, "bb.gem.hit.DeconvADC0_Vmax[Ndata.bb.gem.hit.DeconvADC0_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC1_Umax", &Ndata_bb_gem_hit_DeconvADC1_Umax, "Ndata.bb.gem.hit.DeconvADC1_Umax/I");
   fClone->Branch("bb.gem.hit.DeconvADC1_Umax", bb_gem_hit_DeconvADC1_Umax, "bb.gem.hit.DeconvADC1_Umax[Ndata.bb.gem.hit.DeconvADC1_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC1_Vmax", &Ndata_bb_gem_hit_DeconvADC1_Vmax, "Ndata.bb.gem.hit.DeconvADC1_Vmax/I");
   fClone->Branch("bb.gem.hit.DeconvADC1_Vmax", bb_gem_hit_DeconvADC1_Vmax, "bb.gem.hit.DeconvADC1_Vmax[Ndata.bb.gem.hit.DeconvADC1_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC2_Umax", &Ndata_bb_gem_hit_DeconvADC2_Umax, "Ndata.bb.gem.hit.DeconvADC2_Umax/I");
   fClone->Branch("bb.gem.hit.DeconvADC2_Umax", bb_gem_hit_DeconvADC2_Umax, "bb.gem.hit.DeconvADC2_Umax[Ndata.bb.gem.hit.DeconvADC2_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC2_Vmax", &Ndata_bb_gem_hit_DeconvADC2_Vmax, "Ndata.bb.gem.hit.DeconvADC2_Vmax/I");
   fClone->Branch("bb.gem.hit.DeconvADC2_Vmax", bb_gem_hit_DeconvADC2_Vmax, "bb.gem.hit.DeconvADC2_Vmax[Ndata.bb.gem.hit.DeconvADC2_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC3_Umax", &Ndata_bb_gem_hit_DeconvADC3_Umax, "Ndata.bb.gem.hit.DeconvADC3_Umax/I");
   fClone->Branch("bb.gem.hit.DeconvADC3_Umax", bb_gem_hit_DeconvADC3_Umax, "bb.gem.hit.DeconvADC3_Umax[Ndata.bb.gem.hit.DeconvADC3_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC3_Vmax", &Ndata_bb_gem_hit_DeconvADC3_Vmax, "Ndata.bb.gem.hit.DeconvADC3_Vmax/I");
   fClone->Branch("bb.gem.hit.DeconvADC3_Vmax", bb_gem_hit_DeconvADC3_Vmax, "bb.gem.hit.DeconvADC3_Vmax[Ndata.bb.gem.hit.DeconvADC3_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC4_Umax", &Ndata_bb_gem_hit_DeconvADC4_Umax, "Ndata.bb.gem.hit.DeconvADC4_Umax/I");
   fClone->Branch("bb.gem.hit.DeconvADC4_Umax", bb_gem_hit_DeconvADC4_Umax, "bb.gem.hit.DeconvADC4_Umax[Ndata.bb.gem.hit.DeconvADC4_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC4_Vmax", &Ndata_bb_gem_hit_DeconvADC4_Vmax, "Ndata.bb.gem.hit.DeconvADC4_Vmax/I");
   fClone->Branch("bb.gem.hit.DeconvADC4_Vmax", bb_gem_hit_DeconvADC4_Vmax, "bb.gem.hit.DeconvADC4_Vmax[Ndata.bb.gem.hit.DeconvADC4_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC5_Umax", &Ndata_bb_gem_hit_DeconvADC5_Umax, "Ndata.bb.gem.hit.DeconvADC5_Umax/I");
   fClone->Branch("bb.gem.hit.DeconvADC5_Umax", bb_gem_hit_DeconvADC5_Umax, "bb.gem.hit.DeconvADC5_Umax[Ndata.bb.gem.hit.DeconvADC5_Umax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADC5_Vmax", &Ndata_bb_gem_hit_DeconvADC5_Vmax, "Ndata.bb.gem.hit.DeconvADC5_Vmax/I");
   fClone->Branch("bb.gem.hit.DeconvADC5_Vmax", bb_gem_hit_DeconvADC5_Vmax, "bb.gem.hit.DeconvADC5_Vmax[Ndata.bb.gem.hit.DeconvADC5_Vmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADCmaxcomboU", &Ndata_bb_gem_hit_DeconvADCmaxcomboU, "Ndata.bb.gem.hit.DeconvADCmaxcomboU/I");
   fClone->Branch("bb.gem.hit.DeconvADCmaxcomboU", bb_gem_hit_DeconvADCmaxcomboU, "bb.gem.hit.DeconvADCmaxcomboU[Ndata.bb.gem.hit.DeconvADCmaxcomboU]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADCmaxcomboV", &Ndata_bb_gem_hit_DeconvADCmaxcomboV, "Ndata.bb.gem.hit.DeconvADCmaxcomboV/I");
   fClone->Branch("bb.gem.hit.DeconvADCmaxcomboV", bb_gem_hit_DeconvADCmaxcomboV, "bb.gem.hit.DeconvADCmaxcomboV[Ndata.bb.gem.hit.DeconvADCmaxcomboV]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADCmaxsampU", &Ndata_bb_gem_hit_DeconvADCmaxsampU, "Ndata.bb.gem.hit.DeconvADCmaxsampU/I");
   fClone->Branch("bb.gem.hit.DeconvADCmaxsampU", bb_gem_hit_DeconvADCmaxsampU, "bb.gem.hit.DeconvADCmaxsampU[Ndata.bb.gem.hit.DeconvADCmaxsampU]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADCmaxsampV", &Ndata_bb_gem_hit_DeconvADCmaxsampV, "Ndata.bb.gem.hit.DeconvADCmaxsampV/I");
   fClone->Branch("bb.gem.hit.DeconvADCmaxsampV", bb_gem_hit_DeconvADCmaxsampV, "bb.gem.hit.DeconvADCmaxsampV[Ndata.bb.gem.hit.DeconvADCmaxsampV]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADCmaxstripU", &Ndata_bb_gem_hit_DeconvADCmaxstripU, "Ndata.bb.gem.hit.DeconvADCmaxstripU/I");
   fClone->Branch("bb.gem.hit.DeconvADCmaxstripU", bb_gem_hit_DeconvADCmaxstripU, "bb.gem.hit.DeconvADCmaxstripU[Ndata.bb.gem.hit.DeconvADCmaxstripU]/D");
   fClone->Branch("Ndata.bb.gem.hit.DeconvADCmaxstripV", &Ndata_bb_gem_hit_DeconvADCmaxstripV, "Ndata.bb.gem.hit.DeconvADCmaxstripV/I");
   fClone->Branch("bb.gem.hit.DeconvADCmaxstripV", bb_gem_hit_DeconvADCmaxstripV, "bb.gem.hit.DeconvADCmaxstripV[Ndata.bb.gem.hit.DeconvADCmaxstripV]/D");
   fClone->Branch("Ndata.bb.gem.hit.ENABLE_CM_U", &Ndata_bb_gem_hit_ENABLE_CM_U, "Ndata.bb.gem.hit.ENABLE_CM_U/I");
   fClone->Branch("bb.gem.hit.ENABLE_CM_U", bb_gem_hit_ENABLE_CM_U, "bb.gem.hit.ENABLE_CM_U[Ndata.bb.gem.hit.ENABLE_CM_U]/D");
   fClone->Branch("Ndata.bb.gem.hit.ENABLE_CM_V", &Ndata_bb_gem_hit_ENABLE_CM_V, "Ndata.bb.gem.hit.ENABLE_CM_V/I");
   fClone->Branch("bb.gem.hit.ENABLE_CM_V", bb_gem_hit_ENABLE_CM_V, "bb.gem.hit.ENABLE_CM_V[Ndata.bb.gem.hit.ENABLE_CM_V]/D");
   fClone->Branch("Ndata.bb.gem.hit.Tavg", &Ndata_bb_gem_hit_Tavg, "Ndata.bb.gem.hit.Tavg/I");
   fClone->Branch("bb.gem.hit.Tavg", bb_gem_hit_Tavg, "bb.gem.hit.Tavg[Ndata.bb.gem.hit.Tavg]/D");
   fClone->Branch("Ndata.bb.gem.hit.Tavg_deconv", &Ndata_bb_gem_hit_Tavg_deconv, "Ndata.bb.gem.hit.Tavg_deconv/I");
   fClone->Branch("bb.gem.hit.Tavg_deconv", bb_gem_hit_Tavg_deconv, "bb.gem.hit.Tavg_deconv[Ndata.bb.gem.hit.Tavg_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.Utime", &Ndata_bb_gem_hit_Utime, "Ndata.bb.gem.hit.Utime/I");
   fClone->Branch("bb.gem.hit.Utime", bb_gem_hit_Utime, "bb.gem.hit.Utime[Ndata.bb.gem.hit.Utime]/D");
   fClone->Branch("Ndata.bb.gem.hit.UtimeDeconv", &Ndata_bb_gem_hit_UtimeDeconv, "Ndata.bb.gem.hit.UtimeDeconv/I");
   fClone->Branch("bb.gem.hit.UtimeDeconv", bb_gem_hit_UtimeDeconv, "bb.gem.hit.UtimeDeconv[Ndata.bb.gem.hit.UtimeDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.UtimeMaxStrip", &Ndata_bb_gem_hit_UtimeMaxStrip, "Ndata.bb.gem.hit.UtimeMaxStrip/I");
   fClone->Branch("bb.gem.hit.UtimeMaxStrip", bb_gem_hit_UtimeMaxStrip, "bb.gem.hit.UtimeMaxStrip[Ndata.bb.gem.hit.UtimeMaxStrip]/D");
   fClone->Branch("Ndata.bb.gem.hit.UtimeMaxStripDeconv", &Ndata_bb_gem_hit_UtimeMaxStripDeconv, "Ndata.bb.gem.hit.UtimeMaxStripDeconv/I");
   fClone->Branch("bb.gem.hit.UtimeMaxStripDeconv", bb_gem_hit_UtimeMaxStripDeconv, "bb.gem.hit.UtimeMaxStripDeconv[Ndata.bb.gem.hit.UtimeMaxStripDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.UtimeMaxStripFit", &Ndata_bb_gem_hit_UtimeMaxStripFit, "Ndata.bb.gem.hit.UtimeMaxStripFit/I");
   fClone->Branch("bb.gem.hit.UtimeMaxStripFit", bb_gem_hit_UtimeMaxStripFit, "bb.gem.hit.UtimeMaxStripFit[Ndata.bb.gem.hit.UtimeMaxStripFit]/D");
   fClone->Branch("Ndata.bb.gem.hit.Vtime", &Ndata_bb_gem_hit_Vtime, "Ndata.bb.gem.hit.Vtime/I");
   fClone->Branch("bb.gem.hit.Vtime", bb_gem_hit_Vtime, "bb.gem.hit.Vtime[Ndata.bb.gem.hit.Vtime]/D");
   fClone->Branch("Ndata.bb.gem.hit.VtimeDeconv", &Ndata_bb_gem_hit_VtimeDeconv, "Ndata.bb.gem.hit.VtimeDeconv/I");
   fClone->Branch("bb.gem.hit.VtimeDeconv", bb_gem_hit_VtimeDeconv, "bb.gem.hit.VtimeDeconv[Ndata.bb.gem.hit.VtimeDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.VtimeMaxStrip", &Ndata_bb_gem_hit_VtimeMaxStrip, "Ndata.bb.gem.hit.VtimeMaxStrip/I");
   fClone->Branch("bb.gem.hit.VtimeMaxStrip", bb_gem_hit_VtimeMaxStrip, "bb.gem.hit.VtimeMaxStrip[Ndata.bb.gem.hit.VtimeMaxStrip]/D");
   fClone->Branch("Ndata.bb.gem.hit.VtimeMaxStripDeconv", &Ndata_bb_gem_hit_VtimeMaxStripDeconv, "Ndata.bb.gem.hit.VtimeMaxStripDeconv/I");
   fClone->Branch("bb.gem.hit.VtimeMaxStripDeconv", bb_gem_hit_VtimeMaxStripDeconv, "bb.gem.hit.VtimeMaxStripDeconv[Ndata.bb.gem.hit.VtimeMaxStripDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.VtimeMaxStripFit", &Ndata_bb_gem_hit_VtimeMaxStripFit, "Ndata.bb.gem.hit.VtimeMaxStripFit/I");
   fClone->Branch("bb.gem.hit.VtimeMaxStripFit", bb_gem_hit_VtimeMaxStripFit, "bb.gem.hit.VtimeMaxStripFit[Ndata.bb.gem.hit.VtimeMaxStripFit]/D");
   fClone->Branch("Ndata.bb.gem.hit.ccor_clust", &Ndata_bb_gem_hit_ccor_clust, "Ndata.bb.gem.hit.ccor_clust/I");
   fClone->Branch("bb.gem.hit.ccor_clust", bb_gem_hit_ccor_clust, "bb.gem.hit.ccor_clust[Ndata.bb.gem.hit.ccor_clust]/D");
   fClone->Branch("Ndata.bb.gem.hit.ccor_clust_deconv", &Ndata_bb_gem_hit_ccor_clust_deconv, "Ndata.bb.gem.hit.ccor_clust_deconv/I");
   fClone->Branch("bb.gem.hit.ccor_clust_deconv", bb_gem_hit_ccor_clust_deconv, "bb.gem.hit.ccor_clust_deconv[Ndata.bb.gem.hit.ccor_clust_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.ccor_strip", &Ndata_bb_gem_hit_ccor_strip, "Ndata.bb.gem.hit.ccor_strip/I");
   fClone->Branch("bb.gem.hit.ccor_strip", bb_gem_hit_ccor_strip, "bb.gem.hit.ccor_strip[Ndata.bb.gem.hit.ccor_strip]/D");
   fClone->Branch("Ndata.bb.gem.hit.ccor_strip_deconv", &Ndata_bb_gem_hit_ccor_strip_deconv, "Ndata.bb.gem.hit.ccor_strip_deconv/I");
   fClone->Branch("bb.gem.hit.ccor_strip_deconv", bb_gem_hit_ccor_strip_deconv, "bb.gem.hit.ccor_strip_deconv[Ndata.bb.gem.hit.ccor_strip_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.deltat", &Ndata_bb_gem_hit_deltat, "Ndata.bb.gem.hit.deltat/I");
   fClone->Branch("bb.gem.hit.deltat", bb_gem_hit_deltat, "bb.gem.hit.deltat[Ndata.bb.gem.hit.deltat]/D");
   fClone->Branch("Ndata.bb.gem.hit.deltat_deconv", &Ndata_bb_gem_hit_deltat_deconv, "Ndata.bb.gem.hit.deltat_deconv/I");
   fClone->Branch("bb.gem.hit.deltat_deconv", bb_gem_hit_deltat_deconv, "bb.gem.hit.deltat_deconv[Ndata.bb.gem.hit.deltat_deconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.eresidu", &Ndata_bb_gem_hit_eresidu, "Ndata.bb.gem.hit.eresidu/I");
   fClone->Branch("bb.gem.hit.eresidu", bb_gem_hit_eresidu, "bb.gem.hit.eresidu[Ndata.bb.gem.hit.eresidu]/D");
   fClone->Branch("Ndata.bb.gem.hit.eresidv", &Ndata_bb_gem_hit_eresidv, "Ndata.bb.gem.hit.eresidv/I");
   fClone->Branch("bb.gem.hit.eresidv", bb_gem_hit_eresidv, "bb.gem.hit.eresidv[Ndata.bb.gem.hit.eresidv]/D");
   fClone->Branch("Ndata.bb.gem.hit.icombomaxUclustDeconv", &Ndata_bb_gem_hit_icombomaxUclustDeconv, "Ndata.bb.gem.hit.icombomaxUclustDeconv/I");
   fClone->Branch("bb.gem.hit.icombomaxUclustDeconv", bb_gem_hit_icombomaxUclustDeconv, "bb.gem.hit.icombomaxUclustDeconv[Ndata.bb.gem.hit.icombomaxUclustDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.icombomaxUstripDeconv", &Ndata_bb_gem_hit_icombomaxUstripDeconv, "Ndata.bb.gem.hit.icombomaxUstripDeconv/I");
   fClone->Branch("bb.gem.hit.icombomaxUstripDeconv", bb_gem_hit_icombomaxUstripDeconv, "bb.gem.hit.icombomaxUstripDeconv[Ndata.bb.gem.hit.icombomaxUstripDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.icombomaxVclustDeconv", &Ndata_bb_gem_hit_icombomaxVclustDeconv, "Ndata.bb.gem.hit.icombomaxVclustDeconv/I");
   fClone->Branch("bb.gem.hit.icombomaxVclustDeconv", bb_gem_hit_icombomaxVclustDeconv, "bb.gem.hit.icombomaxVclustDeconv[Ndata.bb.gem.hit.icombomaxVclustDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.icombomaxVstripDeconv", &Ndata_bb_gem_hit_icombomaxVstripDeconv, "Ndata.bb.gem.hit.icombomaxVstripDeconv/I");
   fClone->Branch("bb.gem.hit.icombomaxVstripDeconv", bb_gem_hit_icombomaxVstripDeconv, "bb.gem.hit.icombomaxVstripDeconv[Ndata.bb.gem.hit.icombomaxVstripDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxUclust", &Ndata_bb_gem_hit_isampmaxUclust, "Ndata.bb.gem.hit.isampmaxUclust/I");
   fClone->Branch("bb.gem.hit.isampmaxUclust", bb_gem_hit_isampmaxUclust, "bb.gem.hit.isampmaxUclust[Ndata.bb.gem.hit.isampmaxUclust]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxUclustDeconv", &Ndata_bb_gem_hit_isampmaxUclustDeconv, "Ndata.bb.gem.hit.isampmaxUclustDeconv/I");
   fClone->Branch("bb.gem.hit.isampmaxUclustDeconv", bb_gem_hit_isampmaxUclustDeconv, "bb.gem.hit.isampmaxUclustDeconv[Ndata.bb.gem.hit.isampmaxUclustDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxUstrip", &Ndata_bb_gem_hit_isampmaxUstrip, "Ndata.bb.gem.hit.isampmaxUstrip/I");
   fClone->Branch("bb.gem.hit.isampmaxUstrip", bb_gem_hit_isampmaxUstrip, "bb.gem.hit.isampmaxUstrip[Ndata.bb.gem.hit.isampmaxUstrip]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxUstripDeconv", &Ndata_bb_gem_hit_isampmaxUstripDeconv, "Ndata.bb.gem.hit.isampmaxUstripDeconv/I");
   fClone->Branch("bb.gem.hit.isampmaxUstripDeconv", bb_gem_hit_isampmaxUstripDeconv, "bb.gem.hit.isampmaxUstripDeconv[Ndata.bb.gem.hit.isampmaxUstripDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxVclust", &Ndata_bb_gem_hit_isampmaxVclust, "Ndata.bb.gem.hit.isampmaxVclust/I");
   fClone->Branch("bb.gem.hit.isampmaxVclust", bb_gem_hit_isampmaxVclust, "bb.gem.hit.isampmaxVclust[Ndata.bb.gem.hit.isampmaxVclust]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxVclustDeconv", &Ndata_bb_gem_hit_isampmaxVclustDeconv, "Ndata.bb.gem.hit.isampmaxVclustDeconv/I");
   fClone->Branch("bb.gem.hit.isampmaxVclustDeconv", bb_gem_hit_isampmaxVclustDeconv, "bb.gem.hit.isampmaxVclustDeconv[Ndata.bb.gem.hit.isampmaxVclustDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxVstrip", &Ndata_bb_gem_hit_isampmaxVstrip, "Ndata.bb.gem.hit.isampmaxVstrip/I");
   fClone->Branch("bb.gem.hit.isampmaxVstrip", bb_gem_hit_isampmaxVstrip, "bb.gem.hit.isampmaxVstrip[Ndata.bb.gem.hit.isampmaxVstrip]/D");
   fClone->Branch("Ndata.bb.gem.hit.isampmaxVstripDeconv", &Ndata_bb_gem_hit_isampmaxVstripDeconv, "Ndata.bb.gem.hit.isampmaxVstripDeconv/I");
   fClone->Branch("bb.gem.hit.isampmaxVstripDeconv", bb_gem_hit_isampmaxVstripDeconv, "bb.gem.hit.isampmaxVstripDeconv[Ndata.bb.gem.hit.isampmaxVstripDeconv]/D");
   fClone->Branch("Ndata.bb.gem.hit.layer", &Ndata_bb_gem_hit_layer, "Ndata.bb.gem.hit.layer/I");
   fClone->Branch("bb.gem.hit.layer", bb_gem_hit_layer, "bb.gem.hit.layer[Ndata.bb.gem.hit.layer]/D");
   fClone->Branch("Ndata.bb.gem.hit.module", &Ndata_bb_gem_hit_module, "Ndata.bb.gem.hit.module/I");
   fClone->Branch("bb.gem.hit.module", bb_gem_hit_module, "bb.gem.hit.module[Ndata.bb.gem.hit.module]/D");
   fClone->Branch("Ndata.bb.gem.hit.nstripu", &Ndata_bb_gem_hit_nstripu, "Ndata.bb.gem.hit.nstripu/I");
   fClone->Branch("bb.gem.hit.nstripu", bb_gem_hit_nstripu, "bb.gem.hit.nstripu[Ndata.bb.gem.hit.nstripu]/D");
   fClone->Branch("Ndata.bb.gem.hit.nstripv", &Ndata_bb_gem_hit_nstripv, "Ndata.bb.gem.hit.nstripv/I");
   fClone->Branch("bb.gem.hit.nstripv", bb_gem_hit_nstripv, "bb.gem.hit.nstripv[Ndata.bb.gem.hit.nstripv]/D");
   fClone->Branch("Ndata.bb.gem.hit.residu", &Ndata_bb_gem_hit_residu, "Ndata.bb.gem.hit.residu/I");
   fClone->Branch("bb.gem.hit.residu", bb_gem_hit_residu, "bb.gem.hit.residu[Ndata.bb.gem.hit.residu]/D");
   fClone->Branch("Ndata.bb.gem.hit.residv", &Ndata_bb_gem_hit_residv, "Ndata.bb.gem.hit.residv/I");
   fClone->Branch("bb.gem.hit.residv", bb_gem_hit_residv, "bb.gem.hit.residv[Ndata.bb.gem.hit.residv]/D");
   fClone->Branch("Ndata.bb.gem.hit.trackindex", &Ndata_bb_gem_hit_trackindex, "Ndata.bb.gem.hit.trackindex/I");
   fClone->Branch("bb.gem.hit.trackindex", bb_gem_hit_trackindex, "bb.gem.hit.trackindex[Ndata.bb.gem.hit.trackindex]/D");
   fClone->Branch("Ndata.bb.gem.hit.u", &Ndata_bb_gem_hit_u, "Ndata.bb.gem.hit.u/I");
   fClone->Branch("bb.gem.hit.u", bb_gem_hit_u, "bb.gem.hit.u[Ndata.bb.gem.hit.u]/D");
   fClone->Branch("Ndata.bb.gem.hit.umoment", &Ndata_bb_gem_hit_umoment, "Ndata.bb.gem.hit.umoment/I");
   fClone->Branch("bb.gem.hit.umoment", bb_gem_hit_umoment, "bb.gem.hit.umoment[Ndata.bb.gem.hit.umoment]/D");
   fClone->Branch("Ndata.bb.gem.hit.usigma", &Ndata_bb_gem_hit_usigma, "Ndata.bb.gem.hit.usigma/I");
   fClone->Branch("bb.gem.hit.usigma", bb_gem_hit_usigma, "bb.gem.hit.usigma[Ndata.bb.gem.hit.usigma]/D");
   fClone->Branch("Ndata.bb.gem.hit.ustriphi", &Ndata_bb_gem_hit_ustriphi, "Ndata.bb.gem.hit.ustriphi/I");
   fClone->Branch("bb.gem.hit.ustriphi", bb_gem_hit_ustriphi, "bb.gem.hit.ustriphi[Ndata.bb.gem.hit.ustriphi]/D");
   fClone->Branch("Ndata.bb.gem.hit.ustriplo", &Ndata_bb_gem_hit_ustriplo, "Ndata.bb.gem.hit.ustriplo/I");
   fClone->Branch("bb.gem.hit.ustriplo", bb_gem_hit_ustriplo, "bb.gem.hit.ustriplo[Ndata.bb.gem.hit.ustriplo]/D");
   fClone->Branch("Ndata.bb.gem.hit.ustripmax", &Ndata_bb_gem_hit_ustripmax, "Ndata.bb.gem.hit.ustripmax/I");
   fClone->Branch("bb.gem.hit.ustripmax", bb_gem_hit_ustripmax, "bb.gem.hit.ustripmax[Ndata.bb.gem.hit.ustripmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.v", &Ndata_bb_gem_hit_v, "Ndata.bb.gem.hit.v/I");
   fClone->Branch("bb.gem.hit.v", bb_gem_hit_v, "bb.gem.hit.v[Ndata.bb.gem.hit.v]/D");
   fClone->Branch("Ndata.bb.gem.hit.vmoment", &Ndata_bb_gem_hit_vmoment, "Ndata.bb.gem.hit.vmoment/I");
   fClone->Branch("bb.gem.hit.vmoment", bb_gem_hit_vmoment, "bb.gem.hit.vmoment[Ndata.bb.gem.hit.vmoment]/D");
   fClone->Branch("Ndata.bb.gem.hit.vsigma", &Ndata_bb_gem_hit_vsigma, "Ndata.bb.gem.hit.vsigma/I");
   fClone->Branch("bb.gem.hit.vsigma", bb_gem_hit_vsigma, "bb.gem.hit.vsigma[Ndata.bb.gem.hit.vsigma]/D");
   fClone->Branch("Ndata.bb.gem.hit.vstriphi", &Ndata_bb_gem_hit_vstriphi, "Ndata.bb.gem.hit.vstriphi/I");
   fClone->Branch("bb.gem.hit.vstriphi", bb_gem_hit_vstriphi, "bb.gem.hit.vstriphi[Ndata.bb.gem.hit.vstriphi]/D");
   fClone->Branch("Ndata.bb.gem.hit.vstriplo", &Ndata_bb_gem_hit_vstriplo, "Ndata.bb.gem.hit.vstriplo/I");
   fClone->Branch("bb.gem.hit.vstriplo", bb_gem_hit_vstriplo, "bb.gem.hit.vstriplo[Ndata.bb.gem.hit.vstriplo]/D");
   fClone->Branch("Ndata.bb.gem.hit.vstripmax", &Ndata_bb_gem_hit_vstripmax, "Ndata.bb.gem.hit.vstripmax/I");
   fClone->Branch("bb.gem.hit.vstripmax", bb_gem_hit_vstripmax, "bb.gem.hit.vstripmax[Ndata.bb.gem.hit.vstripmax]/D");
   fClone->Branch("Ndata.bb.gem.hit.xglobal", &Ndata_bb_gem_hit_xglobal, "Ndata.bb.gem.hit.xglobal/I");
   fClone->Branch("bb.gem.hit.xglobal", bb_gem_hit_xglobal, "bb.gem.hit.xglobal[Ndata.bb.gem.hit.xglobal]/D");
   fClone->Branch("Ndata.bb.gem.hit.xlocal", &Ndata_bb_gem_hit_xlocal, "Ndata.bb.gem.hit.xlocal/I");
   fClone->Branch("bb.gem.hit.xlocal", bb_gem_hit_xlocal, "bb.gem.hit.xlocal[Ndata.bb.gem.hit.xlocal]/D");
   fClone->Branch("Ndata.bb.gem.hit.yglobal", &Ndata_bb_gem_hit_yglobal, "Ndata.bb.gem.hit.yglobal/I");
   fClone->Branch("bb.gem.hit.yglobal", bb_gem_hit_yglobal, "bb.gem.hit.yglobal[Ndata.bb.gem.hit.yglobal]/D");
   fClone->Branch("Ndata.bb.gem.hit.ylocal", &Ndata_bb_gem_hit_ylocal, "Ndata.bb.gem.hit.ylocal/I");
   fClone->Branch("bb.gem.hit.ylocal", bb_gem_hit_ylocal, "bb.gem.hit.ylocal[Ndata.bb.gem.hit.ylocal]/D");
   fClone->Branch("Ndata.bb.gem.hit.zglobal", &Ndata_bb_gem_hit_zglobal, "Ndata.bb.gem.hit.zglobal/I");
   fClone->Branch("bb.gem.hit.zglobal", bb_gem_hit_zglobal, "bb.gem.hit.zglobal[Ndata.bb.gem.hit.zglobal]/D");
   fClone->Branch("Ndata.bb.gem.n2Dhit_layer", &Ndata_bb_gem_n2Dhit_layer, "Ndata.bb.gem.n2Dhit_layer/I");
   fClone->Branch("bb.gem.n2Dhit_layer", bb_gem_n2Dhit_layer, "bb.gem.n2Dhit_layer[Ndata.bb.gem.n2Dhit_layer]/D");
   fClone->Branch("Ndata.bb.gem.nclustu_layer", &Ndata_bb_gem_nclustu_layer, "Ndata.bb.gem.nclustu_layer/I");
   fClone->Branch("bb.gem.nclustu_layer", bb_gem_nclustu_layer, "bb.gem.nclustu_layer[Ndata.bb.gem.nclustu_layer]/D");
   fClone->Branch("Ndata.bb.gem.nclustv_layer", &Ndata_bb_gem_nclustv_layer, "Ndata.bb.gem.nclustv_layer/I");
   fClone->Branch("bb.gem.nclustv_layer", bb_gem_nclustv_layer, "bb.gem.nclustv_layer[Ndata.bb.gem.nclustv_layer]/D");
   fClone->Branch("Ndata.bb.gem.nstripsu_layer", &Ndata_bb_gem_nstripsu_layer, "Ndata.bb.gem.nstripsu_layer/I");
   fClone->Branch("bb.gem.nstripsu_layer", bb_gem_nstripsu_layer, "bb.gem.nstripsu_layer[Ndata.bb.gem.nstripsu_layer]/D");
   fClone->Branch("Ndata.bb.gem.nstripsv_layer", &Ndata_bb_gem_nstripsv_layer, "Ndata.bb.gem.nstripsv_layer/I");
   fClone->Branch("bb.gem.nstripsv_layer", bb_gem_nstripsv_layer, "bb.gem.nstripsv_layer[Ndata.bb.gem.nstripsv_layer]/D");
   fClone->Branch("Ndata.bb.gem.track.chi2ndf", &Ndata_bb_gem_track_chi2ndf, "Ndata.bb.gem.track.chi2ndf/I");
   fClone->Branch("bb.gem.track.chi2ndf", bb_gem_track_chi2ndf, "bb.gem.track.chi2ndf[Ndata.bb.gem.track.chi2ndf]/D");
   fClone->Branch("Ndata.bb.gem.track.nhits", &Ndata_bb_gem_track_nhits, "Ndata.bb.gem.track.nhits/I");
   fClone->Branch("bb.gem.track.nhits", bb_gem_track_nhits, "bb.gem.track.nhits[Ndata.bb.gem.track.nhits]/D");
   fClone->Branch("Ndata.bb.gem.track.x", &Ndata_bb_gem_track_x, "Ndata.bb.gem.track.x/I");
   fClone->Branch("bb.gem.track.x", bb_gem_track_x, "bb.gem.track.x[Ndata.bb.gem.track.x]/D");
   fClone->Branch("Ndata.bb.gem.track.xp", &Ndata_bb_gem_track_xp, "Ndata.bb.gem.track.xp/I");
   fClone->Branch("bb.gem.track.xp", bb_gem_track_xp, "bb.gem.track.xp[Ndata.bb.gem.track.xp]/D");
   fClone->Branch("Ndata.bb.gem.track.y", &Ndata_bb_gem_track_y, "Ndata.bb.gem.track.y/I");
   fClone->Branch("bb.gem.track.y", bb_gem_track_y, "bb.gem.track.y[Ndata.bb.gem.track.y]/D");
   fClone->Branch("Ndata.bb.gem.track.yp", &Ndata_bb_gem_track_yp, "Ndata.bb.gem.track.yp/I");
   fClone->Branch("bb.gem.track.yp", bb_gem_track_yp, "bb.gem.track.yp[Ndata.bb.gem.track.yp]/D");
   fClone->Branch("Ndata.bb.grinch_tdc.hit.amp", &Ndata_bb_grinch_tdc_hit_amp, "Ndata.bb.grinch_tdc.hit.amp/I");
   fClone->Branch("bb.grinch_tdc.hit.amp", bb_grinch_tdc_hit_amp, "bb.grinch_tdc.hit.amp[Ndata.bb.grinch_tdc.hit.amp]/D");
   fClone->Branch("Ndata.bb.grinch_tdc.hit.col", &Ndata_bb_grinch_tdc_hit_col, "Ndata.bb.grinch_tdc.hit.col/I");
   fClone->Branch("bb.grinch_tdc.hit.col", bb_grinch_tdc_hit_col, "bb.grinch_tdc.hit.col[Ndata.bb.grinch_tdc.hit.col]/D");
   fClone->Branch("Ndata.bb.grinch_tdc.hit.pmtnum", &Ndata_bb_grinch_tdc_hit_pmtnum, "Ndata.bb.grinch_tdc.hit.pmtnum/I");
   fClone->Branch("bb.grinch_tdc.hit.pmtnum", bb_grinch_tdc_hit_pmtnum, "bb.grinch_tdc.hit.pmtnum[Ndata.bb.grinch_tdc.hit.pmtnum]/D");
   fClone->Branch("Ndata.bb.grinch_tdc.hit.row", &Ndata_bb_grinch_tdc_hit_row, "Ndata.bb.grinch_tdc.hit.row/I");
   fClone->Branch("bb.grinch_tdc.hit.row", bb_grinch_tdc_hit_row, "bb.grinch_tdc.hit.row[Ndata.bb.grinch_tdc.hit.row]/D");
   fClone->Branch("Ndata.bb.grinch_tdc.hit.time", &Ndata_bb_grinch_tdc_hit_time, "Ndata.bb.grinch_tdc.hit.time/I");
   fClone->Branch("bb.grinch_tdc.hit.time", bb_grinch_tdc_hit_time, "bb.grinch_tdc.hit.time[Ndata.bb.grinch_tdc.hit.time]/D");
   fClone->Branch("Ndata.bb.grinch_tdc.hit.xhit", &Ndata_bb_grinch_tdc_hit_xhit, "Ndata.bb.grinch_tdc.hit.xhit/I");
   fClone->Branch("bb.grinch_tdc.hit.xhit", bb_grinch_tdc_hit_xhit, "bb.grinch_tdc.hit.xhit[Ndata.bb.grinch_tdc.hit.xhit]/D");
   fClone->Branch("Ndata.bb.grinch_tdc.hit.yhit", &Ndata_bb_grinch_tdc_hit_yhit, "Ndata.bb.grinch_tdc.hit.yhit/I");
   fClone->Branch("bb.grinch_tdc.hit.yhit", bb_grinch_tdc_hit_yhit, "bb.grinch_tdc.hit.yhit[Ndata.bb.grinch_tdc.hit.yhit]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.bar.tdc.id", &Ndata_bb_hodotdc_clus_bar_tdc_id, "Ndata.bb.hodotdc.clus.bar.tdc.id/I");
   fClone->Branch("bb.hodotdc.clus.bar.tdc.id", bb_hodotdc_clus_bar_tdc_id, "bb.hodotdc.clus.bar.tdc.id[Ndata.bb.hodotdc.clus.bar.tdc.id]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.bar.tdc.itrack", &Ndata_bb_hodotdc_clus_bar_tdc_itrack, "Ndata.bb.hodotdc.clus.bar.tdc.itrack/I");
   fClone->Branch("bb.hodotdc.clus.bar.tdc.itrack", bb_hodotdc_clus_bar_tdc_itrack, "bb.hodotdc.clus.bar.tdc.itrack[Ndata.bb.hodotdc.clus.bar.tdc.itrack]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.bar.tdc.meantime", &Ndata_bb_hodotdc_clus_bar_tdc_meantime, "Ndata.bb.hodotdc.clus.bar.tdc.meantime/I");
   fClone->Branch("bb.hodotdc.clus.bar.tdc.meantime", bb_hodotdc_clus_bar_tdc_meantime, "bb.hodotdc.clus.bar.tdc.meantime[Ndata.bb.hodotdc.clus.bar.tdc.meantime]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.bar.tdc.meantot", &Ndata_bb_hodotdc_clus_bar_tdc_meantot, "Ndata.bb.hodotdc.clus.bar.tdc.meantot/I");
   fClone->Branch("bb.hodotdc.clus.bar.tdc.meantot", bb_hodotdc_clus_bar_tdc_meantot, "bb.hodotdc.clus.bar.tdc.meantot[Ndata.bb.hodotdc.clus.bar.tdc.meantot]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.bar.tdc.timediff", &Ndata_bb_hodotdc_clus_bar_tdc_timediff, "Ndata.bb.hodotdc.clus.bar.tdc.timediff/I");
   fClone->Branch("bb.hodotdc.clus.bar.tdc.timediff", bb_hodotdc_clus_bar_tdc_timediff, "bb.hodotdc.clus.bar.tdc.timediff[Ndata.bb.hodotdc.clus.bar.tdc.timediff]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.bar.tdc.timehitpos", &Ndata_bb_hodotdc_clus_bar_tdc_timehitpos, "Ndata.bb.hodotdc.clus.bar.tdc.timehitpos/I");
   fClone->Branch("bb.hodotdc.clus.bar.tdc.timehitpos", bb_hodotdc_clus_bar_tdc_timehitpos, "bb.hodotdc.clus.bar.tdc.timehitpos[Ndata.bb.hodotdc.clus.bar.tdc.timehitpos]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.bar.tdc.vpos", &Ndata_bb_hodotdc_clus_bar_tdc_vpos, "Ndata.bb.hodotdc.clus.bar.tdc.vpos/I");
   fClone->Branch("bb.hodotdc.clus.bar.tdc.vpos", bb_hodotdc_clus_bar_tdc_vpos, "bb.hodotdc.clus.bar.tdc.vpos[Ndata.bb.hodotdc.clus.bar.tdc.vpos]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.id", &Ndata_bb_hodotdc_clus_id, "Ndata.bb.hodotdc.clus.id/I");
   fClone->Branch("bb.hodotdc.clus.id", bb_hodotdc_clus_id, "bb.hodotdc.clus.id[Ndata.bb.hodotdc.clus.id]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.size", &Ndata_bb_hodotdc_clus_size, "Ndata.bb.hodotdc.clus.size/I");
   fClone->Branch("bb.hodotdc.clus.size", bb_hodotdc_clus_size, "bb.hodotdc.clus.size[Ndata.bb.hodotdc.clus.size]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.tdiff", &Ndata_bb_hodotdc_clus_tdiff, "Ndata.bb.hodotdc.clus.tdiff/I");
   fClone->Branch("bb.hodotdc.clus.tdiff", bb_hodotdc_clus_tdiff, "bb.hodotdc.clus.tdiff[Ndata.bb.hodotdc.clus.tdiff]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.tmean", &Ndata_bb_hodotdc_clus_tmean, "Ndata.bb.hodotdc.clus.tmean/I");
   fClone->Branch("bb.hodotdc.clus.tmean", bb_hodotdc_clus_tmean, "bb.hodotdc.clus.tmean[Ndata.bb.hodotdc.clus.tmean]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.totmean", &Ndata_bb_hodotdc_clus_totmean, "Ndata.bb.hodotdc.clus.totmean/I");
   fClone->Branch("bb.hodotdc.clus.totmean", bb_hodotdc_clus_totmean, "bb.hodotdc.clus.totmean[Ndata.bb.hodotdc.clus.totmean]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.trackindex", &Ndata_bb_hodotdc_clus_trackindex, "Ndata.bb.hodotdc.clus.trackindex/I");
   fClone->Branch("bb.hodotdc.clus.trackindex", bb_hodotdc_clus_trackindex, "bb.hodotdc.clus.trackindex[Ndata.bb.hodotdc.clus.trackindex]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.xmean", &Ndata_bb_hodotdc_clus_xmean, "Ndata.bb.hodotdc.clus.xmean/I");
   fClone->Branch("bb.hodotdc.clus.xmean", bb_hodotdc_clus_xmean, "bb.hodotdc.clus.xmean[Ndata.bb.hodotdc.clus.xmean]/D");
   fClone->Branch("Ndata.bb.hodotdc.clus.ymean", &Ndata_bb_hodotdc_clus_ymean, "Ndata.bb.hodotdc.clus.ymean/I");
   fClone->Branch("bb.hodotdc.clus.ymean", bb_hodotdc_clus_ymean, "bb.hodotdc.clus.ymean[Ndata.bb.hodotdc.clus.ymean]/D");
   fClone->Branch("Ndata.bb.ps.clus.atime", &Ndata_bb_ps_clus_atime, "Ndata.bb.ps.clus.atime/I");
   fClone->Branch("bb.ps.clus.atime", bb_ps_clus_atime, "bb.ps.clus.atime[Ndata.bb.ps.clus.atime]/D");
   fClone->Branch("Ndata.bb.ps.clus.col", &Ndata_bb_ps_clus_col, "Ndata.bb.ps.clus.col/I");
   fClone->Branch("bb.ps.clus.col", bb_ps_clus_col, "bb.ps.clus.col[Ndata.bb.ps.clus.col]/D");
   fClone->Branch("Ndata.bb.ps.clus.e", &Ndata_bb_ps_clus_e, "Ndata.bb.ps.clus.e/I");
   fClone->Branch("bb.ps.clus.e", bb_ps_clus_e, "bb.ps.clus.e[Ndata.bb.ps.clus.e]/D");
   fClone->Branch("Ndata.bb.ps.clus.e_c", &Ndata_bb_ps_clus_e_c, "Ndata.bb.ps.clus.e_c/I");
   fClone->Branch("bb.ps.clus.e_c", bb_ps_clus_e_c, "bb.ps.clus.e_c[Ndata.bb.ps.clus.e_c]/D");
   fClone->Branch("Ndata.bb.ps.clus.eblk", &Ndata_bb_ps_clus_eblk, "Ndata.bb.ps.clus.eblk/I");
   fClone->Branch("bb.ps.clus.eblk", bb_ps_clus_eblk, "bb.ps.clus.eblk[Ndata.bb.ps.clus.eblk]/D");
   fClone->Branch("Ndata.bb.ps.clus.eblk_c", &Ndata_bb_ps_clus_eblk_c, "Ndata.bb.ps.clus.eblk_c/I");
   fClone->Branch("bb.ps.clus.eblk_c", bb_ps_clus_eblk_c, "bb.ps.clus.eblk_c[Ndata.bb.ps.clus.eblk_c]/D");
   fClone->Branch("Ndata.bb.ps.clus.id", &Ndata_bb_ps_clus_id, "Ndata.bb.ps.clus.id/I");
   fClone->Branch("bb.ps.clus.id", bb_ps_clus_id, "bb.ps.clus.id[Ndata.bb.ps.clus.id]/D");
   fClone->Branch("Ndata.bb.ps.clus.nblk", &Ndata_bb_ps_clus_nblk, "Ndata.bb.ps.clus.nblk/I");
   fClone->Branch("bb.ps.clus.nblk", bb_ps_clus_nblk, "bb.ps.clus.nblk[Ndata.bb.ps.clus.nblk]/D");
   fClone->Branch("Ndata.bb.ps.clus.row", &Ndata_bb_ps_clus_row, "Ndata.bb.ps.clus.row/I");
   fClone->Branch("bb.ps.clus.row", bb_ps_clus_row, "bb.ps.clus.row[Ndata.bb.ps.clus.row]/D");
   fClone->Branch("Ndata.bb.ps.clus.tdctime", &Ndata_bb_ps_clus_tdctime, "Ndata.bb.ps.clus.tdctime/I");
   fClone->Branch("bb.ps.clus.tdctime", bb_ps_clus_tdctime, "bb.ps.clus.tdctime[Ndata.bb.ps.clus.tdctime]/D");
   fClone->Branch("Ndata.bb.ps.clus.x", &Ndata_bb_ps_clus_x, "Ndata.bb.ps.clus.x/I");
   fClone->Branch("bb.ps.clus.x", bb_ps_clus_x, "bb.ps.clus.x[Ndata.bb.ps.clus.x]/D");
   fClone->Branch("Ndata.bb.ps.clus.y", &Ndata_bb_ps_clus_y, "Ndata.bb.ps.clus.y/I");
   fClone->Branch("bb.ps.clus.y", bb_ps_clus_y, "bb.ps.clus.y[Ndata.bb.ps.clus.y]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.atime", &Ndata_bb_ps_clus_blk_atime, "Ndata.bb.ps.clus_blk.atime/I");
   fClone->Branch("bb.ps.clus_blk.atime", bb_ps_clus_blk_atime, "bb.ps.clus_blk.atime[Ndata.bb.ps.clus_blk.atime]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.col", &Ndata_bb_ps_clus_blk_col, "Ndata.bb.ps.clus_blk.col/I");
   fClone->Branch("bb.ps.clus_blk.col", bb_ps_clus_blk_col, "bb.ps.clus_blk.col[Ndata.bb.ps.clus_blk.col]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.e", &Ndata_bb_ps_clus_blk_e, "Ndata.bb.ps.clus_blk.e/I");
   fClone->Branch("bb.ps.clus_blk.e", bb_ps_clus_blk_e, "bb.ps.clus_blk.e[Ndata.bb.ps.clus_blk.e]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.e_c", &Ndata_bb_ps_clus_blk_e_c, "Ndata.bb.ps.clus_blk.e_c/I");
   fClone->Branch("bb.ps.clus_blk.e_c", bb_ps_clus_blk_e_c, "bb.ps.clus_blk.e_c[Ndata.bb.ps.clus_blk.e_c]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.id", &Ndata_bb_ps_clus_blk_id, "Ndata.bb.ps.clus_blk.id/I");
   fClone->Branch("bb.ps.clus_blk.id", bb_ps_clus_blk_id, "bb.ps.clus_blk.id[Ndata.bb.ps.clus_blk.id]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.row", &Ndata_bb_ps_clus_blk_row, "Ndata.bb.ps.clus_blk.row/I");
   fClone->Branch("bb.ps.clus_blk.row", bb_ps_clus_blk_row, "bb.ps.clus_blk.row[Ndata.bb.ps.clus_blk.row]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.tdctime", &Ndata_bb_ps_clus_blk_tdctime, "Ndata.bb.ps.clus_blk.tdctime/I");
   fClone->Branch("bb.ps.clus_blk.tdctime", bb_ps_clus_blk_tdctime, "bb.ps.clus_blk.tdctime[Ndata.bb.ps.clus_blk.tdctime]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.x", &Ndata_bb_ps_clus_blk_x, "Ndata.bb.ps.clus_blk.x/I");
   fClone->Branch("bb.ps.clus_blk.x", bb_ps_clus_blk_x, "bb.ps.clus_blk.x[Ndata.bb.ps.clus_blk.x]/D");
   fClone->Branch("Ndata.bb.ps.clus_blk.y", &Ndata_bb_ps_clus_blk_y, "Ndata.bb.ps.clus_blk.y/I");
   fClone->Branch("bb.ps.clus_blk.y", bb_ps_clus_blk_y, "bb.ps.clus_blk.y[Ndata.bb.ps.clus_blk.y]/D");
   fClone->Branch("Ndata.bb.sh.clus.atime", &Ndata_bb_sh_clus_atime, "Ndata.bb.sh.clus.atime/I");
   fClone->Branch("bb.sh.clus.atime", bb_sh_clus_atime, "bb.sh.clus.atime[Ndata.bb.sh.clus.atime]/D");
   fClone->Branch("Ndata.bb.sh.clus.col", &Ndata_bb_sh_clus_col, "Ndata.bb.sh.clus.col/I");
   fClone->Branch("bb.sh.clus.col", bb_sh_clus_col, "bb.sh.clus.col[Ndata.bb.sh.clus.col]/D");
   fClone->Branch("Ndata.bb.sh.clus.e", &Ndata_bb_sh_clus_e, "Ndata.bb.sh.clus.e/I");
   fClone->Branch("bb.sh.clus.e", bb_sh_clus_e, "bb.sh.clus.e[Ndata.bb.sh.clus.e]/D");
   fClone->Branch("Ndata.bb.sh.clus.e_c", &Ndata_bb_sh_clus_e_c, "Ndata.bb.sh.clus.e_c/I");
   fClone->Branch("bb.sh.clus.e_c", bb_sh_clus_e_c, "bb.sh.clus.e_c[Ndata.bb.sh.clus.e_c]/D");
   fClone->Branch("Ndata.bb.sh.clus.eblk", &Ndata_bb_sh_clus_eblk, "Ndata.bb.sh.clus.eblk/I");
   fClone->Branch("bb.sh.clus.eblk", bb_sh_clus_eblk, "bb.sh.clus.eblk[Ndata.bb.sh.clus.eblk]/D");
   fClone->Branch("Ndata.bb.sh.clus.eblk_c", &Ndata_bb_sh_clus_eblk_c, "Ndata.bb.sh.clus.eblk_c/I");
   fClone->Branch("bb.sh.clus.eblk_c", bb_sh_clus_eblk_c, "bb.sh.clus.eblk_c[Ndata.bb.sh.clus.eblk_c]/D");
   fClone->Branch("Ndata.bb.sh.clus.id", &Ndata_bb_sh_clus_id, "Ndata.bb.sh.clus.id/I");
   fClone->Branch("bb.sh.clus.id", bb_sh_clus_id, "bb.sh.clus.id[Ndata.bb.sh.clus.id]/D");
   fClone->Branch("Ndata.bb.sh.clus.nblk", &Ndata_bb_sh_clus_nblk, "Ndata.bb.sh.clus.nblk/I");
   fClone->Branch("bb.sh.clus.nblk", bb_sh_clus_nblk, "bb.sh.clus.nblk[Ndata.bb.sh.clus.nblk]/D");
   fClone->Branch("Ndata.bb.sh.clus.row", &Ndata_bb_sh_clus_row, "Ndata.bb.sh.clus.row/I");
   fClone->Branch("bb.sh.clus.row", bb_sh_clus_row, "bb.sh.clus.row[Ndata.bb.sh.clus.row]/D");
   fClone->Branch("Ndata.bb.sh.clus.tdctime", &Ndata_bb_sh_clus_tdctime, "Ndata.bb.sh.clus.tdctime/I");
   fClone->Branch("bb.sh.clus.tdctime", bb_sh_clus_tdctime, "bb.sh.clus.tdctime[Ndata.bb.sh.clus.tdctime]/D");
   fClone->Branch("Ndata.bb.sh.clus.x", &Ndata_bb_sh_clus_x, "Ndata.bb.sh.clus.x/I");
   fClone->Branch("bb.sh.clus.x", bb_sh_clus_x, "bb.sh.clus.x[Ndata.bb.sh.clus.x]/D");
   fClone->Branch("Ndata.bb.sh.clus.y", &Ndata_bb_sh_clus_y, "Ndata.bb.sh.clus.y/I");
   fClone->Branch("bb.sh.clus.y", bb_sh_clus_y, "bb.sh.clus.y[Ndata.bb.sh.clus.y]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.atime", &Ndata_bb_sh_clus_blk_atime, "Ndata.bb.sh.clus_blk.atime/I");
   fClone->Branch("bb.sh.clus_blk.atime", bb_sh_clus_blk_atime, "bb.sh.clus_blk.atime[Ndata.bb.sh.clus_blk.atime]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.col", &Ndata_bb_sh_clus_blk_col, "Ndata.bb.sh.clus_blk.col/I");
   fClone->Branch("bb.sh.clus_blk.col", bb_sh_clus_blk_col, "bb.sh.clus_blk.col[Ndata.bb.sh.clus_blk.col]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.e", &Ndata_bb_sh_clus_blk_e, "Ndata.bb.sh.clus_blk.e/I");
   fClone->Branch("bb.sh.clus_blk.e", bb_sh_clus_blk_e, "bb.sh.clus_blk.e[Ndata.bb.sh.clus_blk.e]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.e_c", &Ndata_bb_sh_clus_blk_e_c, "Ndata.bb.sh.clus_blk.e_c/I");
   fClone->Branch("bb.sh.clus_blk.e_c", bb_sh_clus_blk_e_c, "bb.sh.clus_blk.e_c[Ndata.bb.sh.clus_blk.e_c]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.id", &Ndata_bb_sh_clus_blk_id, "Ndata.bb.sh.clus_blk.id/I");
   fClone->Branch("bb.sh.clus_blk.id", bb_sh_clus_blk_id, "bb.sh.clus_blk.id[Ndata.bb.sh.clus_blk.id]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.row", &Ndata_bb_sh_clus_blk_row, "Ndata.bb.sh.clus_blk.row/I");
   fClone->Branch("bb.sh.clus_blk.row", bb_sh_clus_blk_row, "bb.sh.clus_blk.row[Ndata.bb.sh.clus_blk.row]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.tdctime", &Ndata_bb_sh_clus_blk_tdctime, "Ndata.bb.sh.clus_blk.tdctime/I");
   fClone->Branch("bb.sh.clus_blk.tdctime", bb_sh_clus_blk_tdctime, "bb.sh.clus_blk.tdctime[Ndata.bb.sh.clus_blk.tdctime]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.x", &Ndata_bb_sh_clus_blk_x, "Ndata.bb.sh.clus_blk.x/I");
   fClone->Branch("bb.sh.clus_blk.x", bb_sh_clus_blk_x, "bb.sh.clus_blk.x[Ndata.bb.sh.clus_blk.x]/D");
   fClone->Branch("Ndata.bb.sh.clus_blk.y", &Ndata_bb_sh_clus_blk_y, "Ndata.bb.sh.clus_blk.y/I");
   fClone->Branch("bb.sh.clus_blk.y", bb_sh_clus_blk_y, "bb.sh.clus_blk.y[Ndata.bb.sh.clus_blk.y]/D");
   fClone->Branch("Ndata.bb.tdctrig.tdc", &Ndata_bb_tdctrig_tdc, "Ndata.bb.tdctrig.tdc/I");
   fClone->Branch("bb.tdctrig.tdc", bb_tdctrig_tdc, "bb.tdctrig.tdc[Ndata.bb.tdctrig.tdc]/D");
   fClone->Branch("Ndata.bb.tdctrig.tdcelemID", &Ndata_bb_tdctrig_tdcelemID, "Ndata.bb.tdctrig.tdcelemID/I");
   fClone->Branch("bb.tdctrig.tdcelemID", bb_tdctrig_tdcelemID, "bb.tdctrig.tdcelemID[Ndata.bb.tdctrig.tdcelemID]/D");
   fClone->Branch("Ndata.bb.tr.beta", &Ndata_bb_tr_beta, "Ndata.bb.tr.beta/I");
   fClone->Branch("bb.tr.beta", bb_tr_beta, "bb.tr.beta[Ndata.bb.tr.beta]/D");
   fClone->Branch("Ndata.bb.tr.chi2", &Ndata_bb_tr_chi2, "Ndata.bb.tr.chi2/I");
   fClone->Branch("bb.tr.chi2", bb_tr_chi2, "bb.tr.chi2[Ndata.bb.tr.chi2]/D");
   fClone->Branch("Ndata.bb.tr.d_ph", &Ndata_bb_tr_d_ph, "Ndata.bb.tr.d_ph/I");
   fClone->Branch("bb.tr.d_ph", bb_tr_d_ph, "bb.tr.d_ph[Ndata.bb.tr.d_ph]/D");
   fClone->Branch("Ndata.bb.tr.d_th", &Ndata_bb_tr_d_th, "Ndata.bb.tr.d_th/I");
   fClone->Branch("bb.tr.d_th", bb_tr_d_th, "bb.tr.d_th[Ndata.bb.tr.d_th]/D");
   fClone->Branch("Ndata.bb.tr.d_x", &Ndata_bb_tr_d_x, "Ndata.bb.tr.d_x/I");
   fClone->Branch("bb.tr.d_x", bb_tr_d_x, "bb.tr.d_x[Ndata.bb.tr.d_x]/D");
   fClone->Branch("Ndata.bb.tr.d_y", &Ndata_bb_tr_d_y, "Ndata.bb.tr.d_y/I");
   fClone->Branch("bb.tr.d_y", bb_tr_d_y, "bb.tr.d_y[Ndata.bb.tr.d_y]/D");
   fClone->Branch("Ndata.bb.tr.dbeta", &Ndata_bb_tr_dbeta, "Ndata.bb.tr.dbeta/I");
   fClone->Branch("bb.tr.dbeta", bb_tr_dbeta, "bb.tr.dbeta[Ndata.bb.tr.dbeta]/D");
   fClone->Branch("Ndata.bb.tr.dtime", &Ndata_bb_tr_dtime, "Ndata.bb.tr.dtime/I");
   fClone->Branch("bb.tr.dtime", bb_tr_dtime, "bb.tr.dtime[Ndata.bb.tr.dtime]/D");
   fClone->Branch("Ndata.bb.tr.flag", &Ndata_bb_tr_flag, "Ndata.bb.tr.flag/I");
   fClone->Branch("bb.tr.flag", bb_tr_flag, "bb.tr.flag[Ndata.bb.tr.flag]/D");
   fClone->Branch("Ndata.bb.tr.ndof", &Ndata_bb_tr_ndof, "Ndata.bb.tr.ndof/I");
   fClone->Branch("bb.tr.ndof", bb_tr_ndof, "bb.tr.ndof[Ndata.bb.tr.ndof]/D");
   fClone->Branch("Ndata.bb.tr.p", &Ndata_bb_tr_p, "Ndata.bb.tr.p/I");
   fClone->Branch("bb.tr.p", bb_tr_p, "bb.tr.p[Ndata.bb.tr.p]/D");
   fClone->Branch("Ndata.bb.tr.pathl", &Ndata_bb_tr_pathl, "Ndata.bb.tr.pathl/I");
   fClone->Branch("bb.tr.pathl", bb_tr_pathl, "bb.tr.pathl[Ndata.bb.tr.pathl]/D");
   fClone->Branch("Ndata.bb.tr.ph", &Ndata_bb_tr_ph, "Ndata.bb.tr.ph/I");
   fClone->Branch("bb.tr.ph", bb_tr_ph, "bb.tr.ph[Ndata.bb.tr.ph]/D");
   fClone->Branch("Ndata.bb.tr.px", &Ndata_bb_tr_px, "Ndata.bb.tr.px/I");
   fClone->Branch("bb.tr.px", bb_tr_px, "bb.tr.px[Ndata.bb.tr.px]/D");
   fClone->Branch("Ndata.bb.tr.py", &Ndata_bb_tr_py, "Ndata.bb.tr.py/I");
   fClone->Branch("bb.tr.py", bb_tr_py, "bb.tr.py[Ndata.bb.tr.py]/D");
   fClone->Branch("Ndata.bb.tr.pz", &Ndata_bb_tr_pz, "Ndata.bb.tr.pz/I");
   fClone->Branch("bb.tr.pz", bb_tr_pz, "bb.tr.pz[Ndata.bb.tr.pz]/D");
   fClone->Branch("Ndata.bb.tr.r_ph", &Ndata_bb_tr_r_ph, "Ndata.bb.tr.r_ph/I");
   fClone->Branch("bb.tr.r_ph", bb_tr_r_ph, "bb.tr.r_ph[Ndata.bb.tr.r_ph]/D");
   fClone->Branch("Ndata.bb.tr.r_th", &Ndata_bb_tr_r_th, "Ndata.bb.tr.r_th/I");
   fClone->Branch("bb.tr.r_th", bb_tr_r_th, "bb.tr.r_th[Ndata.bb.tr.r_th]/D");
   fClone->Branch("Ndata.bb.tr.r_x", &Ndata_bb_tr_r_x, "Ndata.bb.tr.r_x/I");
   fClone->Branch("bb.tr.r_x", bb_tr_r_x, "bb.tr.r_x[Ndata.bb.tr.r_x]/D");
   fClone->Branch("Ndata.bb.tr.r_y", &Ndata_bb_tr_r_y, "Ndata.bb.tr.r_y/I");
   fClone->Branch("bb.tr.r_y", bb_tr_r_y, "bb.tr.r_y[Ndata.bb.tr.r_y]/D");
   fClone->Branch("Ndata.bb.tr.tg_dp", &Ndata_bb_tr_tg_dp, "Ndata.bb.tr.tg_dp/I");
   fClone->Branch("bb.tr.tg_dp", bb_tr_tg_dp, "bb.tr.tg_dp[Ndata.bb.tr.tg_dp]/D");
   fClone->Branch("Ndata.bb.tr.tg_ph", &Ndata_bb_tr_tg_ph, "Ndata.bb.tr.tg_ph/I");
   fClone->Branch("bb.tr.tg_ph", bb_tr_tg_ph, "bb.tr.tg_ph[Ndata.bb.tr.tg_ph]/D");
   fClone->Branch("Ndata.bb.tr.tg_th", &Ndata_bb_tr_tg_th, "Ndata.bb.tr.tg_th/I");
   fClone->Branch("bb.tr.tg_th", bb_tr_tg_th, "bb.tr.tg_th[Ndata.bb.tr.tg_th]/D");
   fClone->Branch("Ndata.bb.tr.tg_x", &Ndata_bb_tr_tg_x, "Ndata.bb.tr.tg_x/I");
   fClone->Branch("bb.tr.tg_x", bb_tr_tg_x, "bb.tr.tg_x[Ndata.bb.tr.tg_x]/D");
   fClone->Branch("Ndata.bb.tr.tg_y", &Ndata_bb_tr_tg_y, "Ndata.bb.tr.tg_y/I");
   fClone->Branch("bb.tr.tg_y", bb_tr_tg_y, "bb.tr.tg_y[Ndata.bb.tr.tg_y]/D");
   fClone->Branch("Ndata.bb.tr.th", &Ndata_bb_tr_th, "Ndata.bb.tr.th/I");
   fClone->Branch("bb.tr.th", bb_tr_th, "bb.tr.th[Ndata.bb.tr.th]/D");
   fClone->Branch("Ndata.bb.tr.time", &Ndata_bb_tr_time, "Ndata.bb.tr.time/I");
   fClone->Branch("bb.tr.time", bb_tr_time, "bb.tr.time[Ndata.bb.tr.time]/D");
   fClone->Branch("Ndata.bb.tr.vx", &Ndata_bb_tr_vx, "Ndata.bb.tr.vx/I");
   fClone->Branch("bb.tr.vx", bb_tr_vx, "bb.tr.vx[Ndata.bb.tr.vx]/D");
   fClone->Branch("Ndata.bb.tr.vy", &Ndata_bb_tr_vy, "Ndata.bb.tr.vy/I");
   fClone->Branch("bb.tr.vy", bb_tr_vy, "bb.tr.vy[Ndata.bb.tr.vy]/D");
   fClone->Branch("Ndata.bb.tr.vz", &Ndata_bb_tr_vz, "Ndata.bb.tr.vz/I");
   fClone->Branch("bb.tr.vz", bb_tr_vz, "bb.tr.vz[Ndata.bb.tr.vz]/D");
   fClone->Branch("Ndata.bb.tr.x", &Ndata_bb_tr_x, "Ndata.bb.tr.x");
   fClone->Branch("bb.tr.x", bb_tr_x, "bb.tr.x[Ndata.bb.tr.x]/D");
   fClone->Branch("Ndata.bb.tr.y", &Ndata_bb_tr_y, "Ndata.bb.tr.y/I");
   fClone->Branch("bb.tr.y", bb_tr_y, "bb.tr.y[Ndata.bb.tr.y]/D");
   fClone->Branch("Ndata.bb.x_bcp", &Ndata_bb_x_bcp, "Ndata.bb.x_bcp/I");
   fClone->Branch("bb.x_bcp", bb_x_bcp, "bb.x_bcp[Ndata.bb.x_bcp]/D");
   fClone->Branch("Ndata.bb.x_fcp", &Ndata_bb_x_fcp, "Ndata.bb.x_fcp/I");
   fClone->Branch("bb.x_fcp", bb_x_fcp, "bb.x_fcp[Ndata.bb.x_fcp]/D");
   fClone->Branch("Ndata.bb.y_bcp", &Ndata_bb_y_bcp, "Ndata.bb.y_bcp/I");
   fClone->Branch("bb.y_bcp", bb_y_bcp, "bb.y_bcp[Ndata.bb.y_bcp]/D");
   fClone->Branch("Ndata.bb.y_fcp", &Ndata_bb_y_fcp, "Ndata.bb.y_fcp/I");
   fClone->Branch("bb.y_fcp", bb_y_fcp, "bb.y_fcp[Ndata.bb.y_fcp]/D");
   fClone->Branch("Ndata.bb.z_bcp", &Ndata_bb_z_bcp, "Ndata.bb.z_bcp/I");
   fClone->Branch("bb.z_bcp", bb_z_bcp, "bb.z_bcp[Ndata.bb.z_bcp]/D");
   fClone->Branch("Ndata.bb.z_fcp", &Ndata_bb_z_fcp, "Ndata.bb.z_fcp/I");
   fClone->Branch("bb.z_fcp", bb_z_fcp, "bb.z_fcp[Ndata.bb.z_fcp]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.atime", &Ndata_sbs_hcal_clus_atime, "Ndata.sbs.hcal.clus.atime/I");
   fClone->Branch("sbs.hcal.clus.atime", sbs_hcal_clus_atime, "sbs.hcal.clus.atime[Ndata.sbs.hcal.clus.atime]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.col", &Ndata_sbs_hcal_clus_col, "Ndata.sbs.hcal.clus.col/I");
   fClone->Branch("sbs.hcal.clus.col", sbs_hcal_clus_col, "sbs.hcal.clus.col[Ndata.sbs.hcal.clus.col]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.e", &Ndata_sbs_hcal_clus_e, "Ndata.sbs.hcal.clus.e/I");
   fClone->Branch("sbs.hcal.clus.e", sbs_hcal_clus_e, "sbs.hcal.clus.e[Ndata.sbs.hcal.clus.e]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.e_c", &Ndata_sbs_hcal_clus_e_c, "Ndata.sbs.hcal.clus.e_c/I");
   fClone->Branch("sbs.hcal.clus.e_c", sbs_hcal_clus_e_c, "sbs.hcal.clus.e_c[Ndata.sbs.hcal.clus.e_c]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.eblk", &Ndata_sbs_hcal_clus_eblk, "Ndata.sbs.hcal.clus.eblk/I");
   fClone->Branch("sbs.hcal.clus.eblk", sbs_hcal_clus_eblk, "sbs.hcal.clus.eblk[Ndata.sbs.hcal.clus.eblk]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.eblk_c", &Ndata_sbs_hcal_clus_eblk_c, "Ndata.sbs.hcal.clus.eblk_c/I");
   fClone->Branch("sbs.hcal.clus.eblk_c", sbs_hcal_clus_eblk_c, "sbs.hcal.clus.eblk_c[Ndata.sbs.hcal.clus.eblk_c]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.id", &Ndata_sbs_hcal_clus_id, "Ndata.sbs.hcal.clus.id/I");
   fClone->Branch("sbs.hcal.clus.id", sbs_hcal_clus_id, "sbs.hcal.clus.id[Ndata.sbs.hcal.clus.id]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.nblk", &Ndata_sbs_hcal_clus_nblk, "Ndata.sbs.hcal.clus.nblk/I");
   fClone->Branch("sbs.hcal.clus.nblk", sbs_hcal_clus_nblk, "sbs.hcal.clus.nblk[Ndata.sbs.hcal.clus.nblk]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.row", &Ndata_sbs_hcal_clus_row, "Ndata.sbs.hcal.clus.row/I");
   fClone->Branch("sbs.hcal.clus.row", sbs_hcal_clus_row, "sbs.hcal.clus.row[Ndata.sbs.hcal.clus.row]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.tdctime", &Ndata_sbs_hcal_clus_tdctime, "Ndata.sbs.hcal.clus.tdctime/I");
   fClone->Branch("sbs.hcal.clus.tdctime", sbs_hcal_clus_tdctime, "sbs.hcal.clus.tdctime[Ndata.sbs.hcal.clus.tdctime]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.x", &Ndata_sbs_hcal_clus_x, "Ndata.sbs.hcal.clus.x/I");
   fClone->Branch("sbs.hcal.clus.x", sbs_hcal_clus_x, "sbs.hcal.clus.x[Ndata.sbs.hcal.clus.x]/D");
   fClone->Branch("Ndata.sbs.hcal.clus.y", &Ndata_sbs_hcal_clus_y, "Ndata.sbs.hcal.clus.y/I");
   fClone->Branch("sbs.hcal.clus.y", sbs_hcal_clus_y, "sbs.hcal.clus.y[Ndata.sbs.hcal.clus.y]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.atime", &Ndata_sbs_hcal_clus_blk_atime, "Ndata.sbs.hcal.clus_blk.atime/I");
   fClone->Branch("sbs.hcal.clus_blk.atime", sbs_hcal_clus_blk_atime, "sbs.hcal.clus_blk.atime[Ndata.sbs.hcal.clus_blk.atime]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.col", &Ndata_sbs_hcal_clus_blk_col, "Ndata.sbs.hcal.clus_blk.col/I");
   fClone->Branch("sbs.hcal.clus_blk.col", sbs_hcal_clus_blk_col, "sbs.hcal.clus_blk.col[Ndata.sbs.hcal.clus_blk.col]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.e", &Ndata_sbs_hcal_clus_blk_e, "Ndata.sbs.hcal.clus_blk.e/I");
   fClone->Branch("sbs.hcal.clus_blk.e", sbs_hcal_clus_blk_e, "sbs.hcal.clus_blk.e[Ndata.sbs.hcal.clus_blk.e]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.e_c", &Ndata_sbs_hcal_clus_blk_e_c, "Ndata.sbs.hcal.clus_blk.e_c/I");
   fClone->Branch("sbs.hcal.clus_blk.e_c", sbs_hcal_clus_blk_e_c, "sbs.hcal.clus_blk.e_c[Ndata.sbs.hcal.clus_blk.e_c]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.id", &Ndata_sbs_hcal_clus_blk_id, "Ndata.sbs.hcal.clus_blk.id/I");
   fClone->Branch("sbs.hcal.clus_blk.id", sbs_hcal_clus_blk_id, "sbs.hcal.clus_blk.id[Ndata.sbs.hcal.clus_blk.id]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.row", &Ndata_sbs_hcal_clus_blk_row, "Ndata.sbs.hcal.clus_blk.row/I");
   fClone->Branch("sbs.hcal.clus_blk.row", sbs_hcal_clus_blk_row, "sbs.hcal.clus_blk.row[Ndata.sbs.hcal.clus_blk.row]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.tdctime", &Ndata_sbs_hcal_clus_blk_tdctime, "Ndata.sbs.hcal.clus_blk.tdctime/I");
   fClone->Branch("sbs.hcal.clus_blk.tdctime", sbs_hcal_clus_blk_tdctime, "sbs.hcal.clus_blk.tdctime[Ndata.sbs.hcal.clus_blk.tdctime]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.x", &Ndata_sbs_hcal_clus_blk_x, "Ndata.sbs.hcal.clus_blk.x/I");
   fClone->Branch("sbs.hcal.clus_blk.x", sbs_hcal_clus_blk_x, "sbs.hcal.clus_blk.x[Ndata.sbs.hcal.clus_blk.x]/D");
   fClone->Branch("Ndata.sbs.hcal.clus_blk.y", &Ndata_sbs_hcal_clus_blk_y, "Ndata.sbs.hcal.clus_blk.y/I");
   fClone->Branch("sbs.hcal.clus_blk.y", sbs_hcal_clus_blk_y, "sbs.hcal.clus_blk.y[Ndata.sbs.hcal.clus_blk.y]/D");
   fClone->Branch("BB.gold.beta", &BB_gold_beta, "BB.gold.beta/D");
   fClone->Branch("BB.gold.dp", &BB_gold_dp, "BB.gold.dp/D");
   fClone->Branch("BB.gold.index", &BB_gold_index, "BB.gold.index/D");
   fClone->Branch("BB.gold.ok", &BB_gold_ok, "BB.gold.ok/D");
   fClone->Branch("BB.gold.p", &BB_gold_p, "BB.gold.p/D");
   fClone->Branch("BB.gold.ph", &BB_gold_ph, "BB.gold.ph/D");
   fClone->Branch("BB.gold.px", &BB_gold_px, "BB.gold.px/D");
   fClone->Branch("BB.gold.py", &BB_gold_py, "BB.gold.py/D");
   fClone->Branch("BB.gold.pz", &BB_gold_pz, "BB.gold.pz/D");
   fClone->Branch("BB.gold.th", &BB_gold_th, "BB.gold.th/D");
   fClone->Branch("BB.gold.x", &BB_gold_x, "BB.gold.x/D");
   fClone->Branch("BB.gold.y", &BB_gold_y, "BB.gold.y/D");
   fClone->Branch("Lrb.BPMA.rawcur.1", &Lrb_BPMA_rawcur_1, "Lrb.BPMA.rawcur.1/D");
   fClone->Branch("Lrb.BPMA.rawcur.2", &Lrb_BPMA_rawcur_2, "Lrb.BPMA.rawcur.2/D");
   fClone->Branch("Lrb.BPMA.rawcur.3", &Lrb_BPMA_rawcur_3, "Lrb.BPMA.rawcur.3/D");
   fClone->Branch("Lrb.BPMA.rawcur.4", &Lrb_BPMA_rawcur_4, "Lrb.BPMA.rawcur.4/D");
   fClone->Branch("Lrb.BPMA.rotpos1", &Lrb_BPMA_rotpos1, "Lrb.BPMA.rotpos1/D");
   fClone->Branch("Lrb.BPMA.rotpos2", &Lrb_BPMA_rotpos2, "Lrb.BPMA.rotpos2/D");
   fClone->Branch("Lrb.BPMA.x", &Lrb_BPMA_x, "Lrb.BPMA.x/D");
   fClone->Branch("Lrb.BPMA.y", &Lrb_BPMA_y, "Lrb.BPMA.y/D");
   fClone->Branch("Lrb.BPMA.z", &Lrb_BPMA_z, "Lrb.BPMA.z/D");
   fClone->Branch("Lrb.BPMB.rawcur.1", &Lrb_BPMB_rawcur_1, "Lrb.BPMB.rawcur.1/D");
   fClone->Branch("Lrb.BPMB.rawcur.2", &Lrb_BPMB_rawcur_2, "Lrb.BPMB.rawcur.2/D");
   fClone->Branch("Lrb.BPMB.rawcur.3", &Lrb_BPMB_rawcur_3, "Lrb.BPMB.rawcur.3/D");
   fClone->Branch("Lrb.BPMB.rawcur.4", &Lrb_BPMB_rawcur_4, "Lrb.BPMB.rawcur.4/D");
   fClone->Branch("Lrb.BPMB.rotpos1", &Lrb_BPMB_rotpos1, "Lrb.BPMB.rotpos1/D");
   fClone->Branch("Lrb.BPMB.rotpos2", &Lrb_BPMB_rotpos2, "Lrb.BPMB.rotpos2/D");
   fClone->Branch("Lrb.BPMB.x", &Lrb_BPMB_x, "Lrb.BPMB.x/D");
   fClone->Branch("Lrb.BPMB.y", &Lrb_BPMB_y, "Lrb.BPMB.y/D");
   fClone->Branch("Lrb.BPMB.z", &Lrb_BPMB_z, "Lrb.BPMB.z/D");
   fClone->Branch("Lrb.Raster.bpma.x", &Lrb_Raster_bpma_x, "Lrb.Raster.bpma.x/D");
   fClone->Branch("Lrb.Raster.bpma.y", &Lrb_Raster_bpma_y, "Lrb.Raster.bpma.y/D");
   fClone->Branch("Lrb.Raster.bpma.z", &Lrb_Raster_bpma_z, "Lrb.Raster.bpma.z/D");
   fClone->Branch("Lrb.Raster.bpmb.x", &Lrb_Raster_bpmb_x, "Lrb.Raster.bpmb.x/D");
   fClone->Branch("Lrb.Raster.bpmb.y", &Lrb_Raster_bpmb_y, "Lrb.Raster.bpmb.y/D");
   fClone->Branch("Lrb.Raster.bpmb.z", &Lrb_Raster_bpmb_z, "Lrb.Raster.bpmb.z/D");
   fClone->Branch("Lrb.Raster.rawcur.x", &Lrb_Raster_rawcur_x, "Lrb.Raster.rawcur.x/D");
   fClone->Branch("Lrb.Raster.rawcur.y", &Lrb_Raster_rawcur_y, "Lrb.Raster.rawcur.y/D");
   fClone->Branch("Lrb.Raster.rawslope.x", &Lrb_Raster_rawslope_x, "Lrb.Raster.rawslope.x/D");
   fClone->Branch("Lrb.Raster.rawslope.y", &Lrb_Raster_rawslope_y, "Lrb.Raster.rawslope.y/D");
   fClone->Branch("Lrb.Raster.target.dir.x", &Lrb_Raster_target_dir_x, "Lrb.Raster.target.dir.x/D");
   fClone->Branch("Lrb.Raster.target.dir.y", &Lrb_Raster_target_dir_y, "Lrb.Raster.target.dir.y/D");
   fClone->Branch("Lrb.Raster.target.dir.z", &Lrb_Raster_target_dir_z, "Lrb.Raster.target.dir.z/D");
   fClone->Branch("Lrb.Raster.target.x", &Lrb_Raster_target_x, "Lrb.Raster.target.x/D");
   fClone->Branch("Lrb.Raster.target.y", &Lrb_Raster_target_y, "Lrb.Raster.target.y/D");
   fClone->Branch("Lrb.Raster.target.z", &Lrb_Raster_target_z, "Lrb.Raster.target.z/D");
   fClone->Branch("Lrb.Raster2.bpma.x", &Lrb_Raster2_bpma_x, "Lrb.Raster2.bpma.x/D");
   fClone->Branch("Lrb.Raster2.bpma.y", &Lrb_Raster2_bpma_y, "Lrb.Raster2.bpma.y/D");
   fClone->Branch("Lrb.Raster2.bpma.z", &Lrb_Raster2_bpma_z, "Lrb.Raster2.bpma.z/D");
   fClone->Branch("Lrb.Raster2.bpmb.x", &Lrb_Raster2_bpmb_x, "Lrb.Raster2.bpmb.x/D");
   fClone->Branch("Lrb.Raster2.bpmb.y", &Lrb_Raster2_bpmb_y, "Lrb.Raster2.bpmb.y/D");
   fClone->Branch("Lrb.Raster2.bpmb.z", &Lrb_Raster2_bpmb_z, "Lrb.Raster2.bpmb.z/D");
   fClone->Branch("Lrb.Raster2.rawcur.x", &Lrb_Raster2_rawcur_x, "Lrb.Raster2.rawcur.x/D");
   fClone->Branch("Lrb.Raster2.rawcur.y", &Lrb_Raster2_rawcur_y, "Lrb.Raster2.rawcur.y/D");
   fClone->Branch("Lrb.Raster2.rawslope.x", &Lrb_Raster2_rawslope_x, "Lrb.Raster2.rawslope.x/D");
   fClone->Branch("Lrb.Raster2.rawslope.y", &Lrb_Raster2_rawslope_y, "Lrb.Raster2.rawslope.y/D");
   fClone->Branch("Lrb.Raster2.target.dir.x", &Lrb_Raster2_target_dir_x, "Lrb.Raster2.target.dir.x/D");
   fClone->Branch("Lrb.Raster2.target.dir.y", &Lrb_Raster2_target_dir_y, "Lrb.Raster2.target.dir.y/D");
   fClone->Branch("Lrb.Raster2.target.dir.z", &Lrb_Raster2_target_dir_z, "Lrb.Raster2.target.dir.z/D");
   fClone->Branch("Lrb.Raster2.target.x", &Lrb_Raster2_target_x, "Lrb.Raster2.target.x/D");
   fClone->Branch("Lrb.Raster2.target.y", &Lrb_Raster2_target_y, "Lrb.Raster2.target.y/D");
   fClone->Branch("Lrb.Raster2.target.z", &Lrb_Raster2_target_z, "Lrb.Raster2.target.z/D");
   fClone->Branch("Lrb.dir.x", &Lrb_dir_x, "Lrb.dir.x/D");
   fClone->Branch("Lrb.dir.y", &Lrb_dir_y, "Lrb.dir.y/D");
   fClone->Branch("Lrb.dir.z", &Lrb_dir_z, "Lrb.dir.z/D");
   fClone->Branch("Lrb.e", &Lrb_e, "Lrb.e/D");
   fClone->Branch("Lrb.ok", &Lrb_ok, "Lrb.ok/D");
   fClone->Branch("Lrb.p", &Lrb_p, "Lrb.p/D");
   fClone->Branch("Lrb.ph", &Lrb_ph, "Lrb.ph/D");
   fClone->Branch("Lrb.pol", &Lrb_pol, "Lrb.pol/D");
   fClone->Branch("Lrb.px", &Lrb_px, "Lrb.px/D");
   fClone->Branch("Lrb.py", &Lrb_py, "Lrb.py/D");
   fClone->Branch("Lrb.pz", &Lrb_pz, "Lrb.pz/D");
   fClone->Branch("Lrb.th", &Lrb_th, "Lrb.th/D");
   fClone->Branch("Lrb.x", &Lrb_x, "Lrb.x/D");
   fClone->Branch("Lrb.xpos", &Lrb_xpos, "Lrb.xpos/D");
   fClone->Branch("Lrb.y", &Lrb_y, "Lrb.y/D");
   fClone->Branch("Lrb.ypos", &Lrb_ypos, "Lrb.ypos/D");
   fClone->Branch("Lrb.z", &Lrb_z, "Lrb.z/D");
   fClone->Branch("Lrb.zpos", &Lrb_zpos, "Lrb.zpos/D");
   fClone->Branch("SBSrb.BPMA.rawcur.1", &SBSrb_BPMA_rawcur_1, "SBSrb.BPMA.rawcur.1/D");
   fClone->Branch("SBSrb.BPMA.rawcur.2", &SBSrb_BPMA_rawcur_2, "SBSrb.BPMA.rawcur.2/D");
   fClone->Branch("SBSrb.BPMA.rawcur.3", &SBSrb_BPMA_rawcur_3, "SBSrb.BPMA.rawcur.3/D");
   fClone->Branch("SBSrb.BPMA.rawcur.4", &SBSrb_BPMA_rawcur_4, "SBSrb.BPMA.rawcur.4/D");
   fClone->Branch("SBSrb.BPMA.rotpos1", &SBSrb_BPMA_rotpos1, "SBSrb.BPMA.rotpos1/D");
   fClone->Branch("SBSrb.BPMA.rotpos2", &SBSrb_BPMA_rotpos2, "SBSrb.BPMA.rotpos2/D");
   fClone->Branch("SBSrb.BPMA.x", &SBSrb_BPMA_x, "SBSrb.BPMA.x/D");
   fClone->Branch("SBSrb.BPMA.y", &SBSrb_BPMA_y, "SBSrb.BPMA.y/D");
   fClone->Branch("SBSrb.BPMA.z", &SBSrb_BPMA_z, "SBSrb.BPMA.z/D");
   fClone->Branch("SBSrb.BPMB.rawcur.1", &SBSrb_BPMB_rawcur_1, "SBSrb.BPMB.rawcur.1/D");
   fClone->Branch("SBSrb.BPMB.rawcur.2", &SBSrb_BPMB_rawcur_2, "SBSrb.BPMB.rawcur.2/D");
   fClone->Branch("SBSrb.BPMB.rawcur.3", &SBSrb_BPMB_rawcur_3, "SBSrb.BPMB.rawcur.3/D");
   fClone->Branch("SBSrb.BPMB.rawcur.4", &SBSrb_BPMB_rawcur_4, "SBSrb.BPMB.rawcur.4/D");
   fClone->Branch("SBSrb.BPMB.rotpos1", &SBSrb_BPMB_rotpos1, "SBSrb.BPMB.rotpos1/D");
   fClone->Branch("SBSrb.BPMB.rotpos2", &SBSrb_BPMB_rotpos2, "SBSrb.BPMB.rotpos2/D");
   fClone->Branch("SBSrb.BPMB.x", &SBSrb_BPMB_x, "SBSrb.BPMB.x/D");
   fClone->Branch("SBSrb.BPMB.y", &SBSrb_BPMB_y, "SBSrb.BPMB.y/D");
   fClone->Branch("SBSrb.BPMB.z", &SBSrb_BPMB_z, "SBSrb.BPMB.z/D");
   fClone->Branch("SBSrb.Raster.bpma.x", &SBSrb_Raster_bpma_x, "SBSrb.Raster.bpma.x/D");
   fClone->Branch("SBSrb.Raster.bpma.y", &SBSrb_Raster_bpma_y, "SBSrb.Raster.bpma.y/D");
   fClone->Branch("SBSrb.Raster.bpma.z", &SBSrb_Raster_bpma_z, "SBSrb.Raster.bpma.z/D");
   fClone->Branch("SBSrb.Raster.bpmb.x", &SBSrb_Raster_bpmb_x, "SBSrb.Raster.bpmb.x/D");
   fClone->Branch("SBSrb.Raster.bpmb.y", &SBSrb_Raster_bpmb_y, "SBSrb.Raster.bpmb.y/D");
   fClone->Branch("SBSrb.Raster.bpmb.z", &SBSrb_Raster_bpmb_z, "SBSrb.Raster.bpmb.z/D");
   fClone->Branch("SBSrb.Raster.rawcur.x", &SBSrb_Raster_rawcur_x, "SBSrb.Raster.rawcur.x/D");
   fClone->Branch("SBSrb.Raster.rawcur.y", &SBSrb_Raster_rawcur_y, "SBSrb.Raster.rawcur.y/D");
   fClone->Branch("SBSrb.Raster.rawslope.x", &SBSrb_Raster_rawslope_x, "SBSrb.Raster.rawslope.x/D");
   fClone->Branch("SBSrb.Raster.rawslope.y", &SBSrb_Raster_rawslope_y, "SBSrb.Raster.rawslope.y/D");
   fClone->Branch("SBSrb.Raster.target.dir.x", &SBSrb_Raster_target_dir_x, "SBSrb.Raster.target.dir.x/D");
   fClone->Branch("SBSrb.Raster.target.dir.y", &SBSrb_Raster_target_dir_y, "SBSrb.Raster.target.dir.y/D");
   fClone->Branch("SBSrb.Raster.target.dir.z", &SBSrb_Raster_target_dir_z, "SBSrb.Raster.target.dir.z/D");
   fClone->Branch("SBSrb.Raster.target.x", &SBSrb_Raster_target_x, "SBSrb.Raster.target.x/D");
   fClone->Branch("SBSrb.Raster.target.y", &SBSrb_Raster_target_y, "SBSrb.Raster.target.y/D");
   fClone->Branch("SBSrb.Raster.target.z", &SBSrb_Raster_target_z, "SBSrb.Raster.target.z/D");
   fClone->Branch("SBSrb.Raster2.bpma.x", &SBSrb_Raster2_bpma_x, "SBSrb.Raster2.bpma.x/D");
   fClone->Branch("SBSrb.Raster2.bpma.y", &SBSrb_Raster2_bpma_y, "SBSrb.Raster2.bpma.y/D");
   fClone->Branch("SBSrb.Raster2.bpma.z", &SBSrb_Raster2_bpma_z, "SBSrb.Raster2.bpma.z/D");
   fClone->Branch("SBSrb.Raster2.bpmb.x", &SBSrb_Raster2_bpmb_x, "SBSrb.Raster2.bpmb.x/D");
   fClone->Branch("SBSrb.Raster2.bpmb.y", &SBSrb_Raster2_bpmb_y, "SBSrb.Raster2.bpmb.y/D");
   fClone->Branch("SBSrb.Raster2.bpmb.z", &SBSrb_Raster2_bpmb_z, "SBSrb.Raster2.bpmb.z/D");
   fClone->Branch("SBSrb.Raster2.rawcur.x", &SBSrb_Raster2_rawcur_x, "SBSrb.Raster2.rawcur.x/D");
   fClone->Branch("SBSrb.Raster2.rawcur.y", &SBSrb_Raster2_rawcur_y, "SBSrb.Raster2.rawcur.y/D");
   fClone->Branch("SBSrb.Raster2.rawslope.x", &SBSrb_Raster2_rawslope_x, "SBSrb.Raster2.rawslope.x/D");
   fClone->Branch("SBSrb.Raster2.rawslope.y", &SBSrb_Raster2_rawslope_y, "SBSrb.Raster2.rawslope.y/D");
   fClone->Branch("SBSrb.Raster2.target.dir.x", &SBSrb_Raster2_target_dir_x, "SBSrb.Raster2.target.dir.x/D");
   fClone->Branch("SBSrb.Raster2.target.dir.y", &SBSrb_Raster2_target_dir_y, "SBSrb.Raster2.target.dir.y/D");
   fClone->Branch("SBSrb.Raster2.target.dir.z", &SBSrb_Raster2_target_dir_z, "SBSrb.Raster2.target.dir.z/D");
   fClone->Branch("SBSrb.Raster2.target.x", &SBSrb_Raster2_target_x, "SBSrb.Raster2.target.x/D");
   fClone->Branch("SBSrb.Raster2.target.y", &SBSrb_Raster2_target_y, "SBSrb.Raster2.target.y/D");
   fClone->Branch("SBSrb.Raster2.target.z", &SBSrb_Raster2_target_z, "SBSrb.Raster2.target.z/D");
   fClone->Branch("SBSrb.dir.x", &SBSrb_dir_x, "SBSrb.dir.x/D");
   fClone->Branch("SBSrb.dir.y", &SBSrb_dir_y, "SBSrb.dir.y/D");
   fClone->Branch("SBSrb.dir.z", &SBSrb_dir_z, "SBSrb.dir.z/D");
   fClone->Branch("SBSrb.e", &SBSrb_e, "SBSrb.e/D");
   fClone->Branch("SBSrb.ok", &SBSrb_ok, "SBSrb.ok/D");
   fClone->Branch("SBSrb.p", &SBSrb_p, "SBSrb.p/D");
   fClone->Branch("SBSrb.ph", &SBSrb_ph, "SBSrb.ph/D");
   fClone->Branch("SBSrb.pol", &SBSrb_pol, "SBSrb.pol/D");
   fClone->Branch("SBSrb.px", &SBSrb_px, "SBSrb.px/D");
   fClone->Branch("SBSrb.py", &SBSrb_py, "SBSrb.py/D");
   fClone->Branch("SBSrb.pz", &SBSrb_pz, "SBSrb.pz/D");
   fClone->Branch("SBSrb.th", &SBSrb_th, "SBSrb.th/D");
   fClone->Branch("SBSrb.x", &SBSrb_x, "SBSrb.x/D");
   fClone->Branch("SBSrb.xpos", &SBSrb_xpos, "SBSrb.xpos/D");
   fClone->Branch("SBSrb.y", &SBSrb_y, "SBSrb.y/D");
   fClone->Branch("SBSrb.ypos", &SBSrb_ypos, "SBSrb.ypos/D");
   fClone->Branch("SBSrb.z", &SBSrb_z, "SBSrb.z/D");
   fClone->Branch("SBSrb.zpos", &SBSrb_zpos, "SBSrb.zpos/D");
   fClone->Branch("bb.gem.hit.ngoodhits", &bb_gem_hit_ngoodhits, "bb.gem.hit.ngoodhits/D");
   fClone->Branch("bb.gem.m0.clust.nclustu", &bb_gem_m0_clust_nclustu, "bb.gem.m0.clust.nclustu/D");
   fClone->Branch("bb.gem.m0.clust.nclustu_tot", &bb_gem_m0_clust_nclustu_tot, "bb.gem.m0.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m0.clust.nclustv", &bb_gem_m0_clust_nclustv, "bb.gem.m0.clust.nclustv/D");
   fClone->Branch("bb.gem.m0.clust.nclustv_tot", &bb_gem_m0_clust_nclustv_tot, "bb.gem.m0.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m0.strip.nstrips_keep", &bb_gem_m0_strip_nstrips_keep, "bb.gem.m0.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m0.strip.nstrips_keepU", &bb_gem_m0_strip_nstrips_keepU, "bb.gem.m0.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m0.strip.nstrips_keepV", &bb_gem_m0_strip_nstrips_keepV, "bb.gem.m0.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m0.strip.nstrips_keep_lmax", &bb_gem_m0_strip_nstrips_keep_lmax, "bb.gem.m0.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m0.strip.nstrips_keep_lmaxU", &bb_gem_m0_strip_nstrips_keep_lmaxU, "bb.gem.m0.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m0.strip.nstrips_keep_lmaxV", &bb_gem_m0_strip_nstrips_keep_lmaxV, "bb.gem.m0.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m0.strip.nstripsfired", &bb_gem_m0_strip_nstripsfired, "bb.gem.m0.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m1.clust.nclustu", &bb_gem_m1_clust_nclustu, "bb.gem.m1.clust.nclustu/D");
   fClone->Branch("bb.gem.m1.clust.nclustu_tot", &bb_gem_m1_clust_nclustu_tot, "bb.gem.m1.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m1.clust.nclustv", &bb_gem_m1_clust_nclustv, "bb.gem.m1.clust.nclustv/D");
   fClone->Branch("bb.gem.m1.clust.nclustv_tot", &bb_gem_m1_clust_nclustv_tot, "bb.gem.m1.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m1.strip.nstrips_keep", &bb_gem_m1_strip_nstrips_keep, "bb.gem.m1.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m1.strip.nstrips_keepU", &bb_gem_m1_strip_nstrips_keepU, "bb.gem.m1.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m1.strip.nstrips_keepV", &bb_gem_m1_strip_nstrips_keepV, "bb.gem.m1.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m1.strip.nstrips_keep_lmax", &bb_gem_m1_strip_nstrips_keep_lmax, "bb.gem.m1.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m1.strip.nstrips_keep_lmaxU", &bb_gem_m1_strip_nstrips_keep_lmaxU, "bb.gem.m1.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m1.strip.nstrips_keep_lmaxV", &bb_gem_m1_strip_nstrips_keep_lmaxV, "bb.gem.m1.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m1.strip.nstripsfired", &bb_gem_m1_strip_nstripsfired, "bb.gem.m1.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m10.clust.nclustu", &bb_gem_m10_clust_nclustu, "bb.gem.m10.clust.nclustu/D");
   fClone->Branch("bb.gem.m10.clust.nclustu_tot", &bb_gem_m10_clust_nclustu_tot, "bb.gem.m10.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m10.clust.nclustv", &bb_gem_m10_clust_nclustv, "bb.gem.m10.clust.nclustv/D");
   fClone->Branch("bb.gem.m10.clust.nclustv_tot", &bb_gem_m10_clust_nclustv_tot, "bb.gem.m10.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m10.strip.nstrips_keep", &bb_gem_m10_strip_nstrips_keep, "bb.gem.m10.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m10.strip.nstrips_keepU", &bb_gem_m10_strip_nstrips_keepU, "bb.gem.m10.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m10.strip.nstrips_keepV", &bb_gem_m10_strip_nstrips_keepV, "bb.gem.m10.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m10.strip.nstrips_keep_lmax", &bb_gem_m10_strip_nstrips_keep_lmax, "bb.gem.m10.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m10.strip.nstrips_keep_lmaxU", &bb_gem_m10_strip_nstrips_keep_lmaxU, "bb.gem.m10.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m10.strip.nstrips_keep_lmaxV", &bb_gem_m10_strip_nstrips_keep_lmaxV, "bb.gem.m10.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m10.strip.nstripsfired", &bb_gem_m10_strip_nstripsfired, "bb.gem.m10.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m11.clust.nclustu", &bb_gem_m11_clust_nclustu, "bb.gem.m11.clust.nclustu/D");
   fClone->Branch("bb.gem.m11.clust.nclustu_tot", &bb_gem_m11_clust_nclustu_tot, "bb.gem.m11.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m11.clust.nclustv", &bb_gem_m11_clust_nclustv, "bb.gem.m11.clust.nclustv/D");
   fClone->Branch("bb.gem.m11.clust.nclustv_tot", &bb_gem_m11_clust_nclustv_tot, "bb.gem.m11.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m11.strip.nstrips_keep", &bb_gem_m11_strip_nstrips_keep, "bb.gem.m11.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m11.strip.nstrips_keepU", &bb_gem_m11_strip_nstrips_keepU, "bb.gem.m11.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m11.strip.nstrips_keepV", &bb_gem_m11_strip_nstrips_keepV, "bb.gem.m11.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m11.strip.nstrips_keep_lmax", &bb_gem_m11_strip_nstrips_keep_lmax, "bb.gem.m11.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m11.strip.nstrips_keep_lmaxU", &bb_gem_m11_strip_nstrips_keep_lmaxU, "bb.gem.m11.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m11.strip.nstrips_keep_lmaxV", &bb_gem_m11_strip_nstrips_keep_lmaxV, "bb.gem.m11.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m11.strip.nstripsfired", &bb_gem_m11_strip_nstripsfired, "bb.gem.m11.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m2.clust.nclustu", &bb_gem_m2_clust_nclustu, "bb.gem.m2.clust.nclustu/D");
   fClone->Branch("bb.gem.m2.clust.nclustu_tot", &bb_gem_m2_clust_nclustu_tot, "bb.gem.m2.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m2.clust.nclustv", &bb_gem_m2_clust_nclustv, "bb.gem.m2.clust.nclustv/D");
   fClone->Branch("bb.gem.m2.clust.nclustv_tot", &bb_gem_m2_clust_nclustv_tot, "bb.gem.m2.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m2.strip.nstrips_keep", &bb_gem_m2_strip_nstrips_keep, "bb.gem.m2.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m2.strip.nstrips_keepU", &bb_gem_m2_strip_nstrips_keepU, "bb.gem.m2.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m2.strip.nstrips_keepV", &bb_gem_m2_strip_nstrips_keepV, "bb.gem.m2.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m2.strip.nstrips_keep_lmax", &bb_gem_m2_strip_nstrips_keep_lmax, "bb.gem.m2.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m2.strip.nstrips_keep_lmaxU", &bb_gem_m2_strip_nstrips_keep_lmaxU, "bb.gem.m2.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m2.strip.nstrips_keep_lmaxV", &bb_gem_m2_strip_nstrips_keep_lmaxV, "bb.gem.m2.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m2.strip.nstripsfired", &bb_gem_m2_strip_nstripsfired, "bb.gem.m2.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m3.clust.nclustu", &bb_gem_m3_clust_nclustu, "bb.gem.m3.clust.nclustu/D");
   fClone->Branch("bb.gem.m3.clust.nclustu_tot", &bb_gem_m3_clust_nclustu_tot, "bb.gem.m3.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m3.clust.nclustv", &bb_gem_m3_clust_nclustv, "bb.gem.m3.clust.nclustv/D");
   fClone->Branch("bb.gem.m3.clust.nclustv_tot", &bb_gem_m3_clust_nclustv_tot, "bb.gem.m3.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m3.strip.nstrips_keep", &bb_gem_m3_strip_nstrips_keep, "bb.gem.m3.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m3.strip.nstrips_keepU", &bb_gem_m3_strip_nstrips_keepU, "bb.gem.m3.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m3.strip.nstrips_keepV", &bb_gem_m3_strip_nstrips_keepV, "bb.gem.m3.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m3.strip.nstrips_keep_lmax", &bb_gem_m3_strip_nstrips_keep_lmax, "bb.gem.m3.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m3.strip.nstrips_keep_lmaxU", &bb_gem_m3_strip_nstrips_keep_lmaxU, "bb.gem.m3.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m3.strip.nstrips_keep_lmaxV", &bb_gem_m3_strip_nstrips_keep_lmaxV, "bb.gem.m3.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m3.strip.nstripsfired", &bb_gem_m3_strip_nstripsfired, "bb.gem.m3.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m4.clust.nclustu", &bb_gem_m4_clust_nclustu, "bb.gem.m4.clust.nclustu/D");
   fClone->Branch("bb.gem.m4.clust.nclustu_tot", &bb_gem_m4_clust_nclustu_tot, "bb.gem.m4.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m4.clust.nclustv", &bb_gem_m4_clust_nclustv, "bb.gem.m4.clust.nclustv/D");
   fClone->Branch("bb.gem.m4.clust.nclustv_tot", &bb_gem_m4_clust_nclustv_tot, "bb.gem.m4.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m4.strip.nstrips_keep", &bb_gem_m4_strip_nstrips_keep, "bb.gem.m4.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m4.strip.nstrips_keepU", &bb_gem_m4_strip_nstrips_keepU, "bb.gem.m4.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m4.strip.nstrips_keepV", &bb_gem_m4_strip_nstrips_keepV, "bb.gem.m4.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m4.strip.nstrips_keep_lmax", &bb_gem_m4_strip_nstrips_keep_lmax, "bb.gem.m4.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m4.strip.nstrips_keep_lmaxU", &bb_gem_m4_strip_nstrips_keep_lmaxU, "bb.gem.m4.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m4.strip.nstrips_keep_lmaxV", &bb_gem_m4_strip_nstrips_keep_lmaxV, "bb.gem.m4.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m4.strip.nstripsfired", &bb_gem_m4_strip_nstripsfired, "bb.gem.m4.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m5.clust.nclustu", &bb_gem_m5_clust_nclustu, "bb.gem.m5.clust.nclustu/D");
   fClone->Branch("bb.gem.m5.clust.nclustu_tot", &bb_gem_m5_clust_nclustu_tot, "bb.gem.m5.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m5.clust.nclustv", &bb_gem_m5_clust_nclustv, "bb.gem.m5.clust.nclustv/D");
   fClone->Branch("bb.gem.m5.clust.nclustv_tot", &bb_gem_m5_clust_nclustv_tot, "bb.gem.m5.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m5.strip.nstrips_keep", &bb_gem_m5_strip_nstrips_keep, "bb.gem.m5.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m5.strip.nstrips_keepU", &bb_gem_m5_strip_nstrips_keepU, "bb.gem.m5.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m5.strip.nstrips_keepV", &bb_gem_m5_strip_nstrips_keepV, "bb.gem.m5.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m5.strip.nstrips_keep_lmax", &bb_gem_m5_strip_nstrips_keep_lmax, "bb.gem.m5.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m5.strip.nstrips_keep_lmaxU", &bb_gem_m5_strip_nstrips_keep_lmaxU, "bb.gem.m5.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m5.strip.nstrips_keep_lmaxV", &bb_gem_m5_strip_nstrips_keep_lmaxV, "bb.gem.m5.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m5.strip.nstripsfired", &bb_gem_m5_strip_nstripsfired, "bb.gem.m5.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m6.clust.nclustu", &bb_gem_m6_clust_nclustu, "bb.gem.m6.clust.nclustu/D");
   fClone->Branch("bb.gem.m6.clust.nclustu_tot", &bb_gem_m6_clust_nclustu_tot, "bb.gem.m6.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m6.clust.nclustv", &bb_gem_m6_clust_nclustv, "bb.gem.m6.clust.nclustv/D");
   fClone->Branch("bb.gem.m6.clust.nclustv_tot", &bb_gem_m6_clust_nclustv_tot, "bb.gem.m6.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m6.strip.nstrips_keep", &bb_gem_m6_strip_nstrips_keep, "bb.gem.m6.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m6.strip.nstrips_keepU", &bb_gem_m6_strip_nstrips_keepU, "bb.gem.m6.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m6.strip.nstrips_keepV", &bb_gem_m6_strip_nstrips_keepV, "bb.gem.m6.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m6.strip.nstrips_keep_lmax", &bb_gem_m6_strip_nstrips_keep_lmax, "bb.gem.m6.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m6.strip.nstrips_keep_lmaxU", &bb_gem_m6_strip_nstrips_keep_lmaxU, "bb.gem.m6.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m6.strip.nstrips_keep_lmaxV", &bb_gem_m6_strip_nstrips_keep_lmaxV, "bb.gem.m6.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m6.strip.nstripsfired", &bb_gem_m6_strip_nstripsfired, "bb.gem.m6.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m7.clust.nclustu", &bb_gem_m7_clust_nclustu, "bb.gem.m7.clust.nclustu/D");
   fClone->Branch("bb.gem.m7.clust.nclustu_tot", &bb_gem_m7_clust_nclustu_tot, "bb.gem.m7.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m7.clust.nclustv", &bb_gem_m7_clust_nclustv, "bb.gem.m7.clust.nclustv/D");
   fClone->Branch("bb.gem.m7.clust.nclustv_tot", &bb_gem_m7_clust_nclustv_tot, "bb.gem.m7.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m7.strip.nstrips_keep", &bb_gem_m7_strip_nstrips_keep, "bb.gem.m7.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m7.strip.nstrips_keepU", &bb_gem_m7_strip_nstrips_keepU, "bb.gem.m7.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m7.strip.nstrips_keepV", &bb_gem_m7_strip_nstrips_keepV, "bb.gem.m7.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m7.strip.nstrips_keep_lmax", &bb_gem_m7_strip_nstrips_keep_lmax, "bb.gem.m7.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m7.strip.nstrips_keep_lmaxU", &bb_gem_m7_strip_nstrips_keep_lmaxU, "bb.gem.m7.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m7.strip.nstrips_keep_lmaxV", &bb_gem_m7_strip_nstrips_keep_lmaxV, "bb.gem.m7.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m7.strip.nstripsfired", &bb_gem_m7_strip_nstripsfired, "bb.gem.m7.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m8.clust.nclustu", &bb_gem_m8_clust_nclustu, "bb.gem.m8.clust.nclustu/D");
   fClone->Branch("bb.gem.m8.clust.nclustu_tot", &bb_gem_m8_clust_nclustu_tot, "bb.gem.m8.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m8.clust.nclustv", &bb_gem_m8_clust_nclustv, "bb.gem.m8.clust.nclustv/D");
   fClone->Branch("bb.gem.m8.clust.nclustv_tot", &bb_gem_m8_clust_nclustv_tot, "bb.gem.m8.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m8.strip.nstrips_keep", &bb_gem_m8_strip_nstrips_keep, "bb.gem.m8.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m8.strip.nstrips_keepU", &bb_gem_m8_strip_nstrips_keepU, "bb.gem.m8.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m8.strip.nstrips_keepV", &bb_gem_m8_strip_nstrips_keepV, "bb.gem.m8.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m8.strip.nstrips_keep_lmax", &bb_gem_m8_strip_nstrips_keep_lmax, "bb.gem.m8.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m8.strip.nstrips_keep_lmaxU", &bb_gem_m8_strip_nstrips_keep_lmaxU, "bb.gem.m8.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m8.strip.nstrips_keep_lmaxV", &bb_gem_m8_strip_nstrips_keep_lmaxV, "bb.gem.m8.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m8.strip.nstripsfired", &bb_gem_m8_strip_nstripsfired, "bb.gem.m8.strip.nstripsfired/D");
   fClone->Branch("bb.gem.m9.clust.nclustu", &bb_gem_m9_clust_nclustu, "bb.gem.m9.clust.nclustu/D");
   fClone->Branch("bb.gem.m9.clust.nclustu_tot", &bb_gem_m9_clust_nclustu_tot, "bb.gem.m9.clust.nclustu_tot/D");
   fClone->Branch("bb.gem.m9.clust.nclustv", &bb_gem_m9_clust_nclustv, "bb.gem.m9.clust.nclustv/D");
   fClone->Branch("bb.gem.m9.clust.nclustv_tot", &bb_gem_m9_clust_nclustv_tot, "bb.gem.m9.clust.nclustv_tot/D");
   fClone->Branch("bb.gem.m9.strip.nstrips_keep", &bb_gem_m9_strip_nstrips_keep, "bb.gem.m9.strip.nstrips_keep/D");
   fClone->Branch("bb.gem.m9.strip.nstrips_keepU", &bb_gem_m9_strip_nstrips_keepU, "bb.gem.m9.strip.nstrips_keepU/D");
   fClone->Branch("bb.gem.m9.strip.nstrips_keepV", &bb_gem_m9_strip_nstrips_keepV, "bb.gem.m9.strip.nstrips_keepV/D");
   fClone->Branch("bb.gem.m9.strip.nstrips_keep_lmax", &bb_gem_m9_strip_nstrips_keep_lmax, "bb.gem.m9.strip.nstrips_keep_lmax/D");
   fClone->Branch("bb.gem.m9.strip.nstrips_keep_lmaxU", &bb_gem_m9_strip_nstrips_keep_lmaxU, "bb.gem.m9.strip.nstrips_keep_lmaxU/D");
   fClone->Branch("bb.gem.m9.strip.nstrips_keep_lmaxV", &bb_gem_m9_strip_nstrips_keep_lmaxV, "bb.gem.m9.strip.nstrips_keep_lmaxV/D");
   fClone->Branch("bb.gem.m9.strip.nstripsfired", &bb_gem_m9_strip_nstripsfired, "bb.gem.m9.strip.nstripsfired/D");
   fClone->Branch("bb.gem.nlayershit", &bb_gem_nlayershit, "bb.gem.nlayershit/D");
   fClone->Branch("bb.gem.nlayershitu", &bb_gem_nlayershitu, "bb.gem.nlayershitu/D");
   fClone->Branch("bb.gem.nlayershituv", &bb_gem_nlayershituv, "bb.gem.nlayershituv/D");
   fClone->Branch("bb.gem.nlayershitv", &bb_gem_nlayershitv, "bb.gem.nlayershitv/D");
   fClone->Branch("bb.gem.track.besttrack", &bb_gem_track_besttrack, "bb.gem.track.besttrack/D");
   fClone->Branch("bb.gem.track.ntrack", &bb_gem_track_ntrack, "bb.gem.track.ntrack/D");
   fClone->Branch("bb.grinch_tdc.ngoodhits", &bb_grinch_tdc_ngoodhits, "bb.grinch_tdc.ngoodhits/D");
   fClone->Branch("bb.hodotdc.nclus", &bb_hodotdc_nclus, "bb.hodotdc.nclus/D");
   fClone->Branch("bb.ps.atimeblk", &bb_ps_atimeblk, "bb.ps.atimeblk/D");
   fClone->Branch("bb.ps.colblk", &bb_ps_colblk, "bb.ps.colblk/D");
   fClone->Branch("bb.ps.e", &bb_ps_e, "bb.ps.e/D");
   fClone->Branch("bb.ps.e_c", &bb_ps_e_c, "bb.ps.e_c/D");
   fClone->Branch("bb.ps.eblk", &bb_ps_eblk, "bb.ps.eblk/D");
   fClone->Branch("bb.ps.eblk_c", &bb_ps_eblk_c, "bb.ps.eblk_c/D");
   fClone->Branch("bb.ps.idblk", &bb_ps_idblk, "bb.ps.idblk/D");
   fClone->Branch("bb.ps.index", &bb_ps_index, "bb.ps.index/D");
   fClone->Branch("bb.ps.nblk", &bb_ps_nblk, "bb.ps.nblk/D");
   fClone->Branch("bb.ps.nclus", &bb_ps_nclus, "bb.ps.nclus/D");
   fClone->Branch("bb.ps.ngoodADChits", &bb_ps_ngoodADChits, "bb.ps.ngoodADChits/D");
   fClone->Branch("bb.ps.rowblk", &bb_ps_rowblk, "bb.ps.rowblk/D");
   fClone->Branch("bb.ps.x", &bb_ps_x, "bb.ps.x/D");
   fClone->Branch("bb.ps.y", &bb_ps_y, "bb.ps.y/D");
   fClone->Branch("bb.sh.atimeblk", &bb_sh_atimeblk, "bb.sh.atimeblk/D");
   fClone->Branch("bb.sh.colblk", &bb_sh_colblk, "bb.sh.colblk/D");
   fClone->Branch("bb.sh.e", &bb_sh_e, "bb.sh.e/D");
   fClone->Branch("bb.sh.e_c", &bb_sh_e_c, "bb.sh.e_c/D");
   fClone->Branch("bb.sh.eblk", &bb_sh_eblk, "bb.sh.eblk/D");
   fClone->Branch("bb.sh.eblk_c", &bb_sh_eblk_c, "bb.sh.eblk_c/D");
   fClone->Branch("bb.sh.idblk", &bb_sh_idblk, "bb.sh.idblk/D");
   fClone->Branch("bb.sh.index", &bb_sh_index, "bb.sh.index/D");
   fClone->Branch("bb.sh.nblk", &bb_sh_nblk, "bb.sh.nblk/D");
   fClone->Branch("bb.sh.nclus", &bb_sh_nclus, "bb.sh.nclus/D");
   fClone->Branch("bb.sh.ngoodADChits", &bb_sh_ngoodADChits, "bb.sh.ngoodADChits/D");
   fClone->Branch("bb.sh.rowblk", &bb_sh_rowblk, "bb.sh.rowblk/D");
   fClone->Branch("bb.sh.x", &bb_sh_x, "bb.sh.x/D");
   fClone->Branch("bb.sh.y", &bb_sh_y, "bb.sh.y/D");
   fClone->Branch("bb.tr.n", &bb_tr_n, "bb.tr.n/D");
   fClone->Branch("bb.ts.over_threshold", &bb_ts_over_threshold, "bb.ts.over_threshold/D");
   fClone->Branch("e.kine.Q2", &e_kine_Q2, "e.kine.Q2/D");
   fClone->Branch("e.kine.W2", &e_kine_W2, "e.kine.W2/D");
   fClone->Branch("e.kine.angle", &e_kine_angle, "e.kine.angle/D");
   fClone->Branch("e.kine.epsilon", &e_kine_epsilon, "e.kine.epsilon/D");
   fClone->Branch("e.kine.nu", &e_kine_nu, "e.kine.nu/D");
   fClone->Branch("e.kine.omega", &e_kine_omega, "e.kine.omega/D");
   fClone->Branch("e.kine.ph_q", &e_kine_ph_q, "e.kine.ph_q/D");
   fClone->Branch("e.kine.q3m", &e_kine_q3m, "e.kine.q3m/D");
   fClone->Branch("e.kine.q_x", &e_kine_q_x, "e.kine.q_x/D");
   fClone->Branch("e.kine.q_y", &e_kine_q_y, "e.kine.q_y/D");
   fClone->Branch("e.kine.q_z", &e_kine_q_z, "e.kine.q_z/D");
   fClone->Branch("e.kine.th_q", &e_kine_th_q, "e.kine.th_q/D");
   fClone->Branch("e.kine.x_bj", &e_kine_x_bj, "e.kine.x_bj/D");
   fClone->Branch("sbs.hcal.atimeblk", &sbs_hcal_atimeblk, "sbs.hcal.atimeblk/D");
   fClone->Branch("sbs.hcal.colblk", &sbs_hcal_colblk, "sbs.hcal.colblk/D");
   fClone->Branch("sbs.hcal.e", &sbs_hcal_e, "sbs.hcal.e/D");
   fClone->Branch("sbs.hcal.e_c", &sbs_hcal_e_c, "sbs.hcal.e_c/D");
   fClone->Branch("sbs.hcal.eblk", &sbs_hcal_eblk, "sbs.hcal.eblk/D");
   fClone->Branch("sbs.hcal.eblk_c", &sbs_hcal_eblk_c, "sbs.hcal.eblk_c/D");
   fClone->Branch("sbs.hcal.idblk", &sbs_hcal_idblk, "sbs.hcal.idblk/D");
   fClone->Branch("sbs.hcal.index", &sbs_hcal_index, "sbs.hcal.index/D");
   fClone->Branch("sbs.hcal.nblk", &sbs_hcal_nblk, "sbs.hcal.nblk/D");
   fClone->Branch("sbs.hcal.nclus", &sbs_hcal_nclus, "sbs.hcal.nclus/D");
   fClone->Branch("sbs.hcal.ngoodADChits", &sbs_hcal_ngoodADChits, "sbs.hcal.ngoodADChits/D");
   fClone->Branch("sbs.hcal.rowblk", &sbs_hcal_rowblk, "sbs.hcal.rowblk/D");
   fClone->Branch("sbs.hcal.tdctimeblk", &sbs_hcal_tdctimeblk, "sbs.hcal.tdctimeblk/D");
   fClone->Branch("sbs.hcal.x", &sbs_hcal_x, "sbs.hcal.x/D");
   fClone->Branch("sbs.hcal.y", &sbs_hcal_y, "sbs.hcal.y/D");
   fClone->Branch("singletrack", &singletrack, "singletrack/D");
   fClone->Branch("anytrack", &anytrack, "anytrack/D");
   fClone->Branch("halla_p", &halla_p, "halla_p/D");
   fClone->Branch("hac_bcm_average", &hac_bcm_average, "hac_bcm_average/D");
   fClone->Branch("IPM1H04A.XPOS", &IPM1H04A_XPOS, "IPM1H04A.XPOS/D");
   fClone->Branch("IPM1H04A.YPOS", &IPM1H04A_YPOS, "IPM1H04A.YPOS/D");
   fClone->Branch("IPM1H04E.XPOS", &IPM1H04E_XPOS, "IPM1H04E.XPOS/D");
   fClone->Branch("IPM1H04E.YPOS", &IPM1H04E_YPOS, "IPM1H04E.YPOS/D");
   fClone->Branch("IBC1H04CRCUR2", &IBC1H04CRCUR2, "IBC1H04CRCUR2/D");
   fClone->Branch("hac_bcm_dvm1_read", &hac_bcm_dvm1_read, "hac_bcm_dvm1_read/D");
   fClone->Branch("hac_bcm_dvm2_read", &hac_bcm_dvm2_read, "hac_bcm_dvm2_read/D");
   fClone->Branch("hac_bcm_dvm1_current", &hac_bcm_dvm1_current, "hac_bcm_dvm1_current/D");
   fClone->Branch("hac_bcm_dvm2_current", &hac_bcm_dvm2_current, "hac_bcm_dvm2_current/D");
   fClone->Branch("hac_bcm_A1", &hac_bcm_A1, "hac_bcm_A1/D");
   fClone->Branch("hac_bcm_A2", &hac_bcm_A2, "hac_bcm_A2/D");
   fClone->Branch("HALLA_p", &HALLA_p, "HALLA_p/D");
   //fClone->Branch("fEvtHdr.fEvtTime", &fEvtHdr_fEvtTime, "");
   fClone->Branch("fEvtHdr.fEvtNum", &fEvtHdr_fEvtNum, "/i");
   fClone->Branch("fEvtHdr.fEvtType", &fEvtHdr_fEvtType, "/i");
   fClone->Branch("fEvtHdr.fEvtLen", &fEvtHdr_fEvtLen, "/i");
   fClone->Branch("fEvtHdr.fHelicity", &fEvtHdr_fHelicity, "/I");
   fClone->Branch("fEvtHdr.fTrigBits", &fEvtHdr_fTrigBits, "/i");
   fClone->Branch("fEvtHdr.fRun", &fEvtHdr_fRun, "/i");
}


// Initialization function for TChains
void ChainInit(TChain *fChain)
{

   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("targx", &C_targx);
   fChain->SetBranchAddress("targy", &C_targy);
   fChain->SetBranchAddress("Ndata.bb.eps_over_etot", &C_Ndata_bb_eps_over_etot);
   fChain->SetBranchAddress("bb.eps_over_etot", C_bb_eps_over_etot);
   fChain->SetBranchAddress("Ndata.bb.etot_over_p", &C_Ndata_bb_etot_over_p);
   fChain->SetBranchAddress("bb.etot_over_p", C_bb_etot_over_p);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCU", &C_Ndata_bb_gem_hit_ADCU);
   fChain->SetBranchAddress("bb.gem.hit.ADCU", C_bb_gem_hit_ADCU);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCU_deconv", &C_Ndata_bb_gem_hit_ADCU_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCU_deconv", C_bb_gem_hit_ADCU_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCV", &C_Ndata_bb_gem_hit_ADCV);
   fChain->SetBranchAddress("bb.gem.hit.ADCV", C_bb_gem_hit_ADCV);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCV_deconv", &C_Ndata_bb_gem_hit_ADCV_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCV_deconv", C_bb_gem_hit_ADCV_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCasym", &C_Ndata_bb_gem_hit_ADCasym);
   fChain->SetBranchAddress("bb.gem.hit.ADCasym", C_bb_gem_hit_ADCasym);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCasym_deconv", &C_Ndata_bb_gem_hit_ADCasym_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCasym_deconv", C_bb_gem_hit_ADCasym_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCavg", &C_Ndata_bb_gem_hit_ADCavg);
   fChain->SetBranchAddress("bb.gem.hit.ADCavg", C_bb_gem_hit_ADCavg);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCavg_deconv", &C_Ndata_bb_gem_hit_ADCavg_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCavg_deconv", C_bb_gem_hit_ADCavg_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac0_Umax", &C_Ndata_bb_gem_hit_ADCfrac0_Umax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac0_Umax", C_bb_gem_hit_ADCfrac0_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac0_Vmax", &C_Ndata_bb_gem_hit_ADCfrac0_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac0_Vmax", C_bb_gem_hit_ADCfrac0_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac1_Umax", &C_Ndata_bb_gem_hit_ADCfrac1_Umax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac1_Umax", C_bb_gem_hit_ADCfrac1_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac1_Vmax", &C_Ndata_bb_gem_hit_ADCfrac1_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac1_Vmax", C_bb_gem_hit_ADCfrac1_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac2_Umax", &C_Ndata_bb_gem_hit_ADCfrac2_Umax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac2_Umax", C_bb_gem_hit_ADCfrac2_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac2_Vmax", &C_Ndata_bb_gem_hit_ADCfrac2_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac2_Vmax", C_bb_gem_hit_ADCfrac2_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac3_Umax", &C_Ndata_bb_gem_hit_ADCfrac3_Umax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac3_Umax", C_bb_gem_hit_ADCfrac3_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac3_Vmax", &C_Ndata_bb_gem_hit_ADCfrac3_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac3_Vmax", C_bb_gem_hit_ADCfrac3_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac4_Umax", &C_Ndata_bb_gem_hit_ADCfrac4_Umax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac4_Umax", C_bb_gem_hit_ADCfrac4_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac4_Vmax", &C_Ndata_bb_gem_hit_ADCfrac4_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac4_Vmax", C_bb_gem_hit_ADCfrac4_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac5_Umax", &C_Ndata_bb_gem_hit_ADCfrac5_Umax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac5_Umax", C_bb_gem_hit_ADCfrac5_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCfrac5_Vmax", &C_Ndata_bb_gem_hit_ADCfrac5_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.ADCfrac5_Vmax", C_bb_gem_hit_ADCfrac5_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxcomboUclust_deconv", &C_Ndata_bb_gem_hit_ADCmaxcomboUclust_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxcomboUclust_deconv", C_bb_gem_hit_ADCmaxcomboUclust_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxcomboVclust_deconv", &C_Ndata_bb_gem_hit_ADCmaxcomboVclust_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxcomboVclust_deconv", C_bb_gem_hit_ADCmaxcomboVclust_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampU", &C_Ndata_bb_gem_hit_ADCmaxsampU);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxsampU", C_bb_gem_hit_ADCmaxsampU);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampUclust", &C_Ndata_bb_gem_hit_ADCmaxsampUclust);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxsampUclust", C_bb_gem_hit_ADCmaxsampUclust);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampUclust_deconv", &C_Ndata_bb_gem_hit_ADCmaxsampUclust_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxsampUclust_deconv", C_bb_gem_hit_ADCmaxsampUclust_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampV", &C_Ndata_bb_gem_hit_ADCmaxsampV);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxsampV", C_bb_gem_hit_ADCmaxsampV);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampVclust", &C_Ndata_bb_gem_hit_ADCmaxsampVclust);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxsampVclust", C_bb_gem_hit_ADCmaxsampVclust);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxsampVclust_deconv", &C_Ndata_bb_gem_hit_ADCmaxsampVclust_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxsampVclust_deconv", C_bb_gem_hit_ADCmaxsampVclust_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxstripU", &C_Ndata_bb_gem_hit_ADCmaxstripU);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxstripU", C_bb_gem_hit_ADCmaxstripU);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ADCmaxstripV", &C_Ndata_bb_gem_hit_ADCmaxstripV);
   fChain->SetBranchAddress("bb.gem.hit.ADCmaxstripV", C_bb_gem_hit_ADCmaxstripV);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_U", &C_Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_U);
   fChain->SetBranchAddress("bb.gem.hit.BUILD_ALL_SAMPLES_U", C_bb_gem_hit_BUILD_ALL_SAMPLES_U);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.BUILD_ALL_SAMPLES_V", &C_Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_V);
   fChain->SetBranchAddress("bb.gem.hit.BUILD_ALL_SAMPLES_V", C_bb_gem_hit_BUILD_ALL_SAMPLES_V);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.CM_GOOD_U", &C_Ndata_bb_gem_hit_CM_GOOD_U);
   fChain->SetBranchAddress("bb.gem.hit.CM_GOOD_U", C_bb_gem_hit_CM_GOOD_U);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.CM_GOOD_V", &C_Ndata_bb_gem_hit_CM_GOOD_V);
   fChain->SetBranchAddress("bb.gem.hit.CM_GOOD_V", C_bb_gem_hit_CM_GOOD_V);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC0_Umax", &C_Ndata_bb_gem_hit_DeconvADC0_Umax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC0_Umax", C_bb_gem_hit_DeconvADC0_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC0_Vmax", &C_Ndata_bb_gem_hit_DeconvADC0_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC0_Vmax", C_bb_gem_hit_DeconvADC0_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC1_Umax", &C_Ndata_bb_gem_hit_DeconvADC1_Umax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC1_Umax", C_bb_gem_hit_DeconvADC1_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC1_Vmax", &C_Ndata_bb_gem_hit_DeconvADC1_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC1_Vmax", C_bb_gem_hit_DeconvADC1_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC2_Umax", &C_Ndata_bb_gem_hit_DeconvADC2_Umax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC2_Umax", C_bb_gem_hit_DeconvADC2_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC2_Vmax", &C_Ndata_bb_gem_hit_DeconvADC2_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC2_Vmax", C_bb_gem_hit_DeconvADC2_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC3_Umax", &C_Ndata_bb_gem_hit_DeconvADC3_Umax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC3_Umax", C_bb_gem_hit_DeconvADC3_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC3_Vmax", &C_Ndata_bb_gem_hit_DeconvADC3_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC3_Vmax", C_bb_gem_hit_DeconvADC3_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC4_Umax", &C_Ndata_bb_gem_hit_DeconvADC4_Umax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC4_Umax", C_bb_gem_hit_DeconvADC4_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC4_Vmax", &C_Ndata_bb_gem_hit_DeconvADC4_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC4_Vmax", C_bb_gem_hit_DeconvADC4_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC5_Umax", &C_Ndata_bb_gem_hit_DeconvADC5_Umax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC5_Umax", C_bb_gem_hit_DeconvADC5_Umax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADC5_Vmax", &C_Ndata_bb_gem_hit_DeconvADC5_Vmax);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADC5_Vmax", C_bb_gem_hit_DeconvADC5_Vmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxcomboU", &C_Ndata_bb_gem_hit_DeconvADCmaxcomboU);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADCmaxcomboU", C_bb_gem_hit_DeconvADCmaxcomboU);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxcomboV", &C_Ndata_bb_gem_hit_DeconvADCmaxcomboV);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADCmaxcomboV", C_bb_gem_hit_DeconvADCmaxcomboV);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxsampU", &C_Ndata_bb_gem_hit_DeconvADCmaxsampU);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADCmaxsampU", C_bb_gem_hit_DeconvADCmaxsampU);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxsampV", &C_Ndata_bb_gem_hit_DeconvADCmaxsampV);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADCmaxsampV", C_bb_gem_hit_DeconvADCmaxsampV);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxstripU", &C_Ndata_bb_gem_hit_DeconvADCmaxstripU);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADCmaxstripU", C_bb_gem_hit_DeconvADCmaxstripU);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.DeconvADCmaxstripV", &C_Ndata_bb_gem_hit_DeconvADCmaxstripV);
   fChain->SetBranchAddress("bb.gem.hit.DeconvADCmaxstripV", C_bb_gem_hit_DeconvADCmaxstripV);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ENABLE_CM_U", &C_Ndata_bb_gem_hit_ENABLE_CM_U);
   fChain->SetBranchAddress("bb.gem.hit.ENABLE_CM_U", C_bb_gem_hit_ENABLE_CM_U);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ENABLE_CM_V", &C_Ndata_bb_gem_hit_ENABLE_CM_V);
   fChain->SetBranchAddress("bb.gem.hit.ENABLE_CM_V", C_bb_gem_hit_ENABLE_CM_V);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.Tavg", &C_Ndata_bb_gem_hit_Tavg);
   fChain->SetBranchAddress("bb.gem.hit.Tavg", C_bb_gem_hit_Tavg);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.Tavg_deconv", &C_Ndata_bb_gem_hit_Tavg_deconv);
   fChain->SetBranchAddress("bb.gem.hit.Tavg_deconv", C_bb_gem_hit_Tavg_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.Utime", &C_Ndata_bb_gem_hit_Utime);
   fChain->SetBranchAddress("bb.gem.hit.Utime", C_bb_gem_hit_Utime);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.UtimeDeconv", &C_Ndata_bb_gem_hit_UtimeDeconv);
   fChain->SetBranchAddress("bb.gem.hit.UtimeDeconv", C_bb_gem_hit_UtimeDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.UtimeMaxStrip", &C_Ndata_bb_gem_hit_UtimeMaxStrip);
   fChain->SetBranchAddress("bb.gem.hit.UtimeMaxStrip", C_bb_gem_hit_UtimeMaxStrip);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.UtimeMaxStripDeconv", &C_Ndata_bb_gem_hit_UtimeMaxStripDeconv);
   fChain->SetBranchAddress("bb.gem.hit.UtimeMaxStripDeconv", C_bb_gem_hit_UtimeMaxStripDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.UtimeMaxStripFit", &C_Ndata_bb_gem_hit_UtimeMaxStripFit);
   fChain->SetBranchAddress("bb.gem.hit.UtimeMaxStripFit", C_bb_gem_hit_UtimeMaxStripFit);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.Vtime", &C_Ndata_bb_gem_hit_Vtime);
   fChain->SetBranchAddress("bb.gem.hit.Vtime", C_bb_gem_hit_Vtime);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.VtimeDeconv", &C_Ndata_bb_gem_hit_VtimeDeconv);
   fChain->SetBranchAddress("bb.gem.hit.VtimeDeconv", C_bb_gem_hit_VtimeDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.VtimeMaxStrip", &C_Ndata_bb_gem_hit_VtimeMaxStrip);
   fChain->SetBranchAddress("bb.gem.hit.VtimeMaxStrip", C_bb_gem_hit_VtimeMaxStrip);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.VtimeMaxStripDeconv", &C_Ndata_bb_gem_hit_VtimeMaxStripDeconv);
   fChain->SetBranchAddress("bb.gem.hit.VtimeMaxStripDeconv", C_bb_gem_hit_VtimeMaxStripDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.VtimeMaxStripFit", &C_Ndata_bb_gem_hit_VtimeMaxStripFit);
   fChain->SetBranchAddress("bb.gem.hit.VtimeMaxStripFit", C_bb_gem_hit_VtimeMaxStripFit);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ccor_clust", &C_Ndata_bb_gem_hit_ccor_clust);
   fChain->SetBranchAddress("bb.gem.hit.ccor_clust", C_bb_gem_hit_ccor_clust);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ccor_clust_deconv", &C_Ndata_bb_gem_hit_ccor_clust_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ccor_clust_deconv", C_bb_gem_hit_ccor_clust_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ccor_strip", &C_Ndata_bb_gem_hit_ccor_strip);
   fChain->SetBranchAddress("bb.gem.hit.ccor_strip", C_bb_gem_hit_ccor_strip);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ccor_strip_deconv", &C_Ndata_bb_gem_hit_ccor_strip_deconv);
   fChain->SetBranchAddress("bb.gem.hit.ccor_strip_deconv", C_bb_gem_hit_ccor_strip_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.deltat", &C_Ndata_bb_gem_hit_deltat);
   fChain->SetBranchAddress("bb.gem.hit.deltat", C_bb_gem_hit_deltat);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.deltat_deconv", &C_Ndata_bb_gem_hit_deltat_deconv);
   fChain->SetBranchAddress("bb.gem.hit.deltat_deconv", C_bb_gem_hit_deltat_deconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.eresidu", &C_Ndata_bb_gem_hit_eresidu);
   fChain->SetBranchAddress("bb.gem.hit.eresidu", C_bb_gem_hit_eresidu);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.eresidv", &C_Ndata_bb_gem_hit_eresidv);
   fChain->SetBranchAddress("bb.gem.hit.eresidv", C_bb_gem_hit_eresidv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.icombomaxUclustDeconv", &C_Ndata_bb_gem_hit_icombomaxUclustDeconv);
   fChain->SetBranchAddress("bb.gem.hit.icombomaxUclustDeconv", C_bb_gem_hit_icombomaxUclustDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.icombomaxUstripDeconv", &C_Ndata_bb_gem_hit_icombomaxUstripDeconv);
   fChain->SetBranchAddress("bb.gem.hit.icombomaxUstripDeconv", C_bb_gem_hit_icombomaxUstripDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.icombomaxVclustDeconv", &C_Ndata_bb_gem_hit_icombomaxVclustDeconv);
   fChain->SetBranchAddress("bb.gem.hit.icombomaxVclustDeconv", C_bb_gem_hit_icombomaxVclustDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.icombomaxVstripDeconv", &C_Ndata_bb_gem_hit_icombomaxVstripDeconv);
   fChain->SetBranchAddress("bb.gem.hit.icombomaxVstripDeconv", C_bb_gem_hit_icombomaxVstripDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUclust", &C_Ndata_bb_gem_hit_isampmaxUclust);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxUclust", C_bb_gem_hit_isampmaxUclust);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUclustDeconv", &C_Ndata_bb_gem_hit_isampmaxUclustDeconv);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxUclustDeconv", C_bb_gem_hit_isampmaxUclustDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUstrip", &C_Ndata_bb_gem_hit_isampmaxUstrip);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxUstrip", C_bb_gem_hit_isampmaxUstrip);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxUstripDeconv", &C_Ndata_bb_gem_hit_isampmaxUstripDeconv);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxUstripDeconv", C_bb_gem_hit_isampmaxUstripDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVclust", &C_Ndata_bb_gem_hit_isampmaxVclust);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxVclust", C_bb_gem_hit_isampmaxVclust);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVclustDeconv", &C_Ndata_bb_gem_hit_isampmaxVclustDeconv);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxVclustDeconv", C_bb_gem_hit_isampmaxVclustDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVstrip", &C_Ndata_bb_gem_hit_isampmaxVstrip);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxVstrip", C_bb_gem_hit_isampmaxVstrip);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.isampmaxVstripDeconv", &C_Ndata_bb_gem_hit_isampmaxVstripDeconv);
   fChain->SetBranchAddress("bb.gem.hit.isampmaxVstripDeconv", C_bb_gem_hit_isampmaxVstripDeconv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.layer", &C_Ndata_bb_gem_hit_layer);
   fChain->SetBranchAddress("bb.gem.hit.layer", C_bb_gem_hit_layer);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.module", &C_Ndata_bb_gem_hit_module);
   fChain->SetBranchAddress("bb.gem.hit.module", C_bb_gem_hit_module);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.nstripu", &C_Ndata_bb_gem_hit_nstripu);
   fChain->SetBranchAddress("bb.gem.hit.nstripu", C_bb_gem_hit_nstripu);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.nstripv", &C_Ndata_bb_gem_hit_nstripv);
   fChain->SetBranchAddress("bb.gem.hit.nstripv", C_bb_gem_hit_nstripv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.residu", &C_Ndata_bb_gem_hit_residu);
   fChain->SetBranchAddress("bb.gem.hit.residu", C_bb_gem_hit_residu);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.residv", &C_Ndata_bb_gem_hit_residv);
   fChain->SetBranchAddress("bb.gem.hit.residv", C_bb_gem_hit_residv);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.trackindex", &C_Ndata_bb_gem_hit_trackindex);
   fChain->SetBranchAddress("bb.gem.hit.trackindex", C_bb_gem_hit_trackindex);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.u", &C_Ndata_bb_gem_hit_u);
   fChain->SetBranchAddress("bb.gem.hit.u", C_bb_gem_hit_u);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.umoment", &C_Ndata_bb_gem_hit_umoment);
   fChain->SetBranchAddress("bb.gem.hit.umoment", C_bb_gem_hit_umoment);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.usigma", &C_Ndata_bb_gem_hit_usigma);
   fChain->SetBranchAddress("bb.gem.hit.usigma", C_bb_gem_hit_usigma);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ustriphi", &C_Ndata_bb_gem_hit_ustriphi);
   fChain->SetBranchAddress("bb.gem.hit.ustriphi", C_bb_gem_hit_ustriphi);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ustriplo", &C_Ndata_bb_gem_hit_ustriplo);
   fChain->SetBranchAddress("bb.gem.hit.ustriplo", C_bb_gem_hit_ustriplo);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ustripmax", &C_Ndata_bb_gem_hit_ustripmax);
   fChain->SetBranchAddress("bb.gem.hit.ustripmax", C_bb_gem_hit_ustripmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.v", &C_Ndata_bb_gem_hit_v);
   fChain->SetBranchAddress("bb.gem.hit.v", C_bb_gem_hit_v);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.vmoment", &C_Ndata_bb_gem_hit_vmoment);
   fChain->SetBranchAddress("bb.gem.hit.vmoment", C_bb_gem_hit_vmoment);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.vsigma", &C_Ndata_bb_gem_hit_vsigma);
   fChain->SetBranchAddress("bb.gem.hit.vsigma", C_bb_gem_hit_vsigma);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.vstriphi", &C_Ndata_bb_gem_hit_vstriphi);
   fChain->SetBranchAddress("bb.gem.hit.vstriphi", C_bb_gem_hit_vstriphi);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.vstriplo", &C_Ndata_bb_gem_hit_vstriplo);
   fChain->SetBranchAddress("bb.gem.hit.vstriplo", C_bb_gem_hit_vstriplo);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.vstripmax", &C_Ndata_bb_gem_hit_vstripmax);
   fChain->SetBranchAddress("bb.gem.hit.vstripmax", C_bb_gem_hit_vstripmax);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.xglobal", &C_Ndata_bb_gem_hit_xglobal);
   fChain->SetBranchAddress("bb.gem.hit.xglobal", C_bb_gem_hit_xglobal);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.xlocal", &C_Ndata_bb_gem_hit_xlocal);
   fChain->SetBranchAddress("bb.gem.hit.xlocal", C_bb_gem_hit_xlocal);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.yglobal", &C_Ndata_bb_gem_hit_yglobal);
   fChain->SetBranchAddress("bb.gem.hit.yglobal", C_bb_gem_hit_yglobal);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.ylocal", &C_Ndata_bb_gem_hit_ylocal);
   fChain->SetBranchAddress("bb.gem.hit.ylocal", C_bb_gem_hit_ylocal);
   fChain->SetBranchAddress("Ndata.bb.gem.hit.zglobal", &C_Ndata_bb_gem_hit_zglobal);
   fChain->SetBranchAddress("bb.gem.hit.zglobal", C_bb_gem_hit_zglobal);
   fChain->SetBranchAddress("Ndata.bb.gem.n2Dhit_layer", &C_Ndata_bb_gem_n2Dhit_layer);
   fChain->SetBranchAddress("bb.gem.n2Dhit_layer", C_bb_gem_n2Dhit_layer);
   fChain->SetBranchAddress("Ndata.bb.gem.nclustu_layer", &C_Ndata_bb_gem_nclustu_layer);
   fChain->SetBranchAddress("bb.gem.nclustu_layer", C_bb_gem_nclustu_layer);
   fChain->SetBranchAddress("Ndata.bb.gem.nclustv_layer", &C_Ndata_bb_gem_nclustv_layer);
   fChain->SetBranchAddress("bb.gem.nclustv_layer", C_bb_gem_nclustv_layer);
   fChain->SetBranchAddress("Ndata.bb.gem.nstripsu_layer", &C_Ndata_bb_gem_nstripsu_layer);
   fChain->SetBranchAddress("bb.gem.nstripsu_layer", C_bb_gem_nstripsu_layer);
   fChain->SetBranchAddress("Ndata.bb.gem.nstripsv_layer", &C_Ndata_bb_gem_nstripsv_layer);
   fChain->SetBranchAddress("bb.gem.nstripsv_layer", C_bb_gem_nstripsv_layer);
   fChain->SetBranchAddress("Ndata.bb.gem.track.chi2ndf", &C_Ndata_bb_gem_track_chi2ndf);
   fChain->SetBranchAddress("bb.gem.track.chi2ndf", C_bb_gem_track_chi2ndf);
   fChain->SetBranchAddress("Ndata.bb.gem.track.nhits", &C_Ndata_bb_gem_track_nhits);
   fChain->SetBranchAddress("bb.gem.track.nhits", C_bb_gem_track_nhits);
   fChain->SetBranchAddress("Ndata.bb.gem.track.x", &C_Ndata_bb_gem_track_x);
   fChain->SetBranchAddress("bb.gem.track.x", C_bb_gem_track_x);
   fChain->SetBranchAddress("Ndata.bb.gem.track.xp", &C_Ndata_bb_gem_track_xp);
   fChain->SetBranchAddress("bb.gem.track.xp", C_bb_gem_track_xp);
   fChain->SetBranchAddress("Ndata.bb.gem.track.y", &C_Ndata_bb_gem_track_y);
   fChain->SetBranchAddress("bb.gem.track.y", C_bb_gem_track_y);
   fChain->SetBranchAddress("Ndata.bb.gem.track.yp", &C_Ndata_bb_gem_track_yp);
   fChain->SetBranchAddress("bb.gem.track.yp", C_bb_gem_track_yp);
   fChain->SetBranchAddress("Ndata.bb.grinch_tdc.hit.amp", &C_Ndata_bb_grinch_tdc_hit_amp);
   fChain->SetBranchAddress("bb.grinch_tdc.hit.amp", C_bb_grinch_tdc_hit_amp);
   fChain->SetBranchAddress("Ndata.bb.grinch_tdc.hit.col", &C_Ndata_bb_grinch_tdc_hit_col);
   fChain->SetBranchAddress("bb.grinch_tdc.hit.col", C_bb_grinch_tdc_hit_col);
   fChain->SetBranchAddress("Ndata.bb.grinch_tdc.hit.pmtnum", &C_Ndata_bb_grinch_tdc_hit_pmtnum);
   fChain->SetBranchAddress("bb.grinch_tdc.hit.pmtnum", C_bb_grinch_tdc_hit_pmtnum);
   fChain->SetBranchAddress("Ndata.bb.grinch_tdc.hit.row", &C_Ndata_bb_grinch_tdc_hit_row);
   fChain->SetBranchAddress("bb.grinch_tdc.hit.row", C_bb_grinch_tdc_hit_row);
   fChain->SetBranchAddress("Ndata.bb.grinch_tdc.hit.time", &C_Ndata_bb_grinch_tdc_hit_time);
   fChain->SetBranchAddress("bb.grinch_tdc.hit.time", C_bb_grinch_tdc_hit_time);
   fChain->SetBranchAddress("Ndata.bb.grinch_tdc.hit.xhit", &C_Ndata_bb_grinch_tdc_hit_xhit);
   fChain->SetBranchAddress("bb.grinch_tdc.hit.xhit", C_bb_grinch_tdc_hit_xhit);
   fChain->SetBranchAddress("Ndata.bb.grinch_tdc.hit.yhit", &C_Ndata_bb_grinch_tdc_hit_yhit);
   fChain->SetBranchAddress("bb.grinch_tdc.hit.yhit", C_bb_grinch_tdc_hit_yhit);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.id", &C_Ndata_bb_hodotdc_clus_bar_tdc_id);
   fChain->SetBranchAddress("bb.hodotdc.clus.bar.tdc.id", C_bb_hodotdc_clus_bar_tdc_id);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.itrack", &C_Ndata_bb_hodotdc_clus_bar_tdc_itrack);
   fChain->SetBranchAddress("bb.hodotdc.clus.bar.tdc.itrack", C_bb_hodotdc_clus_bar_tdc_itrack);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.meantime", &C_Ndata_bb_hodotdc_clus_bar_tdc_meantime);
   fChain->SetBranchAddress("bb.hodotdc.clus.bar.tdc.meantime", C_bb_hodotdc_clus_bar_tdc_meantime);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.meantot", &C_Ndata_bb_hodotdc_clus_bar_tdc_meantot);
   fChain->SetBranchAddress("bb.hodotdc.clus.bar.tdc.meantot", C_bb_hodotdc_clus_bar_tdc_meantot);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.timediff", &C_Ndata_bb_hodotdc_clus_bar_tdc_timediff);
   fChain->SetBranchAddress("bb.hodotdc.clus.bar.tdc.timediff", C_bb_hodotdc_clus_bar_tdc_timediff);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.timehitpos", &C_Ndata_bb_hodotdc_clus_bar_tdc_timehitpos);
   fChain->SetBranchAddress("bb.hodotdc.clus.bar.tdc.timehitpos", C_bb_hodotdc_clus_bar_tdc_timehitpos);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.bar.tdc.vpos", &C_Ndata_bb_hodotdc_clus_bar_tdc_vpos);
   fChain->SetBranchAddress("bb.hodotdc.clus.bar.tdc.vpos", C_bb_hodotdc_clus_bar_tdc_vpos);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.id", &C_Ndata_bb_hodotdc_clus_id);
   fChain->SetBranchAddress("bb.hodotdc.clus.id", C_bb_hodotdc_clus_id);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.size", &C_Ndata_bb_hodotdc_clus_size);
   fChain->SetBranchAddress("bb.hodotdc.clus.size", C_bb_hodotdc_clus_size);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.tdiff", &C_Ndata_bb_hodotdc_clus_tdiff);
   fChain->SetBranchAddress("bb.hodotdc.clus.tdiff", C_bb_hodotdc_clus_tdiff);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.tmean", &C_Ndata_bb_hodotdc_clus_tmean);
   fChain->SetBranchAddress("bb.hodotdc.clus.tmean", C_bb_hodotdc_clus_tmean);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.totmean", &C_Ndata_bb_hodotdc_clus_totmean);
   fChain->SetBranchAddress("bb.hodotdc.clus.totmean", C_bb_hodotdc_clus_totmean);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.trackindex", &C_Ndata_bb_hodotdc_clus_trackindex);
   fChain->SetBranchAddress("bb.hodotdc.clus.trackindex", C_bb_hodotdc_clus_trackindex);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.xmean", &C_Ndata_bb_hodotdc_clus_xmean);
   fChain->SetBranchAddress("bb.hodotdc.clus.xmean", C_bb_hodotdc_clus_xmean);
   fChain->SetBranchAddress("Ndata.bb.hodotdc.clus.ymean", &C_Ndata_bb_hodotdc_clus_ymean);
   fChain->SetBranchAddress("bb.hodotdc.clus.ymean", C_bb_hodotdc_clus_ymean);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.atime", &C_Ndata_bb_ps_clus_atime);
   fChain->SetBranchAddress("bb.ps.clus.atime", C_bb_ps_clus_atime);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.col", &C_Ndata_bb_ps_clus_col);
   fChain->SetBranchAddress("bb.ps.clus.col", C_bb_ps_clus_col);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.e", &C_Ndata_bb_ps_clus_e);
   fChain->SetBranchAddress("bb.ps.clus.e", C_bb_ps_clus_e);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.e_c", &C_Ndata_bb_ps_clus_e_c);
   fChain->SetBranchAddress("bb.ps.clus.e_c", C_bb_ps_clus_e_c);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.eblk", &C_Ndata_bb_ps_clus_eblk);
   fChain->SetBranchAddress("bb.ps.clus.eblk", C_bb_ps_clus_eblk);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.eblk_c", &C_Ndata_bb_ps_clus_eblk_c);
   fChain->SetBranchAddress("bb.ps.clus.eblk_c", C_bb_ps_clus_eblk_c);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.id", &C_Ndata_bb_ps_clus_id);
   fChain->SetBranchAddress("bb.ps.clus.id", C_bb_ps_clus_id);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.nblk", &C_Ndata_bb_ps_clus_nblk);
   fChain->SetBranchAddress("bb.ps.clus.nblk", C_bb_ps_clus_nblk);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.row", &C_Ndata_bb_ps_clus_row);
   fChain->SetBranchAddress("bb.ps.clus.row", C_bb_ps_clus_row);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.tdctime", &C_Ndata_bb_ps_clus_tdctime);
   fChain->SetBranchAddress("bb.ps.clus.tdctime", C_bb_ps_clus_tdctime);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.x", &C_Ndata_bb_ps_clus_x);
   fChain->SetBranchAddress("bb.ps.clus.x", C_bb_ps_clus_x);
   fChain->SetBranchAddress("Ndata.bb.ps.clus.y", &C_Ndata_bb_ps_clus_y);
   fChain->SetBranchAddress("bb.ps.clus.y", C_bb_ps_clus_y);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.atime", &C_Ndata_bb_ps_clus_blk_atime);
   fChain->SetBranchAddress("bb.ps.clus_blk.atime", C_bb_ps_clus_blk_atime);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.col", &C_Ndata_bb_ps_clus_blk_col);
   fChain->SetBranchAddress("bb.ps.clus_blk.col", C_bb_ps_clus_blk_col);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.e", &C_Ndata_bb_ps_clus_blk_e);
   fChain->SetBranchAddress("bb.ps.clus_blk.e", C_bb_ps_clus_blk_e);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.e_c", &C_Ndata_bb_ps_clus_blk_e_c);
   fChain->SetBranchAddress("bb.ps.clus_blk.e_c", C_bb_ps_clus_blk_e_c);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.id", &C_Ndata_bb_ps_clus_blk_id);
   fChain->SetBranchAddress("bb.ps.clus_blk.id", C_bb_ps_clus_blk_id);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.row", &C_Ndata_bb_ps_clus_blk_row);
   fChain->SetBranchAddress("bb.ps.clus_blk.row", C_bb_ps_clus_blk_row);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.tdctime", &C_Ndata_bb_ps_clus_blk_tdctime);
   fChain->SetBranchAddress("bb.ps.clus_blk.tdctime", C_bb_ps_clus_blk_tdctime);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.x", &C_Ndata_bb_ps_clus_blk_x);
   fChain->SetBranchAddress("bb.ps.clus_blk.x", C_bb_ps_clus_blk_x);
   fChain->SetBranchAddress("Ndata.bb.ps.clus_blk.y", &C_Ndata_bb_ps_clus_blk_y);
   fChain->SetBranchAddress("bb.ps.clus_blk.y", C_bb_ps_clus_blk_y);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.atime", &C_Ndata_bb_sh_clus_atime);
   fChain->SetBranchAddress("bb.sh.clus.atime", C_bb_sh_clus_atime);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.col", &C_Ndata_bb_sh_clus_col);
   fChain->SetBranchAddress("bb.sh.clus.col", C_bb_sh_clus_col);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.e", &C_Ndata_bb_sh_clus_e);
   fChain->SetBranchAddress("bb.sh.clus.e", C_bb_sh_clus_e);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.e_c", &C_Ndata_bb_sh_clus_e_c);
   fChain->SetBranchAddress("bb.sh.clus.e_c", C_bb_sh_clus_e_c);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.eblk", &C_Ndata_bb_sh_clus_eblk);
   fChain->SetBranchAddress("bb.sh.clus.eblk", C_bb_sh_clus_eblk);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.eblk_c", &C_Ndata_bb_sh_clus_eblk_c);
   fChain->SetBranchAddress("bb.sh.clus.eblk_c", C_bb_sh_clus_eblk_c);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.id", &C_Ndata_bb_sh_clus_id);
   fChain->SetBranchAddress("bb.sh.clus.id", C_bb_sh_clus_id);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.nblk", &C_Ndata_bb_sh_clus_nblk);
   fChain->SetBranchAddress("bb.sh.clus.nblk", C_bb_sh_clus_nblk);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.row", &C_Ndata_bb_sh_clus_row);
   fChain->SetBranchAddress("bb.sh.clus.row", C_bb_sh_clus_row);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.tdctime", &C_Ndata_bb_sh_clus_tdctime);
   fChain->SetBranchAddress("bb.sh.clus.tdctime", C_bb_sh_clus_tdctime);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.x", &C_Ndata_bb_sh_clus_x);
   fChain->SetBranchAddress("bb.sh.clus.x", C_bb_sh_clus_x);
   fChain->SetBranchAddress("Ndata.bb.sh.clus.y", &C_Ndata_bb_sh_clus_y);
   fChain->SetBranchAddress("bb.sh.clus.y", C_bb_sh_clus_y);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.atime", &C_Ndata_bb_sh_clus_blk_atime);
   fChain->SetBranchAddress("bb.sh.clus_blk.atime", C_bb_sh_clus_blk_atime);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.col", &C_Ndata_bb_sh_clus_blk_col);
   fChain->SetBranchAddress("bb.sh.clus_blk.col", C_bb_sh_clus_blk_col);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.e", &C_Ndata_bb_sh_clus_blk_e);
   fChain->SetBranchAddress("bb.sh.clus_blk.e", C_bb_sh_clus_blk_e);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.e_c", &C_Ndata_bb_sh_clus_blk_e_c);
   fChain->SetBranchAddress("bb.sh.clus_blk.e_c", C_bb_sh_clus_blk_e_c);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.id", &C_Ndata_bb_sh_clus_blk_id);
   fChain->SetBranchAddress("bb.sh.clus_blk.id", C_bb_sh_clus_blk_id);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.row", &C_Ndata_bb_sh_clus_blk_row);
   fChain->SetBranchAddress("bb.sh.clus_blk.row", C_bb_sh_clus_blk_row);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.tdctime", &C_Ndata_bb_sh_clus_blk_tdctime);
   fChain->SetBranchAddress("bb.sh.clus_blk.tdctime", C_bb_sh_clus_blk_tdctime);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.x", &C_Ndata_bb_sh_clus_blk_x);
   fChain->SetBranchAddress("bb.sh.clus_blk.x", C_bb_sh_clus_blk_x);
   fChain->SetBranchAddress("Ndata.bb.sh.clus_blk.y", &C_Ndata_bb_sh_clus_blk_y);
   fChain->SetBranchAddress("bb.sh.clus_blk.y", C_bb_sh_clus_blk_y);
   fChain->SetBranchAddress("Ndata.bb.tdctrig.tdc", &C_Ndata_bb_tdctrig_tdc);
   fChain->SetBranchAddress("bb.tdctrig.tdc", C_bb_tdctrig_tdc);
   fChain->SetBranchAddress("Ndata.bb.tdctrig.tdcelemID", &C_Ndata_bb_tdctrig_tdcelemID);
   fChain->SetBranchAddress("bb.tdctrig.tdcelemID", C_bb_tdctrig_tdcelemID);
   fChain->SetBranchAddress("Ndata.bb.tr.beta", &C_Ndata_bb_tr_beta);
   fChain->SetBranchAddress("bb.tr.beta", C_bb_tr_beta);
   fChain->SetBranchAddress("Ndata.bb.tr.chi2", &C_Ndata_bb_tr_chi2);
   fChain->SetBranchAddress("bb.tr.chi2", C_bb_tr_chi2);
   fChain->SetBranchAddress("Ndata.bb.tr.d_ph", &C_Ndata_bb_tr_d_ph);
   fChain->SetBranchAddress("bb.tr.d_ph", C_bb_tr_d_ph);
   fChain->SetBranchAddress("Ndata.bb.tr.d_th", &C_Ndata_bb_tr_d_th);
   fChain->SetBranchAddress("bb.tr.d_th", C_bb_tr_d_th);
   fChain->SetBranchAddress("Ndata.bb.tr.d_x", &C_Ndata_bb_tr_d_x);
   fChain->SetBranchAddress("bb.tr.d_x", C_bb_tr_d_x);
   fChain->SetBranchAddress("Ndata.bb.tr.d_y", &C_Ndata_bb_tr_d_y);
   fChain->SetBranchAddress("bb.tr.d_y", C_bb_tr_d_y);
   fChain->SetBranchAddress("Ndata.bb.tr.dbeta", &C_Ndata_bb_tr_dbeta);
   fChain->SetBranchAddress("bb.tr.dbeta", C_bb_tr_dbeta);
   fChain->SetBranchAddress("Ndata.bb.tr.dtime", &C_Ndata_bb_tr_dtime);
   fChain->SetBranchAddress("bb.tr.dtime", C_bb_tr_dtime);
   fChain->SetBranchAddress("Ndata.bb.tr.flag", &C_Ndata_bb_tr_flag);
   fChain->SetBranchAddress("bb.tr.flag", C_bb_tr_flag);
   fChain->SetBranchAddress("Ndata.bb.tr.ndof", &C_Ndata_bb_tr_ndof);
   fChain->SetBranchAddress("bb.tr.ndof", C_bb_tr_ndof);
   fChain->SetBranchAddress("Ndata.bb.tr.p", &C_Ndata_bb_tr_p);
   fChain->SetBranchAddress("bb.tr.p", C_bb_tr_p);
   fChain->SetBranchAddress("Ndata.bb.tr.pathl", &C_Ndata_bb_tr_pathl);
   fChain->SetBranchAddress("bb.tr.pathl", C_bb_tr_pathl);
   fChain->SetBranchAddress("Ndata.bb.tr.ph", &C_Ndata_bb_tr_ph);
   fChain->SetBranchAddress("bb.tr.ph", C_bb_tr_ph);
   fChain->SetBranchAddress("Ndata.bb.tr.px", &C_Ndata_bb_tr_px);
   fChain->SetBranchAddress("bb.tr.px", C_bb_tr_px);
   fChain->SetBranchAddress("Ndata.bb.tr.py", &C_Ndata_bb_tr_py);
   fChain->SetBranchAddress("bb.tr.py", C_bb_tr_py);
   fChain->SetBranchAddress("Ndata.bb.tr.pz", &C_Ndata_bb_tr_pz);
   fChain->SetBranchAddress("bb.tr.pz", C_bb_tr_pz);
   fChain->SetBranchAddress("Ndata.bb.tr.r_ph", &C_Ndata_bb_tr_r_ph);
   fChain->SetBranchAddress("bb.tr.r_ph", C_bb_tr_r_ph);
   fChain->SetBranchAddress("Ndata.bb.tr.r_th", &C_Ndata_bb_tr_r_th);
   fChain->SetBranchAddress("bb.tr.r_th", C_bb_tr_r_th);
   fChain->SetBranchAddress("Ndata.bb.tr.r_x", &C_Ndata_bb_tr_r_x);
   fChain->SetBranchAddress("bb.tr.r_x", C_bb_tr_r_x);
   fChain->SetBranchAddress("Ndata.bb.tr.r_y", &C_Ndata_bb_tr_r_y);
   fChain->SetBranchAddress("bb.tr.r_y", C_bb_tr_r_y);
   fChain->SetBranchAddress("Ndata.bb.tr.tg_dp", &C_Ndata_bb_tr_tg_dp);
   fChain->SetBranchAddress("bb.tr.tg_dp", C_bb_tr_tg_dp);
   fChain->SetBranchAddress("Ndata.bb.tr.tg_ph", &C_Ndata_bb_tr_tg_ph);
   fChain->SetBranchAddress("bb.tr.tg_ph", C_bb_tr_tg_ph);
   fChain->SetBranchAddress("Ndata.bb.tr.tg_th", &C_Ndata_bb_tr_tg_th);
   fChain->SetBranchAddress("bb.tr.tg_th", C_bb_tr_tg_th);
   fChain->SetBranchAddress("Ndata.bb.tr.tg_x", &C_Ndata_bb_tr_tg_x);
   fChain->SetBranchAddress("bb.tr.tg_x", C_bb_tr_tg_x);
   fChain->SetBranchAddress("Ndata.bb.tr.tg_y", &C_Ndata_bb_tr_tg_y);
   fChain->SetBranchAddress("bb.tr.tg_y", C_bb_tr_tg_y);
   fChain->SetBranchAddress("Ndata.bb.tr.th", &C_Ndata_bb_tr_th);
   fChain->SetBranchAddress("bb.tr.th", C_bb_tr_th);
   fChain->SetBranchAddress("Ndata.bb.tr.time", &C_Ndata_bb_tr_time);
   fChain->SetBranchAddress("bb.tr.time", C_bb_tr_time);
   fChain->SetBranchAddress("Ndata.bb.tr.vx", &C_Ndata_bb_tr_vx);
   fChain->SetBranchAddress("bb.tr.vx", C_bb_tr_vx);
   fChain->SetBranchAddress("Ndata.bb.tr.vy", &C_Ndata_bb_tr_vy);
   fChain->SetBranchAddress("bb.tr.vy", C_bb_tr_vy);
   fChain->SetBranchAddress("Ndata.bb.tr.vz", &C_Ndata_bb_tr_vz);
   fChain->SetBranchAddress("bb.tr.vz", C_bb_tr_vz);
   fChain->SetBranchAddress("Ndata.bb.tr.x", &C_Ndata_bb_tr_x);
   fChain->SetBranchAddress("bb.tr.x", C_bb_tr_x);
   fChain->SetBranchAddress("Ndata.bb.tr.y", &C_Ndata_bb_tr_y);
   fChain->SetBranchAddress("bb.tr.y", C_bb_tr_y);
   fChain->SetBranchAddress("Ndata.bb.x_bcp", &C_Ndata_bb_x_bcp);
   fChain->SetBranchAddress("bb.x_bcp", C_bb_x_bcp);
   fChain->SetBranchAddress("Ndata.bb.x_fcp", &C_Ndata_bb_x_fcp);
   fChain->SetBranchAddress("bb.x_fcp", C_bb_x_fcp);
   fChain->SetBranchAddress("Ndata.bb.y_bcp", &C_Ndata_bb_y_bcp);
   fChain->SetBranchAddress("bb.y_bcp", C_bb_y_bcp);
   fChain->SetBranchAddress("Ndata.bb.y_fcp", &C_Ndata_bb_y_fcp);
   fChain->SetBranchAddress("bb.y_fcp", C_bb_y_fcp);
   fChain->SetBranchAddress("Ndata.bb.z_bcp", &C_Ndata_bb_z_bcp);
   fChain->SetBranchAddress("bb.z_bcp", C_bb_z_bcp);
   fChain->SetBranchAddress("Ndata.bb.z_fcp", &C_Ndata_bb_z_fcp);
   fChain->SetBranchAddress("bb.z_fcp", C_bb_z_fcp);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.atime", &C_Ndata_sbs_hcal_clus_atime);
   fChain->SetBranchAddress("sbs.hcal.clus.atime", C_sbs_hcal_clus_atime);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.col", &C_Ndata_sbs_hcal_clus_col);
   fChain->SetBranchAddress("sbs.hcal.clus.col", C_sbs_hcal_clus_col);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.e", &C_Ndata_sbs_hcal_clus_e);
   fChain->SetBranchAddress("sbs.hcal.clus.e", C_sbs_hcal_clus_e);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.e_c", &C_Ndata_sbs_hcal_clus_e_c);
   fChain->SetBranchAddress("sbs.hcal.clus.e_c", C_sbs_hcal_clus_e_c);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.eblk", &C_Ndata_sbs_hcal_clus_eblk);
   fChain->SetBranchAddress("sbs.hcal.clus.eblk", C_sbs_hcal_clus_eblk);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.eblk_c", &C_Ndata_sbs_hcal_clus_eblk_c);
   fChain->SetBranchAddress("sbs.hcal.clus.eblk_c", C_sbs_hcal_clus_eblk_c);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.id", &C_Ndata_sbs_hcal_clus_id);
   fChain->SetBranchAddress("sbs.hcal.clus.id", C_sbs_hcal_clus_id);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.nblk", &C_Ndata_sbs_hcal_clus_nblk);
   fChain->SetBranchAddress("sbs.hcal.clus.nblk", C_sbs_hcal_clus_nblk);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.row", &C_Ndata_sbs_hcal_clus_row);
   fChain->SetBranchAddress("sbs.hcal.clus.row", C_sbs_hcal_clus_row);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.tdctime", &C_Ndata_sbs_hcal_clus_tdctime);
   fChain->SetBranchAddress("sbs.hcal.clus.tdctime", C_sbs_hcal_clus_tdctime);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.x", &C_Ndata_sbs_hcal_clus_x);
   fChain->SetBranchAddress("sbs.hcal.clus.x", C_sbs_hcal_clus_x);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus.y", &C_Ndata_sbs_hcal_clus_y);
   fChain->SetBranchAddress("sbs.hcal.clus.y", C_sbs_hcal_clus_y);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.atime", &C_Ndata_sbs_hcal_clus_blk_atime);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.atime", C_sbs_hcal_clus_blk_atime);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.col", &C_Ndata_sbs_hcal_clus_blk_col);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.col", C_sbs_hcal_clus_blk_col);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.e", &C_Ndata_sbs_hcal_clus_blk_e);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.e", C_sbs_hcal_clus_blk_e);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.e_c", &C_Ndata_sbs_hcal_clus_blk_e_c);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.e_c", C_sbs_hcal_clus_blk_e_c);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.id", &C_Ndata_sbs_hcal_clus_blk_id);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.id", C_sbs_hcal_clus_blk_id);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.row", &C_Ndata_sbs_hcal_clus_blk_row);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.row", C_sbs_hcal_clus_blk_row);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.tdctime", &C_Ndata_sbs_hcal_clus_blk_tdctime);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.tdctime", C_sbs_hcal_clus_blk_tdctime);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.x", &C_Ndata_sbs_hcal_clus_blk_x);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.x", C_sbs_hcal_clus_blk_x);
   fChain->SetBranchAddress("Ndata.sbs.hcal.clus_blk.y", &C_Ndata_sbs_hcal_clus_blk_y);
   fChain->SetBranchAddress("sbs.hcal.clus_blk.y", C_sbs_hcal_clus_blk_y);
   fChain->SetBranchAddress("BB.gold.beta", &C_BB_gold_beta);
   fChain->SetBranchAddress("BB.gold.dp", &C_BB_gold_dp);
   fChain->SetBranchAddress("BB.gold.index", &C_BB_gold_index);
   fChain->SetBranchAddress("BB.gold.ok", &C_BB_gold_ok);
   fChain->SetBranchAddress("BB.gold.p", &C_BB_gold_p);
   fChain->SetBranchAddress("BB.gold.ph", &C_BB_gold_ph);
   fChain->SetBranchAddress("BB.gold.px", &C_BB_gold_px);
   fChain->SetBranchAddress("BB.gold.py", &C_BB_gold_py);
   fChain->SetBranchAddress("BB.gold.pz", &C_BB_gold_pz);
   fChain->SetBranchAddress("BB.gold.th", &C_BB_gold_th);
   fChain->SetBranchAddress("BB.gold.x", &C_BB_gold_x);
   fChain->SetBranchAddress("BB.gold.y", &C_BB_gold_y);
   fChain->SetBranchAddress("Lrb.BPMA.rawcur.1", &C_Lrb_BPMA_rawcur_1);
   fChain->SetBranchAddress("Lrb.BPMA.rawcur.2", &C_Lrb_BPMA_rawcur_2);
   fChain->SetBranchAddress("Lrb.BPMA.rawcur.3", &C_Lrb_BPMA_rawcur_3);
   fChain->SetBranchAddress("Lrb.BPMA.rawcur.4", &C_Lrb_BPMA_rawcur_4);
   fChain->SetBranchAddress("Lrb.BPMA.rotpos1", &C_Lrb_BPMA_rotpos1);
   fChain->SetBranchAddress("Lrb.BPMA.rotpos2", &C_Lrb_BPMA_rotpos2);
   fChain->SetBranchAddress("Lrb.BPMA.x", &C_Lrb_BPMA_x);
   fChain->SetBranchAddress("Lrb.BPMA.y", &C_Lrb_BPMA_y);
   fChain->SetBranchAddress("Lrb.BPMA.z", &C_Lrb_BPMA_z);
   fChain->SetBranchAddress("Lrb.BPMB.rawcur.1", &C_Lrb_BPMB_rawcur_1);
   fChain->SetBranchAddress("Lrb.BPMB.rawcur.2", &C_Lrb_BPMB_rawcur_2);
   fChain->SetBranchAddress("Lrb.BPMB.rawcur.3", &C_Lrb_BPMB_rawcur_3);
   fChain->SetBranchAddress("Lrb.BPMB.rawcur.4", &C_Lrb_BPMB_rawcur_4);
   fChain->SetBranchAddress("Lrb.BPMB.rotpos1", &C_Lrb_BPMB_rotpos1);
   fChain->SetBranchAddress("Lrb.BPMB.rotpos2", &C_Lrb_BPMB_rotpos2);
   fChain->SetBranchAddress("Lrb.BPMB.x", &C_Lrb_BPMB_x);
   fChain->SetBranchAddress("Lrb.BPMB.y", &C_Lrb_BPMB_y);
   fChain->SetBranchAddress("Lrb.BPMB.z", &C_Lrb_BPMB_z);
   fChain->SetBranchAddress("Lrb.Raster.bpma.x", &C_Lrb_Raster_bpma_x);
   fChain->SetBranchAddress("Lrb.Raster.bpma.y", &C_Lrb_Raster_bpma_y);
   fChain->SetBranchAddress("Lrb.Raster.bpma.z", &C_Lrb_Raster_bpma_z);
   fChain->SetBranchAddress("Lrb.Raster.bpmb.x", &C_Lrb_Raster_bpmb_x);
   fChain->SetBranchAddress("Lrb.Raster.bpmb.y", &C_Lrb_Raster_bpmb_y);
   fChain->SetBranchAddress("Lrb.Raster.bpmb.z", &C_Lrb_Raster_bpmb_z);
   fChain->SetBranchAddress("Lrb.Raster.rawcur.x", &C_Lrb_Raster_rawcur_x);
   fChain->SetBranchAddress("Lrb.Raster.rawcur.y", &C_Lrb_Raster_rawcur_y);
   fChain->SetBranchAddress("Lrb.Raster.rawslope.x", &C_Lrb_Raster_rawslope_x);
   fChain->SetBranchAddress("Lrb.Raster.rawslope.y", &C_Lrb_Raster_rawslope_y);
   fChain->SetBranchAddress("Lrb.Raster.target.dir.x", &C_Lrb_Raster_target_dir_x);
   fChain->SetBranchAddress("Lrb.Raster.target.dir.y", &C_Lrb_Raster_target_dir_y);
   fChain->SetBranchAddress("Lrb.Raster.target.dir.z", &C_Lrb_Raster_target_dir_z);
   fChain->SetBranchAddress("Lrb.Raster.target.x", &C_Lrb_Raster_target_x);
   fChain->SetBranchAddress("Lrb.Raster.target.y", &C_Lrb_Raster_target_y);
   fChain->SetBranchAddress("Lrb.Raster.target.z", &C_Lrb_Raster_target_z);
   fChain->SetBranchAddress("Lrb.Raster2.bpma.x", &C_Lrb_Raster2_bpma_x);
   fChain->SetBranchAddress("Lrb.Raster2.bpma.y", &C_Lrb_Raster2_bpma_y);
   fChain->SetBranchAddress("Lrb.Raster2.bpma.z", &C_Lrb_Raster2_bpma_z);
   fChain->SetBranchAddress("Lrb.Raster2.bpmb.x", &C_Lrb_Raster2_bpmb_x);
   fChain->SetBranchAddress("Lrb.Raster2.bpmb.y", &C_Lrb_Raster2_bpmb_y);
   fChain->SetBranchAddress("Lrb.Raster2.bpmb.z", &C_Lrb_Raster2_bpmb_z);
   fChain->SetBranchAddress("Lrb.Raster2.rawcur.x", &C_Lrb_Raster2_rawcur_x);
   fChain->SetBranchAddress("Lrb.Raster2.rawcur.y", &C_Lrb_Raster2_rawcur_y);
   fChain->SetBranchAddress("Lrb.Raster2.rawslope.x", &C_Lrb_Raster2_rawslope_x);
   fChain->SetBranchAddress("Lrb.Raster2.rawslope.y", &C_Lrb_Raster2_rawslope_y);
   fChain->SetBranchAddress("Lrb.Raster2.target.dir.x", &C_Lrb_Raster2_target_dir_x);
   fChain->SetBranchAddress("Lrb.Raster2.target.dir.y", &C_Lrb_Raster2_target_dir_y);
   fChain->SetBranchAddress("Lrb.Raster2.target.dir.z", &C_Lrb_Raster2_target_dir_z);
   fChain->SetBranchAddress("Lrb.Raster2.target.x", &C_Lrb_Raster2_target_x);
   fChain->SetBranchAddress("Lrb.Raster2.target.y", &C_Lrb_Raster2_target_y);
   fChain->SetBranchAddress("Lrb.Raster2.target.z", &C_Lrb_Raster2_target_z);
   fChain->SetBranchAddress("Lrb.dir.x", &C_Lrb_dir_x);
   fChain->SetBranchAddress("Lrb.dir.y", &C_Lrb_dir_y);
   fChain->SetBranchAddress("Lrb.dir.z", &C_Lrb_dir_z);
   fChain->SetBranchAddress("Lrb.e", &C_Lrb_e);
   fChain->SetBranchAddress("Lrb.ok", &C_Lrb_ok);
   fChain->SetBranchAddress("Lrb.p", &C_Lrb_p);
   fChain->SetBranchAddress("Lrb.ph", &C_Lrb_ph);
   fChain->SetBranchAddress("Lrb.pol", &C_Lrb_pol);
   fChain->SetBranchAddress("Lrb.px", &C_Lrb_px);
   fChain->SetBranchAddress("Lrb.py", &C_Lrb_py);
   fChain->SetBranchAddress("Lrb.pz", &C_Lrb_pz);
   fChain->SetBranchAddress("Lrb.th", &C_Lrb_th);
   fChain->SetBranchAddress("Lrb.x", &C_Lrb_x);
   fChain->SetBranchAddress("Lrb.xpos", &C_Lrb_xpos);
   fChain->SetBranchAddress("Lrb.y", &C_Lrb_y);
   fChain->SetBranchAddress("Lrb.ypos", &C_Lrb_ypos);
   fChain->SetBranchAddress("Lrb.z", &C_Lrb_z);
   fChain->SetBranchAddress("Lrb.zpos", &C_Lrb_zpos);
   fChain->SetBranchAddress("SBSrb.BPMA.rawcur.1", &C_SBSrb_BPMA_rawcur_1);
   fChain->SetBranchAddress("SBSrb.BPMA.rawcur.2", &C_SBSrb_BPMA_rawcur_2);
   fChain->SetBranchAddress("SBSrb.BPMA.rawcur.3", &C_SBSrb_BPMA_rawcur_3);
   fChain->SetBranchAddress("SBSrb.BPMA.rawcur.4", &C_SBSrb_BPMA_rawcur_4);
   fChain->SetBranchAddress("SBSrb.BPMA.rotpos1", &C_SBSrb_BPMA_rotpos1);
   fChain->SetBranchAddress("SBSrb.BPMA.rotpos2", &C_SBSrb_BPMA_rotpos2);
   fChain->SetBranchAddress("SBSrb.BPMA.x", &C_SBSrb_BPMA_x);
   fChain->SetBranchAddress("SBSrb.BPMA.y", &C_SBSrb_BPMA_y);
   fChain->SetBranchAddress("SBSrb.BPMA.z", &C_SBSrb_BPMA_z);
   fChain->SetBranchAddress("SBSrb.BPMB.rawcur.1", &C_SBSrb_BPMB_rawcur_1);
   fChain->SetBranchAddress("SBSrb.BPMB.rawcur.2", &C_SBSrb_BPMB_rawcur_2);
   fChain->SetBranchAddress("SBSrb.BPMB.rawcur.3", &C_SBSrb_BPMB_rawcur_3);
   fChain->SetBranchAddress("SBSrb.BPMB.rawcur.4", &C_SBSrb_BPMB_rawcur_4);
   fChain->SetBranchAddress("SBSrb.BPMB.rotpos1", &C_SBSrb_BPMB_rotpos1);
   fChain->SetBranchAddress("SBSrb.BPMB.rotpos2", &C_SBSrb_BPMB_rotpos2);
   fChain->SetBranchAddress("SBSrb.BPMB.x", &C_SBSrb_BPMB_x);
   fChain->SetBranchAddress("SBSrb.BPMB.y", &C_SBSrb_BPMB_y);
   fChain->SetBranchAddress("SBSrb.BPMB.z", &C_SBSrb_BPMB_z);
   fChain->SetBranchAddress("SBSrb.Raster.bpma.x", &C_SBSrb_Raster_bpma_x);
   fChain->SetBranchAddress("SBSrb.Raster.bpma.y", &C_SBSrb_Raster_bpma_y);
   fChain->SetBranchAddress("SBSrb.Raster.bpma.z", &C_SBSrb_Raster_bpma_z);
   fChain->SetBranchAddress("SBSrb.Raster.bpmb.x", &C_SBSrb_Raster_bpmb_x);
   fChain->SetBranchAddress("SBSrb.Raster.bpmb.y", &C_SBSrb_Raster_bpmb_y);
   fChain->SetBranchAddress("SBSrb.Raster.bpmb.z", &C_SBSrb_Raster_bpmb_z);
   fChain->SetBranchAddress("SBSrb.Raster.rawcur.x", &C_SBSrb_Raster_rawcur_x);
   fChain->SetBranchAddress("SBSrb.Raster.rawcur.y", &C_SBSrb_Raster_rawcur_y);
   fChain->SetBranchAddress("SBSrb.Raster.rawslope.x", &C_SBSrb_Raster_rawslope_x);
   fChain->SetBranchAddress("SBSrb.Raster.rawslope.y", &C_SBSrb_Raster_rawslope_y);
   fChain->SetBranchAddress("SBSrb.Raster.target.dir.x", &C_SBSrb_Raster_target_dir_x);
   fChain->SetBranchAddress("SBSrb.Raster.target.dir.y", &C_SBSrb_Raster_target_dir_y);
   fChain->SetBranchAddress("SBSrb.Raster.target.dir.z", &C_SBSrb_Raster_target_dir_z);
   fChain->SetBranchAddress("SBSrb.Raster.target.x", &C_SBSrb_Raster_target_x);
   fChain->SetBranchAddress("SBSrb.Raster.target.y", &C_SBSrb_Raster_target_y);
   fChain->SetBranchAddress("SBSrb.Raster.target.z", &C_SBSrb_Raster_target_z);
   fChain->SetBranchAddress("SBSrb.Raster2.bpma.x", &C_SBSrb_Raster2_bpma_x);
   fChain->SetBranchAddress("SBSrb.Raster2.bpma.y", &C_SBSrb_Raster2_bpma_y);
   fChain->SetBranchAddress("SBSrb.Raster2.bpma.z", &C_SBSrb_Raster2_bpma_z);
   fChain->SetBranchAddress("SBSrb.Raster2.bpmb.x", &C_SBSrb_Raster2_bpmb_x);
   fChain->SetBranchAddress("SBSrb.Raster2.bpmb.y", &C_SBSrb_Raster2_bpmb_y);
   fChain->SetBranchAddress("SBSrb.Raster2.bpmb.z", &C_SBSrb_Raster2_bpmb_z);
   fChain->SetBranchAddress("SBSrb.Raster2.rawcur.x", &C_SBSrb_Raster2_rawcur_x);
   fChain->SetBranchAddress("SBSrb.Raster2.rawcur.y", &C_SBSrb_Raster2_rawcur_y);
   fChain->SetBranchAddress("SBSrb.Raster2.rawslope.x", &C_SBSrb_Raster2_rawslope_x);
   fChain->SetBranchAddress("SBSrb.Raster2.rawslope.y", &C_SBSrb_Raster2_rawslope_y);
   fChain->SetBranchAddress("SBSrb.Raster2.target.dir.x", &C_SBSrb_Raster2_target_dir_x);
   fChain->SetBranchAddress("SBSrb.Raster2.target.dir.y", &C_SBSrb_Raster2_target_dir_y);
   fChain->SetBranchAddress("SBSrb.Raster2.target.dir.z", &C_SBSrb_Raster2_target_dir_z);
   fChain->SetBranchAddress("SBSrb.Raster2.target.x", &C_SBSrb_Raster2_target_x);
   fChain->SetBranchAddress("SBSrb.Raster2.target.y", &C_SBSrb_Raster2_target_y);
   fChain->SetBranchAddress("SBSrb.Raster2.target.z", &C_SBSrb_Raster2_target_z);
   fChain->SetBranchAddress("SBSrb.dir.x", &C_SBSrb_dir_x);
   fChain->SetBranchAddress("SBSrb.dir.y", &C_SBSrb_dir_y);
   fChain->SetBranchAddress("SBSrb.dir.z", &C_SBSrb_dir_z);
   fChain->SetBranchAddress("SBSrb.e", &C_SBSrb_e);
   fChain->SetBranchAddress("SBSrb.ok", &C_SBSrb_ok);
   fChain->SetBranchAddress("SBSrb.p", &C_SBSrb_p);
   fChain->SetBranchAddress("SBSrb.ph", &C_SBSrb_ph);
   fChain->SetBranchAddress("SBSrb.pol", &C_SBSrb_pol);
   fChain->SetBranchAddress("SBSrb.px", &C_SBSrb_px);
   fChain->SetBranchAddress("SBSrb.py", &C_SBSrb_py);
   fChain->SetBranchAddress("SBSrb.pz", &C_SBSrb_pz);
   fChain->SetBranchAddress("SBSrb.th", &C_SBSrb_th);
   fChain->SetBranchAddress("SBSrb.x", &C_SBSrb_x);
   fChain->SetBranchAddress("SBSrb.xpos", &C_SBSrb_xpos);
   fChain->SetBranchAddress("SBSrb.y", &C_SBSrb_y);
   fChain->SetBranchAddress("SBSrb.ypos", &C_SBSrb_ypos);
   fChain->SetBranchAddress("SBSrb.z", &C_SBSrb_z);
   fChain->SetBranchAddress("SBSrb.zpos", &C_SBSrb_zpos);
   fChain->SetBranchAddress("bb.gem.hit.ngoodhits", &C_bb_gem_hit_ngoodhits);
   fChain->SetBranchAddress("bb.gem.m0.clust.nclustu", &C_bb_gem_m0_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m0.clust.nclustu_tot", &C_bb_gem_m0_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m0.clust.nclustv", &C_bb_gem_m0_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m0.clust.nclustv_tot", &C_bb_gem_m0_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m0.strip.nstrips_keep", &C_bb_gem_m0_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m0.strip.nstrips_keepU", &C_bb_gem_m0_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m0.strip.nstrips_keepV", &C_bb_gem_m0_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m0.strip.nstrips_keep_lmax", &C_bb_gem_m0_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m0.strip.nstrips_keep_lmaxU", &C_bb_gem_m0_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m0.strip.nstrips_keep_lmaxV", &C_bb_gem_m0_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m0.strip.nstripsfired", &C_bb_gem_m0_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m1.clust.nclustu", &C_bb_gem_m1_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m1.clust.nclustu_tot", &C_bb_gem_m1_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m1.clust.nclustv", &C_bb_gem_m1_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m1.clust.nclustv_tot", &C_bb_gem_m1_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m1.strip.nstrips_keep", &C_bb_gem_m1_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m1.strip.nstrips_keepU", &C_bb_gem_m1_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m1.strip.nstrips_keepV", &C_bb_gem_m1_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m1.strip.nstrips_keep_lmax", &C_bb_gem_m1_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m1.strip.nstrips_keep_lmaxU", &C_bb_gem_m1_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m1.strip.nstrips_keep_lmaxV", &C_bb_gem_m1_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m1.strip.nstripsfired", &C_bb_gem_m1_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m10.clust.nclustu", &C_bb_gem_m10_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m10.clust.nclustu_tot", &C_bb_gem_m10_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m10.clust.nclustv", &C_bb_gem_m10_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m10.clust.nclustv_tot", &C_bb_gem_m10_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m10.strip.nstrips_keep", &C_bb_gem_m10_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m10.strip.nstrips_keepU", &C_bb_gem_m10_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m10.strip.nstrips_keepV", &C_bb_gem_m10_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m10.strip.nstrips_keep_lmax", &C_bb_gem_m10_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m10.strip.nstrips_keep_lmaxU", &C_bb_gem_m10_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m10.strip.nstrips_keep_lmaxV", &C_bb_gem_m10_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m10.strip.nstripsfired", &C_bb_gem_m10_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m11.clust.nclustu", &C_bb_gem_m11_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m11.clust.nclustu_tot", &C_bb_gem_m11_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m11.clust.nclustv", &C_bb_gem_m11_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m11.clust.nclustv_tot", &C_bb_gem_m11_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m11.strip.nstrips_keep", &C_bb_gem_m11_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m11.strip.nstrips_keepU", &C_bb_gem_m11_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m11.strip.nstrips_keepV", &C_bb_gem_m11_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m11.strip.nstrips_keep_lmax", &C_bb_gem_m11_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m11.strip.nstrips_keep_lmaxU", &C_bb_gem_m11_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m11.strip.nstrips_keep_lmaxV", &C_bb_gem_m11_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m11.strip.nstripsfired", &C_bb_gem_m11_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m2.clust.nclustu", &C_bb_gem_m2_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m2.clust.nclustu_tot", &C_bb_gem_m2_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m2.clust.nclustv", &C_bb_gem_m2_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m2.clust.nclustv_tot", &C_bb_gem_m2_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m2.strip.nstrips_keep", &C_bb_gem_m2_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m2.strip.nstrips_keepU", &C_bb_gem_m2_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m2.strip.nstrips_keepV", &C_bb_gem_m2_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m2.strip.nstrips_keep_lmax", &C_bb_gem_m2_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m2.strip.nstrips_keep_lmaxU", &C_bb_gem_m2_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m2.strip.nstrips_keep_lmaxV", &C_bb_gem_m2_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m2.strip.nstripsfired", &C_bb_gem_m2_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m3.clust.nclustu", &C_bb_gem_m3_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m3.clust.nclustu_tot", &C_bb_gem_m3_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m3.clust.nclustv", &C_bb_gem_m3_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m3.clust.nclustv_tot", &C_bb_gem_m3_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m3.strip.nstrips_keep", &C_bb_gem_m3_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m3.strip.nstrips_keepU", &C_bb_gem_m3_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m3.strip.nstrips_keepV", &C_bb_gem_m3_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m3.strip.nstrips_keep_lmax", &C_bb_gem_m3_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m3.strip.nstrips_keep_lmaxU", &C_bb_gem_m3_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m3.strip.nstrips_keep_lmaxV", &C_bb_gem_m3_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m3.strip.nstripsfired", &C_bb_gem_m3_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m4.clust.nclustu", &C_bb_gem_m4_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m4.clust.nclustu_tot", &C_bb_gem_m4_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m4.clust.nclustv", &C_bb_gem_m4_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m4.clust.nclustv_tot", &C_bb_gem_m4_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m4.strip.nstrips_keep", &C_bb_gem_m4_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m4.strip.nstrips_keepU", &C_bb_gem_m4_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m4.strip.nstrips_keepV", &C_bb_gem_m4_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m4.strip.nstrips_keep_lmax", &C_bb_gem_m4_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m4.strip.nstrips_keep_lmaxU", &C_bb_gem_m4_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m4.strip.nstrips_keep_lmaxV", &C_bb_gem_m4_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m4.strip.nstripsfired", &C_bb_gem_m4_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m5.clust.nclustu", &C_bb_gem_m5_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m5.clust.nclustu_tot", &C_bb_gem_m5_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m5.clust.nclustv", &C_bb_gem_m5_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m5.clust.nclustv_tot", &C_bb_gem_m5_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m5.strip.nstrips_keep", &C_bb_gem_m5_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m5.strip.nstrips_keepU", &C_bb_gem_m5_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m5.strip.nstrips_keepV", &C_bb_gem_m5_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m5.strip.nstrips_keep_lmax", &C_bb_gem_m5_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m5.strip.nstrips_keep_lmaxU", &C_bb_gem_m5_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m5.strip.nstrips_keep_lmaxV", &C_bb_gem_m5_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m5.strip.nstripsfired", &C_bb_gem_m5_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m6.clust.nclustu", &C_bb_gem_m6_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m6.clust.nclustu_tot", &C_bb_gem_m6_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m6.clust.nclustv", &C_bb_gem_m6_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m6.clust.nclustv_tot", &C_bb_gem_m6_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m6.strip.nstrips_keep", &C_bb_gem_m6_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m6.strip.nstrips_keepU", &C_bb_gem_m6_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m6.strip.nstrips_keepV", &C_bb_gem_m6_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m6.strip.nstrips_keep_lmax", &C_bb_gem_m6_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m6.strip.nstrips_keep_lmaxU", &C_bb_gem_m6_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m6.strip.nstrips_keep_lmaxV", &C_bb_gem_m6_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m6.strip.nstripsfired", &C_bb_gem_m6_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m7.clust.nclustu", &C_bb_gem_m7_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m7.clust.nclustu_tot", &C_bb_gem_m7_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m7.clust.nclustv", &C_bb_gem_m7_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m7.clust.nclustv_tot", &C_bb_gem_m7_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m7.strip.nstrips_keep", &C_bb_gem_m7_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m7.strip.nstrips_keepU", &C_bb_gem_m7_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m7.strip.nstrips_keepV", &C_bb_gem_m7_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m7.strip.nstrips_keep_lmax", &C_bb_gem_m7_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m7.strip.nstrips_keep_lmaxU", &C_bb_gem_m7_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m7.strip.nstrips_keep_lmaxV", &C_bb_gem_m7_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m7.strip.nstripsfired", &C_bb_gem_m7_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m8.clust.nclustu", &C_bb_gem_m8_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m8.clust.nclustu_tot", &C_bb_gem_m8_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m8.clust.nclustv", &C_bb_gem_m8_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m8.clust.nclustv_tot", &C_bb_gem_m8_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m8.strip.nstrips_keep", &C_bb_gem_m8_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m8.strip.nstrips_keepU", &C_bb_gem_m8_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m8.strip.nstrips_keepV", &C_bb_gem_m8_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m8.strip.nstrips_keep_lmax", &C_bb_gem_m8_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m8.strip.nstrips_keep_lmaxU", &C_bb_gem_m8_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m8.strip.nstrips_keep_lmaxV", &C_bb_gem_m8_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m8.strip.nstripsfired", &C_bb_gem_m8_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.m9.clust.nclustu", &C_bb_gem_m9_clust_nclustu);
   fChain->SetBranchAddress("bb.gem.m9.clust.nclustu_tot", &C_bb_gem_m9_clust_nclustu_tot);
   fChain->SetBranchAddress("bb.gem.m9.clust.nclustv", &C_bb_gem_m9_clust_nclustv);
   fChain->SetBranchAddress("bb.gem.m9.clust.nclustv_tot", &C_bb_gem_m9_clust_nclustv_tot);
   fChain->SetBranchAddress("bb.gem.m9.strip.nstrips_keep", &C_bb_gem_m9_strip_nstrips_keep);
   fChain->SetBranchAddress("bb.gem.m9.strip.nstrips_keepU", &C_bb_gem_m9_strip_nstrips_keepU);
   fChain->SetBranchAddress("bb.gem.m9.strip.nstrips_keepV", &C_bb_gem_m9_strip_nstrips_keepV);
   fChain->SetBranchAddress("bb.gem.m9.strip.nstrips_keep_lmax", &C_bb_gem_m9_strip_nstrips_keep_lmax);
   fChain->SetBranchAddress("bb.gem.m9.strip.nstrips_keep_lmaxU", &C_bb_gem_m9_strip_nstrips_keep_lmaxU);
   fChain->SetBranchAddress("bb.gem.m9.strip.nstrips_keep_lmaxV", &C_bb_gem_m9_strip_nstrips_keep_lmaxV);
   fChain->SetBranchAddress("bb.gem.m9.strip.nstripsfired", &C_bb_gem_m9_strip_nstripsfired);
   fChain->SetBranchAddress("bb.gem.nlayershit", &C_bb_gem_nlayershit);
   fChain->SetBranchAddress("bb.gem.nlayershitu", &C_bb_gem_nlayershitu);
   fChain->SetBranchAddress("bb.gem.nlayershituv", &C_bb_gem_nlayershituv);
   fChain->SetBranchAddress("bb.gem.nlayershitv", &C_bb_gem_nlayershitv);
   fChain->SetBranchAddress("bb.gem.track.besttrack", &C_bb_gem_track_besttrack);
   fChain->SetBranchAddress("bb.gem.track.ntrack", &C_bb_gem_track_ntrack);
   fChain->SetBranchAddress("bb.grinch_tdc.ngoodhits", &C_bb_grinch_tdc_ngoodhits);
   fChain->SetBranchAddress("bb.hodotdc.nclus", &C_bb_hodotdc_nclus);
   fChain->SetBranchAddress("bb.ps.atimeblk", &C_bb_ps_atimeblk);
   fChain->SetBranchAddress("bb.ps.colblk", &C_bb_ps_colblk);
   fChain->SetBranchAddress("bb.ps.e", &C_bb_ps_e);
   fChain->SetBranchAddress("bb.ps.e_c", &C_bb_ps_e_c);
   fChain->SetBranchAddress("bb.ps.eblk", &C_bb_ps_eblk);
   fChain->SetBranchAddress("bb.ps.eblk_c", &C_bb_ps_eblk_c);
   fChain->SetBranchAddress("bb.ps.idblk", &C_bb_ps_idblk);
   fChain->SetBranchAddress("bb.ps.index", &C_bb_ps_index);
   fChain->SetBranchAddress("bb.ps.nblk", &C_bb_ps_nblk);
   fChain->SetBranchAddress("bb.ps.nclus", &C_bb_ps_nclus);
   fChain->SetBranchAddress("bb.ps.ngoodADChits", &C_bb_ps_ngoodADChits);
   fChain->SetBranchAddress("bb.ps.rowblk", &C_bb_ps_rowblk);
   fChain->SetBranchAddress("bb.ps.x", &C_bb_ps_x);
   fChain->SetBranchAddress("bb.ps.y", &C_bb_ps_y);
   fChain->SetBranchAddress("bb.sh.atimeblk", &C_bb_sh_atimeblk);
   fChain->SetBranchAddress("bb.sh.colblk", &C_bb_sh_colblk);
   fChain->SetBranchAddress("bb.sh.e", &C_bb_sh_e);
   fChain->SetBranchAddress("bb.sh.e_c", &C_bb_sh_e_c);
   fChain->SetBranchAddress("bb.sh.eblk", &C_bb_sh_eblk);
   fChain->SetBranchAddress("bb.sh.eblk_c", &C_bb_sh_eblk_c);
   fChain->SetBranchAddress("bb.sh.idblk", &C_bb_sh_idblk);
   fChain->SetBranchAddress("bb.sh.index", &C_bb_sh_index);
   fChain->SetBranchAddress("bb.sh.nblk", &C_bb_sh_nblk);
   fChain->SetBranchAddress("bb.sh.nclus", &C_bb_sh_nclus);
   fChain->SetBranchAddress("bb.sh.ngoodADChits", &C_bb_sh_ngoodADChits);
   fChain->SetBranchAddress("bb.sh.rowblk", &C_bb_sh_rowblk);
   fChain->SetBranchAddress("bb.sh.x", &C_bb_sh_x);
   fChain->SetBranchAddress("bb.sh.y", &C_bb_sh_y);
   fChain->SetBranchAddress("bb.tr.n", &C_bb_tr_n);
   fChain->SetBranchAddress("bb.ts.over_threshold", &C_bb_ts_over_threshold);
   fChain->SetBranchAddress("e.kine.Q2", &C_e_kine_Q2);
   fChain->SetBranchAddress("e.kine.W2", &C_e_kine_W2);
   fChain->SetBranchAddress("e.kine.angle", &C_e_kine_angle);
   fChain->SetBranchAddress("e.kine.epsilon", &C_e_kine_epsilon);
   fChain->SetBranchAddress("e.kine.nu", &C_e_kine_nu);
   fChain->SetBranchAddress("e.kine.omega", &C_e_kine_omega);
   fChain->SetBranchAddress("e.kine.ph_q", &C_e_kine_ph_q);
   fChain->SetBranchAddress("e.kine.q3m", &C_e_kine_q3m);
   fChain->SetBranchAddress("e.kine.q_x", &C_e_kine_q_x);
   fChain->SetBranchAddress("e.kine.q_y", &C_e_kine_q_y);
   fChain->SetBranchAddress("e.kine.q_z", &C_e_kine_q_z);
   fChain->SetBranchAddress("e.kine.th_q", &C_e_kine_th_q);
   fChain->SetBranchAddress("e.kine.x_bj", &C_e_kine_x_bj);
   fChain->SetBranchAddress("sbs.hcal.atimeblk", &C_sbs_hcal_atimeblk);
   fChain->SetBranchAddress("sbs.hcal.colblk", &C_sbs_hcal_colblk);
   fChain->SetBranchAddress("sbs.hcal.e", &C_sbs_hcal_e);
   fChain->SetBranchAddress("sbs.hcal.e_c", &C_sbs_hcal_e_c);
   fChain->SetBranchAddress("sbs.hcal.eblk", &C_sbs_hcal_eblk);
   fChain->SetBranchAddress("sbs.hcal.eblk_c", &C_sbs_hcal_eblk_c);
   fChain->SetBranchAddress("sbs.hcal.idblk", &C_sbs_hcal_idblk);
   fChain->SetBranchAddress("sbs.hcal.index", &C_sbs_hcal_index);
   fChain->SetBranchAddress("sbs.hcal.nblk", &C_sbs_hcal_nblk);
   fChain->SetBranchAddress("sbs.hcal.nclus", &C_sbs_hcal_nclus);
   fChain->SetBranchAddress("sbs.hcal.ngoodADChits", &C_sbs_hcal_ngoodADChits);
   fChain->SetBranchAddress("sbs.hcal.rowblk", &C_sbs_hcal_rowblk);
   fChain->SetBranchAddress("sbs.hcal.tdctimeblk", &C_sbs_hcal_tdctimeblk);
   fChain->SetBranchAddress("sbs.hcal.x", &C_sbs_hcal_x);
   fChain->SetBranchAddress("sbs.hcal.y", &C_sbs_hcal_y);
   fChain->SetBranchAddress("singletrack", &C_singletrack);
   fChain->SetBranchAddress("anytrack", &C_anytrack);
   fChain->SetBranchAddress("halla_p", &C_halla_p);
   fChain->SetBranchAddress("hac_bcm_average", &C_hac_bcm_average);
   fChain->SetBranchAddress("IPM1H04A.XPOS", &C_IPM1H04A_XPOS);
   fChain->SetBranchAddress("IPM1H04A.YPOS", &C_IPM1H04A_YPOS);
   fChain->SetBranchAddress("IPM1H04E.XPOS", &C_IPM1H04E_XPOS);
   fChain->SetBranchAddress("IPM1H04E.YPOS", &C_IPM1H04E_YPOS);
   fChain->SetBranchAddress("IBC1H04CRCUR2", &C_IBC1H04CRCUR2);
   fChain->SetBranchAddress("hac_bcm_dvm1_read", &C_hac_bcm_dvm1_read);
   fChain->SetBranchAddress("hac_bcm_dvm2_read", &C_hac_bcm_dvm2_read);
   fChain->SetBranchAddress("hac_bcm_dvm1_current", &C_hac_bcm_dvm1_current);
   fChain->SetBranchAddress("hac_bcm_dvm2_current", &C_hac_bcm_dvm2_current);
   fChain->SetBranchAddress("hac_bcm_A1", &C_hac_bcm_A1);
   fChain->SetBranchAddress("hac_bcm_A2", &C_hac_bcm_A2);
   fChain->SetBranchAddress("HALLA_p", &C_HALLA_p);
   fChain->SetBranchAddress("fEvtHdr.fEvtTime", &C_fEvtHdr_fEvtTime);
   fChain->SetBranchAddress("fEvtHdr.fEvtNum", &C_fEvtHdr_fEvtNum);
   fChain->SetBranchAddress("fEvtHdr.fEvtType", &C_fEvtHdr_fEvtType);
   fChain->SetBranchAddress("fEvtHdr.fEvtLen", &C_fEvtHdr_fEvtLen);
   fChain->SetBranchAddress("fEvtHdr.fHelicity", &C_fEvtHdr_fHelicity);
   fChain->SetBranchAddress("fEvtHdr.fTrigBits", &C_fEvtHdr_fTrigBits);
   fChain->SetBranchAddress("fEvtHdr.fRun", &C_fEvtHdr_fRun);
}


#endif // PARSE_H
