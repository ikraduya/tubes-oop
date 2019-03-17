/**
 * @file Land.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef LAND_H
#define LAND_H

#include "Cell.h"

/**
 * @brief Kelas Land adalah daerah untuk beternak hewan
 */
class Land : public Cell{
private:
  bool hasGrass;  /**< bool ditumbuhi grass */
public:
  /**
   * @brief mengubah nilai symbol sesuai jenis land, asumsi pemanggilan sudah benar. grow() saat hasGrass = false
   */
  virtual void grow() = 0;

  /**
   * @brief mengubah nilai symbol sesuai jenis land, asumsi pemanggilan sudah benar. eaten() saat hasGrass = true
   */
  virtual void eaten() = 0;

  /**
   * @brief getter hasGrass
   * @return bool hasGrass
   */
  bool getHasGrass();

  /**
   * @brief setter hasGrass = false
   */
  void removeGrass();

  /**
   * @brief setter hasGrass = true
   */
  void growGrass();
};

#endif
