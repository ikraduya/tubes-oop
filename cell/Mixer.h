/**
 * @file Mixer.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef MIXER_H
#define MIXER_H

#include <string>
#include "Facility.h"
#include "../Inventory.h"
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

/**
 * @brief kelas Mixer digunakan untuk membuat produk sampingan dari produk hewan
 */
class Mixer : public Facility{
public:
  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'M'
   *
   * @param x absis petak, dan y ordinat petak
   */
  Mixer(int x, int y);

  /**
   * @brief Construct a new Mixer object
   *
   * @param posisi Koordinat mixer
   */
  Mixer(Coordinate posisi);

  /**
   * @brief Menggabungkan products menjadi side product
   * 
   * @param inventory inventori pemain
   * @param name nama produk yang ingin dibuat
   */
  void mixProducts(Inventory* inventory, std::string name);

  /**
   * @brief Menampilkan daftar side product
   */
  void showSideProducts();

  /**
   * @brief Menampilkan requirement side product untuk product yang diinginkan
   * 
   * @param name nama side product
   */
  void showReqSideProducts(std::string name);
};

#endif
