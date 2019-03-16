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
   * Konstruktor dengan parameter, inisialisasi simbol '-'
   * @param x absis petak, dan y ordinat petak
   */
  Grassland(int x, int y);

  /**
   * @brief growGrass(), setSymbol('#')
   */
  void grow();

  /**
   * @brief removeGrass(), setSymbol('-')
   */
  void eaten();
};

#endif
