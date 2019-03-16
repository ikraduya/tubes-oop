/**
 * @file Barn.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#include "Land.h"

#ifndef BARN_H
#define BARN_H

/**
 * Kelas Barn digunakan untuk beternak hewan penghasil daging
 */
class Barn : public Land {
public:
  /**
   * Default Constructor, Land('x')
   */
  Barn();

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
