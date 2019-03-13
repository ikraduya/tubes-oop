#include "Land.h"

#ifndef BARN_H
#define BARN_H

class Barn : public Land{
public:
  //ctor, Land('x')
  Barn();

  //growGrass(), setSymbol('@')
  void grow();

  //removeGrass(), setSymbol('x')
  void eaten();
};

#endif
