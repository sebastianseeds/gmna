//SSeeds 11.30.22 - Post-production - Code to parse several runs back by making only global cuts on elastics and produce a single root file for further analysis preserving the original tree structure. 

#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <TSystem.h>
#include <TProfile.h>
#include <stdio.h>
#include <stdlib.h>
#include "TChain.h"
#include "TSystem.h"
#include "TStopwatch.h"
#include "TTree.h"
#include "TFile.h"
#include "TMatrixD.h"
#include "TVectorD.h"
#include "TObjString.h"
#include "TObjArray.h"
#include "TCut.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TMath.h"
#include "TLegend.h"
#include "TVector3.h"
#include "TGraphErrors.h"
#include "TLorentzVector.h"
#include "TString.h"
#include "TF1.h"
#include "TLine.h"
#include "TEllipse.h"
#include "TLatex.h"
#include "TCanvas.h"
#include "TTreeFormula.h"
#include "pelas_sh.h"

#include "../include/gmna.h"
//#include "../include/R.h"
//#include "../include/R.C"


//Declare Functions
vector <Double_t> getDBParam( const char *file="", const char *param="", Int_t skip_lines = 0, Int_t chan = 0 );
string getDate();

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

vector<Double_t> getDBParam( string file="", string param="", Int_t skip_lines = 0, Int_t chan = 0 ){

  vector<Double_t> vec;

  cout << "Loading constants from database file: " << file << ".." << endl;
  ifstream inConstFile( file );
  if( !inConstFile ){
    cerr << endl << "Error: No input constant file present at " << file << "." << endl;
    return vec;
  }

  Int_t n0 = 0;
  Double_t d0 = 0;
  string line0;
  bool start_read = false;

  while( getline( inConstFile, line0 ) ){

    if( n0 == chan ) continue;

    TString Tline = (TString)line0;
    if( Tline.BeginsWith( param ) ) start_read = true;
    if( start_read == true && skip_lines > 0 ) skip_lines--;
    if( start_read == true && skip_lines == 0 ){
      istringstream iss( line0 );
      while( iss >> d0 ){
	vec.push_back(d0);
	n0++;
      }
    }
  }
  return vec;
}

