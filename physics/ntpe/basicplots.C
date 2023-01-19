//SSeeds 1.18.23 - A simple script to make some plots with known values
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

void basicplots( const char *infile="" ){

  // Define a clock to check macro processing time
  TStopwatch *st = new TStopwatch();
  st->Start( kTRUE );

  // Get the date
  string date = getDate();

  // Declare some simple data points extracted
  Double_t Osig_r[2] = {0.00379,0.00387};
  Double_t Oeps[2] = {0.60,0.84};
  Double_t Oyint = 0.003568; //From the nTPE PAC presentation, EFuchey, 

  //Double_t slope = (Osig_r[1]-Osig_r[0])/(Oeps[1]-Oeps[0]);
  Double_t slope = 0.0003585;

  Double_t eps[4] = {0.0,0.523,0.804,1.0};
  Double_t sig_r[4] = {Oyint+eps[0]*slope,Oyint+eps[1]*slope,Oyint+eps[2]*slope,Oyint+eps[3]*slope};

  // Declare outfile
  TFile *fout = new TFile( "simpleplots.root", "RECREATE" );

  // Make graph
  TCanvas *c1 = new TCanvas("c1","c1",1200,600);

  c1->cd();
  TGraph *G1 = new TGraph(4,eps,sig_r);
  G1->GetXaxis()->SetLimits(0.0,1.0);  
  //G1->GetYaxis()->SetLimits(0.003,0.0044);
  G1->GetYaxis()->SetMaxDigits(3);
  G1->SetTitle("Example");
  G1->GetXaxis()->SetTitle("#epsilon");
  G1->GetXaxis()->CenterTitle(true);
  G1->GetYaxis()->SetTitle("#sigma_{r}");
  G1->GetYaxis()->CenterTitle(true);
  G1->SetMarkerColorAlpha(kWhite,1.0);
  G1->SetMarkerStyle(6);
  G1->Draw();
  //G1->Write("G1");

  //TMultiGraph *mg = new TMultiGraph();
  //mg->Add(G1,"1p")

  Double_t *nx = G1->GetX();
  Double_t *ny = G1->GetY();

  TMarker *m1 = new TMarker(nx[1],ny[1],8);
  m1->SetMarkerSize(3);
  m1->SetMarkerColor(3);
  m1->Draw();

  TMarker *m2 = new TMarker(nx[2],ny[2],21);
  m2->SetMarkerSize(3);
  m2->SetMarkerColor(6);
  m2->Draw();

  //  TLine *l1;
  //l1->SetLineColor(3);


  //TLegend *legend = new TLegend(0.1,0.7,0.48,0.9);
  //TLegendEntry *le1 = new TLegendEntry(
  //legend->SetTextSize(0.03);
  //legend->AddEntry(m1,"SBS-8","l");
  //legend->AddEntry(m2,"SBS-9","l");
  //legend->Draw();

  c1->Write();
  fout->Write();
  fout->Close();
  
  cout << "Plots written to file." << endl;
  
}
