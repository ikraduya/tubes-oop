/**
 * @file Barn.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef BARN_H
#define BARN_H

#include "Land.h"

/**
 * Kelas Barn digunakan untuk beternak hewan penghasil daging
 */
class Barn : public Land {
public:
  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'x'
   * @param x absis petak, dan y ordinat petak
   */
  Barn(int x, int y);

  /**
   * growGrass(), setSymbol('@')
   */
  void grow();

  /**
   * removeGrass(), setSymbol('x')
   */
  void eaten();
};

#endif
