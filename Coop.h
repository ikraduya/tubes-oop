/**
 * @file Coop.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef COOP_H
#define COOP_H

#include "Land.h"

/**
 * Kelas Coop digunakan untuk beternak hewan penghasil telur
 */
class Coop : public Land{
public:
  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'o'
   * @param x absis petak, dan y ordinat petak
   */
  Coop(int x, int y);

  /**
   * growGrass(), setSymbol('*')
   */
  void grow();

  /**
   * removeGrass(), setSymbol('o')
   */
  void eaten();
};

#endif
