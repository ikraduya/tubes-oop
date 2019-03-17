/**
 * @file Grassland.h
 * @author Rakhmad
 * @date 2019-03-15
 */

#ifndef GRASSLAND_H
#define GRASSLAND_H

#include "Land.h"

/**
 * @brief Kelas Grassland digunakan untuk beternak hewan penghasil susu
 */
class Grassland : public Land{
public:
  /**
   * @brief ctor parameter, inisialisasi simbol '-'
   *
   * @param Coordinate coordinateCell berisi absis dan ordinat cell
   */
  Grassland(Coordinate coordinateCell);

  /**
   * @brief memanggil fungsi growGrass, mengubah char symbol menjadi '#'
   */
  void grow();

  /**
   * @brief memanggil fungsi removeGrass, mengubah char symbol menjadi '-'
   */
  void eaten();
};

#endif
