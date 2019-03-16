/**
 * @file Truck.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#include "Facility.h"

#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Facility{
private:
  int remainingTick;  /*!< Tick > 0 apabila Truck tidak berada di tempat */ 
public:
  /**
   * @brief ctor, Facility('T')
   */
  Truck();

  /**
   * @brief Jual seluruh product pada inventory, menambah uang
   */
  void jualBarangHasilTernak();

  /**
   * @brief getter remainingTick
   */
  int getRemainingTick();

  /**
   * @brief setter remainingTick
   */
  void setRemainingTick(int remainingTick);
};

#endif
