//sseeds 11.22.22 Short file used to test alternative fitting methods

#include "TFile.h"
#include "TH1.h"
#include "TF1.h"
#include "TMath.h"
#include "TVirtualFitter.h"

TF1 *fpol;
Int_t npol;

//const Int_t npeaks = 2;
const Int_t npeaks = 8;

Double_t fpeaks(Double_t *x, Double_t *par){
  Double_t result = fpol->EvalPar(x,par);
  for (Int_t p=0;p<npeaks;p++){
    Double_t norm = par[3*p+npol];
    Double_t mean = par[3*p+npol+1];
    Double_t sigma = par[3*p+npol+2];
    result += norm*TMath::Gaus(x[0],mean,sigma);
  }
  return result;
}

void testfit(){
  TFile *f = TFile::Open("hist.root");
  TH1 *h = (TH1*)f->Get("newhist");
  //fit bg w/pol3
  //fpol = new TF1("fpol","pol3",-2,1.5);
  fpol = new TF1("fpol","pol3",60,550);
  npol = fpol->GetNpar();
  h->Fit("fpol","0");
  //Double_t xpeak[npeaks] = {-0.7,0.0};
  Double_t xpeak[npeaks] = {73.5,84.7,310.5,339,398,415,482,509.7};
  //Double_t sigma[npeaks] = {0.2,0.2};
  Double_t sigma[npeaks] = {2,2,2,2,2,2,20,1.5};
  //Double_t amp[npeaks] = {5300,2000};
  Double_t amp[npeaks] = {100,100,100,100,100,200,300,6000};
  Double_t par[100];
  for (Int_t ip=0;ip<npol;ip++) par[ip] = fpol->GetParameter(ip);
  //TF1 *fp = new TF1("fp",fpeaks,-2,1.5,npol+3*npeaks);
  TF1 *fp = new TF1("fp",fpeaks,60,550,npol+3*npeaks);
  for (Int_t i=0;i<npeaks,i++){
    fp->SetParameter(3*i+npol,1000*amp[i]);
    fp->SetParameter(3*i+npol+1,xpeak[i]);
    fp->SetParameter(3*i+npol+1,xpeak[i]-1,xpeak[i]+1);
    fp->SetParameter(3*i+npol+2,sigma[i]);
    fp->SetParameter(3*i+npol+2,0.5,3*sigma[i]);
  }
  fp->SetNpx(10000);
 TVirtualFitter:SetMaxIterations(20000);
  h->Fit(fp,"rw");
}
