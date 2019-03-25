#include "Barn.h"

  /**
   * @brief ctor parameter, inisialisasi simbol 'x'
   *
   * @param Coordinate coordinateCell berisi absis dan ordinat cell
   */
Barn::Barn(Coordinate coordinateCell, bool hasGrass){
  setSymbol('x');
  setCoordinate(coordinateCell);
  if(hasGrass) grow();
}

  /**
   * @brief memanggil fungsi growGrass, mengubah char symbol menjadi '@'
   */
void Barn::grow(){
  growGrass();
  setSymbol('@');
}

  /**
   * @brief memanggil fungsi remove Grass, mengubah char symbol menjadi 'x'
   */
void Barn::eaten(){
    removeGrass();
    setSymbol('x');
}
