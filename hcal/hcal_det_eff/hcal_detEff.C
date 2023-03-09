//SSeeds 11.03.21 - Production - Code designed to project scattered proton during zero-field running to face of HCal and determine detection efficiency. Currently measures relative to BB elastic track detection and sets a limit on good hits in HCal at 2*sigma the proton peak at zero field.
//Updates 1.11.23 - Analysis - Updates to use gmna framework and to assess various methods for obtaining detection efficiency from data for HCal
//Update 2.23.23 - Corrections and improvements to reporting and fits.
//Update 3.9.23 - Added small changes to allow for efficiency over all field settings. Added various methods for extracting efficiencies.

#include "TTree.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TF1.h"
#include "TString.h"
#include <iostream>
#include <fstream>
//#include "hcal.h"
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
#include <TChain.h>
#include <TSystem.h>
#include <TStopwatch.h>
#include "TMath.h"
#include "../../include/gmna.h" 

//Fits for HCal
double HCALBGfit(double *x, double *par){
  double yint = par[0];
  double p1 = par[1];
  double p2 = par[2];
  double p3 = par[3];
  double p4 = par[4];
  return yint+p1*x[0]+p2*pow(x[0],2)+p3*pow(x[0],3)+p4*pow(x[0],4);
}
double Pfit(double *x, double *par){
  double amp = par[0];
  double offset = par[1];
  double sigma = par[2];
  return amp*exp(-0.5*pow((x[0]-offset)/sigma,2.));
}
double HCALTfit(double *x, double *par){
  return HCALBGfit(x,&par[0])+Pfit(x,&par[5]);
}

//Fits for electron arm  //expo fit
Double_t BGfit(Double_t *x, Double_t *par){
  Double_t amp = par[0];
  Double_t offset = par[1];
  Double_t str = par[2];
  return amp*exp(offset+str*x[0]);
}

//Fits for electron arm  //expo fit alt
// Double_t BGfit(Double_t *x, Double_t *par){
//   Double_t yint = par[0];
//   Double_t amp = par[1];
//   Double_t offset = par[2];
//   Double_t str = par[3];
//   return yint+amp*exp(offset+str*x[0]);
// }

//Fits for electron arm  //3rd order poly fit
// double BGfit(double *x, double *par){
//   double yint = par[0];
//   double p1 = par[1];
//   double p2 = par[2];
//   double p3 = par[3];
//   return yint+p1*x[0]+p2*pow(x[0],2)+p3*pow(x[0],3);
// }

//Fits for electron arm  //4th order poly fit
// double BGfit(double *x, double *par){
//   double yint = par[0];
//   double p1 = par[1];
//   double p2 = par[2];
//   double p3 = par[3];
//   double p4 = par[4];
//   return yint+p1*x[0]+p2*pow(x[0],2)+p3*pow(x[0],3)+p4*pow(x[0],4);
// }

//Fits for electron arm  //5th order poly fit
// double BGfit(double *x, double *par){
//   double yint = par[0];
//   double p1 = par[1];
//   double p2 = par[2];
//   double p3 = par[3];
//   double p4 = par[4];
//   double p5 = par[5];
//   return yint+p1*x[0]+p2*pow(x[0],2)+p3*pow(x[0],3)+p4*pow(x[0],4)+p5*pow(x[0],5);
// }

//Fits for electron arm  //6th order poly fit
// double BGfit(double *x, double *par){
//   double yint = par[0];
//   double p1 = par[1];
//   double p2 = par[2];
//   double p3 = par[3];
//   double p4 = par[4];
//   double p5 = par[5];
//   double p6 = par[6];
//   return yint+p1*x[0]+p2*pow(x[0],2)+p3*pow(x[0],3)+p4*pow(x[0],4)+p5*pow(x[0],5)+p6*pow(x[0],6);
// }

//Fits for electron arm  //8th order poly fit
// double BGfit(double *x, double *par){
//   double yint = par[0];
//   double p1 = par[1];
//   double p2 = par[2];
//   double p3 = par[3];
//   double p4 = par[4];
//   double p5 = par[5];
//   double p6 = par[6];
//   double p7 = par[7];
//   double p8 = par[8];
//   return yint+p1*x[0]+p2*pow(x[0],2)+p3*pow(x[0],3)+p4*pow(x[0],4)+p5*pow(x[0],5)+p6*pow(x[0],6)+p7*pow(x[0],7)+p8*pow(x[0],8);
// }

Double_t Efit(Double_t *x, Double_t *par){
  Double_t amp = par[0];
  Double_t offset = par[1];
  Double_t sigma = par[2];
  return amp*exp(-0.5*pow((x[0]-offset)/sigma,2.));
}
Double_t Tfit(Double_t *x, Double_t *par){
  return BGfit(x,&par[0])+Efit(x,&par[3]);  //expo fit
  // return BGfit(x,&par[0])+Efit(x,&par[4]);  //expo alt fit
  // return BGfit(x,&par[0])+Efit(x,&par[4]);  //3rd order poly fit
  // return BGfit(x,&par[0])+Efit(x,&par[5]);  //4th order poly fit
  // return BGfit(x,&par[0])+Efit(x,&par[6]);  //5th order poly fit
  //return BGfit(x,&par[0])+Efit(x,&par[7]);  //6th order poly fit
  // return BGfit(x,&par[0])+Efit(x,&par[9]);  //8th order poly fit
}

