/**
 * @file Truck.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef TRUCK_H
#define TRUCK_H

#include "Facility.h"

class Truck : public Facility{
private:
  int remainingTick;  /**< Tick > 0 apabila Truck tidak berada di tempat */
public:
  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'T'
   * @param x absis petak, dan y ordinat petak
   */
  Truck(int x, int y);

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
