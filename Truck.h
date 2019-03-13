#include "Facility.h"

#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Facility{
private:
  int remainingTick;
public:
  //ctor, Facility('T')
  Truck();

  //jual seluruh product pada inventory, menambah uang
  //global variabel uang?
  void jualBarangHasilTernak();

  //getter remainingTick
  int getRemainingTick();

  //setter remainingTick
  void setRemainingTick(int remainingTick);
};

#endif
