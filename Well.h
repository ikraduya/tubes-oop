#include "Facility.h"

#ifndef WELL_H
#define WELL_H

class Well : public Facility{
public:
  //ctor, Facility('W')
  Well();

  //set nilai airPemain = MAX_EMBER
  //const MAX_EMBER?
  void refillAirPemain();
};

#endif
