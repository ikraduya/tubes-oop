/**
 * @file Coop.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef COOP_H
#define COOP_H

#include "Land.h"

/**
 * @brief Kelas Coop digunakan untuk beternak hewan penghasil telur
 */
class Coop : public Land{
public:
  /**
   * @brief ctor parameter, inisialisasi simbol 'o'
   *
   * @param Coordinate coordinateCell berisi absis dan ordinat cell
   */
  Coop(Coordinate coordinateCell, bool hasGrass);

  /**
   * @brief memanggil fungsi growGrass, mengubah char symbol menjadi '*'
   */
  void grow();

  /**
   * @brief memanggil fungsi removeGrass, mengubah char symbol menjadi 'o'
   */
  void eaten();
};

#endif
