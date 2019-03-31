/**
 * @file Truck.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef TRUCK_H
#define TRUCK_H

#include "Facility.h"
#include "../common/Coordinate.h"

/**
 * @brief kelas Truck digunakan untuk menjual inventory
 */
class Truck : public Facility{
private:
  int remainingTick;  /**< Tick > 0 apabila Truck tidak berada di tempat */
public:
  /**
   * @brief ctor parameter, inisialisasi simbol 'T'
   *
   * @param x absis petak, dan y ordinat petak
   */
  Truck(int x, int y);

  /**
   * @brief Construct a new Truck object
   * 
   * @param koor koordinat truck
   */
  Truck(Coordinate posisi);

  /**
   * @brief Jual seluruh product pada inventory, menambah uang
   */
  void jualBarangHasilTernak();

  /**
   * @brief getter remainingTick
   *
   * @return int remainingTick
   */
  int getRemainingTick();

  /**
   * @brief setter remainingTick
   */
  void setRemainingTick(int remainingTick);
};

#endif
