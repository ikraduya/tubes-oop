/**
 * @file Coop.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#include "Land.h"

#ifndef COOP_H
#define COOP_H

/**
 * Kelas Coop digunakan untuk beternak hewan penghasil telur
 */
class Coop : public Land{
public:
  /**
   * Default Constructor
   * Land('o')
   */
  Coop();

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
