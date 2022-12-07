#ifndef ANA_H
#define ANA_H

// Declaration of leaf types for analyzed data

Double_t A_ebeam, A_etheta, A_ephi, A_precon, A_pelastic, A_thetabend, A_dpel, A_W2;
Double_t A_thetapq_n, A_thetapq_p;
Double_t A_pincident;
Double_t A_xfp, A_yfp, A_thfp, A_phfp;
Double_t A_thtgt, A_phtgt, A_ytgt, A_xtgt;
Double_t A_vx, A_vy, A_vz;
Double_t A_BBdist, A_BBtheta;
Double_t A_HCALdist, A_HCALtheta;
Double_t A_xHCAL, A_yHCAL, A_EHCAL, A_deltax, A_deltay;
Double_t A_pp_expect, A_ptheta_expect, A_pphi_expect;
Double_t A_EPS, A_ESH, A_Etot;
Double_t A_xSH, A_ySH;
Double_t A_Q2;
Int_t pcut, ncut;
Int_t BBcut;

// Set up all branches for output tree
void AnaInit(TTree *Tout)
{
  Tout->Branch( "pcut", &pcut, "pcut/I");
  Tout->Branch( "ncut", &ncut, "ncut/I");
  Tout->Branch( "BBcut", &BBcut, "BBcut/I");
  Tout->Branch( "Ebeam", &A_ebeam, "Ebeam/D" );
  Tout->Branch( "Q2", &A_Q2, "Q2/D"); 
  Tout->Branch( "etheta", &A_etheta, "etheta/D");
  Tout->Branch( "ephi", &A_ephi, "ephi/D");
  Tout->Branch( "ep_recon", &A_precon, "ep_recon/D");
  Tout->Branch( "ep_elastic", &A_pelastic, "ep_elastic/D");
  Tout->Branch( "ep_incident", &A_pincident, "ep_incident/D");
  Tout->Branch( "thetabend", &A_thetabend, "thetabend/D");
  Tout->Branch( "dpel", &A_dpel, "dpel/D");
  Tout->Branch( "W2", &A_W2, "W2/D");
  Tout->Branch( "xfp", &A_xfp, "xfp/D");
  Tout->Branch( "yfp", &A_yfp, "yfp/D");
  Tout->Branch( "thfp", &A_thfp, "thfp/D");
  Tout->Branch( "phfp", &A_phfp, "phfp/D");
  Tout->Branch( "thtgt", &A_thtgt, "thtgt/D");
  Tout->Branch( "phtgt", &A_phtgt, "phtgt/D");
  Tout->Branch( "ytgt", &A_ytgt, "ytgt/D");
  Tout->Branch( "xtgt", &A_xtgt, "xtgt/D");
  Tout->Branch( "vz", &A_vz, "vz/D");
  Tout->Branch( "BBdist", &A_BBdist, "BBdist/D");
  Tout->Branch( "BBtheta", &A_BBtheta, "BBtheta/D");
  Tout->Branch( "HCALdist", &A_HCALdist, "HCALdist/D");
  Tout->Branch( "HCALtheta", &A_HCALtheta, "HCALtheta/D");
  Tout->Branch( "xHCAL", &A_xHCAL, "xHCAL/D");
  Tout->Branch( "yHCAL", &A_yHCAL, "yHCAL/D");
  Tout->Branch( "EHCAL", &A_EHCAL, "EHCAL/D");
  Tout->Branch( "deltax", &A_deltax, "deltax/D");
  Tout->Branch( "deltay", &A_deltay, "deltay/D");
  Tout->Branch( "thetapq_n", &A_thetapq_n, "thetapq_n/D");
  Tout->Branch( "thetapq_p", &A_thetapq_p, "thetapq_p/D");
  Tout->Branch( "pp_expect", &A_pp_expect, "pp_expect/D");
  Tout->Branch( "ptheta_expect", &A_ptheta_expect, "ptheta_expect/D");
  Tout->Branch( "pphi_expect", &A_pphi_expect, "pphi_expect/D");
  Tout->Branch( "EPS", &A_EPS, "EPS/D");
  Tout->Branch( "ESH", &A_ESH, "ESH/D");
  Tout->Branch( "Etot", &A_Etot, "Etot/D");
  Tout->Branch( "xSH", &A_xSH, "xSH/D");
  Tout->Branch( "ySH", &A_ySH, "ySH/D");
}



#endif // ANA_H
