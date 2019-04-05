/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-20
 */


#ifndef SAPI_H
#define SAPI_H

#include "FarmAnimal.h"
#include "MeatProducing.h"
#include "MilkProducing.h"

/**
 * @brief Kelas Sapi diturunkan dari FarmAnimal
 */
class Sapi : public FarmAnimal, public MeatProducing, public MilkProducing{
  public:
    /**
	   * @brief default ctor
	   */
    Sapi();
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime Waktu lapar hewan
     */
    Sapi(Coordinate _posisi, int _HungryTime);

    /**
	   * @brief Sapi bersuara
	   */
    void Bersuara() const;

    /**
     * @brief Sapi menghasilkan susu
     *
     * @return FarmProducts berupa susu sapi
     */
    FarmProducts& Interact();

    /**
     * @brief Sapi menghasilkan daging dan mati
     *
     * @return FarmProducts berupa daging sapi
     */
    FarmProducts& Kill();
    /**
     * Menggambar Sapi dengan S
     */
    char Render() const;
    /**
     * Menghasilkan daging sapi
     */
    FarmProducts& produceMeat();
    /**
     * Menghasilkan susu sapi
     */
    FarmProducts& produceMilk();
};
#endif
