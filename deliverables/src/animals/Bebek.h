/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-20
 */

#ifndef BEBEK_H
#define BEBEK_H

#include "FarmAnimal.h"
#include "MeatProducing.h"
#include "EggProducing.h"

/**
 * @brief Kelas Bebek diturunkan dari FarmAnimal
 */
class Bebek : public FarmAnimal, public EggProducing, public MeatProducing{
  public:
    /**
	   * @brief default ctor
	   */
    Bebek();
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime
     */
    Bebek(Coordinate _posisi, int _HungryTime);

    /**
	   * Bebek bersuara
	   */
    void Bersuara() const;

    /**
     * @brief Bebek menghasilkan telur
     *
     * @return FarmProducts berupa telur bebek
     */
    FarmProducts& Interact();

    /**
     * @brief Bebek menghasilkan daging dan mati
     *
     * @return FarmProducts berupa daging bebek
     */
    FarmProducts& Kill();
    /**
     * Menggambar Bebek dengan B
     */
    char Render() const;
    /**
    * Menghasilkan telur bebek
    */
    FarmProducts& produceEgg();
    /**
    * Menghasilkan daging bebek
    */
    FarmProducts& produceMeat();
};
#endif
