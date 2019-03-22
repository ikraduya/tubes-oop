/**
 * @file Map.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef MAP_H
#define MAP_H

#include <string>
#include <fstream>
#include "Ukuran.h"
#include "Coordinate.h"
#include "cell/Cell.h"
#include "cell/Barn.h"
#include "cell/Coop.h"
#include "cell/Grassland.h"
#include "cell/Truck.h"
#include "cell/Mixer.h"
#include "cell/Well.h"

/**
 * @brief Kelas Map menyimpan Ukuran map dan object Cell yaitu cell
 */
class Map{
private:
  Ukuran px;  /**< ukuran map */
  static Cell** cell;  /**< array of array of Cell */
public:
  /**
   * @brief ctor parameter
   *
   * @param mapFilename Nama file yang berisi map
   */
  Map(std::string mapFilename);

  /**
   * @brief Destroy the Map object
   */
  ~Map();
};

#endif
