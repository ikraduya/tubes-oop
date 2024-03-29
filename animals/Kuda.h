/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-20
 */


#ifndef KUDA_H
#define KUDA_H

#include "FarmAnimal.h"
#include "MeatProducing.h"
#include "MilkProducing.h"

/**
 * @brief Kelas Kuda diturunkan dari FarmAnimal
 */
class Kuda : public FarmAnimal, public MeatProducing, public MilkProducing{
  public:
    /**
	   * @brief default ctor
	   */
    Kuda();
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime Waktu lapar hewan
     */
    Kuda(Coordinate _posisi, int _HungryTime);

    /**
	   * @brief Kuda bersuara
	   */
    void Bersuara() const;

    /**
     * @brief Kuda menghasilkan susu
     *
     * @return FarmProducts berupa susu kuda
     */
    FarmProducts& Interact();

    /**
     * @brief Kuda menghasilkan daging dan mati
     *
     * @return FarmProducts berupa daging kuda
     */
    FarmProducts& Kill();
    /**
     * Menggambar Kuda dengan H
     */
    char Render() const;
    /**
     * Menghasilkan daging kuda
     */
    FarmProducts& produceMeat();
    /**
     * Menghasilkan susu kuda
     */
    FarmProducts& produceMilk();
};
#endif
