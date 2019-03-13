#include "Land.h"

#ifndef GRASSLAND_H
#define GRASSLAND_H

class Grassland : public Land{
public:
  //ctor, Land('-')
  Grassland();

  //growGrass(), setSymbol('#')
  void grow();

  //removeGrass(), setSymbol('-')
  void eaten();
};

#endif
