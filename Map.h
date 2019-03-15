#include "Ukuran.h"
#include "Cell.h"
#include "Barn.h"
#include "Coop.h"
#include "Grassland.h"
#include "Truck.h"
#include "Mixer.h"
#include "Well.h"
#include <fstream>
#include <iostream>
using namespace std;

#ifndef MAP_H
#define MAP_H

class Map{
private:
  Ukuran px;
  Cell** zone;
public:
  //ctor parameter
  Map(char* filename);

  //dtor
  ~Map();
};

#endif
