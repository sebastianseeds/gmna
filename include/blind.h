#ifndef BLIND_H
#define BLIND_H
#include "TRandom.h"
#include "TMath.h"
#include <ctime>
#include <chrono>
#include <iostream>

double blind( double yield )
{
  std::time_t t = std::time(0);
  gRandom->SetSeed(t);
  double RNG = gRandom->Uniform( 0.9, 1.1 );
  double blindedYield = yield*RNG;
  return blindedYield;
}

#endif // BLIND_H