void pelas_sh( Int_t kine=-1 ){

  // Define a clock to check macro processing time
  TStopwatch *st = new TStopwatch();
  st->Start( kTRUE );

  // Get the date
  string date = getDate();

  // Declare Chain for many root files
  TChain *C = new TChain("T");

  if( kine==-1 ){
    cout << "Error: Input parameters out of bounds. Please execute with the format:" << endl;
    cout << "  root -l \"pelas.C( <kine> )\" " << endl;
    cout << "  ..where kine = { 4, 7, 8, 9, 11, 14 }" << endl;
    return;
  }

  // Get configuration file
  const char *config_prefix = gSystem->Getenv("CONFIG_DIR");
  TString configfilename = Form( "%s/parse_conf/SBS%d/sbs%d-parse.cfg", config_prefix, kine, kine );
  
  //cout << configfilename << endl;

  // Declare output file
  const char *output_prefix = gSystem->Getenv("PARSE_OUTPUT_DIR");
  TString outputfilename = Form("%s/gmn_parsed_short_SBS%d.root", output_prefix, kine );

  // Declare general physics parameters to be modified by input config file
  Double_t E_e = -1.; // Energy of beam (incoming electrons from accelerator)
  Double_t t_trig = -1.; // Time difference between BBCal Hi (L1A) and HCal Trig (ns)
  Double_t BB_d = -1.; // Distance to bigbite spectrometer from target chamber (m)
  Double_t BB_th = -1.; // Angle BB spectrometer makes with exit beamline
  Double_t HCal_d = -1.; // Distance to HCal from scattering chamber for comm1
  Double_t HCal_th = -1.; // Angle HCal center makes with exit beamline  
  Double_t W_mean = -1.; // Mean of W at current kinematic
  Double_t W_sig = -1.; // Width of W at current kinematic
  Int_t useAlshield = -1.; //Use 1/8" al shield on scattering chamber exit? 1:yes 0:no
  vector<TString> log;
  vector<TString> HCal_gainset;
  vector<TString> BBCal_gainset;

  // Reading config file
  ifstream configfile(configfilename);
  TString currentline;
  cout << endl << "Chaining the following runs: " << endl;
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endlist") ){
    if( !currentline.BeginsWith("#") ){
      if(!currentline) cout << "WARNING: No file exists at " << currentline << "." << endl;
      C->Add(currentline);
      if(currentline){
	log.push_back(currentline);
	cout << currentline << " ..check" << endl;
      }
    }    
  }

  cout << endl << "Reading in timestamps for HCal gain parameters for this kinematic.." << endl;
  HCal_gainset.push_back("sbs.hcal.adc.gain"); //The first entry in the HCal DB has no timestamp
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endlist") ){
    if( !currentline.BeginsWith("#") ){
      if(!currentline) cout << "WARNING: No timestamp at " << currentline << "." << endl;
      if(currentline){
	HCal_gainset.push_back(currentline);
	cout << currentline << " ..logged" << endl;
      }
    }    
  }

  cout << endl << "Reading in timestamps for BBCal gain parameters for this kinematic.." << endl;
  while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endlist") ){
    if( !currentline.BeginsWith("#") ){
      if(!currentline) cout << "WARNING: No timestamp at " << currentline << "." << endl;
      if(currentline){
	BBCal_gainset.push_back(currentline);
	cout << currentline << " ..logged" << endl;
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
	cout << "BBCal/HCal Trigger Difference: " << E_e << endl;
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
      if( skey == "W_mean" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
        W_mean = sval.Atof();
	cout << "W mean cut: " << W_mean << endl;
      }
      if( skey == "W_sig" ){
	TString sval = ( (TObjString*)(*tokens)[1] )->GetString();
        W_sig = sval.Atof();
	cout << "W sigma cut: " << W_sig << endl;
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

  // Paths for DB constants - may eventually need to update for sbs-gmn dedicated repo
  string HCalConstPath = "/w/halla-scshelf2102/sbs/SBS_REPLAY/SBS-replay/DB/db_sbs.hcal.dat";
  string BBCalShConstPath = "/w/halla-scshelf2102/sbs/SBS_REPLAY/SBS-replay/DB/db_bb.sh.dat";
  string BBCalPSConstPath = "/w/halla-scshelf2102/sbs/SBS_REPLAY/SBS-replay/DB/db_bb.ps.dat";
  string GEMConstPath = "/w/halla-scshelf2102/sbs/SBS_REPLAY/SBS-replay/DB/db_bb.gem.dat";
  string HodoConstPath = "/w/halla-scshelf2102/sbs/SBS_REPLAY/SBS-replay/DB/db_bb.hodotdc.dat";
  string GRINCHConstPath = "/w/halla-scshelf2102/sbs/SBS_REPLAY/SBS-replay/DB/db_bb.grinch_tdc.dat";

  ///////////////
  ////HCal params
  //ADC time offsets
  string HCal_ADCtoff = "sbs.hcal.adc.timeoffset";
  vector<Double_t> HCal_ADCtoffsets = getDBParam( HCalConstPath, HCal_ADCtoff, 1, maxHCalChan );
  //TDC offsets
  string HCal_TDCoff = "sbs.hcal.tdc.offset";
  vector<Double_t> HCal_TDCoffsets = getDBParam( HCalConstPath, HCal_TDCoff, 1, maxHCalChan );
  //ADC gain coefficients
  
  typedef struct{
    TString timestamp;
    Double_t coeff[maxHCalChan];
  } HCAL_GCOEFF;

  HCAL_GCOEFF hcal_gcoeff[HCal_gainset.size()];

  for( Int_t i=0; i<HCal_gainset.size(); i++ ){
    vector<Double_t> temp;
    hcal_gcoeff[i].timestamp = HCal_gainset[i];
    if( i==0 ){ // Account for the first HCal gain parameter entry with no timestamp
      temp = getDBParam( HCalConstPath, (string)HCal_gainset[i], 1, maxHCalChan );
    } else {
      temp = getDBParam( HCalConstPath, (string)HCal_gainset[i], 2, maxHCalChan );
    }
    for( int j=0; j<maxHCalChan; j++ ){
      hcal_gcoeff[i].coeff[j] = temp[j];
    }
  }
  
  ////////////////
  ////BBCal params
  //ADC gain coefficients

  typedef struct{
    TString timestamp;
    Double_t coeff[maxBBCalPSChan];
  } BBCAL_PS_GCOEFF;

  BBCAL_PS_GCOEFF bbcal_ps_gcoeff[BBCal_gainset.size()];

  for( Int_t i=0; i<BBCal_gainset.size(); i++ ){
    vector<Double_t> temp;
    bbcal_ps_gcoeff[i].timestamp = BBCal_gainset[i];
    temp = getDBParam( BBCalPSConstPath, (string)BBCal_gainset[i], 2, maxBBCalPSChan );  
    for( int j=0; j<maxBBCalPSChan; j++ ){
      bbcal_ps_gcoeff[i].coeff[j] = temp[j];
    }
  }

  typedef struct{
    TString timestamp;
    Double_t coeff[maxBBCalShChan];
  } BBCAL_SH_GCOEFF;

  BBCAL_SH_GCOEFF bbcal_sh_gcoeff[BBCal_gainset.size()];

  for( Int_t i=0; i<BBCal_gainset.size(); i++ ){
    vector<Double_t> temp;
    bbcal_sh_gcoeff[i].timestamp = BBCal_gainset[i];
    temp = getDBParam( BBCalShConstPath, (string)BBCal_gainset[i], 2, maxBBCalShChan );  
    for( int j=0; j<maxBBCalShChan; j++ ){
      bbcal_sh_gcoeff[i].coeff[j] = temp[j];
    }
  }

  cout << endl << "Database parameters loaded." << endl << endl;

  // Declare outfile
  //outputfilename = "Test.root";
  TFile *fout = new TFile( outputfilename, "RECREATE" );
  string logpath = Form( "/lustre19/expphy/volatile/halla/sbs/seeds/GMN_parsed/logs/parsedShortLog_%s.txt", date.c_str() );

  TH2D *h_HCal_ADCg[HCal_gainset.size()];
  TH2D *h_BBCalPS_ADCg[BBCal_gainset.size()];
  TH2D *h_BBCalSh_ADCg[BBCal_gainset.size()];
  
  for( Int_t i=0; i<HCal_gainset.size(); i++ ){
    h_HCal_ADCg[i] = new TH2D(Form("h_HCal_ADCg_set%d",i),"HCal ADC Gain Coefficients; Run Number; GeV/pC", maxHCalChan, 0, maxHCalChan, 1000, 0, 0.01 );
  }
  for( Int_t i=0; i<BBCal_gainset.size(); i++ ){
    h_BBCalPS_ADCg[i] = new TH2D(Form("h_BBCalPS_ADCg_set%d",i),"BBCal Preshower ADC Gain Coefficients; Run Number; GeV/pC", maxBBCalPSChan, 0, maxBBCalPSChan, 1000, 0, 0.02 ); 
  }
  for( Int_t i=0; i<BBCal_gainset.size(); i++ ){
    h_BBCalSh_ADCg[i] = new TH2D(Form("h_BBCalSh_ADCg_set%d",i),"BBCal Shower ADC Gain Coefficients; Run Number; GeV/pC", maxBBCalShChan, 0, maxBBCalShChan, 1000, 0, 0.01 ); 
  }


  //Write DB parameters to histos
  cout << endl << endl << "Test offsets: " << endl << endl;
  cout << endl << "HCal ADC gain parameters:" << endl << endl;

  //cout << "HCal ADC gain coefficents from start of experiment:" << endl;
  for( Int_t i=0; i<HCal_gainset.size(); i++){

    if( i==0 ){
      cout << endl << "HCal ADC gain coefficents from beginning of experiment" << endl;
    }else{
      cout << endl << "HCal ADC gain coefficents from " << hcal_gcoeff[i].timestamp << endl;
    }
    for( Int_t r=0; r<maxHCalRows; r++){
      for( Int_t c=0; c<maxHCalCols; c++){
	Int_t j = r*maxHCalCols+c;
	h_HCal_ADCg[i]->Fill(j,hcal_gcoeff[i].coeff[j]);
	h_HCal_ADCg[i]->SetTitle(hcal_gcoeff[i].timestamp);
	cout << hcal_gcoeff[i].coeff[j] << " ";
      }
      cout << endl;
    }
    //cout << endl << "HCal ADC gain coefficents from " << hcal_gcoeff[i+1].timestamp << endl;
  }

  cout << endl << "BBCal Preshower ADC gain parameters:" << endl;
  for( Int_t i=0; i<BBCal_gainset.size(); i++){
    cout << endl << "BBCal Preshower ADC gain coefficents from " << bbcal_ps_gcoeff[i].timestamp << endl;
    for( Int_t r=0; r<maxBBCalPSRows; r++){
      for( Int_t c=0; c<maxBBCalPSCols; c++){
	Int_t j = r*maxBBCalPSCols+c;
	h_BBCalPS_ADCg[i]->Fill(j,bbcal_ps_gcoeff[i].coeff[j]);
	h_BBCalPS_ADCg[i]->SetTitle(bbcal_ps_gcoeff[i].timestamp);
	cout << bbcal_ps_gcoeff[i].coeff[j] << " ";
      }
      cout << endl;
    }
  }

  cout << endl << "BBCal Shower ADC gain parameters:" << endl;
  for( Int_t i=0; i<BBCal_gainset.size(); i++){
    cout << endl << "BBCal Shower ADC gain coefficents from " << bbcal_sh_gcoeff[i].timestamp << endl;
    for( Int_t r=0; r<maxBBCalShRows; r++){
      for( Int_t c=0; c<maxBBCalShCols; c++){
	Int_t j = r*maxBBCalShCols+c;
	h_BBCalSh_ADCg[i]->Fill(j,bbcal_sh_gcoeff[i].coeff[j]);
	h_BBCalSh_ADCg[i]->SetTitle(bbcal_sh_gcoeff[i].timestamp);
	cout << bbcal_sh_gcoeff[i].coeff[j] << " ";
      }
      cout << endl;
    }
  }

  // Create output tree
  TTree *R = new TTree("R","Replicated tree with global cuts."); 

  ChainInit(C);
  CloneInit(R);

  //Because this fails, add 4 hours of work
  //TTree *clone = C->CloneTree();
  //clone->Print();

  TTreeFormula *GlobalCut = new TTreeFormula( "GlobalCut", globalcut, C );

  //Method to draw globalcut immediately
  TEventList *elist = new TEventList("elist","Elastic Event List");
  C->Draw(">>elist",globalcut);

  //Vars to track script
  //Long64_t Nevents = elist->GetN();
  //Long64_t Nevents = C->GetEntries();
  Long64_t NTevents = C->GetEntries();

  Long64_t Nevents = elist->GetN();

  Int_t globalpass = 0;
  Int_t treenum = 0, currenttreenum = 0;
 
  
  for(Long64_t nevent = 0; nevent<Nevents; nevent++){

    if( nevent%10 == 0 ) cout << "Loop: " << nevent << "/" << Nevents << ". \r";
    cout.flush();

    //Get each event for analysis
    //C->GetEntry( elist->GetEntry( nevent ) );    
    //C->GetEntry( nevent );
    C->GetEntry( elist->GetEntry( nevent ) );

    /*
    currenttreenum = C->GetTreeNumber();
    if( nevent == 1 || currenttreenum != treenum ){

      treenum = currenttreenum; 
      GlobalCut->UpdateFormulaLeaves();

    }
    bool failedglobal = GlobalCut->EvalInstance(0) == 0;
    if( failedglobal ) continue;
    */
    //copy(begin(C_bb_tr_x), end(C_bb_tr_x), begin(bb_tr_x));
    //BB_gold_p = C_BB_gold_p;
    
    targx = C_targx;
    targy = C_targy;
    Ndata_bb_eps_over_etot = C_Ndata_bb_eps_over_etot;
    copy(begin(C_bb_eps_over_etot), end(C_bb_eps_over_etot), begin(bb_eps_over_etot));
    Ndata_bb_etot_over_p = C_Ndata_bb_etot_over_p;
    copy(begin(C_bb_etot_over_p), end(C_bb_etot_over_p), begin(bb_etot_over_p));
    Ndata_bb_gem_hit_ADCU = C_Ndata_bb_gem_hit_ADCU;
    copy(begin(C_bb_gem_hit_ADCU), end(C_bb_gem_hit_ADCU), begin(bb_gem_hit_ADCU));
    Ndata_bb_gem_hit_ADCU_deconv = C_Ndata_bb_gem_hit_ADCU_deconv;
    copy(begin(C_bb_gem_hit_ADCU_deconv), end(C_bb_gem_hit_ADCU_deconv), begin(bb_gem_hit_ADCU_deconv));
    Ndata_bb_gem_hit_ADCV = C_Ndata_bb_gem_hit_ADCV;
    copy(begin(C_bb_gem_hit_ADCV), end(C_bb_gem_hit_ADCV), begin(bb_gem_hit_ADCV));
    Ndata_bb_gem_hit_ADCV_deconv = C_Ndata_bb_gem_hit_ADCV_deconv;
    copy(begin(C_bb_gem_hit_ADCV_deconv), end(C_bb_gem_hit_ADCV_deconv), begin(bb_gem_hit_ADCV_deconv));
    Ndata_bb_gem_hit_ADCasym = C_Ndata_bb_gem_hit_ADCasym;
    copy(begin(C_bb_gem_hit_ADCasym), end(C_bb_gem_hit_ADCasym), begin(bb_gem_hit_ADCasym));
    Ndata_bb_gem_hit_ADCasym_deconv = C_Ndata_bb_gem_hit_ADCasym_deconv;
    copy(begin(C_bb_gem_hit_ADCasym_deconv), end(C_bb_gem_hit_ADCasym_deconv), begin(bb_gem_hit_ADCasym_deconv));
    Ndata_bb_gem_hit_ADCavg = C_Ndata_bb_gem_hit_ADCavg;
    copy(begin(C_bb_gem_hit_ADCavg), end(C_bb_gem_hit_ADCavg), begin(bb_gem_hit_ADCavg));
    Ndata_bb_gem_hit_ADCavg_deconv = C_Ndata_bb_gem_hit_ADCavg_deconv;
    copy(begin(C_bb_gem_hit_ADCavg_deconv), end(C_bb_gem_hit_ADCavg_deconv), begin(bb_gem_hit_ADCavg_deconv));
    Ndata_bb_gem_hit_ADCfrac0_Umax = C_Ndata_bb_gem_hit_ADCfrac0_Umax;
    copy(begin(C_bb_gem_hit_ADCfrac0_Umax), end(C_bb_gem_hit_ADCfrac0_Umax), begin(bb_gem_hit_ADCfrac0_Umax));
    Ndata_bb_gem_hit_ADCfrac0_Vmax = C_Ndata_bb_gem_hit_ADCfrac0_Vmax;
    copy(begin(C_bb_gem_hit_ADCfrac0_Vmax), end(C_bb_gem_hit_ADCfrac0_Vmax), begin(bb_gem_hit_ADCfrac0_Vmax));
    Ndata_bb_gem_hit_ADCfrac1_Umax = C_Ndata_bb_gem_hit_ADCfrac1_Umax;
    copy(begin(C_bb_gem_hit_ADCfrac1_Umax), end(C_bb_gem_hit_ADCfrac1_Umax), begin(bb_gem_hit_ADCfrac1_Umax));
    Ndata_bb_gem_hit_ADCfrac1_Vmax = C_Ndata_bb_gem_hit_ADCfrac1_Vmax;
    copy(begin(C_bb_gem_hit_ADCfrac1_Vmax), end(C_bb_gem_hit_ADCfrac1_Vmax), begin(bb_gem_hit_ADCfrac1_Vmax));
    Ndata_bb_gem_hit_ADCfrac2_Umax = C_Ndata_bb_gem_hit_ADCfrac2_Umax;
    copy(begin(C_bb_gem_hit_ADCfrac2_Umax), end(C_bb_gem_hit_ADCfrac2_Umax), begin(bb_gem_hit_ADCfrac2_Umax));
    Ndata_bb_gem_hit_ADCfrac2_Vmax = C_Ndata_bb_gem_hit_ADCfrac2_Vmax;
    copy(begin(C_bb_gem_hit_ADCfrac2_Vmax), end(C_bb_gem_hit_ADCfrac2_Vmax), begin(bb_gem_hit_ADCfrac2_Vmax));
    Ndata_bb_gem_hit_ADCfrac3_Umax = C_Ndata_bb_gem_hit_ADCfrac3_Umax;
    copy(begin(C_bb_gem_hit_ADCfrac3_Umax), end(C_bb_gem_hit_ADCfrac3_Umax), begin(bb_gem_hit_ADCfrac3_Umax));
    Ndata_bb_gem_hit_ADCfrac3_Vmax = C_Ndata_bb_gem_hit_ADCfrac3_Vmax;
    copy(begin(C_bb_gem_hit_ADCfrac3_Vmax), end(C_bb_gem_hit_ADCfrac3_Vmax), begin(bb_gem_hit_ADCfrac3_Vmax));
    Ndata_bb_gem_hit_ADCfrac4_Umax = C_Ndata_bb_gem_hit_ADCfrac4_Umax;
    copy(begin(C_bb_gem_hit_ADCfrac4_Umax), end(C_bb_gem_hit_ADCfrac4_Umax), begin(bb_gem_hit_ADCfrac4_Umax));
    Ndata_bb_gem_hit_ADCfrac4_Vmax = C_Ndata_bb_gem_hit_ADCfrac4_Vmax;
    copy(begin(C_bb_gem_hit_ADCfrac4_Vmax), end(C_bb_gem_hit_ADCfrac4_Vmax), begin(bb_gem_hit_ADCfrac4_Vmax));
    Ndata_bb_gem_hit_ADCfrac5_Umax = C_Ndata_bb_gem_hit_ADCfrac5_Umax;
    copy(begin(C_bb_gem_hit_ADCfrac5_Umax), end(C_bb_gem_hit_ADCfrac5_Umax), begin(bb_gem_hit_ADCfrac5_Umax));
    Ndata_bb_gem_hit_ADCfrac5_Vmax = C_Ndata_bb_gem_hit_ADCfrac5_Vmax;
    copy(begin(C_bb_gem_hit_ADCfrac5_Vmax), end(C_bb_gem_hit_ADCfrac5_Vmax), begin(bb_gem_hit_ADCfrac5_Vmax));
    Ndata_bb_gem_hit_ADCmaxcomboUclust_deconv = C_Ndata_bb_gem_hit_ADCmaxcomboUclust_deconv;
    copy(begin(C_bb_gem_hit_ADCmaxcomboUclust_deconv), end(C_bb_gem_hit_ADCmaxcomboUclust_deconv), begin(bb_gem_hit_ADCmaxcomboUclust_deconv));
    Ndata_bb_gem_hit_ADCmaxcomboVclust_deconv = C_Ndata_bb_gem_hit_ADCmaxcomboVclust_deconv;
    copy(begin(C_bb_gem_hit_ADCmaxcomboVclust_deconv), end(C_bb_gem_hit_ADCmaxcomboVclust_deconv), begin(bb_gem_hit_ADCmaxcomboVclust_deconv));
    Ndata_bb_gem_hit_ADCmaxsampU = C_Ndata_bb_gem_hit_ADCmaxsampU;
    copy(begin(C_bb_gem_hit_ADCmaxsampU), end(C_bb_gem_hit_ADCmaxsampU), begin(bb_gem_hit_ADCmaxsampU));
    Ndata_bb_gem_hit_ADCmaxsampUclust = C_Ndata_bb_gem_hit_ADCmaxsampUclust;
    copy(begin(C_bb_gem_hit_ADCmaxsampUclust), end(C_bb_gem_hit_ADCmaxsampUclust), begin(bb_gem_hit_ADCmaxsampUclust));
    Ndata_bb_gem_hit_ADCmaxsampUclust_deconv = C_Ndata_bb_gem_hit_ADCmaxsampUclust_deconv;
    copy(begin(C_bb_gem_hit_ADCmaxsampUclust_deconv), end(C_bb_gem_hit_ADCmaxsampUclust_deconv), begin(bb_gem_hit_ADCmaxsampUclust_deconv));
    Ndata_bb_gem_hit_ADCmaxsampV = C_Ndata_bb_gem_hit_ADCmaxsampV;
    copy(begin(C_bb_gem_hit_ADCmaxsampV), end(C_bb_gem_hit_ADCmaxsampV), begin(bb_gem_hit_ADCmaxsampV));
    Ndata_bb_gem_hit_ADCmaxsampVclust = C_Ndata_bb_gem_hit_ADCmaxsampVclust;
    copy(begin(C_bb_gem_hit_ADCmaxsampVclust), end(C_bb_gem_hit_ADCmaxsampVclust), begin(bb_gem_hit_ADCmaxsampVclust));
    Ndata_bb_gem_hit_ADCmaxsampVclust_deconv = C_Ndata_bb_gem_hit_ADCmaxsampVclust_deconv;
    copy(begin(C_bb_gem_hit_ADCmaxsampVclust_deconv), end(C_bb_gem_hit_ADCmaxsampVclust_deconv), begin(bb_gem_hit_ADCmaxsampVclust_deconv));
    Ndata_bb_gem_hit_ADCmaxstripU = C_Ndata_bb_gem_hit_ADCmaxstripU;
    copy(begin(C_bb_gem_hit_ADCmaxstripU), end(C_bb_gem_hit_ADCmaxstripU), begin(bb_gem_hit_ADCmaxstripU));
    Ndata_bb_gem_hit_ADCmaxstripV = C_Ndata_bb_gem_hit_ADCmaxstripV;
    copy(begin(C_bb_gem_hit_ADCmaxstripV), end(C_bb_gem_hit_ADCmaxstripV), begin(bb_gem_hit_ADCmaxstripV));
    Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_U = C_Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_U;
    copy(begin(C_bb_gem_hit_BUILD_ALL_SAMPLES_U), end(C_bb_gem_hit_BUILD_ALL_SAMPLES_U), begin(bb_gem_hit_BUILD_ALL_SAMPLES_U));
    Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_V = C_Ndata_bb_gem_hit_BUILD_ALL_SAMPLES_V;
    copy(begin(C_bb_gem_hit_BUILD_ALL_SAMPLES_V), end(C_bb_gem_hit_BUILD_ALL_SAMPLES_V), begin(bb_gem_hit_BUILD_ALL_SAMPLES_V));
    Ndata_bb_gem_hit_CM_GOOD_U = C_Ndata_bb_gem_hit_CM_GOOD_U;
    copy(begin(C_bb_gem_hit_CM_GOOD_U), end(C_bb_gem_hit_CM_GOOD_U), begin(bb_gem_hit_CM_GOOD_U));
    Ndata_bb_gem_hit_CM_GOOD_V = C_Ndata_bb_gem_hit_CM_GOOD_V;
    copy(begin(C_bb_gem_hit_CM_GOOD_V), end(C_bb_gem_hit_CM_GOOD_V), begin(bb_gem_hit_CM_GOOD_V));
    Ndata_bb_gem_hit_DeconvADC0_Umax = C_Ndata_bb_gem_hit_DeconvADC0_Umax;
    copy(begin(C_bb_gem_hit_DeconvADC0_Umax), end(C_bb_gem_hit_DeconvADC0_Umax), begin(bb_gem_hit_DeconvADC0_Umax));
    Ndata_bb_gem_hit_DeconvADC0_Vmax = C_Ndata_bb_gem_hit_DeconvADC0_Vmax;
    copy(begin(C_bb_gem_hit_DeconvADC0_Vmax), end(C_bb_gem_hit_DeconvADC0_Vmax), begin(bb_gem_hit_DeconvADC0_Vmax));
    Ndata_bb_gem_hit_DeconvADC1_Umax = C_Ndata_bb_gem_hit_DeconvADC1_Umax;
    copy(begin(C_bb_gem_hit_DeconvADC1_Umax), end(C_bb_gem_hit_DeconvADC1_Umax), begin(bb_gem_hit_DeconvADC1_Umax));
    Ndata_bb_gem_hit_DeconvADC1_Vmax = C_Ndata_bb_gem_hit_DeconvADC1_Vmax;
    copy(begin(C_bb_gem_hit_DeconvADC1_Vmax), end(C_bb_gem_hit_DeconvADC1_Vmax), begin(bb_gem_hit_DeconvADC1_Vmax));
    Ndata_bb_gem_hit_DeconvADC2_Umax = C_Ndata_bb_gem_hit_DeconvADC2_Umax;
    copy(begin(C_bb_gem_hit_DeconvADC2_Umax), end(C_bb_gem_hit_DeconvADC2_Umax), begin(bb_gem_hit_DeconvADC2_Umax));
    Ndata_bb_gem_hit_DeconvADC2_Vmax = C_Ndata_bb_gem_hit_DeconvADC2_Vmax;
    copy(begin(C_bb_gem_hit_DeconvADC2_Vmax), end(C_bb_gem_hit_DeconvADC2_Vmax), begin(bb_gem_hit_DeconvADC2_Vmax));
    Ndata_bb_gem_hit_DeconvADC3_Umax = C_Ndata_bb_gem_hit_DeconvADC3_Umax;
    copy(begin(C_bb_gem_hit_DeconvADC3_Umax), end(C_bb_gem_hit_DeconvADC3_Umax), begin(bb_gem_hit_DeconvADC3_Umax));
    Ndata_bb_gem_hit_DeconvADC3_Vmax = C_Ndata_bb_gem_hit_DeconvADC3_Vmax;
    copy(begin(C_bb_gem_hit_DeconvADC3_Vmax), end(C_bb_gem_hit_DeconvADC3_Vmax), begin(bb_gem_hit_DeconvADC3_Vmax));
    Ndata_bb_gem_hit_DeconvADC4_Umax = C_Ndata_bb_gem_hit_DeconvADC4_Umax;
    copy(begin(C_bb_gem_hit_DeconvADC4_Umax), end(C_bb_gem_hit_DeconvADC4_Umax), begin(bb_gem_hit_DeconvADC4_Umax));
    Ndata_bb_gem_hit_DeconvADC4_Vmax = C_Ndata_bb_gem_hit_DeconvADC4_Vmax;
    copy(begin(C_bb_gem_hit_DeconvADC4_Vmax), end(C_bb_gem_hit_DeconvADC4_Vmax), begin(bb_gem_hit_DeconvADC4_Vmax));
    Ndata_bb_gem_hit_DeconvADC5_Umax = C_Ndata_bb_gem_hit_DeconvADC5_Umax;
    copy(begin(C_bb_gem_hit_DeconvADC5_Umax), end(C_bb_gem_hit_DeconvADC5_Umax), begin(bb_gem_hit_DeconvADC5_Umax));
    Ndata_bb_gem_hit_DeconvADC5_Vmax = C_Ndata_bb_gem_hit_DeconvADC5_Vmax;
    copy(begin(C_bb_gem_hit_DeconvADC5_Vmax), end(C_bb_gem_hit_DeconvADC5_Vmax), begin(bb_gem_hit_DeconvADC5_Vmax));
    Ndata_bb_gem_hit_DeconvADCmaxcomboU = C_Ndata_bb_gem_hit_DeconvADCmaxcomboU;
    copy(begin(C_bb_gem_hit_DeconvADCmaxcomboU), end(C_bb_gem_hit_DeconvADCmaxcomboU), begin(bb_gem_hit_DeconvADCmaxcomboU));
    Ndata_bb_gem_hit_DeconvADCmaxcomboV = C_Ndata_bb_gem_hit_DeconvADCmaxcomboV;
    copy(begin(C_bb_gem_hit_DeconvADCmaxcomboV), end(C_bb_gem_hit_DeconvADCmaxcomboV), begin(bb_gem_hit_DeconvADCmaxcomboV));
    Ndata_bb_gem_hit_DeconvADCmaxsampU = C_Ndata_bb_gem_hit_DeconvADCmaxsampU;
    copy(begin(C_bb_gem_hit_DeconvADCmaxsampU), end(C_bb_gem_hit_DeconvADCmaxsampU), begin(bb_gem_hit_DeconvADCmaxsampU));
    Ndata_bb_gem_hit_DeconvADCmaxsampV = C_Ndata_bb_gem_hit_DeconvADCmaxsampV;
    copy(begin(C_bb_gem_hit_DeconvADCmaxsampV), end(C_bb_gem_hit_DeconvADCmaxsampV), begin(bb_gem_hit_DeconvADCmaxsampV));
    Ndata_bb_gem_hit_DeconvADCmaxstripU = C_Ndata_bb_gem_hit_DeconvADCmaxstripU;
    copy(begin(C_bb_gem_hit_DeconvADCmaxstripU), end(C_bb_gem_hit_DeconvADCmaxstripU), begin(bb_gem_hit_DeconvADCmaxstripU));
    Ndata_bb_gem_hit_DeconvADCmaxstripV = C_Ndata_bb_gem_hit_DeconvADCmaxstripV;
    copy(begin(C_bb_gem_hit_DeconvADCmaxstripV), end(C_bb_gem_hit_DeconvADCmaxstripV), begin(bb_gem_hit_DeconvADCmaxstripV));
    Ndata_bb_gem_hit_ENABLE_CM_U = C_Ndata_bb_gem_hit_ENABLE_CM_U;
    copy(begin(C_bb_gem_hit_ENABLE_CM_U), end(C_bb_gem_hit_ENABLE_CM_U), begin(bb_gem_hit_ENABLE_CM_U));
    Ndata_bb_gem_hit_ENABLE_CM_V = C_Ndata_bb_gem_hit_ENABLE_CM_V;
    copy(begin(C_bb_gem_hit_ENABLE_CM_V), end(C_bb_gem_hit_ENABLE_CM_V), begin(bb_gem_hit_ENABLE_CM_V));
    Ndata_bb_gem_hit_Tavg = C_Ndata_bb_gem_hit_Tavg;
    copy(begin(C_bb_gem_hit_Tavg), end(C_bb_gem_hit_Tavg), begin(bb_gem_hit_Tavg));
    Ndata_bb_gem_hit_Tavg_deconv = C_Ndata_bb_gem_hit_Tavg_deconv;
    copy(begin(C_bb_gem_hit_Tavg_deconv), end(C_bb_gem_hit_Tavg_deconv), begin(bb_gem_hit_Tavg_deconv));
    Ndata_bb_gem_hit_Utime = C_Ndata_bb_gem_hit_Utime;
    copy(begin(C_bb_gem_hit_Utime), end(C_bb_gem_hit_Utime), begin(bb_gem_hit_Utime));
    Ndata_bb_gem_hit_UtimeDeconv = C_Ndata_bb_gem_hit_UtimeDeconv;
    copy(begin(C_bb_gem_hit_UtimeDeconv), end(C_bb_gem_hit_UtimeDeconv), begin(bb_gem_hit_UtimeDeconv));
    Ndata_bb_gem_hit_UtimeMaxStrip = C_Ndata_bb_gem_hit_UtimeMaxStrip;
    copy(begin(C_bb_gem_hit_UtimeMaxStrip), end(C_bb_gem_hit_UtimeMaxStrip), begin(bb_gem_hit_UtimeMaxStrip));
    Ndata_bb_gem_hit_UtimeMaxStripDeconv = C_Ndata_bb_gem_hit_UtimeMaxStripDeconv;
    copy(begin(C_bb_gem_hit_UtimeMaxStripDeconv), end(C_bb_gem_hit_UtimeMaxStripDeconv), begin(bb_gem_hit_UtimeMaxStripDeconv));
    Ndata_bb_gem_hit_UtimeMaxStripFit = C_Ndata_bb_gem_hit_UtimeMaxStripFit;
    copy(begin(C_bb_gem_hit_UtimeMaxStripFit), end(C_bb_gem_hit_UtimeMaxStripFit), begin(bb_gem_hit_UtimeMaxStripFit));
    Ndata_bb_gem_hit_Vtime = C_Ndata_bb_gem_hit_Vtime;
    copy(begin(C_bb_gem_hit_Vtime), end(C_bb_gem_hit_Vtime), begin(bb_gem_hit_Vtime));
    Ndata_bb_gem_hit_VtimeDeconv = C_Ndata_bb_gem_hit_VtimeDeconv;
    copy(begin(C_bb_gem_hit_VtimeDeconv), end(C_bb_gem_hit_VtimeDeconv), begin(bb_gem_hit_VtimeDeconv));
    Ndata_bb_gem_hit_VtimeMaxStrip = C_Ndata_bb_gem_hit_VtimeMaxStrip;
    copy(begin(C_bb_gem_hit_VtimeMaxStrip), end(C_bb_gem_hit_VtimeMaxStrip), begin(bb_gem_hit_VtimeMaxStrip));
    Ndata_bb_gem_hit_VtimeMaxStripDeconv = C_Ndata_bb_gem_hit_VtimeMaxStripDeconv;
    copy(begin(C_bb_gem_hit_VtimeMaxStripDeconv), end(C_bb_gem_hit_VtimeMaxStripDeconv), begin(bb_gem_hit_VtimeMaxStripDeconv));
    Ndata_bb_gem_hit_VtimeMaxStripFit = C_Ndata_bb_gem_hit_VtimeMaxStripFit;
    copy(begin(C_bb_gem_hit_VtimeMaxStripFit), end(C_bb_gem_hit_VtimeMaxStripFit), begin(bb_gem_hit_VtimeMaxStripFit));
    Ndata_bb_gem_hit_ccor_clust = C_Ndata_bb_gem_hit_ccor_clust;
    copy(begin(C_bb_gem_hit_ccor_clust), end(C_bb_gem_hit_ccor_clust), begin(bb_gem_hit_ccor_clust));
    Ndata_bb_gem_hit_ccor_clust_deconv = C_Ndata_bb_gem_hit_ccor_clust_deconv;
    copy(begin(C_bb_gem_hit_ccor_clust_deconv), end(C_bb_gem_hit_ccor_clust_deconv), begin(bb_gem_hit_ccor_clust_deconv));
    Ndata_bb_gem_hit_ccor_strip = C_Ndata_bb_gem_hit_ccor_strip;
    copy(begin(C_bb_gem_hit_ccor_strip), end(C_bb_gem_hit_ccor_strip), begin(bb_gem_hit_ccor_strip));
    Ndata_bb_gem_hit_ccor_strip_deconv = C_Ndata_bb_gem_hit_ccor_strip_deconv;
    copy(begin(C_bb_gem_hit_ccor_strip_deconv), end(C_bb_gem_hit_ccor_strip_deconv), begin(bb_gem_hit_ccor_strip_deconv));
    Ndata_bb_gem_hit_deltat = C_Ndata_bb_gem_hit_deltat;
    copy(begin(C_bb_gem_hit_deltat), end(C_bb_gem_hit_deltat), begin(bb_gem_hit_deltat));
    Ndata_bb_gem_hit_deltat_deconv = C_Ndata_bb_gem_hit_deltat_deconv;
    copy(begin(C_bb_gem_hit_deltat_deconv), end(C_bb_gem_hit_deltat_deconv), begin(bb_gem_hit_deltat_deconv));
    Ndata_bb_gem_hit_eresidu = C_Ndata_bb_gem_hit_eresidu;
    copy(begin(C_bb_gem_hit_eresidu), end(C_bb_gem_hit_eresidu), begin(bb_gem_hit_eresidu));
    Ndata_bb_gem_hit_eresidv = C_Ndata_bb_gem_hit_eresidv;
    copy(begin(C_bb_gem_hit_eresidv), end(C_bb_gem_hit_eresidv), begin(bb_gem_hit_eresidv));
    Ndata_bb_gem_hit_icombomaxUclustDeconv = C_Ndata_bb_gem_hit_icombomaxUclustDeconv;
    copy(begin(C_bb_gem_hit_icombomaxUclustDeconv), end(C_bb_gem_hit_icombomaxUclustDeconv), begin(bb_gem_hit_icombomaxUclustDeconv));
    Ndata_bb_gem_hit_icombomaxUstripDeconv = C_Ndata_bb_gem_hit_icombomaxUstripDeconv;
    copy(begin(C_bb_gem_hit_icombomaxUstripDeconv), end(C_bb_gem_hit_icombomaxUstripDeconv), begin(bb_gem_hit_icombomaxUstripDeconv));
    Ndata_bb_gem_hit_icombomaxVclustDeconv = C_Ndata_bb_gem_hit_icombomaxVclustDeconv;
    copy(begin(C_bb_gem_hit_icombomaxVclustDeconv), end(C_bb_gem_hit_icombomaxVclustDeconv), begin(bb_gem_hit_icombomaxVclustDeconv));
    Ndata_bb_gem_hit_icombomaxVstripDeconv = C_Ndata_bb_gem_hit_icombomaxVstripDeconv;
    copy(begin(C_bb_gem_hit_icombomaxVstripDeconv), end(C_bb_gem_hit_icombomaxVstripDeconv), begin(bb_gem_hit_icombomaxVstripDeconv));
    Ndata_bb_gem_hit_isampmaxUclust = C_Ndata_bb_gem_hit_isampmaxUclust;
    copy(begin(C_bb_gem_hit_isampmaxUclust), end(C_bb_gem_hit_isampmaxUclust), begin(bb_gem_hit_isampmaxUclust));
    Ndata_bb_gem_hit_isampmaxUclustDeconv = C_Ndata_bb_gem_hit_isampmaxUclustDeconv;
    copy(begin(C_bb_gem_hit_isampmaxUclustDeconv), end(C_bb_gem_hit_isampmaxUclustDeconv), begin(bb_gem_hit_isampmaxUclustDeconv));
    Ndata_bb_gem_hit_isampmaxUstrip = C_Ndata_bb_gem_hit_isampmaxUstrip;
    copy(begin(C_bb_gem_hit_isampmaxUstrip), end(C_bb_gem_hit_isampmaxUstrip), begin(bb_gem_hit_isampmaxUstrip));
    Ndata_bb_gem_hit_isampmaxUstripDeconv = C_Ndata_bb_gem_hit_isampmaxUstripDeconv;
    copy(begin(C_bb_gem_hit_isampmaxUstripDeconv), end(C_bb_gem_hit_isampmaxUstripDeconv), begin(bb_gem_hit_isampmaxUstripDeconv));
    Ndata_bb_gem_hit_isampmaxVclust = C_Ndata_bb_gem_hit_isampmaxVclust;
    copy(begin(C_bb_gem_hit_isampmaxVclust), end(C_bb_gem_hit_isampmaxVclust), begin(bb_gem_hit_isampmaxVclust));
    Ndata_bb_gem_hit_isampmaxVclustDeconv = C_Ndata_bb_gem_hit_isampmaxVclustDeconv;
    copy(begin(C_bb_gem_hit_isampmaxVclustDeconv), end(C_bb_gem_hit_isampmaxVclustDeconv), begin(bb_gem_hit_isampmaxVclustDeconv));
    Ndata_bb_gem_hit_isampmaxVstrip = C_Ndata_bb_gem_hit_isampmaxVstrip;
    copy(begin(C_bb_gem_hit_isampmaxVstrip), end(C_bb_gem_hit_isampmaxVstrip), begin(bb_gem_hit_isampmaxVstrip));
    Ndata_bb_gem_hit_isampmaxVstripDeconv = C_Ndata_bb_gem_hit_isampmaxVstripDeconv;
    copy(begin(C_bb_gem_hit_isampmaxVstripDeconv), end(C_bb_gem_hit_isampmaxVstripDeconv), begin(bb_gem_hit_isampmaxVstripDeconv));
    Ndata_bb_gem_hit_layer = C_Ndata_bb_gem_hit_layer;
    copy(begin(C_bb_gem_hit_layer), end(C_bb_gem_hit_layer), begin(bb_gem_hit_layer));
    Ndata_bb_gem_hit_module = C_Ndata_bb_gem_hit_module;
    copy(begin(C_bb_gem_hit_module), end(C_bb_gem_hit_module), begin(bb_gem_hit_module));
    Ndata_bb_gem_hit_nstripu = C_Ndata_bb_gem_hit_nstripu;
    copy(begin(C_bb_gem_hit_nstripu), end(C_bb_gem_hit_nstripu), begin(bb_gem_hit_nstripu));
    Ndata_bb_gem_hit_nstripv = C_Ndata_bb_gem_hit_nstripv;
    copy(begin(C_bb_gem_hit_nstripv), end(C_bb_gem_hit_nstripv), begin(bb_gem_hit_nstripv));
    Ndata_bb_gem_hit_residu = C_Ndata_bb_gem_hit_residu;
    copy(begin(C_bb_gem_hit_residu), end(C_bb_gem_hit_residu), begin(bb_gem_hit_residu));
    Ndata_bb_gem_hit_residv = C_Ndata_bb_gem_hit_residv;
    copy(begin(C_bb_gem_hit_residv), end(C_bb_gem_hit_residv), begin(bb_gem_hit_residv));
    Ndata_bb_gem_hit_trackindex = C_Ndata_bb_gem_hit_trackindex;
    copy(begin(C_bb_gem_hit_trackindex), end(C_bb_gem_hit_trackindex), begin(bb_gem_hit_trackindex));
    Ndata_bb_gem_hit_u = C_Ndata_bb_gem_hit_u;
    copy(begin(C_bb_gem_hit_u), end(C_bb_gem_hit_u), begin(bb_gem_hit_u));
    Ndata_bb_gem_hit_umoment = C_Ndata_bb_gem_hit_umoment;
    copy(begin(C_bb_gem_hit_umoment), end(C_bb_gem_hit_umoment), begin(bb_gem_hit_umoment));
    Ndata_bb_gem_hit_usigma = C_Ndata_bb_gem_hit_usigma;
    copy(begin(C_bb_gem_hit_usigma), end(C_bb_gem_hit_usigma), begin(bb_gem_hit_usigma));
    Ndata_bb_gem_hit_ustriphi = C_Ndata_bb_gem_hit_ustriphi;
    copy(begin(C_bb_gem_hit_ustriphi), end(C_bb_gem_hit_ustriphi), begin(bb_gem_hit_ustriphi));
    Ndata_bb_gem_hit_ustriplo = C_Ndata_bb_gem_hit_ustriplo;
    copy(begin(C_bb_gem_hit_ustriplo), end(C_bb_gem_hit_ustriplo), begin(bb_gem_hit_ustriplo));
    Ndata_bb_gem_hit_ustripmax = C_Ndata_bb_gem_hit_ustripmax;
    copy(begin(C_bb_gem_hit_ustripmax), end(C_bb_gem_hit_ustripmax), begin(bb_gem_hit_ustripmax));
    Ndata_bb_gem_hit_v = C_Ndata_bb_gem_hit_v;
    copy(begin(C_bb_gem_hit_v), end(C_bb_gem_hit_v), begin(bb_gem_hit_v));
    Ndata_bb_gem_hit_vmoment = C_Ndata_bb_gem_hit_vmoment;
    copy(begin(C_bb_gem_hit_vmoment), end(C_bb_gem_hit_vmoment), begin(bb_gem_hit_vmoment));
    Ndata_bb_gem_hit_vsigma = C_Ndata_bb_gem_hit_vsigma;
    copy(begin(C_bb_gem_hit_vsigma), end(C_bb_gem_hit_vsigma), begin(bb_gem_hit_vsigma));
    Ndata_bb_gem_hit_vstriphi = C_Ndata_bb_gem_hit_vstriphi;
    copy(begin(C_bb_gem_hit_vstriphi), end(C_bb_gem_hit_vstriphi), begin(bb_gem_hit_vstriphi));
    Ndata_bb_gem_hit_vstriplo = C_Ndata_bb_gem_hit_vstriplo;
    copy(begin(C_bb_gem_hit_vstriplo), end(C_bb_gem_hit_vstriplo), begin(bb_gem_hit_vstriplo));
    Ndata_bb_gem_hit_vstripmax = C_Ndata_bb_gem_hit_vstripmax;
    copy(begin(C_bb_gem_hit_vstripmax), end(C_bb_gem_hit_vstripmax), begin(bb_gem_hit_vstripmax));
    Ndata_bb_gem_hit_xglobal = C_Ndata_bb_gem_hit_xglobal;
    copy(begin(C_bb_gem_hit_xglobal), end(C_bb_gem_hit_xglobal), begin(bb_gem_hit_xglobal));
    Ndata_bb_gem_hit_xlocal = C_Ndata_bb_gem_hit_xlocal;
    copy(begin(C_bb_gem_hit_xlocal), end(C_bb_gem_hit_xlocal), begin(bb_gem_hit_xlocal));
    Ndata_bb_gem_hit_yglobal = C_Ndata_bb_gem_hit_yglobal;
    copy(begin(C_bb_gem_hit_yglobal), end(C_bb_gem_hit_yglobal), begin(bb_gem_hit_yglobal));
    Ndata_bb_gem_hit_ylocal = C_Ndata_bb_gem_hit_ylocal;
    copy(begin(C_bb_gem_hit_ylocal), end(C_bb_gem_hit_ylocal), begin(bb_gem_hit_ylocal));
    Ndata_bb_gem_hit_zglobal = C_Ndata_bb_gem_hit_zglobal;
    copy(begin(C_bb_gem_hit_zglobal), end(C_bb_gem_hit_zglobal), begin(bb_gem_hit_zglobal));
    Ndata_bb_gem_n2Dhit_layer = C_Ndata_bb_gem_n2Dhit_layer;
    copy(begin(C_bb_gem_n2Dhit_layer), end(C_bb_gem_n2Dhit_layer), begin(bb_gem_n2Dhit_layer));
    Ndata_bb_gem_nclustu_layer = C_Ndata_bb_gem_nclustu_layer;
    copy(begin(C_bb_gem_nclustu_layer), end(C_bb_gem_nclustu_layer), begin(bb_gem_nclustu_layer));
    Ndata_bb_gem_nclustv_layer = C_Ndata_bb_gem_nclustv_layer;
    copy(begin(C_bb_gem_nclustv_layer), end(C_bb_gem_nclustv_layer), begin(bb_gem_nclustv_layer));
    Ndata_bb_gem_nstripsu_layer = C_Ndata_bb_gem_nstripsu_layer;
    copy(begin(C_bb_gem_nstripsu_layer), end(C_bb_gem_nstripsu_layer), begin(bb_gem_nstripsu_layer));
    Ndata_bb_gem_nstripsv_layer = C_Ndata_bb_gem_nstripsv_layer;
    copy(begin(C_bb_gem_nstripsv_layer), end(C_bb_gem_nstripsv_layer), begin(bb_gem_nstripsv_layer));
    Ndata_bb_gem_track_chi2ndf = C_Ndata_bb_gem_track_chi2ndf;
    copy(begin(C_bb_gem_track_chi2ndf), end(C_bb_gem_track_chi2ndf), begin(bb_gem_track_chi2ndf));
    Ndata_bb_gem_track_nhits = C_Ndata_bb_gem_track_nhits;
    copy(begin(C_bb_gem_track_nhits), end(C_bb_gem_track_nhits), begin(bb_gem_track_nhits));
    Ndata_bb_gem_track_x = C_Ndata_bb_gem_track_x;
    copy(begin(C_bb_gem_track_x), end(C_bb_gem_track_x), begin(bb_gem_track_x));
    Ndata_bb_gem_track_xp = C_Ndata_bb_gem_track_xp;
    copy(begin(C_bb_gem_track_xp), end(C_bb_gem_track_xp), begin(bb_gem_track_xp));
    Ndata_bb_gem_track_y = C_Ndata_bb_gem_track_y;
    copy(begin(C_bb_gem_track_y), end(C_bb_gem_track_y), begin(bb_gem_track_y));
    Ndata_bb_gem_track_yp = C_Ndata_bb_gem_track_yp;
    copy(begin(C_bb_gem_track_yp), end(C_bb_gem_track_yp), begin(bb_gem_track_yp));
    Ndata_bb_grinch_tdc_hit_amp = C_Ndata_bb_grinch_tdc_hit_amp;
    copy(begin(C_bb_grinch_tdc_hit_amp), end(C_bb_grinch_tdc_hit_amp), begin(bb_grinch_tdc_hit_amp));
    Ndata_bb_grinch_tdc_hit_col = C_Ndata_bb_grinch_tdc_hit_col;
    copy(begin(C_bb_grinch_tdc_hit_col), end(C_bb_grinch_tdc_hit_col), begin(bb_grinch_tdc_hit_col));
    Ndata_bb_grinch_tdc_hit_pmtnum = C_Ndata_bb_grinch_tdc_hit_pmtnum;
    copy(begin(C_bb_grinch_tdc_hit_pmtnum), end(C_bb_grinch_tdc_hit_pmtnum), begin(bb_grinch_tdc_hit_pmtnum));
    Ndata_bb_grinch_tdc_hit_row = C_Ndata_bb_grinch_tdc_hit_row;
    copy(begin(C_bb_grinch_tdc_hit_row), end(C_bb_grinch_tdc_hit_row), begin(bb_grinch_tdc_hit_row));
    Ndata_bb_grinch_tdc_hit_time = C_Ndata_bb_grinch_tdc_hit_time;
    copy(begin(C_bb_grinch_tdc_hit_time), end(C_bb_grinch_tdc_hit_time), begin(bb_grinch_tdc_hit_time));
    Ndata_bb_grinch_tdc_hit_xhit = C_Ndata_bb_grinch_tdc_hit_xhit;
    copy(begin(C_bb_grinch_tdc_hit_xhit), end(C_bb_grinch_tdc_hit_xhit), begin(bb_grinch_tdc_hit_xhit));
    Ndata_bb_grinch_tdc_hit_yhit = C_Ndata_bb_grinch_tdc_hit_yhit;
    copy(begin(C_bb_grinch_tdc_hit_yhit), end(C_bb_grinch_tdc_hit_yhit), begin(bb_grinch_tdc_hit_yhit));
    Ndata_bb_hodotdc_clus_bar_tdc_id = C_Ndata_bb_hodotdc_clus_bar_tdc_id;
    copy(begin(C_bb_hodotdc_clus_bar_tdc_id), end(C_bb_hodotdc_clus_bar_tdc_id), begin(bb_hodotdc_clus_bar_tdc_id));
    Ndata_bb_hodotdc_clus_bar_tdc_itrack = C_Ndata_bb_hodotdc_clus_bar_tdc_itrack;
    copy(begin(C_bb_hodotdc_clus_bar_tdc_itrack), end(C_bb_hodotdc_clus_bar_tdc_itrack), begin(bb_hodotdc_clus_bar_tdc_itrack));
    Ndata_bb_hodotdc_clus_bar_tdc_meantime = C_Ndata_bb_hodotdc_clus_bar_tdc_meantime;
    copy(begin(C_bb_hodotdc_clus_bar_tdc_meantime), end(C_bb_hodotdc_clus_bar_tdc_meantime), begin(bb_hodotdc_clus_bar_tdc_meantime));
    Ndata_bb_hodotdc_clus_bar_tdc_meantot = C_Ndata_bb_hodotdc_clus_bar_tdc_meantot;
    copy(begin(C_bb_hodotdc_clus_bar_tdc_meantot), end(C_bb_hodotdc_clus_bar_tdc_meantot), begin(bb_hodotdc_clus_bar_tdc_meantot));
    Ndata_bb_hodotdc_clus_bar_tdc_timediff = C_Ndata_bb_hodotdc_clus_bar_tdc_timediff;
    copy(begin(C_bb_hodotdc_clus_bar_tdc_timediff), end(C_bb_hodotdc_clus_bar_tdc_timediff), begin(bb_hodotdc_clus_bar_tdc_timediff));
    Ndata_bb_hodotdc_clus_bar_tdc_timehitpos = C_Ndata_bb_hodotdc_clus_bar_tdc_timehitpos;
    copy(begin(C_bb_hodotdc_clus_bar_tdc_timehitpos), end(C_bb_hodotdc_clus_bar_tdc_timehitpos), begin(bb_hodotdc_clus_bar_tdc_timehitpos));
    Ndata_bb_hodotdc_clus_bar_tdc_vpos = C_Ndata_bb_hodotdc_clus_bar_tdc_vpos;
    copy(begin(C_bb_hodotdc_clus_bar_tdc_vpos), end(C_bb_hodotdc_clus_bar_tdc_vpos), begin(bb_hodotdc_clus_bar_tdc_vpos));
    Ndata_bb_hodotdc_clus_id = C_Ndata_bb_hodotdc_clus_id;
    copy(begin(C_bb_hodotdc_clus_id), end(C_bb_hodotdc_clus_id), begin(bb_hodotdc_clus_id));
    Ndata_bb_hodotdc_clus_size = C_Ndata_bb_hodotdc_clus_size;
    copy(begin(C_bb_hodotdc_clus_size), end(C_bb_hodotdc_clus_size), begin(bb_hodotdc_clus_size));
    Ndata_bb_hodotdc_clus_tdiff = C_Ndata_bb_hodotdc_clus_tdiff;
    copy(begin(C_bb_hodotdc_clus_tdiff), end(C_bb_hodotdc_clus_tdiff), begin(bb_hodotdc_clus_tdiff));
    Ndata_bb_hodotdc_clus_tmean = C_Ndata_bb_hodotdc_clus_tmean;
    copy(begin(C_bb_hodotdc_clus_tmean), end(C_bb_hodotdc_clus_tmean), begin(bb_hodotdc_clus_tmean));
    Ndata_bb_hodotdc_clus_totmean = C_Ndata_bb_hodotdc_clus_totmean;
    copy(begin(C_bb_hodotdc_clus_totmean), end(C_bb_hodotdc_clus_totmean), begin(bb_hodotdc_clus_totmean));
    Ndata_bb_hodotdc_clus_trackindex = C_Ndata_bb_hodotdc_clus_trackindex;
    copy(begin(C_bb_hodotdc_clus_trackindex), end(C_bb_hodotdc_clus_trackindex), begin(bb_hodotdc_clus_trackindex));
    Ndata_bb_hodotdc_clus_xmean = C_Ndata_bb_hodotdc_clus_xmean;
    copy(begin(C_bb_hodotdc_clus_xmean), end(C_bb_hodotdc_clus_xmean), begin(bb_hodotdc_clus_xmean));
    Ndata_bb_hodotdc_clus_ymean = C_Ndata_bb_hodotdc_clus_ymean;
    copy(begin(C_bb_hodotdc_clus_ymean), end(C_bb_hodotdc_clus_ymean), begin(bb_hodotdc_clus_ymean));
    Ndata_bb_ps_clus_atime = C_Ndata_bb_ps_clus_atime;
    copy(begin(C_bb_ps_clus_atime), end(C_bb_ps_clus_atime), begin(bb_ps_clus_atime));
    Ndata_bb_ps_clus_col = C_Ndata_bb_ps_clus_col;
    copy(begin(C_bb_ps_clus_col), end(C_bb_ps_clus_col), begin(bb_ps_clus_col));
    Ndata_bb_ps_clus_e = C_Ndata_bb_ps_clus_e;
    copy(begin(C_bb_ps_clus_e), end(C_bb_ps_clus_e), begin(bb_ps_clus_e));
    Ndata_bb_ps_clus_e_c = C_Ndata_bb_ps_clus_e_c;
    copy(begin(C_bb_ps_clus_e_c), end(C_bb_ps_clus_e_c), begin(bb_ps_clus_e_c));
    Ndata_bb_ps_clus_eblk = C_Ndata_bb_ps_clus_eblk;
    copy(begin(C_bb_ps_clus_eblk), end(C_bb_ps_clus_eblk), begin(bb_ps_clus_eblk));
    Ndata_bb_ps_clus_eblk_c = C_Ndata_bb_ps_clus_eblk_c;
    copy(begin(C_bb_ps_clus_eblk_c), end(C_bb_ps_clus_eblk_c), begin(bb_ps_clus_eblk_c));
    Ndata_bb_ps_clus_id = C_Ndata_bb_ps_clus_id;
    copy(begin(C_bb_ps_clus_id), end(C_bb_ps_clus_id), begin(bb_ps_clus_id));
    Ndata_bb_ps_clus_nblk = C_Ndata_bb_ps_clus_nblk;
    copy(begin(C_bb_ps_clus_nblk), end(C_bb_ps_clus_nblk), begin(bb_ps_clus_nblk));
    Ndata_bb_ps_clus_row = C_Ndata_bb_ps_clus_row;
    copy(begin(C_bb_ps_clus_row), end(C_bb_ps_clus_row), begin(bb_ps_clus_row));
    Ndata_bb_ps_clus_tdctime = C_Ndata_bb_ps_clus_tdctime;
    copy(begin(C_bb_ps_clus_tdctime), end(C_bb_ps_clus_tdctime), begin(bb_ps_clus_tdctime));
    Ndata_bb_ps_clus_x = C_Ndata_bb_ps_clus_x;
    copy(begin(C_bb_ps_clus_x), end(C_bb_ps_clus_x), begin(bb_ps_clus_x));
    Ndata_bb_ps_clus_y = C_Ndata_bb_ps_clus_y;
    copy(begin(C_bb_ps_clus_y), end(C_bb_ps_clus_y), begin(bb_ps_clus_y));
    Ndata_bb_ps_clus_blk_atime = C_Ndata_bb_ps_clus_blk_atime;
    copy(begin(C_bb_ps_clus_blk_atime), end(C_bb_ps_clus_blk_atime), begin(bb_ps_clus_blk_atime));
    Ndata_bb_ps_clus_blk_col = C_Ndata_bb_ps_clus_blk_col;
    copy(begin(C_bb_ps_clus_blk_col), end(C_bb_ps_clus_blk_col), begin(bb_ps_clus_blk_col));
    Ndata_bb_ps_clus_blk_e = C_Ndata_bb_ps_clus_blk_e;
    copy(begin(C_bb_ps_clus_blk_e), end(C_bb_ps_clus_blk_e), begin(bb_ps_clus_blk_e));
    Ndata_bb_ps_clus_blk_e_c = C_Ndata_bb_ps_clus_blk_e_c;
    copy(begin(C_bb_ps_clus_blk_e_c), end(C_bb_ps_clus_blk_e_c), begin(bb_ps_clus_blk_e_c));
    Ndata_bb_ps_clus_blk_id = C_Ndata_bb_ps_clus_blk_id;
    copy(begin(C_bb_ps_clus_blk_id), end(C_bb_ps_clus_blk_id), begin(bb_ps_clus_blk_id));
    Ndata_bb_ps_clus_blk_row = C_Ndata_bb_ps_clus_blk_row;
    copy(begin(C_bb_ps_clus_blk_row), end(C_bb_ps_clus_blk_row), begin(bb_ps_clus_blk_row));
    Ndata_bb_ps_clus_blk_tdctime = C_Ndata_bb_ps_clus_blk_tdctime;
    copy(begin(C_bb_ps_clus_blk_tdctime), end(C_bb_ps_clus_blk_tdctime), begin(bb_ps_clus_blk_tdctime));
    Ndata_bb_ps_clus_blk_x = C_Ndata_bb_ps_clus_blk_x;
    copy(begin(C_bb_ps_clus_blk_x), end(C_bb_ps_clus_blk_x), begin(bb_ps_clus_blk_x));
    Ndata_bb_ps_clus_blk_y = C_Ndata_bb_ps_clus_blk_y;
    copy(begin(C_bb_ps_clus_blk_y), end(C_bb_ps_clus_blk_y), begin(bb_ps_clus_blk_y));
    Ndata_bb_sh_clus_atime = C_Ndata_bb_sh_clus_atime;
    copy(begin(C_bb_sh_clus_atime), end(C_bb_sh_clus_atime), begin(bb_sh_clus_atime));
    Ndata_bb_sh_clus_col = C_Ndata_bb_sh_clus_col;
    copy(begin(C_bb_sh_clus_col), end(C_bb_sh_clus_col), begin(bb_sh_clus_col));
    Ndata_bb_sh_clus_e = C_Ndata_bb_sh_clus_e;
    copy(begin(C_bb_sh_clus_e), end(C_bb_sh_clus_e), begin(bb_sh_clus_e));
    Ndata_bb_sh_clus_e_c = C_Ndata_bb_sh_clus_e_c;
    copy(begin(C_bb_sh_clus_e_c), end(C_bb_sh_clus_e_c), begin(bb_sh_clus_e_c));
    Ndata_bb_sh_clus_eblk = C_Ndata_bb_sh_clus_eblk;
    copy(begin(C_bb_sh_clus_eblk), end(C_bb_sh_clus_eblk), begin(bb_sh_clus_eblk));
    Ndata_bb_sh_clus_eblk_c = C_Ndata_bb_sh_clus_eblk_c;
    copy(begin(C_bb_sh_clus_eblk_c), end(C_bb_sh_clus_eblk_c), begin(bb_sh_clus_eblk_c));
    Ndata_bb_sh_clus_id = C_Ndata_bb_sh_clus_id;
    copy(begin(C_bb_sh_clus_id), end(C_bb_sh_clus_id), begin(bb_sh_clus_id));
    Ndata_bb_sh_clus_nblk = C_Ndata_bb_sh_clus_nblk;
    copy(begin(C_bb_sh_clus_nblk), end(C_bb_sh_clus_nblk), begin(bb_sh_clus_nblk));
    Ndata_bb_sh_clus_row = C_Ndata_bb_sh_clus_row;
    copy(begin(C_bb_sh_clus_row), end(C_bb_sh_clus_row), begin(bb_sh_clus_row));
    Ndata_bb_sh_clus_tdctime = C_Ndata_bb_sh_clus_tdctime;
    copy(begin(C_bb_sh_clus_tdctime), end(C_bb_sh_clus_tdctime), begin(bb_sh_clus_tdctime));
    Ndata_bb_sh_clus_x = C_Ndata_bb_sh_clus_x;
    copy(begin(C_bb_sh_clus_x), end(C_bb_sh_clus_x), begin(bb_sh_clus_x));
    Ndata_bb_sh_clus_y = C_Ndata_bb_sh_clus_y;
    copy(begin(C_bb_sh_clus_y), end(C_bb_sh_clus_y), begin(bb_sh_clus_y));
    Ndata_bb_sh_clus_blk_atime = C_Ndata_bb_sh_clus_blk_atime;
    copy(begin(C_bb_sh_clus_blk_atime), end(C_bb_sh_clus_blk_atime), begin(bb_sh_clus_blk_atime));
    Ndata_bb_sh_clus_blk_col = C_Ndata_bb_sh_clus_blk_col;
    copy(begin(C_bb_sh_clus_blk_col), end(C_bb_sh_clus_blk_col), begin(bb_sh_clus_blk_col));
    Ndata_bb_sh_clus_blk_e = C_Ndata_bb_sh_clus_blk_e;
    copy(begin(C_bb_sh_clus_blk_e), end(C_bb_sh_clus_blk_e), begin(bb_sh_clus_blk_e));
    Ndata_bb_sh_clus_blk_e_c = C_Ndata_bb_sh_clus_blk_e_c;
    copy(begin(C_bb_sh_clus_blk_e_c), end(C_bb_sh_clus_blk_e_c), begin(bb_sh_clus_blk_e_c));
    Ndata_bb_sh_clus_blk_id = C_Ndata_bb_sh_clus_blk_id;
    copy(begin(C_bb_sh_clus_blk_id), end(C_bb_sh_clus_blk_id), begin(bb_sh_clus_blk_id));
    Ndata_bb_sh_clus_blk_row = C_Ndata_bb_sh_clus_blk_row;
    copy(begin(C_bb_sh_clus_blk_row), end(C_bb_sh_clus_blk_row), begin(bb_sh_clus_blk_row));
    Ndata_bb_sh_clus_blk_tdctime = C_Ndata_bb_sh_clus_blk_tdctime;
    copy(begin(C_bb_sh_clus_blk_tdctime), end(C_bb_sh_clus_blk_tdctime), begin(bb_sh_clus_blk_tdctime));
    Ndata_bb_sh_clus_blk_x = C_Ndata_bb_sh_clus_blk_x;
    copy(begin(C_bb_sh_clus_blk_x), end(C_bb_sh_clus_blk_x), begin(bb_sh_clus_blk_x));
    Ndata_bb_sh_clus_blk_y = C_Ndata_bb_sh_clus_blk_y;
    copy(begin(C_bb_sh_clus_blk_y), end(C_bb_sh_clus_blk_y), begin(bb_sh_clus_blk_y));
    Ndata_bb_tdctrig_tdc = C_Ndata_bb_tdctrig_tdc;
    copy(begin(C_bb_tdctrig_tdc), end(C_bb_tdctrig_tdc), begin(bb_tdctrig_tdc));
    Ndata_bb_tdctrig_tdcelemID = C_Ndata_bb_tdctrig_tdcelemID;
    copy(begin(C_bb_tdctrig_tdcelemID), end(C_bb_tdctrig_tdcelemID), begin(bb_tdctrig_tdcelemID));
    Ndata_bb_tr_beta = C_Ndata_bb_tr_beta;
    copy(begin(C_bb_tr_beta), end(C_bb_tr_beta), begin(bb_tr_beta));
    Ndata_bb_tr_chi2 = C_Ndata_bb_tr_chi2;
    copy(begin(C_bb_tr_chi2), end(C_bb_tr_chi2), begin(bb_tr_chi2));
    Ndata_bb_tr_d_ph = C_Ndata_bb_tr_d_ph;
    copy(begin(C_bb_tr_d_ph), end(C_bb_tr_d_ph), begin(bb_tr_d_ph));
    Ndata_bb_tr_d_th = C_Ndata_bb_tr_d_th;
    copy(begin(C_bb_tr_d_th), end(C_bb_tr_d_th), begin(bb_tr_d_th));
    Ndata_bb_tr_d_x = C_Ndata_bb_tr_d_x;
    copy(begin(C_bb_tr_d_x), end(C_bb_tr_d_x), begin(bb_tr_d_x));
    Ndata_bb_tr_d_y = C_Ndata_bb_tr_d_y;
    copy(begin(C_bb_tr_d_y), end(C_bb_tr_d_y), begin(bb_tr_d_y));
    Ndata_bb_tr_dbeta = C_Ndata_bb_tr_dbeta;
    copy(begin(C_bb_tr_dbeta), end(C_bb_tr_dbeta), begin(bb_tr_dbeta));
    Ndata_bb_tr_dtime = C_Ndata_bb_tr_dtime;
    copy(begin(C_bb_tr_dtime), end(C_bb_tr_dtime), begin(bb_tr_dtime));
    Ndata_bb_tr_flag = C_Ndata_bb_tr_flag;
    copy(begin(C_bb_tr_flag), end(C_bb_tr_flag), begin(bb_tr_flag));
    Ndata_bb_tr_ndof = C_Ndata_bb_tr_ndof;
    copy(begin(C_bb_tr_ndof), end(C_bb_tr_ndof), begin(bb_tr_ndof));
    Ndata_bb_tr_p = C_Ndata_bb_tr_p;
    copy(begin(C_bb_tr_p), end(C_bb_tr_p), begin(bb_tr_p));
    Ndata_bb_tr_pathl = C_Ndata_bb_tr_pathl;
    copy(begin(C_bb_tr_pathl), end(C_bb_tr_pathl), begin(bb_tr_pathl));
    Ndata_bb_tr_ph = C_Ndata_bb_tr_ph;
    copy(begin(C_bb_tr_ph), end(C_bb_tr_ph), begin(bb_tr_ph));
    Ndata_bb_tr_px = C_Ndata_bb_tr_px;
    copy(begin(C_bb_tr_px), end(C_bb_tr_px), begin(bb_tr_px));
    Ndata_bb_tr_py = C_Ndata_bb_tr_py;
    copy(begin(C_bb_tr_py), end(C_bb_tr_py), begin(bb_tr_py));
    Ndata_bb_tr_pz = C_Ndata_bb_tr_pz;
    copy(begin(C_bb_tr_pz), end(C_bb_tr_pz), begin(bb_tr_pz));
    Ndata_bb_tr_r_ph = C_Ndata_bb_tr_r_ph;
    copy(begin(C_bb_tr_r_ph), end(C_bb_tr_r_ph), begin(bb_tr_r_ph));
    Ndata_bb_tr_r_th = C_Ndata_bb_tr_r_th;
    copy(begin(C_bb_tr_r_th), end(C_bb_tr_r_th), begin(bb_tr_r_th));
    Ndata_bb_tr_r_x = C_Ndata_bb_tr_r_x;
    copy(begin(C_bb_tr_r_x), end(C_bb_tr_r_x), begin(bb_tr_r_x));
    Ndata_bb_tr_r_y = C_Ndata_bb_tr_r_y;
    copy(begin(C_bb_tr_r_y), end(C_bb_tr_r_y), begin(bb_tr_r_y));
    Ndata_bb_tr_tg_dp = C_Ndata_bb_tr_tg_dp;
    copy(begin(C_bb_tr_tg_dp), end(C_bb_tr_tg_dp), begin(bb_tr_tg_dp));
    Ndata_bb_tr_tg_ph = C_Ndata_bb_tr_tg_ph;
    copy(begin(C_bb_tr_tg_ph), end(C_bb_tr_tg_ph), begin(bb_tr_tg_ph));
    Ndata_bb_tr_tg_th = C_Ndata_bb_tr_tg_th;
    copy(begin(C_bb_tr_tg_th), end(C_bb_tr_tg_th), begin(bb_tr_tg_th));
    Ndata_bb_tr_tg_x = C_Ndata_bb_tr_tg_x;
    copy(begin(C_bb_tr_tg_x), end(C_bb_tr_tg_x), begin(bb_tr_tg_x));
    Ndata_bb_tr_tg_y = C_Ndata_bb_tr_tg_y;
    copy(begin(C_bb_tr_tg_y), end(C_bb_tr_tg_y), begin(bb_tr_tg_y));
    Ndata_bb_tr_th = C_Ndata_bb_tr_th;
    copy(begin(C_bb_tr_th), end(C_bb_tr_th), begin(bb_tr_th));
    Ndata_bb_tr_time = C_Ndata_bb_tr_time;
    copy(begin(C_bb_tr_time), end(C_bb_tr_time), begin(bb_tr_time));
    Ndata_bb_tr_vx = C_Ndata_bb_tr_vx;
    copy(begin(C_bb_tr_vx), end(C_bb_tr_vx), begin(bb_tr_vx));
    Ndata_bb_tr_vy = C_Ndata_bb_tr_vy;
    copy(begin(C_bb_tr_vy), end(C_bb_tr_vy), begin(bb_tr_vy));
    Ndata_bb_tr_vz = C_Ndata_bb_tr_vz;
    copy(begin(C_bb_tr_vz), end(C_bb_tr_vz), begin(bb_tr_vz));
    Ndata_bb_tr_x = C_Ndata_bb_tr_x;
    copy(begin(C_bb_tr_x), end(C_bb_tr_x), begin(bb_tr_x));
    Ndata_bb_tr_y = C_Ndata_bb_tr_y;
    copy(begin(C_bb_tr_y), end(C_bb_tr_y), begin(bb_tr_y));
    Ndata_bb_x_bcp = C_Ndata_bb_x_bcp;
    copy(begin(C_bb_x_bcp), end(C_bb_x_bcp), begin(bb_x_bcp));
    Ndata_bb_x_fcp = C_Ndata_bb_x_fcp;
    copy(begin(C_bb_x_fcp), end(C_bb_x_fcp), begin(bb_x_fcp));
    Ndata_bb_y_bcp = C_Ndata_bb_y_bcp;
    copy(begin(C_bb_y_bcp), end(C_bb_y_bcp), begin(bb_y_bcp));
    Ndata_bb_y_fcp = C_Ndata_bb_y_fcp;
    copy(begin(C_bb_y_fcp), end(C_bb_y_fcp), begin(bb_y_fcp));
    Ndata_bb_z_bcp = C_Ndata_bb_z_bcp;
    copy(begin(C_bb_z_bcp), end(C_bb_z_bcp), begin(bb_z_bcp));
    Ndata_bb_z_fcp = C_Ndata_bb_z_fcp;
    copy(begin(C_bb_z_fcp), end(C_bb_z_fcp), begin(bb_z_fcp));
    Ndata_sbs_hcal_clus_atime = C_Ndata_sbs_hcal_clus_atime;
    copy(begin(C_sbs_hcal_clus_atime), end(C_sbs_hcal_clus_atime), begin(sbs_hcal_clus_atime));
    Ndata_sbs_hcal_clus_col = C_Ndata_sbs_hcal_clus_col;
    copy(begin(C_sbs_hcal_clus_col), end(C_sbs_hcal_clus_col), begin(sbs_hcal_clus_col));
    Ndata_sbs_hcal_clus_e = C_Ndata_sbs_hcal_clus_e;
    copy(begin(C_sbs_hcal_clus_e), end(C_sbs_hcal_clus_e), begin(sbs_hcal_clus_e));
    Ndata_sbs_hcal_clus_e_c = C_Ndata_sbs_hcal_clus_e_c;
    copy(begin(C_sbs_hcal_clus_e_c), end(C_sbs_hcal_clus_e_c), begin(sbs_hcal_clus_e_c));
    Ndata_sbs_hcal_clus_eblk = C_Ndata_sbs_hcal_clus_eblk;
    copy(begin(C_sbs_hcal_clus_eblk), end(C_sbs_hcal_clus_eblk), begin(sbs_hcal_clus_eblk));
    Ndata_sbs_hcal_clus_eblk_c = C_Ndata_sbs_hcal_clus_eblk_c;
    copy(begin(C_sbs_hcal_clus_eblk_c), end(C_sbs_hcal_clus_eblk_c), begin(sbs_hcal_clus_eblk_c));
    Ndata_sbs_hcal_clus_id = C_Ndata_sbs_hcal_clus_id;
    copy(begin(C_sbs_hcal_clus_id), end(C_sbs_hcal_clus_id), begin(sbs_hcal_clus_id));
    Ndata_sbs_hcal_clus_nblk = C_Ndata_sbs_hcal_clus_nblk;
    copy(begin(C_sbs_hcal_clus_nblk), end(C_sbs_hcal_clus_nblk), begin(sbs_hcal_clus_nblk));
    Ndata_sbs_hcal_clus_row = C_Ndata_sbs_hcal_clus_row;
    copy(begin(C_sbs_hcal_clus_row), end(C_sbs_hcal_clus_row), begin(sbs_hcal_clus_row));
    Ndata_sbs_hcal_clus_tdctime = C_Ndata_sbs_hcal_clus_tdctime;
    copy(begin(C_sbs_hcal_clus_tdctime), end(C_sbs_hcal_clus_tdctime), begin(sbs_hcal_clus_tdctime));
    Ndata_sbs_hcal_clus_x = C_Ndata_sbs_hcal_clus_x;
    copy(begin(C_sbs_hcal_clus_x), end(C_sbs_hcal_clus_x), begin(sbs_hcal_clus_x));
    Ndata_sbs_hcal_clus_y = C_Ndata_sbs_hcal_clus_y;
    copy(begin(C_sbs_hcal_clus_y), end(C_sbs_hcal_clus_y), begin(sbs_hcal_clus_y));
    Ndata_sbs_hcal_clus_blk_atime = C_Ndata_sbs_hcal_clus_blk_atime;
    copy(begin(C_sbs_hcal_clus_blk_atime), end(C_sbs_hcal_clus_blk_atime), begin(sbs_hcal_clus_blk_atime));
    Ndata_sbs_hcal_clus_blk_col = C_Ndata_sbs_hcal_clus_blk_col;
    copy(begin(C_sbs_hcal_clus_blk_col), end(C_sbs_hcal_clus_blk_col), begin(sbs_hcal_clus_blk_col));
    Ndata_sbs_hcal_clus_blk_e = C_Ndata_sbs_hcal_clus_blk_e;
    copy(begin(C_sbs_hcal_clus_blk_e), end(C_sbs_hcal_clus_blk_e), begin(sbs_hcal_clus_blk_e));
    Ndata_sbs_hcal_clus_blk_e_c = C_Ndata_sbs_hcal_clus_blk_e_c;
    copy(begin(C_sbs_hcal_clus_blk_e_c), end(C_sbs_hcal_clus_blk_e_c), begin(sbs_hcal_clus_blk_e_c));
    Ndata_sbs_hcal_clus_blk_id = C_Ndata_sbs_hcal_clus_blk_id;
    copy(begin(C_sbs_hcal_clus_blk_id), end(C_sbs_hcal_clus_blk_id), begin(sbs_hcal_clus_blk_id));
    Ndata_sbs_hcal_clus_blk_row = C_Ndata_sbs_hcal_clus_blk_row;
    copy(begin(C_sbs_hcal_clus_blk_row), end(C_sbs_hcal_clus_blk_row), begin(sbs_hcal_clus_blk_row));
    Ndata_sbs_hcal_clus_blk_tdctime = C_Ndata_sbs_hcal_clus_blk_tdctime;
    copy(begin(C_sbs_hcal_clus_blk_tdctime), end(C_sbs_hcal_clus_blk_tdctime), begin(sbs_hcal_clus_blk_tdctime));
    Ndata_sbs_hcal_clus_blk_x = C_Ndata_sbs_hcal_clus_blk_x;
    copy(begin(C_sbs_hcal_clus_blk_x), end(C_sbs_hcal_clus_blk_x), begin(sbs_hcal_clus_blk_x));
    Ndata_sbs_hcal_clus_blk_y = C_Ndata_sbs_hcal_clus_blk_y;
    copy(begin(C_sbs_hcal_clus_blk_y), end(C_sbs_hcal_clus_blk_y), begin(sbs_hcal_clus_blk_y));
    BB_gold_beta = C_BB_gold_beta;
    BB_gold_dp = C_BB_gold_dp;
    BB_gold_index = C_BB_gold_index;
    BB_gold_ok = C_BB_gold_ok;
    BB_gold_p = C_BB_gold_p;
    BB_gold_ph = C_BB_gold_ph;
    BB_gold_px = C_BB_gold_px;
    BB_gold_py = C_BB_gold_py;
    BB_gold_pz = C_BB_gold_pz;
    BB_gold_th = C_BB_gold_th;
    BB_gold_x = C_BB_gold_x;
    BB_gold_y = C_BB_gold_y;
    Lrb_BPMA_rawcur_1 = C_Lrb_BPMA_rawcur_1;
    Lrb_BPMA_rawcur_2 = C_Lrb_BPMA_rawcur_2;
    Lrb_BPMA_rawcur_3 = C_Lrb_BPMA_rawcur_3;
    Lrb_BPMA_rawcur_4 = C_Lrb_BPMA_rawcur_4;
    Lrb_BPMA_rotpos1 = C_Lrb_BPMA_rotpos1;
    Lrb_BPMA_rotpos2 = C_Lrb_BPMA_rotpos2;
    Lrb_BPMA_x = C_Lrb_BPMA_x;
    Lrb_BPMA_y = C_Lrb_BPMA_y;
    Lrb_BPMA_z = C_Lrb_BPMA_z;
    Lrb_BPMB_rawcur_1 = C_Lrb_BPMB_rawcur_1;
    Lrb_BPMB_rawcur_2 = C_Lrb_BPMB_rawcur_2;
    Lrb_BPMB_rawcur_3 = C_Lrb_BPMB_rawcur_3;
    Lrb_BPMB_rawcur_4 = C_Lrb_BPMB_rawcur_4;
    Lrb_BPMB_rotpos1 = C_Lrb_BPMB_rotpos1;
    Lrb_BPMB_rotpos2 = C_Lrb_BPMB_rotpos2;
    Lrb_BPMB_x = C_Lrb_BPMB_x;
    Lrb_BPMB_y = C_Lrb_BPMB_y;
    Lrb_BPMB_z = C_Lrb_BPMB_z;
    Lrb_Raster_bpma_x = C_Lrb_Raster_bpma_x;
    Lrb_Raster_bpma_y = C_Lrb_Raster_bpma_y;
    Lrb_Raster_bpma_z = C_Lrb_Raster_bpma_z;
    Lrb_Raster_bpmb_x = C_Lrb_Raster_bpmb_x;
    Lrb_Raster_bpmb_y = C_Lrb_Raster_bpmb_y;
    Lrb_Raster_bpmb_z = C_Lrb_Raster_bpmb_z;
    Lrb_Raster_rawcur_x = C_Lrb_Raster_rawcur_x;
    Lrb_Raster_rawcur_y = C_Lrb_Raster_rawcur_y;
    Lrb_Raster_rawslope_x = C_Lrb_Raster_rawslope_x;
    Lrb_Raster_rawslope_y = C_Lrb_Raster_rawslope_y;
    Lrb_Raster_target_dir_x = C_Lrb_Raster_target_dir_x;
    Lrb_Raster_target_dir_y = C_Lrb_Raster_target_dir_y;
    Lrb_Raster_target_dir_z = C_Lrb_Raster_target_dir_z;
    Lrb_Raster_target_x = C_Lrb_Raster_target_x;
    Lrb_Raster_target_y = C_Lrb_Raster_target_y;
    Lrb_Raster_target_z = C_Lrb_Raster_target_z;
    Lrb_Raster2_bpma_x = C_Lrb_Raster2_bpma_x;
    Lrb_Raster2_bpma_y = C_Lrb_Raster2_bpma_y;
    Lrb_Raster2_bpma_z = C_Lrb_Raster2_bpma_z;
    Lrb_Raster2_bpmb_x = C_Lrb_Raster2_bpmb_x;
    Lrb_Raster2_bpmb_y = C_Lrb_Raster2_bpmb_y;
    Lrb_Raster2_bpmb_z = C_Lrb_Raster2_bpmb_z;
    Lrb_Raster2_rawcur_x = C_Lrb_Raster2_rawcur_x;
    Lrb_Raster2_rawcur_y = C_Lrb_Raster2_rawcur_y;
    Lrb_Raster2_rawslope_x = C_Lrb_Raster2_rawslope_x;
    Lrb_Raster2_rawslope_y = C_Lrb_Raster2_rawslope_y;
    Lrb_Raster2_target_dir_x = C_Lrb_Raster2_target_dir_x;
    Lrb_Raster2_target_dir_y = C_Lrb_Raster2_target_dir_y;
    Lrb_Raster2_target_dir_z = C_Lrb_Raster2_target_dir_z;
    Lrb_Raster2_target_x = C_Lrb_Raster2_target_x;
    Lrb_Raster2_target_y = C_Lrb_Raster2_target_y;
    Lrb_Raster2_target_z = C_Lrb_Raster2_target_z;
    Lrb_dir_x = C_Lrb_dir_x;
    Lrb_dir_y = C_Lrb_dir_y;
    Lrb_dir_z = C_Lrb_dir_z;
    Lrb_e = C_Lrb_e;
    Lrb_ok = C_Lrb_ok;
    Lrb_p = C_Lrb_p;
    Lrb_ph = C_Lrb_ph;
    Lrb_pol = C_Lrb_pol;
    Lrb_px = C_Lrb_px;
    Lrb_py = C_Lrb_py;
    Lrb_pz = C_Lrb_pz;
    Lrb_th = C_Lrb_th;
    Lrb_x = C_Lrb_x;
    Lrb_xpos = C_Lrb_xpos;
    Lrb_y = C_Lrb_y;
    Lrb_ypos = C_Lrb_ypos;
    Lrb_z = C_Lrb_z;
    Lrb_zpos = C_Lrb_zpos;
    SBSrb_BPMA_rawcur_1 = C_SBSrb_BPMA_rawcur_1;
    SBSrb_BPMA_rawcur_2 = C_SBSrb_BPMA_rawcur_2;
    SBSrb_BPMA_rawcur_3 = C_SBSrb_BPMA_rawcur_3;
    SBSrb_BPMA_rawcur_4 = C_SBSrb_BPMA_rawcur_4;
    SBSrb_BPMA_rotpos1 = C_SBSrb_BPMA_rotpos1;
    SBSrb_BPMA_rotpos2 = C_SBSrb_BPMA_rotpos2;
    SBSrb_BPMA_x = C_SBSrb_BPMA_x;
    SBSrb_BPMA_y = C_SBSrb_BPMA_y;
    SBSrb_BPMA_z = C_SBSrb_BPMA_z;
    SBSrb_BPMB_rawcur_1 = C_SBSrb_BPMB_rawcur_1;
    SBSrb_BPMB_rawcur_2 = C_SBSrb_BPMB_rawcur_2;
    SBSrb_BPMB_rawcur_3 = C_SBSrb_BPMB_rawcur_3;
    SBSrb_BPMB_rawcur_4 = C_SBSrb_BPMB_rawcur_4;
    SBSrb_BPMB_rotpos1 = C_SBSrb_BPMB_rotpos1;
    SBSrb_BPMB_rotpos2 = C_SBSrb_BPMB_rotpos2;
    SBSrb_BPMB_x = C_SBSrb_BPMB_x;
    SBSrb_BPMB_y = C_SBSrb_BPMB_y;
    SBSrb_BPMB_z = C_SBSrb_BPMB_z;
    SBSrb_Raster_bpma_x = C_SBSrb_Raster_bpma_x;
    SBSrb_Raster_bpma_y = C_SBSrb_Raster_bpma_y;
    SBSrb_Raster_bpma_z = C_SBSrb_Raster_bpma_z;
    SBSrb_Raster_bpmb_x = C_SBSrb_Raster_bpmb_x;
    SBSrb_Raster_bpmb_y = C_SBSrb_Raster_bpmb_y;
    SBSrb_Raster_bpmb_z = C_SBSrb_Raster_bpmb_z;
    SBSrb_Raster_rawcur_x = C_SBSrb_Raster_rawcur_x;
    SBSrb_Raster_rawcur_y = C_SBSrb_Raster_rawcur_y;
    SBSrb_Raster_rawslope_x = C_SBSrb_Raster_rawslope_x;
    SBSrb_Raster_rawslope_y = C_SBSrb_Raster_rawslope_y;
    SBSrb_Raster_target_dir_x = C_SBSrb_Raster_target_dir_x;
    SBSrb_Raster_target_dir_y = C_SBSrb_Raster_target_dir_y;
    SBSrb_Raster_target_dir_z = C_SBSrb_Raster_target_dir_z;
    SBSrb_Raster_target_x = C_SBSrb_Raster_target_x;
    SBSrb_Raster_target_y = C_SBSrb_Raster_target_y;
    SBSrb_Raster_target_z = C_SBSrb_Raster_target_z;
    SBSrb_Raster2_bpma_x = C_SBSrb_Raster2_bpma_x;
    SBSrb_Raster2_bpma_y = C_SBSrb_Raster2_bpma_y;
    SBSrb_Raster2_bpma_z = C_SBSrb_Raster2_bpma_z;
    SBSrb_Raster2_bpmb_x = C_SBSrb_Raster2_bpmb_x;
    SBSrb_Raster2_bpmb_y = C_SBSrb_Raster2_bpmb_y;
    SBSrb_Raster2_bpmb_z = C_SBSrb_Raster2_bpmb_z;
    SBSrb_Raster2_rawcur_x = C_SBSrb_Raster2_rawcur_x;
    SBSrb_Raster2_rawcur_y = C_SBSrb_Raster2_rawcur_y;
    SBSrb_Raster2_rawslope_x = C_SBSrb_Raster2_rawslope_x;
    SBSrb_Raster2_rawslope_y = C_SBSrb_Raster2_rawslope_y;
    SBSrb_Raster2_target_dir_x = C_SBSrb_Raster2_target_dir_x;
    SBSrb_Raster2_target_dir_y = C_SBSrb_Raster2_target_dir_y;
    SBSrb_Raster2_target_dir_z = C_SBSrb_Raster2_target_dir_z;
    SBSrb_Raster2_target_x = C_SBSrb_Raster2_target_x;
    SBSrb_Raster2_target_y = C_SBSrb_Raster2_target_y;
    SBSrb_Raster2_target_z = C_SBSrb_Raster2_target_z;
    SBSrb_dir_x = C_SBSrb_dir_x;
    SBSrb_dir_y = C_SBSrb_dir_y;
    SBSrb_dir_z = C_SBSrb_dir_z;
    SBSrb_e = C_SBSrb_e;
    SBSrb_ok = C_SBSrb_ok;
    SBSrb_p = C_SBSrb_p;
    SBSrb_ph = C_SBSrb_ph;
    SBSrb_pol = C_SBSrb_pol;
    SBSrb_px = C_SBSrb_px;
    SBSrb_py = C_SBSrb_py;
    SBSrb_pz = C_SBSrb_pz;
    SBSrb_th = C_SBSrb_th;
    SBSrb_x = C_SBSrb_x;
    SBSrb_xpos = C_SBSrb_xpos;
    SBSrb_y = C_SBSrb_y;
    SBSrb_ypos = C_SBSrb_ypos;
    SBSrb_z = C_SBSrb_z;
    SBSrb_zpos = C_SBSrb_zpos;
    bb_gem_hit_ngoodhits = C_bb_gem_hit_ngoodhits;
    bb_gem_m0_clust_nclustu = C_bb_gem_m0_clust_nclustu;
    bb_gem_m0_clust_nclustu_tot = C_bb_gem_m0_clust_nclustu_tot;
    bb_gem_m0_clust_nclustv = C_bb_gem_m0_clust_nclustv;
    bb_gem_m0_clust_nclustv_tot = C_bb_gem_m0_clust_nclustv_tot;
    bb_gem_m0_strip_nstrips_keep = C_bb_gem_m0_strip_nstrips_keep;
    bb_gem_m0_strip_nstrips_keepU = C_bb_gem_m0_strip_nstrips_keepU;
    bb_gem_m0_strip_nstrips_keepV = C_bb_gem_m0_strip_nstrips_keepV;
    bb_gem_m0_strip_nstrips_keep_lmax = C_bb_gem_m0_strip_nstrips_keep_lmax;
    bb_gem_m0_strip_nstrips_keep_lmaxU = C_bb_gem_m0_strip_nstrips_keep_lmaxU;
    bb_gem_m0_strip_nstrips_keep_lmaxV = C_bb_gem_m0_strip_nstrips_keep_lmaxV;
    bb_gem_m0_strip_nstripsfired = C_bb_gem_m0_strip_nstripsfired;
    bb_gem_m1_clust_nclustu = C_bb_gem_m1_clust_nclustu;
    bb_gem_m1_clust_nclustu_tot = C_bb_gem_m1_clust_nclustu_tot;
    bb_gem_m1_clust_nclustv = C_bb_gem_m1_clust_nclustv;
    bb_gem_m1_clust_nclustv_tot = C_bb_gem_m1_clust_nclustv_tot;
    bb_gem_m1_strip_nstrips_keep = C_bb_gem_m1_strip_nstrips_keep;
    bb_gem_m1_strip_nstrips_keepU = C_bb_gem_m1_strip_nstrips_keepU;
    bb_gem_m1_strip_nstrips_keepV = C_bb_gem_m1_strip_nstrips_keepV;
    bb_gem_m1_strip_nstrips_keep_lmax = C_bb_gem_m1_strip_nstrips_keep_lmax;
    bb_gem_m1_strip_nstrips_keep_lmaxU = C_bb_gem_m1_strip_nstrips_keep_lmaxU;
    bb_gem_m1_strip_nstrips_keep_lmaxV = C_bb_gem_m1_strip_nstrips_keep_lmaxV;
    bb_gem_m1_strip_nstripsfired = C_bb_gem_m1_strip_nstripsfired;
    bb_gem_m10_clust_nclustu = C_bb_gem_m10_clust_nclustu;
    bb_gem_m10_clust_nclustu_tot = C_bb_gem_m10_clust_nclustu_tot;
    bb_gem_m10_clust_nclustv = C_bb_gem_m10_clust_nclustv;
    bb_gem_m10_clust_nclustv_tot = C_bb_gem_m10_clust_nclustv_tot;
    bb_gem_m10_strip_nstrips_keep = C_bb_gem_m10_strip_nstrips_keep;
    bb_gem_m10_strip_nstrips_keepU = C_bb_gem_m10_strip_nstrips_keepU;
    bb_gem_m10_strip_nstrips_keepV = C_bb_gem_m10_strip_nstrips_keepV;
    bb_gem_m10_strip_nstrips_keep_lmax = C_bb_gem_m10_strip_nstrips_keep_lmax;
    bb_gem_m10_strip_nstrips_keep_lmaxU = C_bb_gem_m10_strip_nstrips_keep_lmaxU;
    bb_gem_m10_strip_nstrips_keep_lmaxV = C_bb_gem_m10_strip_nstrips_keep_lmaxV;
    bb_gem_m10_strip_nstripsfired = C_bb_gem_m10_strip_nstripsfired;
    bb_gem_m11_clust_nclustu = C_bb_gem_m11_clust_nclustu;
    bb_gem_m11_clust_nclustu_tot = C_bb_gem_m11_clust_nclustu_tot;
    bb_gem_m11_clust_nclustv = C_bb_gem_m11_clust_nclustv;
    bb_gem_m11_clust_nclustv_tot = C_bb_gem_m11_clust_nclustv_tot;
    bb_gem_m11_strip_nstrips_keep = C_bb_gem_m11_strip_nstrips_keep;
    bb_gem_m11_strip_nstrips_keepU = C_bb_gem_m11_strip_nstrips_keepU;
    bb_gem_m11_strip_nstrips_keepV = C_bb_gem_m11_strip_nstrips_keepV;
    bb_gem_m11_strip_nstrips_keep_lmax = C_bb_gem_m11_strip_nstrips_keep_lmax;
    bb_gem_m11_strip_nstrips_keep_lmaxU = C_bb_gem_m11_strip_nstrips_keep_lmaxU;
    bb_gem_m11_strip_nstrips_keep_lmaxV = C_bb_gem_m11_strip_nstrips_keep_lmaxV;
    bb_gem_m11_strip_nstripsfired = C_bb_gem_m11_strip_nstripsfired;
    bb_gem_m2_clust_nclustu = C_bb_gem_m2_clust_nclustu;
    bb_gem_m2_clust_nclustu_tot = C_bb_gem_m2_clust_nclustu_tot;
    bb_gem_m2_clust_nclustv = C_bb_gem_m2_clust_nclustv;
    bb_gem_m2_clust_nclustv_tot = C_bb_gem_m2_clust_nclustv_tot;
    bb_gem_m2_strip_nstrips_keep = C_bb_gem_m2_strip_nstrips_keep;
    bb_gem_m2_strip_nstrips_keepU = C_bb_gem_m2_strip_nstrips_keepU;
    bb_gem_m2_strip_nstrips_keepV = C_bb_gem_m2_strip_nstrips_keepV;
    bb_gem_m2_strip_nstrips_keep_lmax = C_bb_gem_m2_strip_nstrips_keep_lmax;
    bb_gem_m2_strip_nstrips_keep_lmaxU = C_bb_gem_m2_strip_nstrips_keep_lmaxU;
    bb_gem_m2_strip_nstrips_keep_lmaxV = C_bb_gem_m2_strip_nstrips_keep_lmaxV;
    bb_gem_m2_strip_nstripsfired = C_bb_gem_m2_strip_nstripsfired;
    bb_gem_m3_clust_nclustu = C_bb_gem_m3_clust_nclustu;
    bb_gem_m3_clust_nclustu_tot = C_bb_gem_m3_clust_nclustu_tot;
    bb_gem_m3_clust_nclustv = C_bb_gem_m3_clust_nclustv;
    bb_gem_m3_clust_nclustv_tot = C_bb_gem_m3_clust_nclustv_tot;
    bb_gem_m3_strip_nstrips_keep = C_bb_gem_m3_strip_nstrips_keep;
    bb_gem_m3_strip_nstrips_keepU = C_bb_gem_m3_strip_nstrips_keepU;
    bb_gem_m3_strip_nstrips_keepV = C_bb_gem_m3_strip_nstrips_keepV;
    bb_gem_m3_strip_nstrips_keep_lmax = C_bb_gem_m3_strip_nstrips_keep_lmax;
    bb_gem_m3_strip_nstrips_keep_lmaxU = C_bb_gem_m3_strip_nstrips_keep_lmaxU;
    bb_gem_m3_strip_nstrips_keep_lmaxV = C_bb_gem_m3_strip_nstrips_keep_lmaxV;
    bb_gem_m3_strip_nstripsfired = C_bb_gem_m3_strip_nstripsfired;
    bb_gem_m4_clust_nclustu = C_bb_gem_m4_clust_nclustu;
    bb_gem_m4_clust_nclustu_tot = C_bb_gem_m4_clust_nclustu_tot;
    bb_gem_m4_clust_nclustv = C_bb_gem_m4_clust_nclustv;
    bb_gem_m4_clust_nclustv_tot = C_bb_gem_m4_clust_nclustv_tot;
    bb_gem_m4_strip_nstrips_keep = C_bb_gem_m4_strip_nstrips_keep;
    bb_gem_m4_strip_nstrips_keepU = C_bb_gem_m4_strip_nstrips_keepU;
    bb_gem_m4_strip_nstrips_keepV = C_bb_gem_m4_strip_nstrips_keepV;
    bb_gem_m4_strip_nstrips_keep_lmax = C_bb_gem_m4_strip_nstrips_keep_lmax;
    bb_gem_m4_strip_nstrips_keep_lmaxU = C_bb_gem_m4_strip_nstrips_keep_lmaxU;
    bb_gem_m4_strip_nstrips_keep_lmaxV = C_bb_gem_m4_strip_nstrips_keep_lmaxV;
    bb_gem_m4_strip_nstripsfired = C_bb_gem_m4_strip_nstripsfired;
    bb_gem_m5_clust_nclustu = C_bb_gem_m5_clust_nclustu;
    bb_gem_m5_clust_nclustu_tot = C_bb_gem_m5_clust_nclustu_tot;
    bb_gem_m5_clust_nclustv = C_bb_gem_m5_clust_nclustv;
    bb_gem_m5_clust_nclustv_tot = C_bb_gem_m5_clust_nclustv_tot;
    bb_gem_m5_strip_nstrips_keep = C_bb_gem_m5_strip_nstrips_keep;
    bb_gem_m5_strip_nstrips_keepU = C_bb_gem_m5_strip_nstrips_keepU;
    bb_gem_m5_strip_nstrips_keepV = C_bb_gem_m5_strip_nstrips_keepV;
    bb_gem_m5_strip_nstrips_keep_lmax = C_bb_gem_m5_strip_nstrips_keep_lmax;
    bb_gem_m5_strip_nstrips_keep_lmaxU = C_bb_gem_m5_strip_nstrips_keep_lmaxU;
    bb_gem_m5_strip_nstrips_keep_lmaxV = C_bb_gem_m5_strip_nstrips_keep_lmaxV;
    bb_gem_m5_strip_nstripsfired = C_bb_gem_m5_strip_nstripsfired;
    bb_gem_m6_clust_nclustu = C_bb_gem_m6_clust_nclustu;
    bb_gem_m6_clust_nclustu_tot = C_bb_gem_m6_clust_nclustu_tot;
    bb_gem_m6_clust_nclustv = C_bb_gem_m6_clust_nclustv;
    bb_gem_m6_clust_nclustv_tot = C_bb_gem_m6_clust_nclustv_tot;
    bb_gem_m6_strip_nstrips_keep = C_bb_gem_m6_strip_nstrips_keep;
    bb_gem_m6_strip_nstrips_keepU = C_bb_gem_m6_strip_nstrips_keepU;
    bb_gem_m6_strip_nstrips_keepV = C_bb_gem_m6_strip_nstrips_keepV;
    bb_gem_m6_strip_nstrips_keep_lmax = C_bb_gem_m6_strip_nstrips_keep_lmax;
    bb_gem_m6_strip_nstrips_keep_lmaxU = C_bb_gem_m6_strip_nstrips_keep_lmaxU;
    bb_gem_m6_strip_nstrips_keep_lmaxV = C_bb_gem_m6_strip_nstrips_keep_lmaxV;
    bb_gem_m6_strip_nstripsfired = C_bb_gem_m6_strip_nstripsfired;
    bb_gem_m7_clust_nclustu = C_bb_gem_m7_clust_nclustu;
    bb_gem_m7_clust_nclustu_tot = C_bb_gem_m7_clust_nclustu_tot;
    bb_gem_m7_clust_nclustv = C_bb_gem_m7_clust_nclustv;
    bb_gem_m7_clust_nclustv_tot = C_bb_gem_m7_clust_nclustv_tot;
    bb_gem_m7_strip_nstrips_keep = C_bb_gem_m7_strip_nstrips_keep;
    bb_gem_m7_strip_nstrips_keepU = C_bb_gem_m7_strip_nstrips_keepU;
    bb_gem_m7_strip_nstrips_keepV = C_bb_gem_m7_strip_nstrips_keepV;
    bb_gem_m7_strip_nstrips_keep_lmax = C_bb_gem_m7_strip_nstrips_keep_lmax;
    bb_gem_m7_strip_nstrips_keep_lmaxU = C_bb_gem_m7_strip_nstrips_keep_lmaxU;
    bb_gem_m7_strip_nstrips_keep_lmaxV = C_bb_gem_m7_strip_nstrips_keep_lmaxV;
    bb_gem_m7_strip_nstripsfired = C_bb_gem_m7_strip_nstripsfired;
    bb_gem_m8_clust_nclustu = C_bb_gem_m8_clust_nclustu;
    bb_gem_m8_clust_nclustu_tot = C_bb_gem_m8_clust_nclustu_tot;
    bb_gem_m8_clust_nclustv = C_bb_gem_m8_clust_nclustv;
    bb_gem_m8_clust_nclustv_tot = C_bb_gem_m8_clust_nclustv_tot;
    bb_gem_m8_strip_nstrips_keep = C_bb_gem_m8_strip_nstrips_keep;
    bb_gem_m8_strip_nstrips_keepU = C_bb_gem_m8_strip_nstrips_keepU;
    bb_gem_m8_strip_nstrips_keepV = C_bb_gem_m8_strip_nstrips_keepV;
    bb_gem_m8_strip_nstrips_keep_lmax = C_bb_gem_m8_strip_nstrips_keep_lmax;
    bb_gem_m8_strip_nstrips_keep_lmaxU = C_bb_gem_m8_strip_nstrips_keep_lmaxU;
    bb_gem_m8_strip_nstrips_keep_lmaxV = C_bb_gem_m8_strip_nstrips_keep_lmaxV;
    bb_gem_m8_strip_nstripsfired = C_bb_gem_m8_strip_nstripsfired;
    bb_gem_m9_clust_nclustu = C_bb_gem_m9_clust_nclustu;
    bb_gem_m9_clust_nclustu_tot = C_bb_gem_m9_clust_nclustu_tot;
    bb_gem_m9_clust_nclustv = C_bb_gem_m9_clust_nclustv;
    bb_gem_m9_clust_nclustv_tot = C_bb_gem_m9_clust_nclustv_tot;
    bb_gem_m9_strip_nstrips_keep = C_bb_gem_m9_strip_nstrips_keep;
    bb_gem_m9_strip_nstrips_keepU = C_bb_gem_m9_strip_nstrips_keepU;
    bb_gem_m9_strip_nstrips_keepV = C_bb_gem_m9_strip_nstrips_keepV;
    bb_gem_m9_strip_nstrips_keep_lmax = C_bb_gem_m9_strip_nstrips_keep_lmax;
    bb_gem_m9_strip_nstrips_keep_lmaxU = C_bb_gem_m9_strip_nstrips_keep_lmaxU;
    bb_gem_m9_strip_nstrips_keep_lmaxV = C_bb_gem_m9_strip_nstrips_keep_lmaxV;
    bb_gem_m9_strip_nstripsfired = C_bb_gem_m9_strip_nstripsfired;
    bb_gem_nlayershit = C_bb_gem_nlayershit;
    bb_gem_nlayershitu = C_bb_gem_nlayershitu;
    bb_gem_nlayershituv = C_bb_gem_nlayershituv;
    bb_gem_nlayershitv = C_bb_gem_nlayershitv;
    bb_gem_track_besttrack = C_bb_gem_track_besttrack;
    bb_gem_track_ntrack = C_bb_gem_track_ntrack;
    bb_grinch_tdc_ngoodhits = C_bb_grinch_tdc_ngoodhits;
    bb_hodotdc_nclus = C_bb_hodotdc_nclus;
    bb_ps_atimeblk = C_bb_ps_atimeblk;
    bb_ps_colblk = C_bb_ps_colblk;
    bb_ps_e = C_bb_ps_e;
    bb_ps_e_c = C_bb_ps_e_c;
    bb_ps_eblk = C_bb_ps_eblk;
    bb_ps_eblk_c = C_bb_ps_eblk_c;
    bb_ps_idblk = C_bb_ps_idblk;
    bb_ps_index = C_bb_ps_index;
    bb_ps_nblk = C_bb_ps_nblk;
    bb_ps_nclus = C_bb_ps_nclus;
    bb_ps_ngoodADChits = C_bb_ps_ngoodADChits;
    bb_ps_rowblk = C_bb_ps_rowblk;
    bb_ps_x = C_bb_ps_x;
    bb_ps_y = C_bb_ps_y;
    bb_sh_atimeblk = C_bb_sh_atimeblk;
    bb_sh_colblk = C_bb_sh_colblk;
    bb_sh_e = C_bb_sh_e;
    bb_sh_e_c = C_bb_sh_e_c;
    bb_sh_eblk = C_bb_sh_eblk;
    bb_sh_eblk_c = C_bb_sh_eblk_c;
    bb_sh_idblk = C_bb_sh_idblk;
    bb_sh_index = C_bb_sh_index;
    bb_sh_nblk = C_bb_sh_nblk;
    bb_sh_nclus = C_bb_sh_nclus;
    bb_sh_ngoodADChits = C_bb_sh_ngoodADChits;
    bb_sh_rowblk = C_bb_sh_rowblk;
    bb_sh_x = C_bb_sh_x;
    bb_sh_y = C_bb_sh_y;
    bb_tr_n = C_bb_tr_n;
    bb_ts_over_threshold = C_bb_ts_over_threshold;
    e_kine_Q2 = C_e_kine_Q2;
    e_kine_W2 = C_e_kine_W2;
    e_kine_angle = C_e_kine_angle;
    e_kine_epsilon = C_e_kine_epsilon;
    e_kine_nu = C_e_kine_nu;
    e_kine_omega = C_e_kine_omega;
    e_kine_ph_q = C_e_kine_ph_q;
    e_kine_q3m = C_e_kine_q3m;
    e_kine_q_x = C_e_kine_q_x;
    e_kine_q_y = C_e_kine_q_y;
    e_kine_q_z = C_e_kine_q_z;
    e_kine_th_q = C_e_kine_th_q;
    e_kine_x_bj = C_e_kine_x_bj;
    sbs_hcal_atimeblk = C_sbs_hcal_atimeblk;
    sbs_hcal_colblk = C_sbs_hcal_colblk;
    sbs_hcal_e = C_sbs_hcal_e;
    sbs_hcal_e_c = C_sbs_hcal_e_c;
    sbs_hcal_eblk = C_sbs_hcal_eblk;
    sbs_hcal_eblk_c = C_sbs_hcal_eblk_c;
    sbs_hcal_idblk = C_sbs_hcal_idblk;
    sbs_hcal_index = C_sbs_hcal_index;
    sbs_hcal_nblk = C_sbs_hcal_nblk;
    sbs_hcal_nclus = C_sbs_hcal_nclus;
    sbs_hcal_ngoodADChits = C_sbs_hcal_ngoodADChits;
    sbs_hcal_rowblk = C_sbs_hcal_rowblk;
    sbs_hcal_tdctimeblk = C_sbs_hcal_tdctimeblk;
    sbs_hcal_x = C_sbs_hcal_x;
    sbs_hcal_y = C_sbs_hcal_y;
    singletrack = C_singletrack;
    anytrack = C_anytrack;
    halla_p = C_halla_p;
    hac_bcm_average = C_hac_bcm_average;
    IPM1H04A_XPOS = C_IPM1H04A_XPOS;
    IPM1H04A_YPOS = C_IPM1H04A_YPOS;
    IPM1H04E_XPOS = C_IPM1H04E_XPOS;
    IPM1H04E_YPOS = C_IPM1H04E_YPOS;
    IBC1H04CRCUR2 = C_IBC1H04CRCUR2;
    hac_bcm_dvm1_read = C_hac_bcm_dvm1_read;
    hac_bcm_dvm2_read = C_hac_bcm_dvm2_read;
    hac_bcm_dvm1_current = C_hac_bcm_dvm1_current;
    hac_bcm_dvm2_current = C_hac_bcm_dvm2_current;
    hac_bcm_A1 = C_hac_bcm_A1;
    hac_bcm_A2 = C_hac_bcm_A2;
    HALLA_p = C_HALLA_p;
    //fEvtHdr_fEvtTime = C_fEvtHdr_fEvtTime;
    fEvtHdr_fEvtNum = C_fEvtHdr_fEvtNum;
    fEvtHdr_fEvtType = C_fEvtHdr_fEvtType;
    fEvtHdr_fEvtLen = C_fEvtHdr_fEvtLen;
    fEvtHdr_fHelicity = C_fEvtHdr_fHelicity;
    fEvtHdr_fTrigBits = C_fEvtHdr_fTrigBits;
    fEvtHdr_fRun = C_fEvtHdr_fRun;

    ////////////////////////////////////////////////////////////////

    //cout << C_bb_tr_x[0] << endl;
    //cout << bb_tr_x[0] << endl;

    //cout << C_BB_gold_p << endl;
    //cout << BB_gold_p << endl;
    

    R->Fill();

    globalpass++;

  }
  
  cout << endl << endl << globalpass << "/" << NTevents << endl;

  fout->Write();
  fout->Close();
  
  cout << "All files parsed and written to file." << endl;
  
}
