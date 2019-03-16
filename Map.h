/**
 * @file Map.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef MAP_H
#define MAP_H

#include "Ukuran.h"
#include "Coordinate.h"
#include "Cell.h"
#include "Barn.h"
#include "Coop.h"
#include "Grassland.h"
#include "Truck.h"
#include "Mixer.h"
#include "Well.h"
#include <fstream>

/**
 * @brief Kelas Map menyimpan Ukuran map dan object Cell yaitu cell
 */
class Map{
private:
  Ukuran px;  /**< ukuran map */
  Cell** cell;  /**< array of array of Cell */
public:
  /**
   * @brief ctor parameter
   *
   * @param mapFilename Nama file yang berisi map
   */
  Map(char* mapFilename);

  /**
   * @brief Destroy the Map object
   */
  ~Map();
};

#endif
