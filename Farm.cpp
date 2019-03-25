#include "Farm.h"
#include "common/Coordinate.h"

int Farm::globalTick = 0;

Farm::Farm(std::string mapFilename) : 
  player(), map(mapFilename), farmAnimals(), truckFacility(0, 0), mixerFacility(0, 0), wellFacility(0, 0)  {
  // koordinat truck? darimana
  // truckFacility.setCoordinate(Coordinate);
  // mixerFacility.setCoordinate(Coordinate);
  // wellFacility.setCoordinate(Coordinate);
};

void Farm::renderAll() const {
  // Print map
  // map.
};


void Farm::removeDeadAnimal() {
  int animalsLen = farmAnimals.count();
  int i = 0;
  while (i < animalsLen) {
    FarmAnimal *animal = &(farmAnimals.get(i));
    // if (animal.) jika animal tersebut mati
    if (true) {
      farmAnimals.remove(*animal);
      animalsLen--;
      i--;
    }
    i++;
  }
  for (int i=0; i<animalsLen; i++) {
    
  }
};


void Farm::tickDispatcher() {

};


void Farm::terimaPerintah(std::string cmd) {

};
