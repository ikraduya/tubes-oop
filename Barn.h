/**
 * @file Barn.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef BARN_H
#define BARN_H

#include "Land.h"

/**
 * @brief Kelas Barn digunakan untuk beternak hewan penghasil daging
 */
class Barn : public Land {
public:
  /**
   * @brief ctor parameter, inisialisasi simbol 'x'
   *
   * @param Coordinate coordinateCell berisi absis dan ordinat cell
   */
  Barn(Coordinate coordinateCell);

  /**
   * @brief memanggil fungsi growGrass, mengubah char symbol menjadi '@'
   */
  void grow();

  /**
   * @brief memanggil fungsi remove Grass, mengubah char symbol menjadi 'x'
   */
  void eaten();
};

#endif
