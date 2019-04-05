/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-20
 */


#ifndef AYAM_H
#define AYAM_H

#include "FarmAnimal.h"
#include "EggProducing.h"
#include "MeatProducing.h"

/**
 * @brief Kelas Ayam diturunkan dari FarmAnimal
 */
class Ayam : public FarmAnimal, public EggProducing, public MeatProducing{
  public:
    /**
	   * @brief default ctor
	   */
    Ayam();
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
    void Bersuara() const;

    /**
	   * @brief Ayam menghasilkan telur
     *
     * @return FarmProducts berupa telur ayam
	   */
    FarmProducts& Interact();
    /**
	   * @brief Ayam menghasilkan daging dan mati
     *
     * @return FarmProducts berupa daging ayam
	   */
    FarmProducts& Kill();
    /**
     * Menggambar Ayam dengan A
     */
    char Render() const;
    /**
     * Menghasilkan telur ayam
     */
    FarmProducts& produceEgg();
    /**
     * Menghasilkan daging ayam
     */
    FarmProducts& produceMeat();
};

#endif
