#include "Truck.h"

  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'W'
   *
   * @param x absis petak, dan y ordinat petak
   */
  Truck::Truck(int x, int y){
    Coordinate place(x,y);
    setCoordinate(place);
  }

  /**
   * @brief Jual seluruh product pada inventory, menambah uang
   */
  void Truck::jualBarangHasilTernak(){
    // <TBD>
  }

  /**
   * @brief getter remainingTick
   *
   * @return int remainingTick
   */
  int Truck::getRemainingTick(){ return remainingTick; }

  /**
   * @brief setter remainingTick
   */
  void Truck::setRemainingTick(int remainingTick){ this->remainingTick = remainingTick; }