/**
 * @file Grassland.h
 * @author Rakhmad
 * @date 2019-03-15
 */

#include "Land.h"

#ifndef GRASSLAND_H
#define GRASSLAND_H

/**
 * @brief Kelas Grassland digunakan untuk beternak hewan penghasil susu
 */
class Grassland : public Land{
public:
  /**
   * @brief ctor, Land('-')
   */
  Grassland();

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
