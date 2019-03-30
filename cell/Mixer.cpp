#include "Mixer.h"

  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'M'
   *
   * @param x absis petak, dan y ordinat petak
   */
  Mixer::Mixer(int x, int y){
    Coordinate place(x,y);
    setCoordinate(place);
    setSymbol('M');
  }
