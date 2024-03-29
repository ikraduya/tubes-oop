/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-20
 */


#ifndef KAMBING_H
#define KAMBING_H

#include "FarmAnimal.h"
#include "MilkProducing.h"
#include "MeatProducing.h"

/**
 * @brief Kelas Kambing diturunkan dari FarmAnimal
 */
class Kambing : public FarmAnimal, public MilkProducing, public MeatProducing{
  public:
    /**
	   * @brief default ctor
	   */
    Kambing();
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime Waktu lapar hewan
     */
    Kambing(Coordinate _posisi, int _HungryTime);

    /**
	   * @brief Kambing bersuara
	   */
    void Bersuara() const;

    /**
     * @brief Kambing menghasilkan susu
     *
     * @return FarmProducts berupa susu kambing
     */
    FarmProducts& Interact();

    /**
     * @brief Kambing menghasilkan daging dan mati
     *
     * @return FarmProducts berupa daging kambing
     */
    FarmProducts& Kill();
    /**
     * Menggambar Kambing dengan K
     */
    char Render() const;
    /**
     * Menghasilkan daging kambing
     */
    FarmProducts& produceMeat();
    /**
     * Menghasilkan susu kambing
     */
    FarmProducts& produceMilk();

    
};
#endif
