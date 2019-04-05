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
#include "common/Coordinate.h"
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
  Cell** cell;  /**< array of array of Cell */
  Coordinate mixerPos;
  Coordinate truckPos;
  Coordinate wellPos;
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

  /**
   * @brief Get the Ukuran map
   * 
   * @return Ukuran map
   */
  Ukuran getUkuran() const;

  /**
   * @brief Get the Map Symbols
   * 
   * @return char** 
   */
  Cell*** getMapPtr();
  
  /**
   * @brief Get the Cell object
   * 
   * @param i posisi sumbu x
   * @param j posisi sumbu y
   * @return Cell& 
   */
  Cell getCell(int i, int j) const;
  
  /**
   * @brief Get the Mixer Position object
   * 
   * @return Coordinate 
   */
  Coordinate getMixerPosition() const;

  /**
   * @brief Get the Truck Position object
   * 
   * @return Coordinate 
   */
  Coordinate getTruckPosition() const;

  /**
   * @brief Get the Well Position object
   * 
   * @return Coordinate 
   */
  Coordinate getWellPosition() const;

  /**
   * @brief Get the Mixer Ptr object
   * 
   * @return Mixer* 
   */
  Facility* getMixerPtr();

  /**
   * @brief Get the Truck Ptr object
   * 
   * @return Truck* 
   */
  Facility* getTruckPtr();

  /**
   * @brief Get the Well Ptr object
   * 
   * @return Well* 
   */
  Facility* getWellPtr();
};

#endif
