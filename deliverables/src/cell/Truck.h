/**
 * @file Truck.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef TRUCK_H
#define TRUCK_H

#include "Facility.h"
#include "../Inventory.h"
#include "../products/Products.h"
#include "../products/ChickenEgg.h"
#include "../products/ChickenMeat.h"
#include "../products/CowMeat.h"
#include "../products/CowMilk.h"
#include "../products/DuckEgg.h"
#include "../products/DuckMeat.h"
#include "../products/GoatMeat.h"
#include "../products/GoatMilk.h"
#include "../products/HorseMeat.h"
#include "../products/HorseMilk.h"
#include "../products/Keju.h"
#include "../products/ObatSuperChenLong.h"
#include "../products/RicaKuda.h"
#include "../products/SopKambing.h"
#include "../products/SuplemenSuper.h"
#include "../products/SusuKudaLiar.h"
#include "../products/TelorDadarWow.h"
#include "../common/Coordinate.h"
#include <string>

/**
 * @brief kelas Truck digunakan untuk menjual inventory
 */
class Truck : public Facility{
private:
  int remainingTick;  /**< Tick (remainingTick > 0) apabila Truck tidak berada di tempat */
public:
  static const int maxRemainingTick;
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
  void jualBarangHasilTernak(Inventory *inventory, int *uang);

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

  /**
   * @brief respond pada tick
   */
  void respondToTick();
};

#endif
