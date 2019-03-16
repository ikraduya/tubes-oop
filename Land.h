/**
 * @file Land.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#include "Cell.h"

#ifndef LAND_H
#define LAND_H

/**
 * @brief Kelas Land adalah daerah untuk beternak hewan
 */
class Land : public Cell{
private:
  bool hasGrass;  /*!< bool ditumbuhi grass */
public:
  /**
   * @brief ctor parameter, setSymbol(symbol)
   * 
   * @param symbol Char symbol
   */
  Land(char symbol);
  
  /**
   * @brief merubah nilai symbol sesuai jenis land, asumsi pemanggilan sudah benar. grow() saat hasGrass = false
   */
  virtual void grow() = 0;

  /**
   * @brief merubah nilai symbol sesuai jenis land, asumsi pemanggilan sudah benar. eaten() saat hasGrass = true
   */
  virtual void eaten() = 0;

  //

  /**
   * @brief getter hasGrass
   */
  bool getHasGrass();

  /**
   * @brief hasGrass = false 
   */
  void removeGrass();

  /**
   * @brief setter hasGrass = true
   */
  void growGrass();
};

#endif
