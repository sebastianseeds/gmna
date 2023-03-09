#include <TSystem.h>
#include <TChain.h>
#include <TString.h>
#include "TFile.h"
#include "TTree.h"
#include <TNtuple.h>
#include "TCanvas.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include "TMath.h"
#include "TH1F.h"
#include <TH2.h>
#include <TStyle.h>
#include <TGraph.h>
#include <TROOT.h>
#include <TMath.h>
#include <TLegend.h>
#include <TPaveLabel.h>
#include <TProfile.h>
#include <TPolyLine.h>
#include <TObjArray.h>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include<math.h>
#include <stack>
#include "TLorentzVector.h"
#include "TCut.h"
#include "TLatex.h"
using namespace std;


//global variables
const int maxTracks = 16; 
const double PI = TMath::Pi();
const double M_e = 0.0051;
const double M_p = 0.938272;
const double M_n = 0.939565;

const double hcalheight = -0.2897;
//function declarations


void dxdydraft(const char *configfilename = "setup_gmn.cfg",const char *outputfilename="gmn_out.root"){//main
  
  // TChain *fchain = new TChain("T");
  // while( currentline.ReadLine( configfile ) && !currentline.BeginsWith("endlist") ) {
  //    if( !currentline.BeginsWith("#") ){
  //     cout << " add file : " << currentline << endl;
  //     fchain->Add(currentline);
  //   }   
  // } 

  TChain *C = new TChain("T");
  //C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11595_stream0_seg10_19.root");

  //C->Add("/lustre19/expphy/volatile/halla/sbs/seeds/simulation/replayed_gmn_sbs4*");

  //C->Add("/work/halla/sbs/sbs-gmn/pass1/SBS9/LH2/rootfiles/e1209019_fullreplay_13747*");
  C->Add("/work/halla/sbs/sbs-gmn/pass1/SBS9/LD2/rootfiles/e1209019_fullreplay_13732*");


  cout << "Total entries from files: " << C->GetEntries() << endl;

  /*
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11449*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11496*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11451*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11551*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11554*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11452*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11562*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11564*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11563*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11570*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11495*");
  C->Add("/w/halla-scshelf2102/sbs/sbs-gmn/pass0/SBS4/LD2/rootfiles/e1209019_fullreplay_11568*");
  */

  //SBS 4
  /*
  double E_e = 3.728;
  double BB_d = 1.7988;
  double BB_th = 36.0;
  double HCal_d =11.0;
  double HCal_th = 31.9;
  double W2_mean = 1.00;
  double W2_sig = 0.24;
  double dy_mean = -1.687;
  double dy_sig = 0.69;

  //TCut globalcut = "bb.tr.n==1&&bb.ps.e>0.2&&abs(bb.tr.vz[0])<0.08&&sbs.hcal.e>0.025&&bb.ps.e+bb.sh.e>1.7";
  //TCut globalcut = "bb.ps.e>0.2&&sbs.hcal.e>0.040";
  TCut globalcut = "sbs.hcal.e>0.040";
  */
  //SBS 8
  /*
  double E_e = 5.965;
  double BB_d = 1.97473;
  double BB_th = 26.5;
  double HCal_d =11.0;
  double HCal_th = 29.4;
  double W2_mean = 1.00;
  double W2_sig = 0.24;

  //TCut globalcut = "bb.tr.n==1&&bb.ps.e>0.2&&abs(bb.tr.vz[0])<0.08&&sbs.hcal.e>0.13&&bb.ps.e+bb.sh.e>3.2";
  
  TCut globalcut = "bb.tr.n==1";
*/
  //SBS 9
  
  double E_e = 4.013;
  double BB_d = 1.550;
  double BB_th = 49.0*TMath::DegToRad();
  double HCal_d =11.0;
  double HCal_th = 22.0*TMath::DegToRad();
  double W2_mean = 0.98;
  double W2_sig = 0.35;
  double dy_mean = -0.0276561;
  double dy_sig = 0.283612;

  //TCut globalcut = "bb.tr.n==1&&bb.ps.e>0.2&&abs(bb.tr.vz[0])<.08&&sbs.hcal.e>0.025&&bb.ps.e+bb.sh.e>1.7";

  TCut globalcut = "bb.tr.n==1&&bb.ps.e>0.2&&abs(bb.tr.vz[0])<.08&&bb.gem.track.nhits>3&&abs(bb.etot_over_p-0.92)<0.2&&sbs.hcal.e>0.025&&bb.ps.e+bb.sh.e>1.5";

  //TCut globalcut = "bb.tr.n==1&&bb.ps.e>0.2&&sbs.hcal.e>0.130&&bb.ps.e+bb.sh.e>1.5";

  //TCut globalcut = "bb.tr.n==1";
  
  TEventList *elist = new TEventList("elist","Elastic Event List");
  C->Draw(">>elist",globalcut);

  double BBtr_p[maxTracks], BBtr_px[maxTracks], BBtr_py[maxTracks], BBtr_pz[maxTracks];
  double BBtr_vz[maxTracks];
  //double BBtgt_x[maxTracks], BBtgt_y[maxTracks], BBtgt_th[maxTracks], BBtgt_ph[maxTracks];
  double BBtr_n, BBps_x, BBps_y, BBps_e, BBsh_x, BBsh_y, BBsh_e;
  double HCALx, HCALy, HCALe, ekineW2;


  C ->SetBranchStatus("*",0);

  C->SetBranchStatus("sbs.hcal.x",1);
  C->SetBranchStatus("sbs.hcal.y",1);
  C->SetBranchStatus("sbs.hcal.e",1);
  C->SetBranchStatus("bb.tr.n",1);
  C->SetBranchStatus("bb.tr.px",1);
  C->SetBranchStatus("bb.tr.py",1);
  C->SetBranchStatus("bb.tr.pz",1);
  C->SetBranchStatus("bb.tr.p",1);
  C->SetBranchStatus("bb.tr.vz",1);
  C->SetBranchStatus("bb.ps.e",1);
  C->SetBranchStatus("bb.ps.x",1);
  C->SetBranchStatus("bb.ps.y",1);
  C->SetBranchStatus("bb.sh.e",1);
  C->SetBranchStatus("bb.sh.x",1);
  C->SetBranchStatus("bb.sh.y",1);
  //C->SetBranchStatus("e.kine.W2",1);


  C->SetBranchAddress("sbs.hcal.x", &HCALx);
  C->SetBranchAddress("sbs.hcal.y", &HCALy);
  C->SetBranchAddress("sbs.hcal.e", &HCALe);
  C->SetBranchAddress("bb.tr.n", &BBtr_n);
  C->SetBranchAddress("bb.tr.px", BBtr_px);
  C->SetBranchAddress("bb.tr.py", BBtr_py);
  C->SetBranchAddress("bb.tr.pz", BBtr_pz);
  C->SetBranchAddress("bb.tr.p", BBtr_p);
  C->SetBranchAddress("bb.tr.vz", BBtr_vz);
  C->SetBranchAddress("bb.ps.e", &BBps_e);
  C->SetBranchAddress("bb.ps.x", &BBps_x);
  C->SetBranchAddress("bb.ps.y", &BBps_y);
  C->SetBranchAddress("bb.sh.e", &BBsh_e);
  C->SetBranchAddress("bb.sh.x", &BBsh_x);
  C->SetBranchAddress("bb.sh.y", &BBsh_y);

  //C->SetBranchAddress("e.kine.W2", &ekineW2);

  TFile *fout = new TFile(outputfilename,"RECREATE");

  TH1D *hdx_HCAL = new TH1D("hdx_HCAL ", " ; x_{HCAL} - x_{exp} (m)  ", 250,-4,3);
  TH1D *hdx_HCAL_money = new TH1D("hdx_HCAL_money ", " ; x_{HCAL} - x_{exp} (m)  ", 250,-4,3);
  TH1D *hdy_HCAL = new TH1D("hdy_HCAL","; y_{HCAL} - y_{exp} (m);", 250, -1.25,1.25);
  TH1D *hW2 = new TH1D("hW2", " ;GeV2  ", 100,0,5);
  TH1D *hQ2 = new TH1D("hQ2", " ;GeV2  ", 150,0,15);

  Long64_t mark = 0;

  Long64_t Nevents = elist ->GetN();
  
  cout << Nevents << " passed global cut." << endl;

  for( Long64_t nevent = 1; nevent <Nevents; nevent++){

    if (nevent%1000==0) cout << " Entry = " << nevent << endl;
    
    C->GetEntry(elist ->GetEntry(nevent)); 
    
    double etheta = acos( BBtr_pz[0]/BBtr_p[0]);
    double ephi = atan2(BBtr_py[0],BBtr_px[0]);
    
    TVector3 vertex(0,0,BBtr_vz[0]);
    TLorentzVector Pbeam(0,0,E_e,E_e);
    TLorentzVector kprime(BBtr_px[0], BBtr_py[0], BBtr_pz[0], BBtr_p[0]);
    TLorentzVector Ptarg(0, 0, 0, M_p);

    TLorentzVector q = Pbeam - kprime;
    TLorentzVector PgammaN = Ptarg +q; //should go through and write this out. Momentum of virtual photon

    double pel = E_e/ (1. +E_e/M_p*(1.-cos(etheta)));//momentum of elastically scattered electron 
    double nu = E_e -BBtr_p[0]; //kinetic energy of the elasticlly scattered electron 
    double pp = sqrt(pow(nu,2)+2 *M_p*nu); 
    double phinucleon = ephi + PI; //coplanar 
    double thetanucleon = acos((E_e - BBtr_pz[0])/pp);

    TVector3 pNhat( sin(thetanucleon)*cos(phinucleon), sin(thetanucleon)*sin(phinucleon), cos(thetanucleon) );
    
    TVector3 HCAL_zaxis(sin(-HCal_th),0,cos(-HCal_th));
    TVector3 HCAL_xaxis(0,-1,0);
    TVector3 HCAL_yaxis = HCAL_zaxis.Cross(HCAL_xaxis).Unit();

    TVector3 HCAL_origin = HCal_d * HCAL_zaxis + hcalheight * HCAL_xaxis;

    double sintersect = ( HCAL_origin - vertex ).Dot( HCAL_zaxis) / (pNhat.Dot( HCAL_zaxis ) );
    
    TVector3 HCAL_intersect = vertex + sintersect * pNhat; 

    double yexpect_HCAL = (HCAL_intersect - HCAL_origin).Dot( HCAL_yaxis);
    double xexpect_HCAL =  (HCAL_intersect - HCAL_origin).Dot( HCAL_xaxis);



    double Q2 = 2*E_e *BBtr_p[0]*( 1-BBtr_pz[0]/BBtr_p[0]);
    
    double W = PgammaN.M();
    //double W2 = ekineW2;
    double W2 = pow(W,2);
    //double W2 = pow( M_p,2 )+2*M_p*nu-Q2;

    hW2->Fill(W2);
    hQ2->Fill(Q2);

    double dx = HCALx - xexpect_HCAL;
    double dy = HCALy - yexpect_HCAL;

    //cout << "HCALx " << HCALx << endl;
    //cout << "xexpect_HCAL " << xexpect_HCAL << endl;

    if (abs(W2 - W2_mean)>W2_sig ) continue; 

    //cout << dx << endl;
    hdy_HCAL->Fill(dy);
    hdx_HCAL->Fill(dx);

    if(abs(dy-dy_mean)>dy_sig || abs(Q2-4.8)>0.5) continue;

    hdx_HCAL_money->Fill(dx);

  }

  cout << "mark = " << mark;

  fout->Write();

}// end main







