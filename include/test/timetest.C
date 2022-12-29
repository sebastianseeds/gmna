#include "TRandom.h"
#include "TMath.h"
#include <ctime>
#include <chrono>
#include <iostream>

void timetest(){
  std::time_t t = std::time(0);

  cout << t << endl;
  gRandom->SetSeed(t);
  double RNG = gRandom->Uniform( 0.9, 1.1 );

  cout << RNG << endl;

}
