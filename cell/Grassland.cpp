#include "Grassland.h"

  /**
   * @brief ctor parameter, inisialisasi simbol '-'
   *
   * @param Coordinate coordinateCell berisi absis dan ordinat cell
   */
Grassland::Grassland(Coordinate coordinateCell, bool hasGrass){
  setSymbol('-');
  setCoordinate(coordinateCell);
  if(hasGrass) grow();
}

  /**
   * @brief memanggil fungsi growGrass, mengubah char symbol menjadi '#'
   */
void Grassland::grow(){
  growGrass();
  setSymbol('#');
}

  /**
   * @brief memanggil fungsi remove Grass, mengubah char symbol menjadi '-'
   */
void Grassland::eaten(){
    removeGrass();
    setSymbol('-');
}