//Configured only for LH2 data
void hcal_detEff( Int_t kine=-1, Int_t mag=-1  ){

  const char *tar = "LH2"; //Should only consider LH2 for HCal detection efficiency for now

  // Define a clock to check macro processing time
  TStopwatch *st = new TStopwatch();
  st->Start( kTRUE );

  TChain *C = new TChain("T");

  if( kine==-1 ){
    cout << "Error: Input parameters out of bounds. Please execute with the format:" << endl;
    cout << "  root -l \"hcal_detEff.C( <kine>,  <mag> )\" " << endl;
    cout << "  ..where kine = { 4, 7, 8, 9, 11, 14 }" << endl;
    cout << "  ..where mag = { 0, 30, 50, 70, 85, 100 }" << endl;
    return;
  }

  // First obtain index for nfset constants
  Int_t kIdx;
  if( kine == 4 ) kIdx=0;
  if( kine == 7 ) kIdx=1;
  if( kine == 11 ) kIdx=2;
  if( kine == 14 ) kIdx=3;
  if( kine == 8 ) kIdx=4;
  if( kine == 9 ) kIdx=5;

  // Declare simple variables and strings to keep track of file extensions
  const char *config_prefix = gSystem->Getenv("CONFIG_DIR");
  //TString configfilename = Form( "%s/parse_conf/SBS%d/%s/mag%d/sbs%d%s%dpar.cfg", config_prefix, kine, tar, mag, kine, tar, mag );
  //TString configfilename = "shcal_detEff.cfg";

  TString configfilename = Form("%s/SBS%d/secal_lh2_sbs%d_f%d.cfg",config_prefix,kine,kine,mag);

  TString outputfilename = Form("outfiles/HDE_lh2data_SBS%d_mag%d.root", kine, mag );
  vector<TString> log;

  TString reportPath = Form("efficiencyReports/effReport_sbs%d_mag%d.txt",kine,mag);

  // Declare general physics parameters to be modified by input config file
  Double_t E_e = -1.; // Energy of beam (incoming electrons from accelerator)
  Double_t HCal_d = -1.; // Distance to HCal from scattering chamber for comm1
  Double_t HCal_th = -1.; // Angle HCal center makes with exit beamline  
  Double_t BB_th = -1.; // Angle BB spectrometer makes with exit beamline
  Double_t W2_mean = -1.; // Mean of W at current kinematic
  Double_t W2_sig = -1.; // Width of W at current kinematic
  Double_t dx0_n = -1; // Peak location of neutron delta x. NOT USED
  Double_t dx0_p = -1; // Peak location of proton delta x
  Double_t dy0 = -1; // Peak location of delta y
  Double_t dx_sig_n = -1; // Sigma of neutron delta x peak. NOT USED
  Double_t dx_sig_p = -1; // Sigma of proton delta x peak
  Double_t dy_sig = -1; // Sigma of delta y peak
  Double_t atime0 = -1; // Peak position of ADC time signal
  Double_t atime_sig = -1; // Sigma of ADC time signal peak

  Int_t useAlshield = -1.; //Use 1/8" al shield on scattering chamber exit? 1:yes 0:no
  Int_t debug = 3;
  Double_t HCal_divx = 0.15875; //Width of full block in x
  Double_t HCal_divy = 0.15494; //Width of full block in y

  //EARM FIT TUNING
  ///////////////////////////////////////////////////////////
  Double_t W2fitmax = 1.4; //Max value in W2 plot range
  Double_t binfac = 400.; //Number of bins/unit W2
  Double_t confac = 2.; //Number of sigma in delta x/y considered a "detection"
  Double_t dconfac = 10.; //Number of sigma outside of which inelastics only
  ///////////////////////////////////////////////////////////

  // Reading config file
  ifstream configfile(configfilename);
  TString currentline;
  cout << endl << "Chaining the following runs: " << endl;
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endlist") ){
    if( !currentline.BeginsWith("#") ){
      if(!currentline) cout << "WARNING: No file exists at " << currentline << "." << endl;
      //C->Add(currentline);
      if(debug==0){
	C->Add(currentline);
	debug=1;
      }else if(debug==3){
	C->Add(currentline);
      }
      if(currentline){
	log.push_back(currentline);
	cout << currentline << " ..check" << endl;
      }
    }    
  }

  TCut globalcut = "";
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endcut") ){
    if( !currentline.BeginsWith("#") ){
      globalcut += currentline;
    }    
    cout << "Loading globalcut: " << globalcut << endl;
  }

  cout << endl << "Loading the following parameters from " << configfilename << ":" << endl;
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("#") ){
    TObjArray *tokens = currentline.Tokenize(" ");
    Int_t ntokens = tokens->GetEntries();
    if( ntokens>1 ){
      TString skey = ( (TObjString*)(*tokens)[0] )->GetString();
      if( skey == "E_e" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	E_e = sval.Atof();
	cout << "Loading beam energy: " << E_e << endl;
      }
      if( skey == "HCal_d" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	HCal_d = sval.Atof();
	cout << "Loading HCal distance: " << HCal_d << endl;
      }
      if( skey == "HCal_th" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	HCal_th = sval.Atof() * TMath::DegToRad();	
	cout << "Loading HCal angle: " << HCal_th << endl;
      }
      if( skey == "BB_th" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	BB_th = sval.Atof() * TMath::DegToRad();	
	cout << "Loading BBCal angle: " << BB_th << endl;
      }
      if( skey == "W2_mean" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	W2_mean = sval.Atof();
	cout << "Loading W2 mean cut: " << W2_mean << endl;
      }
      if( skey == "W2_sig" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	W2_sig = sval.Atof();
	cout << "Loading W2 sigma cut: " << W2_sig << endl;
      }
      if( skey == "dx0_n" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	dx0_n = sval.Atof();
	cout << "Loading x position of neutron spot: " << dx0_n << endl;
      }
      if( skey == "dx0_p" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	dx0_p = sval.Atof();
	cout << "Loading y position of proton spot: " << dx0_p << endl;
      }
      if( skey == "dy0" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	dy0 = sval.Atof();
	cout << "Loading y position of both hadron spots: " << dy0 << endl;
      }
      if( skey == "dx_sig_n" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	dx_sig_n = sval.Atof();
	cout << "Loading x sigma of neutron spot: " << dx_sig_n << endl;
      }
      if( skey == "dx_sig_p" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	dx_sig_p = sval.Atof();
	cout << "Loading x sigma of proton spot: " << dx_sig_p << endl;
      }
      if( skey == "dy_sig" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	dy_sig = sval.Atof();
	cout << "Loading y sigma of both hadron spots: " << dy_sig << endl;
      }
      if( skey == "atime0" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	atime0 = sval.Atof();
	cout << "Loading ADC time mean: " << atime0 << endl;
      }
      if( skey == "atime_sig" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	atime_sig = sval.Atof();
	cout << "Loading ADC time sigma: " << atime_sig << endl;
      }
      if( skey == "useAlshield" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	useAlshield = sval.Atoi();
	cout << "Loading Aluminum absorber option: " << useAlshield << endl;
      }
    }
    delete tokens;
  }
  
  if( E_e==-1 || 
      BB_th==-1 || 
      HCal_d==-1 || 
      HCal_th==-1 || 
      W2_mean==-1 || 
      W2_sig==-1 || 
      dx0_p==-1 || 
      dy0==-1 || 
      dx_sig_p==-1 || 
      dy_sig==-1 || 
      atime0==-1 || 
      atime_sig==-1 || 
      useAlshield==-1 ){
    cout << "Error: Unable to load setup parameters correctly. Please source setup_gmna.sh and try again. If problem persists, check configuration file." << endl;
    return;
  }

  cout << "Setup parameters loaded." << endl;

  cout << endl;

  // Declare general detector and physics parameters. NOT USED (until tdc signals better understood)
  Double_t TDCT_id[maxTDCTrigChan], TDCT_tdc[maxTDCTrigChan]; 
  Int_t TDCTndata;

  // BB params
  Double_t BBtr_p[maxTracks], BBtr_px[maxTracks], BBtr_py[maxTracks], BBtr_pz[maxTracks];
  Double_t BBtr_vz[maxTracks], BBtr_chi2[maxTracks], BBtr_tgth[maxTracks], BBtr_tgph[maxTracks];
  Double_t BBtr_n, BBps_x, BBps_y, BBps_e, BBsh_x, BBsh_y, BBsh_e, GEMtr_hits, BBeoverp;

  // HCal params
  Double_t cid[maxHCalChan], crow[maxHCalRows], ccol[maxHCalCols];
  Double_t ce[maxHCalChan], catime[maxHCalChan], ctdc[maxHCalChan];
  Double_t nclus, nblk;
  Double_t hcalx, hcaly, hcale, kineW2;

  //Switch off all unnecessary branches
  C->SetBranchStatus( "*", 0 );
  C->SetBranchStatus( "sbs.hcal.x", 1 );
  C->SetBranchStatus( "sbs.hcal.y", 1 );
  C->SetBranchStatus( "sbs.hcal.e", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.row", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.col", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.tdctime", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.atime", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.id", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.e", 1 );
  C->SetBranchStatus( "sbs.hcal.nblk", 1 );
  C->SetBranchStatus( "sbs.hcal.nclus", 1 );
  C->SetBranchStatus( "bb.tr.n", 1 );
  C->SetBranchStatus( "bb.tr.p", 1 );
  C->SetBranchStatus( "bb.tr.px", 1 );
  C->SetBranchStatus( "bb.tr.py", 1 );
  C->SetBranchStatus( "bb.tr.pz", 1 );
  C->SetBranchStatus( "bb.tr.vx", 1 );
  C->SetBranchStatus( "bb.tr.vy", 1 );
  C->SetBranchStatus( "bb.tr.vz", 1 );
  C->SetBranchStatus( "bb.tr.tg_th", 1 );
  C->SetBranchStatus( "bb.tr.tg_ph", 1 );
  C->SetBranchStatus( "bb.ps.e", 1 );
  C->SetBranchStatus( "bb.ps.x", 1 );
  C->SetBranchStatus( "bb.ps.y", 1 );
  C->SetBranchStatus( "bb.sh.e", 1 );
  C->SetBranchStatus( "bb.sh.x", 1 );
  C->SetBranchStatus( "bb.sh.y", 1 );
  C->SetBranchStatus( "bb.tdctrig.tdc", 1 );
  C->SetBranchStatus( "bb.tdctrig.tdcelemID", 1 );
  C->SetBranchStatus( "Ndata.bb.tdctrig.tdcelemID", 1 );
  C->SetBranchStatus( "e.kine.W2", 1 );
  C->SetBranchStatus( "bb.gem.track.nhits", 1 );
  C->SetBranchStatus( "bb.etot_over_p", 1 );

  //Link the branches to vars
  C->SetBranchAddress( "sbs.hcal.x", &hcalx );
  C->SetBranchAddress( "sbs.hcal.y", &hcaly );
  C->SetBranchAddress( "sbs.hcal.e", &hcale );
  C->SetBranchAddress( "sbs.hcal.clus_blk.row", crow );
  C->SetBranchAddress( "sbs.hcal.clus_blk.col", ccol );
  C->SetBranchAddress( "sbs.hcal.clus_blk.tdctime", ctdc );
  C->SetBranchAddress( "sbs.hcal.clus_blk.atime", catime );
  C->SetBranchAddress( "sbs.hcal.clus_blk.atime", cid );
  C->SetBranchAddress( "sbs.hcal.clus_blk.atime", ce );
  C->SetBranchAddress( "sbs.hcal.nblk", &nblk );
  C->SetBranchAddress( "sbs.hcal.nclus", &nclus );
  C->SetBranchAddress( "bb.tr.n", &BBtr_n );
  C->SetBranchAddress( "bb.tr.p", BBtr_p );
  C->SetBranchAddress( "bb.tr.px", BBtr_px );
  C->SetBranchAddress( "bb.tr.py", BBtr_py );
  C->SetBranchAddress( "bb.tr.pz", BBtr_pz );
  C->SetBranchAddress( "bb.tr.vz", BBtr_vz );
  C->SetBranchAddress( "bb.tr.tg_th", BBtr_tgth );
  C->SetBranchAddress( "bb.tr.tg_ph", BBtr_tgph );
  C->SetBranchAddress( "bb.ps.x", &BBps_x );
  C->SetBranchAddress( "bb.ps.y", &BBps_y );
  C->SetBranchAddress( "bb.ps.e", &BBps_e );
  C->SetBranchAddress( "bb.sh.x", &BBsh_x );
  C->SetBranchAddress( "bb.sh.y", &BBsh_y );
  C->SetBranchAddress( "bb.sh.e", &BBsh_e );
  C->SetBranchAddress( "bb.tdctrig.tdc", TDCT_tdc );
  C->SetBranchAddress( "bb.tdctrig.tdcelemID", TDCT_id );
  C->SetBranchAddress( "Ndata.bb.tdctrig.tdcelemID", &TDCTndata );
  C->SetBranchAddress( "e.kine.W2", &kineW2 );
  C->SetBranchAddress( "bb.gem.track.nhits", &GEMtr_hits );
  C->SetBranchAddress( "bb.etot_over_p", &BBeoverp );

  Int_t nentries = C->GetEntries();
  cout << endl;

  cout << "Opened tree with " << nentries << " entries." << endl;
  
  // Define some global variables
  Double_t emin = 0.0; // Minimum HCal energy to be considered as a hit, added for hard check on 1D distributions
  Double_t efficiency_rel; // Relative detection efficiency of HCAL (elastic events detected by HCal) / (elastic events as defined by BB tracking)
  Int_t hits_elBB = 0; // Count of total elastic hits detected in BB
  Int_t hits_gHCAL = 0; // Count of all elastic events that HCal detected
  Double_t pBeam = E_e/(1.+E_e/M_p*(1.-cos(BB_th))); // Momentum of beam calculated from theta

  //Mean energy loss of the beam prior to the scattering:
  Double_t Eloss_outgoing = celldiameter/2.0/sin(BB_th) * rho_tgt * dEdx_tgt; //Approximately 1 MeV, could correct further with raster position

  Double_t W2min_elastic = W2_mean - 2.*W2_sig;
  Double_t W2max_elastic = W2_mean + 2.*W2_sig;

  //Other vars
  Double_t ntrack;
  Int_t hcalbins = 500;
  Double_t harmrange = (posHCalXf_MC+2*HCalblk_l_v_MC) - (posHCalXi_MC-2*HCalblk_l_v_MC);

  //Outfiles
  TFile *fout = new TFile(outputfilename,"RECREATE");

  //Histograms
  TH1D *hvz = new TH1D("hvz","",250,-0.15,0.15);
  TH1D *hdpel_nocut = new TH1D("hdpel_nocut",";p/p_{elastic}(#theta)-1;", 250, -1.0, 0.5);
  TH1D *hdpel_BBcut = new TH1D("hdpel_BBcut",";p/p_{elastic}(#theta)-1;", 250, -1.0, 0.5);
  TH1D *hW2_nocut = new TH1D( "hW2_nocut",";W^2 (GeV);", binfac*W2fitmax, 0.0, W2fitmax );
  TH1D *hW2_BBcut = new TH1D( "hW2_BBcut",";W^2 (GeV);", binfac*W2fitmax, 0.0, W2fitmax );
  TH1D *hW2_BBcut_norange = new TH1D( "hW2_BBcut_norange",";W^2 (GeV);", binfac*W2fitmax, 0.0, W2fitmax );
  TH1D *hW2_BBcut_HCalcut = new TH1D( "hW2_BBcut_HCalcut",";W^2 (GeV);", binfac*W2fitmax, 0.0, W2fitmax );
  TH2D *hdxdy_HCAL_BBcut = new TH2D("hdxdy_HCAL_BBcut",";dy_{HCAL} (m); dx_{HCAL} (m)", 250, posHCalYi_MC-2*HCalblk_l_h_MC, posHCalYf_MC+2*HCalblk_l_h_MC, 250, posHCalXi_MC-2*HCalblk_l_v_MC, posHCalXf_MC+2*HCalblk_l_v_MC );
  TH2D *hdxdy_HCAL_nocut = new TH2D("hdxdy_HCAL_nocut",";dy_{HCAL} (m); dx_{HCAL} (m)", 250, posHCalYi_MC-2*HCalblk_l_h_MC, posHCalYf_MC+2*HCalblk_l_h_MC, 250, posHCalXi_MC-2*HCalblk_l_v_MC, posHCalXf_MC+2*HCalblk_l_v_MC );
  TH1D *hdx_HCAL_nocut = new TH1D("hdx_HCAL_nocut",";x_{HCAL}-x_{expect} (m);", hcalbins, posHCalXi_MC-2*HCalblk_l_v_MC, posHCalXf_MC+2*HCalblk_l_v_MC);
  TH1D *hdy_HCAL_nocut = new TH1D("hdy_HCAL_nocut",";y_{HCAL}-y_{expect} (m);", hcalbins, posHCalYi_MC-2*HCalblk_l_h_MC, posHCalYf_MC+2*HCalblk_l_h_MC);
  TH1D *hdx_HCAL_BBcut = new TH1D("hdx_HCAL_BBcut",";x_{HCAL}-x_{expect} (m);", hcalbins, posHCalXi_MC-2*HCalblk_l_v_MC, posHCalXf_MC+2*HCalblk_l_v_MC);
  TH1D *hdy_HCAL_BBcut = new TH1D("hdy_HCAL_BBcut",";y_{HCAL}-y_{expect} (m);", hcalbins, posHCalYi_MC-2*HCalblk_l_h_MC, posHCalYf_MC+2*HCalblk_l_h_MC);
  TH1D *hdx_HCAL_BBcut_dycut = new TH1D("hdx_HCAL_BBcut_dycut",";x_{HCAL}-x_{expect} (m);", hcalbins, posHCalXi_MC-2*HCalblk_l_v_MC, posHCalXf_MC+2*HCalblk_l_v_MC);

  TH1D *hW2_BBYcut = new TH1D( "hW2_BBYcut",";W^2 (GeV);", binfac*W2fitmax, 0.0, W2fitmax );
  TH1D *hW2_badYcut = new TH1D( "hW2_badYcut",";W^2 (GeV);", binfac*W2fitmax, 0.0, W2fitmax );
  TH1D *hdx_badW2cut = new TH1D("hdx_badW2cut",";x_{HCAL}-x_{expect} (m);", hcalbins, posHCalXi_MC-2*HCalblk_l_v_MC, posHCalXf_MC+2*HCalblk_l_v_MC);


  //Accounting and diagnostic variables
  Long64_t nevent = 0;
  Double_t hcalXmax = 0;
  Double_t hcalXmin = 0;
  Double_t hcalYmax = 0;
  Double_t hcalYmin = 0;
  Double_t projXmax = 0;
  Double_t projXmin = 0;
  Double_t projYmax = 0;
  Double_t projYmin = 0;

  cout << "Processing events.." << endl;

  Double_t progress = 0.;
  
  while( progress<1.0 ){
    
    Int_t barwidth = 70;
    Int_t step = 1;
    if( nevent >= nentries ) break;
    
    while( C->GetEntry( nevent++ ) ){

      //Correct the beam energy with energy loss in target using vertex position
      Double_t Eloss = (BBtr_vz[0]+l_tgt/2.0) * rho_tgt * dEdx_tgt + uwallthick_LH2 * rho_Al * dEdx_Al; //approximately 3 MeV
      Double_t E_corr = E_e - Eloss;

      //Physics Calculations
      Double_t p_corr = BBtr_p[0] - Eloss_outgoing; //Neglecting the mass of e'
      Double_t etheta = acos( BBtr_pz[0]/BBtr_p[0] ); //Will use the uncorrected track momentum to reconstruct e' theta
      Double_t ephi = atan2( BBtr_py[0], BBtr_px[0] );   
      TVector3 vertex( 0, 0, BBtr_vz[0] ); // z location of vertex in hall coordinates
      TLorentzVector Pbeam( 0, 0, E_corr, E_corr ); //Mass of e negligable
      TLorentzVector kprime( BBtr_px[0], BBtr_py[0], BBtr_pz[0], BBtr_p[0] );
      TLorentzVector Ptarg( 0, 0, 0, M_p );   
      TLorentzVector q = Pbeam - kprime;
      TLorentzVector PgammaN = Ptarg + q; //(-px, -py, ebeam - pz, Mp + ebeam - p)     
      Double_t pel = E_corr/( 1.+E_corr/M_p*( 1.-cos(etheta) ) );
      Double_t nu = E_corr - BBtr_p[0];
      Double_t pp = sqrt( pow(nu,2)+2.*M_p*nu );
      Double_t phinucleon = ephi + PI; //assume coplanarity
      Double_t thetanucleon = acos( (E_corr - BBtr_pz[0])/pp ); //use elastic constraint on nucleon kinematics     
      TVector3 pNhat( sin(thetanucleon)*cos(phinucleon), sin(thetanucleon)*sin(phinucleon), cos(thetanucleon) );
      
      //Define HCal coordinate system
      TVector3 HCAL_zaxis( sin(-HCal_th), 0, cos(-HCal_th) );
      TVector3 HCAL_xaxis( 0, -1, 0 );
      TVector3 HCAL_yaxis = HCAL_zaxis.Cross(HCAL_xaxis).Unit();      
      TVector3 HCAL_origin = HCal_d * HCAL_zaxis + HCALHeight * HCAL_xaxis;     
      TVector3 HCALpos = HCAL_origin + hcalx * HCAL_xaxis + hcaly * HCAL_yaxis;
      Double_t sintersect = ( HCAL_origin - vertex ).Dot( HCAL_zaxis ) / (pNhat.Dot( HCAL_zaxis ) ); 
      TVector3 HCAL_intersect = vertex + sintersect * pNhat;   

      //Calculate quantities of interest
      Double_t yexpect_HCAL = (HCAL_intersect - HCAL_origin).Dot( HCAL_yaxis );
      Double_t xexpect_HCAL = (HCAL_intersect - HCAL_origin).Dot( HCAL_xaxis ); 
      Double_t dx = hcalx - xexpect_HCAL;
      Double_t dy = hcaly - yexpect_HCAL;
      //Double_t dr = sqrt( pow( dx, 2 )+pow( dy, 2 ));
      Double_t E_ep = sqrt( pow(M_e,2) + pow(BBtr_p[0],2) ); // Obtain the scattered electron energy 
      Double_t p_ep = BBtr_p[0];     
      Double_t Q2 = 2*E_corr*E_ep*( 1-(BBtr_pz[0]/p_ep) ); // Obtain Q2 from beam energy, outgoing electron energy, and momenta  
      Double_t W2 = kineW2; //Get invarient mass transfer W from the four-momentum of the scattered nucleon
      //Double_t W = PgammaN.M();
      //Double_t W = sqrt(kineW2);
      Double_t E_pp = nu+M_p; // Get energy of the proton
      Double_t Enucleon = sqrt(pow(pp,2)+pow(M_p,2)); // Check on E_pp, same     
      Double_t KE_p = nu; // For elastics
      //Double_t dx = hcalx - xexpect_HCAL;
      //Double_t dy = hcaly - yexpect_HCAL;  
      Double_t pelastic = E_corr/(1.+(E_corr/M_p)*(1.0-cos(etheta))); 	
      Double_t precon = BBtr_p[0] + Eloss_outgoing; //reconstructed momentum, corrected for mean energy loss exiting the target (later we'll also want to include Al shielding on scattering chamber)
      Double_t nu_recon = E_corr - precon;
      Double_t Q2recon = 2.0*E_corr*precon*(1.0-cos(etheta));
      Double_t W2recon = pow(M_p,2) + 2.0*M_p*nu_recon - Q2recon;      

      //Calculate q vector
      TLorentzVector Kprime_recon(precon*BBtr_px[0]/BBtr_p[0],precon*BBtr_py[0]/BBtr_p[0],precon*BBtr_pz[0]/BBtr_p[0],precon);
      TLorentzVector q_recon = Pbeam - Kprime_recon;
      TVector3 qvect_recon = q_recon.Vect();

      //Get theta pq for neutron and proton
      //Calculate expected neutron direction
      TVector3 NeutronDirection = (HCALpos - vertex).Unit();

      //Calculate expected proton direction with SBS deflection
      double BdL = SBSfield * maxSBSfield * Dgap;
      double proton_deflection = tan( 0.3 * BdL / qvect_recon.Mag() ) * (HCal_d - (SBSdist + Dgap/2.0) );
      TVector3 ProtonDirection = (HCALpos + proton_deflection * HCAL_xaxis - vertex).Unit();
	
      //Fill histograms without any cuts
      hdpel_nocut->Fill( BBtr_p[0]/pel - 1.0 );
      hW2_nocut->Fill( W2 );
      hvz->Fill( vertex.Z() );
      hdxdy_HCAL_nocut->Fill( dy, dx );
      hdx_HCAL_nocut->Fill( dx );
      hdy_HCAL_nocut->Fill( dy );

      //Check the coordinate system
      if( hcalXmax < hcalx ) hcalXmax = hcalx;
      if( hcalXmin > hcalx ) hcalXmin = hcalx;
      if( hcalYmax < hcaly ) hcalYmax = hcaly;
      if( hcalYmin > hcaly ) hcalYmin = hcaly;	
      if( projXmax < xexpect_HCAL ) projXmax = xexpect_HCAL;
      if( projXmin > xexpect_HCAL ) projXmin = xexpect_HCAL;
      if( projYmax < yexpect_HCAL ) projYmax = yexpect_HCAL;
      if( projYmin > yexpect_HCAL ) projYmin = yexpect_HCAL;
	  	
      //Set up bools for e-arm cuts by kinematic
      bool earmcut[nkine] = {
	BBtr_n!=1||BBps_e<=0.141||abs(BBtr_vz[0])>=0.08||GEMtr_hits<3||abs(BBeoverp-0.99)>0.27,
	BBtr_n<=0||BBps_e<=0.2||abs(BBtr_vz[0])>=0.08||GEMtr_hits<3,
	BBtr_n<=0||BBps_e<=0.2||abs(BBtr_vz[0])>=0.08||GEMtr_hits<3||BBtr_p[0]<=2.0,
	BBtr_n<=0||BBps_e<=0.2||abs(BBtr_vz[0])>=0.08||GEMtr_hits<3||BBtr_p[0]<=2.0,
	BBtr_n!=1||BBps_e<=0.2||abs(BBtr_vz[0])>=0.08||GEMtr_hits<3||abs(BBtr_tgth[0])>=0.15||abs(BBtr_tgph[0])>=0.3,	
	BBtr_n!=1||BBps_e<=0.2||abs(BBtr_vz[0])>=0.08||GEMtr_hits<3||abs(BBtr_tgth[0])>=0.15||abs(BBtr_tgph[0])>=0.3,
      };
      
      //E-arm only cuts to gain tight selection on elastics for comparison with HCal
      ////////////////////////////////////////////////////////////////////////////////////////////////////
      //if( BBtr_n!=1||BBps_e<0.141||abs(BBtr_vz[0])>0.08||GEMtr_hits<3||abs(BBeoverp-0.99)>0.27 ) continue;
      if( earmcut[kIdx] ) continue;
      ////////////////////////////////////////////////////////////////////////////////////////////////////

      bool elastic = abs( W2 - W2_mean ) < W2_sig;
      bool detW2 = W2 < W2fitmax;
      bool detY = abs(dy-dy0)<confac*dy_sig;

      //Exclude those events passing elastic BB elastic cut which would not have landed on the active area of HCal
      if(  yexpect_HCAL > (posHCalYf_MC-HCalblk_l_h_MC) &&
	   yexpect_HCAL < (posHCalYi_MC+HCalblk_l_h_MC) &&
	   xexpect_HCAL > (posHCalXf_MC-HCalblk_l_v_MC) &&
	   xexpect_HCAL < (posHCalXi_MC+HCalblk_l_v_MC)){

	continue;
      }

      if( W2<=W2fitmax && W2>=0.0 ) hW2_BBcut->Fill( W2 );

      //Consider efficiency only on HCal Y slice considered
      if( !detY ){
	hW2_badYcut->Fill( W2 );
      }

      if( !detW2 ){
	hdx_badW2cut->Fill( dx );
      }

      if( !detY || !detW2 ) continue;

      //Fill histograms with BigBite and HCal active area cuts
      hdpel_BBcut->Fill( BBtr_p[0]/pel - 1.0 );
      hW2_BBcut_norange->Fill( W2 );
      if( W2<=W2fitmax && W2>=0.0 ) hW2_BBYcut->Fill( W2 );
      hdxdy_HCAL_BBcut->Fill( dy, dx );
      hdx_HCAL_BBcut->Fill( dx );
      hdy_HCAL_BBcut->Fill( dy );

      hdx_HCAL_BBcut_dycut->Fill( dx ); //Harm elastics (efficiency numerator)
      if( abs(dx-dx0_p)<confac*dx_sig_p ){
	hW2_BBcut_HCalcut->Fill( W2 );
      }

      cout << "[";
      Int_t pos = barwidth*progress;
      for( Int_t i=0; i<barwidth; ++i ){
	if( i<pos ) cout << "_";
	else if( i==pos ){ 
	  
	  if( step%4==0 ){
	    cout << "(>0_0)>";
	  }
	  if( step%4==1 ){
	    cout << "<(0_0)>";
	  }
	  if( step%4==2 ){
	    cout << "<(0_0<)";
	  }
	  if( step%4==3 ){
	    cout << "<( ; )>";
	  }
	  
	}
	else cout << " ";
      }
      progress = (Double_t)( ( nevent+1. )/nentries );
      
      cout << "]" << Int_t( progress*100 ) << "%\r";
      cout.flush();
      if( nevent%10000==0 ) step++;
      
    }
    
  }

  //Get difference between detY and !detY W2 after scaling to normalize
  Double_t detY_lastbin = hW2_BBcut->GetBinContent(binfac*W2fitmax);
  Double_t ndetY_lastbin = hW2_badYcut->GetBinContent(binfac*W2fitmax);

  Double_t BGfac = detY_lastbin/ndetY_lastbin;

  cout << endl << "e-arm background factor: " << BGfac << endl;

  TH1D *hW2_badYcut_scaled = (TH1D*)(hW2_badYcut->Clone("hW2_badYcut_scaled"));
  hW2_badYcut_scaled->Scale(BGfac);
  hW2_badYcut_scaled->Draw();
  TH1D *hW2_BGsub = (TH1D*)(hW2_BBcut->Clone("hW2_BGsub"));
  hW2_BGsub->Add(hW2_badYcut_scaled,-1);
  for( Int_t i=1; i<=binfac*W2fitmax+100; i++ ){
    Double_t binc = hW2_BGsub->GetBinContent(i);
    if( binc<0. ) hW2_BGsub->SetBinContent(i,0.);
  }
  TF1 *gausfitW2 = new TF1("gausfitW2",Pfit,0,W2fitmax,3);
  gausfitW2->SetLineWidth(4);
  gausfitW2->FixParameter(0,2086.79);
  gausfitW2->FixParameter(1,0.832364);
  //gausfitW2->SetParLimits(1,0.78,0.88);
  gausfitW2->FixParameter(2,0.0886092);
  hW2_BGsub->Fit("gausfitW2","RBM");

  hW2_BGsub->Draw();

  Double_t elastics_alt = hW2_BGsub->Integral(); //integrate all events in histogram after subtraction
  Double_t elastics_alt2 = binfac*gausfitW2->Integral(0.0,W2fitmax); //integrate events under the gaus fit

  cout << endl << endl;

  //Get diff detW2 and !detW2 dx after scaling to normalize
  Double_t detW2_lastbin = hdx_HCAL_BBcut->GetBinContent(hcalbins);
  Double_t ndetW2_lastbin = hdx_badW2cut->GetBinContent(hcalbins);

  Double_t hcalBGfac = detW2_lastbin/ndetW2_lastbin;

  cout << endl << "h-arm background factor: " << BGfac << endl;

  TH1D *hdx_badW2cut_scaled = (TH1D*)(hdx_badW2cut->Clone("hdx_badW2cut_scaled"));
  hdx_badW2cut_scaled->Scale(hcalBGfac);
  hdx_badW2cut_scaled->Draw();
  TH1D *hdx_BGsub = (TH1D*)(hdx_HCAL_BBcut->Clone("hdx_BGsub"));
  hdx_BGsub->Add(hdx_badW2cut_scaled,-1);
  for( Int_t i=1; i<=hcalbins+100; i++ ){
    Double_t binc = hdx_BGsub->GetBinContent(i);
    if( binc<0. ) hdx_BGsub->SetBinContent(i,0.);
  }
  TF1 *gausfitdx = new TF1("gausfitdx",Pfit,-0.3,0.3,3);
  gausfitdx->SetLineWidth(4);
  gausfitdx->SetParameter(0,14258);
  gausfitdx->SetParameter(1,0.01626);
  gausfitdx->SetParameter(2,0.05859);
  hdx_BGsub->Fit("gausfitdx","RBM");


  hdx_BGsub->Draw();

  Double_t hcalelastics_alt = hdx_BGsub->Integral();
  Double_t hcalelastics_alt2 = (hcalbins/harmrange)*gausfitdx->Integral(posHCalXi_MC-2*HCalblk_l_v_MC,posHCalXf_MC+2*HCalblk_l_v_MC);

  Double_t earmEvents = hW2_BBcut->GetEntries();

  //Declare some fitting parameters
  Double_t setpar[6];  //expo fit
  // Double_t setpar[7];  //expo alt fit
  // Double_t setpar[7];  //3rd order poly fit
  // Double_t setpar[8];  //4th order poly fit
  // Double_t setpar[9];  //5th order poly fit
  //Double_t setpar[10];  //6th order poly fit
  // Double_t setpar[12];  //8th order poly fit
  Double_t hcalsetpar[8];
  Double_t tpar[6];  //expo fit
  // Double_t tpar[7];  //expo alt fit
  // Double_t tpar[7];  //3rd order poly fit
  // Double_t tpar[8];  //4th order poly fit
  // Double_t tpar[9];  //5th order poly fit
  //Double_t tpar[10];  //6th order poly fit
  // Double_t tpar[12];  //8th order poly fit
  Double_t hcaltpar[6];
  Double_t glimh[3];
  Double_t gliml[3];
  Double_t fit_l = 0.0;
  Double_t hcalfit_l = posHCalXi_MC-2*HCalblk_l_v_MC;
  Double_t fit_h = W2fitmax;
  Double_t hcalfit_h = posHCalXf_MC+2*HCalblk_l_v_MC;

  //Set some reasonable limits for gaussian fit to elastic peak
  gliml[0] = earmEvents/binfac/2; //Amplitude constrained by number of events and binfac
  glimh[0] = earmEvents;
  gliml[1] = 0.75; //Mean constrained by W2 peak for elastics
  glimh[1] = 1.25;
  gliml[2] = 0.05; //Empirical limits
  glimh[2] = 0.50;

  //Set some initial fit params for e-arm (expo fit)  //expo fit
  setpar[0] = 465.0;
  setpar[1] = -3.5;
  setpar[2] = 3.5;
  setpar[3] = 3057.;
  setpar[4] = 0.8077;
  setpar[5] = 0.0961;

  //Set some initial fit params for e-arm (expo alt fit)  //expo alt fit
  // setpar[0] = 35;
  // setpar[1] = 465.;
  // setpar[2] = -3.5;
  // setpar[3] = 3.5;
  // setpar[4] = 3057.;
  // setpar[5] = 0.8077;
  // setpar[6] = 0.0961;
  
  //Set some initial fit params for e-arm (poly fit)  //3rd order poly fit
  // setpar[0] = 0.0;
  // setpar[1] = 1.0;
  // setpar[2] = 1.0;
  // setpar[3] = 1.0;
  // setpar[4] = 3057.;
  // setpar[5] = 0.8077;
  // setpar[6] = 0.0961;
  
  //Set some initial fit params for e-arm (poly fit)  //4th order poly fit
  // setpar[0] = 0.0;
  // setpar[1] = 1.0;
  // setpar[2] = 1.0;
  // setpar[3] = 1.0;
  // setpar[4] = 1.0;
  // setpar[5] = 3057.;
  // setpar[6] = 0.8077;
  // setpar[7] = 0.0961;

  //Set some initial fit params for e-arm (poly fit)  //5th order poly fit
  // setpar[0] = 0.0;
  // setpar[1] = 1.0;
  // setpar[2] = 1.0;
  // setpar[3] = 1.0;
  // setpar[4] = 1.0;
  // setpar[5] = 1.0;
  // setpar[6] = 3057.;
  // setpar[7] = 0.8077;
  // setpar[8] = 0.0961;

  //Set some initial fit params for e-arm (poly fit)  //6th order poly fit
  // setpar[0] = 0.0;
  // setpar[1] = 1.0;
  // setpar[2] = 1.0;
  // setpar[3] = 1.0;
  // setpar[4] = 1.0;
  // setpar[5] = 1.0;
  // setpar[6] = 1.0;
  // setpar[7] = 3057.;
  // setpar[8] = 0.8077;
  // setpar[9] = 0.0961;

  //Set some initial fit params for e-arm (poly fit)  //8th order poly fit
  // setpar[0] = 0.0;
  // setpar[1] = 1.0;
  // setpar[2] = 1.0;
  // setpar[3] = 1.0;
  // setpar[4] = 1.0;
  // setpar[5] = 1.0;
  // setpar[6] = 1.0;
  // setpar[7] = 1.0;
  // setpar[8] = 1.0;
  // setpar[9] = 3057.;
  // setpar[10] = 0.8077;
  // setpar[11] = 0.0961;

  //Set some initial fit params for h-arm
  hcalsetpar[0] = 0.0;
  hcalsetpar[1] = 1.0;
  hcalsetpar[2] = 1.0;
  hcalsetpar[3] = 1.0;
  hcalsetpar[4] = 1.0;
  //hcalsetpar[5] = 1168.0;
  hcalsetpar[5] = 2924.74;
  //hcalsetpar[6] = 0.0127;
  //hcalsetpar[6] = dx0_p-0.006;
  //hcalsetpar[6] = 0.0920489;
  hcalsetpar[6] = dx0_p;
  //hcalsetpar[7] = 0.0668;
  //hcalsetpar[7] = dx_sig_p+0.005;
  //hcalsetpar[7] = 0.109865;
  hcalsetpar[7] = dx_sig_p;

  //Declare canvas
  TCanvas *c1 = new TCanvas("c1",Form("hcal_sbs%d%smag%d",kine, tar, mag),450,750);
  //c1->Divide(2,1);
  gStyle->SetPalette(53);
  
  c1->cd();
  //HCal dxdy fit with elastic region
  hdxdy_HCAL_BBcut->GetYaxis()->SetTitleOffset(1.3);
  hdxdy_HCAL_BBcut->Draw("colz");

  TLine l_pl;
  l_pl.SetLineColor(kBlue);
  l_pl.SetLineWidth(3);
  l_pl.DrawLine(dy0-confac*dy_sig,hcalfit_l,dy0-confac*dy_sig,hcalfit_h);

  TLine l_pr;
  l_pr.SetLineColor(kBlue);
  l_pr.SetLineWidth(3);
  l_pr.DrawLine(dy0+confac*dy_sig,hcalfit_l,dy0+confac*dy_sig,hcalfit_h);

  TCanvas *c2 = new TCanvas("c2",Form("W2_sbs%d%smag%d",kine, tar, mag),1200,500);
  c2->Divide(2,1);
  gStyle->SetPalette(53);

  c1->Write();

  c2->cd(1);
  gStyle->SetOptFit(0);
  gStyle->SetOptStat(0);

  //Set up the hadron fits
  TF1 *hcaltotalfit = new TF1("hcaltotalfit",HCALTfit,hcalfit_l,hcalfit_h,8);
  hcaltotalfit->SetLineColor(kGreen);
  TF1 *hcalbg = new TF1("hcalbg",HCALBGfit,hcalfit_l,hcalfit_h,5);
  hcalbg->SetLineColor(kRed);
  TF1 *p = new TF1("p",Pfit,hcalfit_l,hcalfit_h,3);
  p->SetLineColor(kBlack);

  hcaltotalfit->SetLineWidth(4);
  hcaltotalfit->SetLineColor(kGreen);
  hcaltotalfit->SetParameter(0,hcalsetpar[0]);
  hcaltotalfit->SetParameter(1,hcalsetpar[1]);
  hcaltotalfit->SetParameter(2,hcalsetpar[2]);
  hcaltotalfit->SetParameter(3,hcalsetpar[3]);
  hcaltotalfit->SetParameter(4,hcalsetpar[4]);
  hcaltotalfit->SetParameter(5,hcalsetpar[5]);
  hcaltotalfit->SetParameter(6,hcalsetpar[6]);
  hcaltotalfit->SetParameter(7,hcalsetpar[7]);

  hdx_HCAL_BBcut_dycut->Fit("hcaltotalfit","RBM");

  hcaltotalfit->GetParameters(hcaltpar);

  hcalbg->SetParameters(&hcaltpar[0]);
  hcalbg->Draw("same");

  p->SetParameters(&hcaltpar[5]);
  p->Draw("same");
