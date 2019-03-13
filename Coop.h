#include "Land.h"

#ifndef COOP_H
#define COOP_H

class Coop : public Land{
public:
  //ctor, Land('o')
  Coop();

  //growGrass(), setSymbol('*')
  void grow();

  //removeGrass(), setSymbol('o')
  void eaten();
};

#endif
