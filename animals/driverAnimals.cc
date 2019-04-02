#include <iostream>
#include "FarmAnimal.h"
#include "Ayam.h"
#include "Bebek.h"
#include "Kambing.h"
#include "Sapi.h"
#include "Kuda.h"
#include <iostream>

using namespace std;

int main(){
  FarmAnimal **animal = new FarmAnimal*[10];
  Coordinate coord(1,1);
  int HungryTime = 1;
  Ayam ayam(coord, HungryTime);
  Bebek bebek(coord, HungryTime);
  Kambing kambing(coord, HungryTime);
  Kuda kuda(coord, HungryTime);
  Sapi sapi(coord, HungryTime);

  animal[0] = &ayam;
  animal[1] = &bebek;
  animal[2] = &kambing;
  animal[3] = &kuda;
  animal[4] = &sapi;

  animal[0]->Bersuara();
  animal[1]->Bersuara();
  animal[2]->Bersuara();
  animal[3]->Bersuara();
  animal[4]->Bersuara();
  return 0;
}
