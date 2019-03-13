#include "Cell.h"

#ifndef LAND_H
#define LAND_H

class Land : public Cell{
private:
  bool hasGrass;
public:
  //ctor parameter, setSymbol(symbol)
  Land(char symbol);

  //merubah nilai symbol sesuai jenis land, asumsi pemanggilan sudah benar.
  //grow() saat hasGrass = false, eaten() saat hasGrass = true
  virtual void grow() = 0;
  virtual void eaten() = 0;

  //getter hasGrass
  bool getHasGrass();

  //setter hasGrass = false
  void removeGrass();

  //setter hasGrass = true
  void growGrass();
};

#endif
