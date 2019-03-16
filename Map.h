/**
 * @file Map.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#include "Ukuran.h"
#include "Cell.h"
#include "Barn.h"
#include "Coop.h"
#include "Grassland.h"
#include "Truck.h"
#include "Mixer.h"
#include "Well.h"
#include <fstream>
#include <iostream>
using namespace std;

#ifndef MAP_H
#define MAP_H

/**
 * @brief Kelas Map menyimpan Ukuran map dan object Cell yaitu zone
 */
class Map{
private:
  Ukuran px;  /*!< ukuran map */  
  Cell** zone;  /*!< array of array of Cell */  
public:
  /**
   * @brief ctor parameter
   * 
   * @param filename Nama file yang berisi map
   */
  Map(char* filename);

  /**
   * @brief Destroy the Map object
   */
  ~Map();
};

#endif