;
  Double_t hcalinelastics = (hcalbins/harmrange)*hcalbg->Integral(posHCalXi_MC-2*HCalblk_l_v_MC,posHCalXf_MC+2*HCalblk_l_v_MC);
  Double_t hcalelastics = (hcalbins/harmrange)*p->Integral(posHCalXi_MC-2*HCalblk_l_v_MC,posHCalXf_MC+2*HCalblk_l_v_MC);

  //Add a legend
  auto hcallegend = new TLegend(0.1,0.7,0.48,0.9);
  hcallegend->SetTextSize( 0.03 );
  hcallegend->SetHeader( "HCal dx, E Arm Cuts and dy Cut", "C" );
  hcallegend->AddEntry( hcalbg, Form("Inelastic Fit: %d ev", (int)hcalinelastics), "l");
  hcallegend->AddEntry( p, Form("Elastic Fit: %d ev", (int)hcalelastics), "l");
  hcallegend->AddEntry( hcaltotalfit, "Total Fit", "l");
  hcallegend->Draw();

  c2->cd(2);
  gStyle->SetOptFit(0);
  gStyle->SetOptStat(0);

  //Set up the W2 fits
  TF1 *totalfit = new TF1("totalfit",Tfit,fit_l,fit_h,6);  //expo fit
  // TF1 *totalfit = new TF1("totalfit",Tfit,fit_l,fit_h,7);  //expo alt fit
  // TF1 *totalfit = new TF1("totalfit",Tfit,fit_l,fit_h,7);  //3rd order poly fit
  // TF1 *totalfit = new TF1("totalfit",Tfit,fit_l,fit_h,8);  //4th order poly fit
  // TF1 *totalfit = new TF1("totalfit",Tfit,fit_l,fit_h,9);  //5th order poly fit
  //TF1 *totalfit = new TF1("totalfit",Tfit,fit_l,fit_h,10);  //6th order poly fit
  // TF1 *totalfit = new TF1("totalfit",Tfit,fit_l,fit_h,12);  //8th order poly fit
  totalfit->SetLineColor(kGreen);
  TF1 *bg = new TF1("bg",BGfit,fit_l,fit_h,3);  //expo fit
  // TF1 *bg = new TF1("bg",BGfit,fit_l,fit_h,4);  //expo alt fit
  // TF1 *bg = new TF1("bg",BGfit,fit_l,fit_h,4);  //3rd order poly fit
  // TF1 *bg = new TF1("bg",BGfit,fit_l,fit_h,5);  //4th order poly fit
  // TF1 *bg = new TF1("bg",BGfit,fit_l,fit_h,6);  //5th order poly fit
  //TF1 *bg = new TF1("bg",BGfit,fit_l,fit_h,7);  //6th order poly fit
  // TF1 *bg = new TF1("bg",BGfit,fit_l,fit_h,9);  //8th order poly fit
  bg->SetLineColor(kRed);
  TF1 *e = new TF1("e",Efit,fit_l,fit_h,3);
  e->SetLineColor(kBlack);

  totalfit->SetLineWidth(4);

  totalfit->SetParameter(0,setpar[0]);  //expo fit
  totalfit->SetParLimits(0,0.,10000.);
  totalfit->SetParameter(1,setpar[1]);
  totalfit->SetParLimits(1,-10000.,0.);
  totalfit->SetParameter(2,setpar[2]);
  totalfit->SetParLimits(2,0.,10000.);
  totalfit->SetParameter(3,setpar[3]);
  totalfit->SetParameter(4,setpar[4]);
  totalfit->SetParameter(5,setpar[5]);
  totalfit->SetParLimits(3,gliml[0],glimh[0]);
  totalfit->SetParLimits(4,gliml[1],glimh[1]);
  totalfit->SetParLimits(5,gliml[2],glimh[2]);

  // totalfit->FixParameter(0,setpar[0]);  //expo alt fit
  // totalfit->FixParameter(1,setpar[1]);
  // totalfit->FixParameter(2,setpar[2]);
  // totalfit->FixParameter(3,setpar[3]);
  // totalfit->SetParameter(4,setpar[4]);
  // totalfit->SetParameter(5,setpar[5]);
  // totalfit->SetParameter(6,setpar[6]);
  // totalfit->SetParLimits(4,gliml[0],glimh[0]);
  // totalfit->SetParLimits(5,gliml[1],glimh[1]);
  // totalfit->SetParLimits(6,gliml[2],glimh[2]);

  // totalfit->SetParameter(0,setpar[0]);  //3rd order poly fit
  // totalfit->SetParameter(1,setpar[1]);
  // totalfit->SetParameter(2,setpar[2]);
  // totalfit->SetParameter(3,setpar[3]);
  // totalfit->SetParameter(4,setpar[4]);
  // totalfit->SetParameter(5,setpar[5]);
  // totalfit->SetParameter(6,setpar[6]);
  // totalfit->SetParLimits(4,gliml[0],glimh[0]);
  // totalfit->SetParLimits(5,gliml[1],glimh[1]);
  // totalfit->SetParLimits(6,gliml[2],glimh[2]);

  // totalfit->SetParameter(0,setpar[0]);  //4th order poly fit
  // totalfit->SetParameter(1,setpar[1]);
  // totalfit->SetParameter(2,setpar[2]);
  // totalfit->SetParameter(3,setpar[3]);
  // totalfit->SetParameter(4,setpar[4]);
  // totalfit->SetParameter(5,setpar[5]);
  // totalfit->SetParameter(6,setpar[6]);
  // totalfit->SetParameter(7,setpar[7]);
  // totalfit->SetParLimits(5,gliml[0],glimh[0]);
  // totalfit->SetParLimits(6,gliml[1],glimh[1]);
  // totalfit->SetParLimits(7,gliml[2],glimh[2]);

  // totalfit->SetParameter(0,setpar[0]);  //5th order poly fit
  // totalfit->SetParameter(1,setpar[1]);
  // totalfit->SetParameter(2,setpar[2]);
  // totalfit->SetParameter(3,setpar[3]);
  // totalfit->SetParameter(4,setpar[4]);
  // totalfit->SetParameter(5,setpar[5]);
  // totalfit->SetParameter(6,setpar[6]);
  // totalfit->SetParameter(7,setpar[7]);
  // totalfit->SetParameter(8,setpar[8]);
  // totalfit->SetParLimits(6,gliml[0],glimh[0]);
  // totalfit->SetParLimits(7,gliml[1],glimh[1]);
  // totalfit->SetParLimits(8,gliml[2],glimh[2]);

  // totalfit->SetParameter(0,setpar[0]);  //6th order poly fit
  // totalfit->SetParameter(1,setpar[1]);
  // totalfit->SetParameter(2,setpar[2]);
  // totalfit->SetParameter(3,setpar[3]);
  // totalfit->SetParameter(4,setpar[4]);
  // totalfit->SetParameter(5,setpar[5]);
  // totalfit->SetParameter(6,setpar[6]);
  // totalfit->SetParameter(7,setpar[7]);
  // totalfit->SetParameter(8,setpar[8]);
  // totalfit->SetParameter(9,setpar[9]);
  // totalfit->SetParLimits(7,gliml[0],glimh[0]);
  // totalfit->SetParLimits(8,gliml[1],glimh[1]);
  // totalfit->SetParLimits(9,gliml[2],glimh[2]);

  // totalfit->SetParameter(0,setpar[0]);  //8th order poly fit
  // totalfit->SetParameter(1,setpar[1]);
  // totalfit->SetParameter(2,setpar[2]);
  // totalfit->SetParameter(3,setpar[3]);
  // totalfit->SetParameter(4,setpar[4]);
  // totalfit->SetParameter(5,setpar[5]);
  // totalfit->SetParameter(6,setpar[6]);
  // totalfit->SetParameter(7,setpar[7]);
  // totalfit->SetParameter(8,setpar[8]);
  // totalfit->SetParameter(9,setpar[9]);
  // totalfit->SetParameter(10,setpar[10]);
  // totalfit->SetParameter(11,setpar[11]);
  // totalfit->SetParLimits(9,gliml[0],glimh[0]);
  // totalfit->SetParLimits(10,gliml[1],glimh[1]);
  // totalfit->SetParLimits(11,gliml[2],glimh[2]);

  hW2_BBcut->Fit("totalfit","RBM");

  totalfit->GetParameters(tpar);

  bg->SetParameters(&tpar[0]);
  bg->Draw("same");

  e->SetParameters(&tpar[3]);  //expo fit
  // e->SetParameters(&tpar[4]);	//expo alt fit
  // e->SetParameters(&tpar[4]);  //3rd order poly fit
  // e->SetParameters(&tpar[5]);  //4th order poly fit
  // e->SetParameters(&tpar[6]);  //5th order poly fit
  //e->SetParameters(&tpar[7]);  //6th order poly fit
  // e->SetParameters(&tpar[9]);  //8th order poly fit
  e->Draw("same");

  //Integrate the elastic peak to get total elastics detected in BB
  Double_t inelastics = binfac*bg->Integral(0.0,W2fitmax); //420 bins to 1.4 range ratio
  Double_t elastics = binfac*e->Integral(0.0,W2fitmax);

  //Add a legend
  auto legend = new TLegend(0.1,0.7,0.48,0.9);
  legend->SetTextSize( 0.03 );
  legend->SetHeader( "W2, Electron Arm Cuts", "C" );
  legend->AddEntry( bg, Form("Inelastic Fit: %d ev", (int)inelastics), "l");
  legend->AddEntry( e, Form("Elastic Fit: %d ev", (int)elastics), "l");
  legend->AddEntry( totalfit, "Total Fit", "l");
  legend->Draw();

  c2->Write();

  fout->Write();

  //Calculate error assuming fit error is negligable
  //Binomial
  Double_t eff = hcalelastics/elastics;
  Double_t eff_alt = hcalelastics_alt/elastics_alt;
  Double_t eff_alt2 = hcalelastics_alt2/elastics_alt2;
  Double_t eff_althybrid = hcalelastics/elastics_alt;
  Double_t efferr = sqrt(eff*(1-eff)/elastics);
  Double_t efferr_alt = sqrt(eff_alt*(1-eff_alt)/elastics_alt);
  Double_t efferr_alt2 = sqrt(eff_alt2*(1-eff_alt2)/elastics_alt2);
  Double_t efferr_althybrid = sqrt(eff_althybrid*(1-eff_althybrid)/elastics_alt);

  //Declare coeff outfile
  ofstream report;

  cout << "Chi^2 for total fit: " << totalfit->GetChisquare() << endl;
  report << "Chi^2 for total fit: " << totalfit->GetChisquare() << endl;

  report.open( reportPath );
  report << "HCal detection efficiency report for SBS" << kine << " LH2 data at " << mag << " percent field" << endl << endl;

  cout << "Total elastics detected in HCal: " << hcalelastics << endl;
  report << "Total elastics detected in HCal: " << hcalelastics << endl << endl;

  cout << "Total elastics detected in Bigbite with e-arm cuts only: " << elastics << endl;
  report << "Total elastics detected in Bigbite with e-arm cuts only: " << elastics << endl << endl;
  cout << "Total elastics detected in HCal (alt): " << hcalelastics_alt << endl;
  report << "Total elastics detected in HCal (alt): " << hcalelastics_alt << endl << endl;

  cout << "Total elastics detected in Bigbite with e-arm cuts only (alt): " << elastics_alt << endl;
  report << "Total elastics detected in Bigbite with e-arm cuts only (alt): " << elastics_alt << endl << endl;

  cout << "Total entries in W2 plot: " << earmEvents << endl << endl;
  report << "Total entries in W2 plot: " << earmEvents << endl << endl;

  cout << "==============================================================" << endl;
  cout << "Total HCal elastic detection efficiency: " << eff << " +/- " << efferr << endl;
  cout << "==============================================================" << endl << endl;

  cout << "===================================================================" << endl;
  cout << "Total HCal elastic detection efficiency (alt): " << eff_alt << " +/- " << efferr_alt << endl;
  cout << "===================================================================" << endl << endl;

  cout << "===================================================================" << endl;
  cout << "Total HCal elastic detection efficiency (alt2): " << eff_alt2 << " +/- " << efferr_alt2 << endl;
  cout << "===================================================================" << endl << endl;

  cout << "===================================================================" << endl;
  cout << "Total HCal elastic detection efficiency (althybrid): " << eff_althybrid << " +/- " << efferr_althybrid << endl;
  cout << "===================================================================" << endl << endl;

  report << "==============================================================" << endl;
  report << "Total HCal elastic detection efficiency: " << eff << " +/- " << efferr <<  endl;
  report << "==============================================================" << endl;

  report << "===================================================================" << endl;
  report << "Total HCal elastic detection efficiency (alt): " << eff_alt << " +/- " << efferr_alt << endl;
  report << "===================================================================" << endl << endl;

  report << "===================================================================" << endl;
  report << "Total HCal elastic detection efficiency (alt2): " << eff_alt2 << " +/- " << efferr_alt2 << endl;
  report << "===================================================================" << endl << endl;



  report.close();

  st->Stop();

  // Send time efficiency report to console
  cout << "CPU time elapsed = " << st->CpuTime() << " s = " << st->CpuTime()/60.0 << " min. Real time = " << st->RealTime() << " s = " << st->RealTime()/60.0 << " min." << endl;

}
