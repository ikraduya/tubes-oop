/**
 * @file Mixer.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef MIXER_H
#define MIXER_H

#include "Facility.h"

/**
 * @brief kelas Mixer digunakan untuk membuat produk sampingan dari produk hewan
 */
class Mixer : public Facility{
public:
  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'M'
   * @param x absis petak, dan y ordinat petak
   */
  Mixer(int x, int y);
};

#endif
