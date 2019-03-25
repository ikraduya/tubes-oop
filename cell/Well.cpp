#include "Well.h"

  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'W'
   *
   * @param x absis petak, dan y ordinat petak
   */
  Well::Well(int x, int y){
    Coordinate place(x,y);
    setCoordinate(place);
  }
