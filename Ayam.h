/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-20
 */


#ifndef AYAM_H
#define AYAM_H

#include "FarmAnimal.h"

/**
 * @brief Kelas Ayam diturunkan dari FarmAnimal
 */
class Ayam : public FarmAnimal{
  public:
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime Waktu lapar hewan
     */
    Ayam(Coordinate _posisi, int _HungryTime);

    /**
	   * @brief Ayam bersuara
	   */
    void Bersuara();

    /**
	   * @brief Ayam menghasilkan telur
     *
     * @return FarmProducts berupa telur ayam
	   */
    FarmProducts Interact();
    /**
	   * @brief Ayam menghasilkan daging dan mati
     *
     * @return FarmProducts berupa daging ayam
	   */
    FarmProducts Kill();
};

#endif
