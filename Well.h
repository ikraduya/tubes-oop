/**
 * @file Well.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef WELL_H
#define WELL_H

#include "Facility.h"

/**
 * @brief Kelas Well digunakan untuk mengisi wadah air yang dimiliki Player
 */
class Well : public Facility{
public:
  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'W'
   * @param x absis petak, dan y ordinat petak
   */
  Well(int x, int y);
};

#endif
