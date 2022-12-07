//SSeeds 10.30.22 Adaptation of HCal dxdy script designed to extract relative yields after blinding of the HCal efficiencies. Expects a parsed root file with wide globalcuts already applied.
#include <ctime>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <TH2F.h>
#include <TChain.h>
#include <TCanvas.h>
#include <iostream>
#include <TSystem.h>
#include <TStopwatch.h>
#include <set>
#include <map>
#include "TChain.h"
#include "TTree.h"
#include "TFile.h"
#include "TMatrixD.h"
#include "TVectorD.h"
#include "TString.h"
#include "TCut.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TMath.h"
#include "TVector3.h"
#include "TGraphErrors.h"
#include "TEllipse.h"
#include "TLatex.h"
#include "../../include/gmna.h"
#include "../../include/ana.h"

// Get today's date
string getDate(){
  time_t now = time(0);
  tm ltm = *localtime(&now);
  
  string yyyy = to_string(1900 + ltm.tm_year);
  string mm = to_string(1 + ltm.tm_mon);
  string dd = to_string(ltm.tm_mday);
  string date = mm + '_' + dd + '_' + yyyy;
  
  return date;
}

void pnyields( Int_t kine=-1, const char *tar="", Int_t mag=-1 ){

  // Define a clock to check macro processing time
  TStopwatch *st = new TStopwatch();
  st->Start( kTRUE );

  // Get the date
  string date = getDate();

  // Declare Chain for many root files
  TChain *C = new TChain("R");

  if( kine==-1 ){
    cout << "Error: Input parameters out of bounds. Please execute with the format:" << endl;
    cout << "  root -l \"pelas.C( <kine>, <tar>, <mag> )\" " << endl;
    cout << "  ..where kine = { 4, 7, 8, 9, 11, 14 }" << endl;
    cout << "  ..where tar = { \"LH2\", \"LD2\" }" << endl;
    cout << "  ..where mag = { 0, 30, 50, 70, 85, 100 }" << endl;
    return;
  }

  // Get configuration file
  const char *config_prefix = gSystem->Getenv("CONFIG_DIR");
  TString configfilename = Form( "%s/analysis_conf/SBS%d/%s/mag%d/sbs%d%s%dana.cfg", config_prefix, kine, tar, mag, kine, tar, mag );
  
  // Declare output file
  const char *output_prefix = gSystem->Getenv("GMN_OUTPUT_DIR");
  TString outputfilename = Form("%s/pnyield_analysis_SBS%d_%s_mag%d.root", output_prefix, kine, tar, mag );

  // Declare variables input with config file
  Double_t E_e = -1.; // Energy of beam (incoming electrons from accelerator)
  Double_t t_trig = -1.; // Time difference between BBCal Hi (L1A) and HCal Trig (ns)
  Double_t BB_d = -1.; // Distance to bigbite spectrometer from target chamber (m)
  Double_t BB_th = -1.; // Angle BB spectrometer makes with exit beamline
  Double_t HCal_d = -1.; // Distance to HCal from scattering chamber for comm1
  Double_t HCal_th = -1.; // Angle HCal center makes with exit beamline  
  Double_t W2_mean = -1.; // Mean of W^2 at current kinematic
  Double_t W2_sig = -1.; // Width of W^2 at current kinematic
  Int_t useAlshield = -1.; //Use 1/8" al shield on scattering chamber exit? 1:yes 0:no


  // Reading config file
  ifstream configfile(configfilename);
  TString currentline;
  cout << endl << "Chaining the following runs: " << endl;
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endlist") ){
    if( !currentline.BeginsWith("#") ){
      if(!currentline) cout << "WARNING: No file exists at " << currentline << "." << endl;
      C->Add(currentline);
      if(currentline){
	cout << currentline << " ..check" << endl;
      }
    }    
  }

  cout << endl << "Loading globalcut on simple tree variables: " << endl;
  TCut globalcut = "";
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endcut") ){
    if( !currentline.BeginsWith("#") ){
      globalcut += currentline;
      cout << globalcut << endl;
    }    
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
	cout << "Beam Energy: " << E_e << endl;
      }
      if( skey == "t_trig" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	t_trig = sval.Atof();
	cout << "BBCal/HCal Trigger Difference: " << t_trig << endl;
      }
      if( skey == "BB_d" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	BB_d = sval.Atof();
	cout << "BigBite Spectrometer distance: " << BB_d << endl;
      }
      if( skey == "BB_th" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	BB_th = sval.Atof() * TMath::DegToRad();
	cout << "BigBite Spectrometer angle (rad): " << BB_th << endl;
      }
      if( skey == "HCal_d" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	HCal_d = sval.Atof();
	cout << "HCal distance: " << HCal_d << endl;
      }
      if( skey == "HCal_th" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	HCal_th = sval.Atof() * TMath::DegToRad();	
	cout << "HCal angle (rad): " << HCal_th << endl;
      }
      if( skey == "W2_mean" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
        W2_mean = sval.Atof();
	cout << "W mean cut: " << W2_mean << endl;
      }
      if( skey == "W2_sig" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
        W2_sig = sval.Atof();
	cout << "W sigma cut: " << W2_sig << endl;
      } 
      if( skey == "useAlshield" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
	useAlshield = sval.Atoi();
	cout << "Aluminum absorber option: " << useAlshield << endl;
      } 
    }
    delete tokens;
  }

  cout << "Setup parameters loaded." << endl;


  //Declare vars
  Double_t atime[maxHCalChan], row[maxHCalChan], col[maxHCalChan], tdctime[maxHCalChan], cblkid[maxHCalChan], cblke[maxHCalChan];
  Double_t nblk, nclus, SHnclus, PSnclus, hcalx, hcaly, hcale;
  UInt_t TBits;

  Double_t BBtr_p[maxTracks], BBtr_px[maxTracks], BBtr_py[maxTracks], BBtr_pz[maxTracks];
  Double_t BBtr_vz[maxTracks];
  Double_t BBtr_n, BBps_x, BBps_y, BBps_e, BBsh_x, BBsh_y, BBsh_e;

  Double_t TDCT_id[maxTDCTrigChan], TDCT_tdc[maxTDCTrigChan], hodo_tmean[maxTDCTrigChan]; 
  Int_t TDCTndata;

  //Use "rotated" versions of the focal plane variables:
  Double_t xfp[maxTracks], yfp[maxTracks], thfp[maxTracks], phfp[maxTracks];
  //Also need target variables:
  Double_t xtgt[maxTracks], ytgt[maxTracks], thtgt[maxTracks], phtgt[maxTracks];

  //Setup leaves
  C->SetMakeClass(1); //Allows for viewing of general detector params from Event_Branch
  C->SetBranchStatus( "*", 0 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.atime", 1 );  
  C->SetBranchStatus( "sbs.hcal.clus_blk.row", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.col", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.tdctime", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.id", 1 );
  C->SetBranchStatus( "sbs.hcal.clus_blk.e", 1 );
  C->SetBranchStatus( "sbs.hcal.x", 1 );
  C->SetBranchStatus( "sbs.hcal.y", 1 );
  C->SetBranchStatus( "sbs.hcal.e", 1 );
  C->SetBranchStatus( "sbs.hcal.nblk", 1 );
  C->SetBranchStatus( "sbs.hcal.nclus", 1 );
  C->SetBranchStatus( "bb.sh.nclus", 1 );
  C->SetBranchStatus( "bb.ps.nclus", 1 );
  C->SetBranchStatus( "bb.tr.n", 1 );
  C->SetBranchStatus( "bb.tr.px", 1 );
  C->SetBranchStatus( "bb.tr.py", 1 );
  C->SetBranchStatus( "bb.tr.pz", 1 );
  C->SetBranchStatus( "bb.tr.p", 1 );
  C->SetBranchStatus( "fEvtHdr.fTrigBits", 1 );
  C->SetBranchStatus( "bb.tr.vz", 1 );
  C->SetBranchStatus( "bb.ps.e", 1 );
  C->SetBranchStatus( "bb.ps.x", 1 );
  C->SetBranchStatus( "bb.ps.y", 1 );
  C->SetBranchStatus( "bb.sh.e", 1 );
  C->SetBranchStatus( "bb.sh.x", 1 );
  C->SetBranchStatus( "bb.sh.y", 1 );
  C->SetBranchStatus( "g.trigbits", 1 );
  C->SetBranchStatus( "bb.tdctrig.tdc", 1 );
  C->SetBranchStatus( "bb.tdctrig.tdcelemID", 1 );
  C->SetBranchStatus( "bb.tr.r_x", 1 );
  C->SetBranchStatus( "bb.tr.r_y", 1 );
  C->SetBranchStatus( "bb.tr.r_th", 1 );
  C->SetBranchStatus( "bb.tr.r_ph", 1 );
  C->SetBranchStatus( "bb.tr.tg_x", 1 );
  C->SetBranchStatus( "bb.tr.tg_y", 1 );
  C->SetBranchStatus( "bb.tr.tg_th", 1 );
  C->SetBranchStatus( "bb.tr.tg_ph", 1 );
  C->SetBranchStatus( "Ndata.bb.tdctrig.tdcelemID", 1 );

  C->SetBranchAddress( "sbs.hcal.clus_blk.atime", atime );
  C->SetBranchAddress( "sbs.hcal.clus_blk.row", row );
  C->SetBranchAddress( "sbs.hcal.clus_blk.col", col );
  C->SetBranchAddress( "sbs.hcal.clus_blk.tdctime", tdctime );
  C->SetBranchAddress( "sbs.hcal.clus_blk.id", cblkid );
  C->SetBranchAddress( "sbs.hcal.clus_blk.e", cblke );
  C->SetBranchAddress( "sbs.hcal.x", &hcalx );
  C->SetBranchAddress( "sbs.hcal.y", &hcaly );
  C->SetBranchAddress( "sbs.hcal.e", &hcale );
  C->SetBranchAddress( "sbs.hcal.nblk", &nblk );
  C->SetBranchAddress( "sbs.hcal.nclus", &nclus );
  C->SetBranchAddress( "bb.sh.nclus", &SHnclus );
  C->SetBranchAddress( "bb.ps.nclus", &PSnclus );
  C->SetBranchAddress( "bb.tr.n", &BBtr_n );
  C->SetBranchAddress( "bb.tr.px", BBtr_px );
  C->SetBranchAddress( "bb.tr.py", BBtr_py );
  C->SetBranchAddress( "bb.tr.pz", BBtr_pz );
  C->SetBranchAddress( "bb.tr.vz", BBtr_vz );
  C->SetBranchAddress( "bb.tr.p", BBtr_p );
  C->SetBranchAddress( "bb.ps.e", &BBps_e );
  C->SetBranchAddress( "bb.ps.x", &BBps_x );
  C->SetBranchAddress( "bb.ps.y", &BBps_y );
  C->SetBranchAddress( "bb.sh.e", &BBsh_e );
  C->SetBranchAddress( "bb.sh.x", &BBsh_x );
  C->SetBranchAddress( "bb.sh.y", &BBsh_y );
  C->SetBranchAddress( "fEvtHdr.fTrigBits", &TBits ); //For GEn, TBits==5 is coin
  C->SetBranchAddress( "bb.tdctrig.tdcelemID", TDCT_id );
  C->SetBranchAddress( "bb.tdctrig.tdc", TDCT_tdc );
  //Focal-plane track variables (use "rotated" versions):
  C->SetBranchAddress( "bb.tr.r_x" ,xfp );
  C->SetBranchAddress( "bb.tr.r_y" ,yfp );
  C->SetBranchAddress( "bb.tr.r_th" ,thfp );
  C->SetBranchAddress( "bb.tr.r_ph" ,phfp );
  //Target track variables (other than momentum):
  C->SetBranchAddress( "bb.tr.tg_x" ,xtgt );
  C->SetBranchAddress( "bb.tr.tg_y" ,ytgt );
  C->SetBranchAddress( "bb.tr.tg_th" ,thtgt );
  C->SetBranchAddress( "bb.tr.tg_ph" ,phtgt );
  C->SetBranchAddress( "Ndata.bb.tdctrig.tdcelemID", &TDCTndata );

  // Declare outfile
  TFile *fout = new TFile( outputfilename, "RECREATE" );

  TEventList *elist = new TEventList("elist","Elastic Event List");
  C->Draw(">>elist",globalcut);

  // Initialize physics histograms
  TH1D *h_W2 = new TH1D( "W2", "W2 No Cuts; GeV", 200, 0.0, 4.0 );
  TH1D *h_W2recon = new TH1D( "W2recon", "W2 No Cuts Reconstructed; GeV", 200, 0.0, 4.0 );
  TH2D *hdxdy = new TH2D("dxdy","HCal pos - Expected;y_{HCAL}-y_{expect} (m); x_{HCAL}-x_{expect} (m)", 50, -2, 2, 100, -4.0, 2.0 );
  TH2D *hdxdy_all = new TH2D("dxdy_all","HCal pos - Expected (wide cut);y_{HCAL}-y_{expect} (m); x_{HCAL}-x_{expect} (m)",125,-2,2,125,-4,6);
  TH1D *hdx = new TH1D( "dx", "HCal dx; m", 200, -4.0, 2.0 );
  TH1D *hdy_all = new TH1D( "dy_all", "HCal dy (wide cut); m", 100, -1.2, 1.2 );
  TH1D *hdx_all = new TH1D( "dx_all", "HCal dx (wide cut); m", 200, -4.0, 2.0 );
  TH1D *hdy = new TH1D( "dy", "HCal dy; m", 100, -1.2, 1.2 );
  TH1D *hKE_p = new TH1D( "KE_p", "Scattered Proton Kinetic Energy", 500, 0.0, 5.0 );
  TH2D *hdxVE = new TH2D("dxVE",";x_{HCAL}-x_{expect} (m); GeV", 100, -4.0, 2.0, 100, 0, 0.5 );
  TH1D *hKElow = new TH1D( "KElow", "Lowest Elastic E Sampled in HCal (GeV)", 500, 0.0, 0.2 );
  TH1D *hDiff = new TH1D( "hDiff","HCal time - BBCal time (ns)", 1300, -500, 800 );

  // Initialize diagnostic histograms
  TH1D *h_atime = new TH1D( "atime", "HCal ADC Time, All Channels; ns", 160, 0, 160 );
  TH1D *h_coeff = new TH1D( "coeff", "HCal New Raw Coefficients, All Channels; ratio", 100, 0, 4 );
  TH1D *h_E = new TH1D( "E", "HCal Cluster E, All Channels; GeV", 100, 0, 0.5 );
  TH1D *h_E_cut = new TH1D( "E_cut", "HCal Cluster E All Cuts, All Channels; GeV", 100, 0, 0.5 );
  TH1D *h_E_active = new TH1D( "E_active", "HCal Cluster E, Active Area; GeV", 100, 0, 0.5 );
  TH1D *h_E_top = new TH1D( "E_top", "HCal Cluster E, First 12 Rows; GeV", 100, 0, 0.5 );
  TH1D *h_E_topH = new TH1D( "E_topH", "HCal Cluster E, First 12 Rows; GeV", 200, 0, 0.5 );
  TH1D *h_E_topL = new TH1D( "E_topL", "HCal Cluster E, First 12 Rows; GeV", 50, 0, 0.5 );
  TH1D *h_E_exp = new TH1D( "E_exp", "Expected Energy Dep in HCal; GeV", 100, 0, 0.2 );
  TH1D *h_vert = new TH1D( "vert", "Vertex Position; m", 200, -1.0, 1.0 );
  TH2D *h_EvCh = new TH2D( "EvCh", "HCal Cluster E Single Block Clusters; channel, GeV", maxHCalChan, 0, maxHCalChan, 100, 0, 0.5 );
  TH2D *h_CvCh = new TH2D( "CvCh", "HCal Coeff Single Block Clusters; channel, GeV", maxHCalChan, 0, maxHCalChan, 200, 0, 1.0 );
  TH1D *hSampFrac = new TH1D( "hSampFrac","HCal Cluster E / Expected KE", 400, 0., 0.10 );
  TH2D *hrowcol = new TH2D( "hrowcol", "HCal Block Position Elastics, HCal; Col; Row", maxHCalCols, 0, maxHCalCols, maxHCalRows, -maxHCalRows, 0 );
  TH1D *hY = new TH1D( "Y", "HCal Y; m", 100, -1.2, 1.2 );

  //Declare tree for output analysis
  TTree *A = new TTree("A","Output tree from p-n yield analysis");

  AnaInit(A); //Initialize the output tree; ana.h

  //Vars to track script
  Long64_t Nevents = elist->GetN();
  Int_t eyield = 0;
  
  //Beam and detector vars
  TLorentzVector Pbeam( 0, 0, E_e, E_e );
  TLorentzVector Pbeam_recon(0,0,Ebeam_corrected,Ebeam_corrected);
  TLorentzVector Ptarg( 0, 0, 0, 0.5*(0.93827+0.93956) );
  TVector3 hcal_origin( -HCal_d*sin(HCal_th), 0, HCal_d*cos(HCal_th) );
  TVector3 hcal_zaxis = hcal_origin.Unit();
  TVector3 hcal_xaxis(0,-1,0);
  TVector3 hcal_yaxis = hcal_zaxis.Cross( hcal_xaxis ).Unit();
  TVector3 GEMzaxis(-sin(GEMpitch),0,cos(GEMpitch));
  TVector3 GEMyaxis(0,1,0);
  TVector3 GEMxaxis = (GEMyaxis.Cross(GEMzaxis)).Unit();

  //Tracking Variables
  Int_t NEV[maxHCalChan] = {0};

  //Calculated for this kinematic
  Double_t MeanEloss = l_tgt/2.0 * rho_tgt * dEdx_tgt + uwallthick_LH2 * rho_Al * dEdx_Al; //approximately 3 MeV:
  Double_t MeanEloss_outgoing = celldiameter/2.0/sin(bbtheta) * rho_tgt * dEdx_tgt; //Approximately 1 MeV 

  cout << endl << "Proceeding to loop over all events in chain.." << endl;

  for(Long64_t nevent = 0; nevent<Nevents; nevent++){

    if( nevent%10 == 0 ) cout << "Loop: " << nevent << "/" << Nevents << ". Elastic yield: " << eyield << ". \r";
    cout.flush();

    C->GetEntry( elist->GetEntry( nevent ) );

    //Populate output tree for variables prior to tight cuts
    A_xfp = xfp[0];
    A_yfp = yfp[0];
    A_thfp = thfp[0];
    A_phfp = phfp[0];
    A_thtgt = thtgt[0];
    A_phtgt = phtgt[0];
    A_ytgt = ytgt[0];
    A_xtgt = -BBtr_vz[0]*cos(BB_th)*thtgt[0];
    A_vz = BBtr_vz[0];
    A_BBdist = BB_d;
    A_BBtheta = BB_th;
    A_HCALdist = HCal_d;
    A_HCALtheta = HCal_th;
    A_EPS = BBps_e;
    A_ESH = BBsh_e;
    A_Etot = BBps_e + BBsh_e;
    A_xSH = BBsh_x;
    A_ySH = BBsh_y;


    //Cut on BBCal and HCal trigger coincidence
    Double_t bbcal_time=0., hcal_time=0., coin_time=0., rf_time=0.;
    bool cointrig = false;
    for(Int_t ihit=0; ihit<TDCTndata; ihit++){
      if(TDCT_id[ihit]==5) bbcal_time=TDCT_tdc[ihit];
      if(TDCT_id[ihit]==0) hcal_time=TDCT_tdc[ihit];
      if(TDCT_id[ihit]==1) {
	coin_time=TDCT_tdc[ihit];
	cointrig=true;
      }
      if(TDCT_id[ihit]==4) rf_time=TDCT_tdc[ihit];
    }
    Double_t diff = hcal_time - bbcal_time; 
    hDiff->Fill( diff );

    //Wide cut on coin. Last of the wide cuts, all others in globalcut performed during parsing.
    if( abs(diff-t_trig)>tdiffwidecut ) continue;

    //Some basic calculations
    TLorentzVector kprime( BBtr_px[0], BBtr_py[0], BBtr_pz[0], BBtr_p[0] );
    TLorentzVector q = Pbeam - kprime;
    TVector3 vertex( 0, 0, BBtr_vz[0] );
    TVector3 qunit = q.Vect().Unit();
    TVector3 enhat_tgt( thtgt[0], phtgt[0], 1.0 );
    enhat_tgt = enhat_tgt.Unit();	
    TVector3 enhat_fp( thfp[0], phfp[0], 1.0 );
    enhat_fp = enhat_fp.Unit();	
    TVector3 enhat_fp_rot = enhat_fp.X() * GEMxaxis + enhat_fp.Y() * GEMyaxis + enhat_fp.Z() * GEMzaxis;
    Double_t thetabend = acos( enhat_fp_rot.Dot( enhat_tgt ) );    
    Double_t sintersect = (hcal_origin-vertex).Dot( hcal_zaxis )/qunit.Dot( hcal_zaxis );
    TVector3 hcal_intersect = vertex + sintersect * qunit;    
    Double_t xexpect = hcal_intersect.Dot( hcal_xaxis ); //Key variable for delta plots
    Double_t yexpect = hcal_intersect.Dot( hcal_yaxis ); //Key variable for delta plots
    Double_t E_ep = BBtr_p[0]; // Obtain the scattered electron energy, neglect mass e
    Double_t p_ep = BBtr_p[0]; // Obtain the magnitude of scattered electron momentum
    Double_t Q2 = 2.*E_e*E_ep*( 1-(BBtr_pz[0]/p_ep) );
    Double_t nu = E_e-E_ep; // Obtain energy transfer
    Double_t W2 = pow( M_p,2 )+2*M_p*nu-Q2; // Obtain W2 from Q2 and nu
    Double_t eth = acos( BBtr_pz[0]/BBtr_p[0] );
    Double_t eph = atan2( BBtr_py[0], BBtr_px[0] );
    Double_t phinucleon = eph + TMath::Pi(); //assume coplanarity
    Double_t thetanucleon = acos( (E_e - BBtr_pz[0])/p_ep ); //use elastic constraint on nucleon kinematics
    TVector3 pNhat( sin(thetanucleon)*cos(phinucleon),sin(thetanucleon)*sin(phinucleon),cos(thetanucleon));
    Double_t KE_p = nu; //For elastics

    //Reconstructed calculations and calculations with correction from energy loss in target
    Double_t pelastic = Ebeam_corrected/(1.+(Ebeam_corrected/M_p)*(1.0-cos(eth))); 
    Double_t precon = BBtr_p[0] + MeanEloss_outgoing;
    TLorentzVector q_recon = Pbeam_recon - Kprime;
    Double_t nu_recon = q_recon.E(); //Recalculates e' p with track angles
    Double_t nu_elastic = Ebeam_corrected - pelastic; //Calculates e' p assuming elastic scattering
    Double_t Q2recon = 2.0*Ebeam_corrected*p_ep*(1.0-cos(eth));
    Double_t W2recon = pow(M_p,2) + 2.0*M_p*nu_recon - Q2recon;
    Double_t dpel = precon/pelastic-1.0;
    TLorentzVector Pnprime = q_recon + Ptarg;    
    TVector3 q_3v = q_recon.Vect();
    TVector3 Pnprime_3v = Pnprime.Vect();
    Double_t thetapq_elastic = acos(( Pnprime_3v.Mag()*q_3v.Mag() )/Pnprime_3v.Dot(q_3v));
    Double_t pp_expect = Pnprime.P();
    Double_t thetanucleonrecon = acos( (Ebeam_corrected-pelastic*cos(eth))/pp_expect );
    
    //Thetapq for neutron
    TVector3 hcal_pos = hcal_origin + hcalx*hcal_xaxis + hcaly*hcal_yaxis;
    TVector3 n_dir = ( hcal_pos - vertex ).Unit();

    //Thetapq for proton with field estimation
    Double_t BdL = (mag/100)*sbsmaxfield*dipGap;
    Double_t proton_thetabend = 0.3*BdL/q_3v.Mag();
    Double_t proton_deflection = tan(proton_thetabend)*( hcaldist - (SBSdist + dipGap/2.0) );
    TVector3 p_dir = ( hcal_pos + proton_deflection*hcal_xaxis - vertex ).Unit();

    //Delta plots prior to tight cuts
    hdxdy_all->Fill( hcaly - yexpect, hcalx - xexpect );
    hdx_all->Fill( hcalx-xexpect );
    hdy_all->Fill( hcaly-yexpect );
    h_vert->Fill(BBtr_vz[0]);
    h_W2->Fill(W2);
    h_W2recon->Fill(W2recon);
    hKE_p->Fill( KE_p );   

    //Tighter cut on  W2 with reconstructed version
    if( abs(W2recon-W2_mean)>W2_sig ) continue;
    eyield++;

    //Fill tree and histos
    A_thetabend = thetabend;
    A_ebeam = Ebeam_corrected;
    A_etheta = eth;
    A_ephi = eph;
    A_precon = precon;
    A_pelastic = pelastic; 
    A_pincident = pelastic - MeanEloss_outgoing;
    A_Q2 = Q2recon;
    A_W2 = W2recon;
    A_dpel = dpel;
    A_pp_expect = pp_expect;
    A_pphi_expect = phinucleon;
    A_ptheta_expect = thetanucleonrecon;
    A_thetapq_n = acos( n_dir.Dot(q_3v.Unit()) );
    A_thetapq_p = acos( p_dir.Dot(q_3v.Unit()) );
    A_xHCAL = hcalx;
    A_yHCAL = hcaly;
    A_EHCAL = hcale;
    A_deltax = hcalx - xexpect;
    A_deltay = hcaly - yexpect;
    
    //Money
    hdxdy->Fill( hcaly-yexpect, hcalx-xexpect );
    hdx->Fill( hcalx-xexpect );
    hdy->Fill( hcaly-yexpect );


    //DETECTOR DIAGNOSTICS

    //Some hcal diagnostic plots
    Double_t E_exp = KE_p*HCalSampFrac;
    Double_t SFrac = hcale/KE_p;
    hKElow->Fill( KE_p*HCalSampFrac );
    hSampFrac->Fill( SFrac );
    h_E->Fill(hcale);
    hdxVE->Fill(hcalx - xexpect,hcale);
    if( row[0]>0 && row[0]<23 && col[0]>0 && col[0]<11 ){
      h_E_active->Fill(hcale); 
    }
    if( row[0]<13 ) {
      h_E_top->Fill(hcale);
      h_E_topH->Fill(hcale);
      h_E_topL->Fill(hcale);
    }
    h_atime->Fill( atime[0] );
    hY->Fill( hcaly );
    if( nblk==1 ){
      h_EvCh->Fill( cblkid[0], hcale );
    }
    for( Int_t b=0; b<nblk; b++){      
      hrowcol->Fill( (Double_t)col[b], -(Double_t)row[b]-1); 
    }
    Double_t clusE = 0.0;
    for( Int_t blk = 0; blk<(int)nblk; blk++ ){
      Int_t blkid = int(cblkid[blk])-1; //-1 necessary since sbs.hcal.clus_blk.id ranges from 1 to 288 (different than just about everything else)
      clusE+=cblke[blk];
      NEV[blkid]++;
      if( nblk==1 ) h_CvCh->Fill(blkid,cblke[blk]/E_exp);
    }
    h_E_cut->Fill(clusE);
    /////////////////////////////////////

  }
    
  cout << "Total elastic yield for run with current cuts: " << eyield << "." << endl; 

  fout->Write();
  fout->Close();
  
  cout << "Histograms populated and written to file." << endl;
  
}
