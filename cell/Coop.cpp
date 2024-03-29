#include "Coop.h"
#include <iostream>
using namespace std;
  /**
   * @brief ctor parameter, inisialisasi simbol 'o'
   *
   * @param Coordinate coordinateCell berisi absis dan ordinat cell
   */
Coop::Coop(Coordinate coordinateCell, bool hasGrass){
  setSymbol('o');
  setCoordinate(coordinateCell);
  if (hasGrass) grow();
}

  /**
   * @brief memanggil fungsi growGrass, mengubah char symbol menjadi '*'
   */
void Coop::grow(){
  growGrass();
  setSymbol('*');
}

  /**
   * @brief memanggil fungsi remove Grass, mengubah char symbol menjadi 'o'
   */
void Coop::eaten(){
  removeGrass();
  setSymbol('o');
}
