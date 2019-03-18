/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-18
 */

#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "FarmProducts.h"
#include "Coordinate.h"

/**
 * Kelas FarmAnimal menyimpan semua jenis hewan
 */
class FarmAnimal{
  protected:
    bool isProduceEgg; /**< Mengahasilkan telur atau tidak */
    bool isProduceMeat; /**< Menghasilkan daging atau tidak */
    bool isProduceMilk; /**< Menghasilkan susu atau tidak */
    bool liveStatus; /**< Status hidup atau mati */
    bool isHungry; /**< Status hewan lapar atau tidak */
    bool canInteract; /**< Status hewan sudah bisa interact atau belum */
    int remainingTic; /**< Ketika hewan lapar, akan memberitahu berapa lama lagi hewan itu lapar (HungryTime .. 0). Ketika hewan tidak lapar, akan memberitahu berapa lama lagi hewan itu akan mati (0 .. -5) */
    int HungryTime; /**< Waktu lapar */
    Coordinate posisi; /**< Posisi hewan pada cell */

  public:
    static int jumlahHewan; /**< Jumlah hewan di suatu waktu */

    /**
     * @brief Construct a new Farm Animal object
     *
     * @param _posisi posisi hewan
     * @param _HungryTime waktu lapar hewan
     * @param _isProduceEgg menghasilkan telur atau tidak
     * @param _isProduceMeat menghasilkan daging atau tidak
     * @param _isProduceMilk menghasilkan susu atau tidak
     */
    FarmAnimal(Coordinate _posisi, int _HungryTime, bool _isProduceEgg, bool _isProduceMeat, bool _isProduceMilk);
    /**
	   * @brief dtor
	   */
    ~FarmAnimal();

    /**
     * @brief Hewan bisa menghasilkan daging atau tidak
     *
     * @return True or False
     */
    bool isKillAble() const;
    /**
     * @brief Hewan bisa menghasilkan susu atau telur atau tidak
     *
     * @return True or False
     */
    bool isInteractAble() const;

    /**
	   * Hewan makan
	   */
    void Makan();
    /**
	   * Hewan bergerak
	   */
    void Move();
    /**
	   * Pure virtual bersuara
	   */
    virtual void Bersuara() = 0;
    /**
	   * Menghitung waktu hingga lapar
	   */
    int countHungry();

    /**
	   * Pure virtual interract.
     * Menghasilkan susu atau telur
	   */
    virtual FarmProducts Interact() = 0;
    /**
	   * Pure virtual kill.
     * Menghasilkan daging
	   */
    virtual FarmProducts Kill() = 0;
};

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
	   * Ayam bersuara
	   */
    void Bersuara();

    /**
	   * Ayam menghasilkan telur
	   */
    FarmProducts Interact();
    /**
	   * Ayam menghasilkan daging dan mati
	   */
    FarmProducts Kill();
};

/**
 * @brief Kelas Sapi diturunkan dari FarmAnimal
 */
class Sapi : public FarmAnimal{
  public:
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime Waktu lapar hewan
     */
    Sapi(Coordinate _posisi, int _HungryTime);

    /**
	   * Sapi bersuara
	   */
    void Bersuara();

    /**
     * @brief Sapi menghasilkan susu
     *
     * @return FarmProducts
     */
    FarmProducts Interact();

    /**
     * @brief Sapi menghasilkan daging dan mati
     *
     * @return FarmProducts
     */
    FarmProducts Kill();
};

/**
 * @brief Kelas Kambing diturunkan dari FarmAnimal
 */
class Kambing : public FarmAnimal{
  public:
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime Waktu lapar hewan
     */
    Kambing(Coordinate _posisi, int _HungryTime);

    /**
	   * Kambing bersuara
	   */
    void Bersuara();

    /**
     * @brief Kambing menghasilkan susu
     *
     * @return FarmProducts
     */
    FarmProducts Interact();

    /**
     * @brief Kambing menghasilkan daging dan mati
     *
     * @return FarmProducts
     */
    FarmProducts Kill();
};

/**
 * @brief Kelas Kuda diturunkan dari FarmAnimal
 */
class Kuda : public FarmAnimal{
  public:
    /**
     * @brief ctor dengan parameter
     *
     * @param _posisi posisi hewan
     * @param _HungryTime Waktu lapar hewan
     */
    Kuda(Coordinate _posisi, int _HungryTime);

    /**
	   * Kuda bersuara
	   */
    void Bersuara();

    /**
     * @brief Kuda menghasilkan susu
     *
     * @return FarmProducts
     */
    FarmProducts Interact();

    /**
     * @brief Kuda menghasilkan daging dan mati
     *
     * @return FarmProducts
     */
    FarmProducts Kill();
};

/**
 * @brief Kelas Bebek diturunkan dari FarmAnimal
 */
class Bebek : public FarmAnimal{
  public:
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
    void Bersuara();

    /**
     * @brief Bebek menghasilkan telur
     *
     * @return FarmProducts
     */
    FarmProducts Interact();

    /**
     * @brief Bebek menghasilkan daging dan mati
     *
     * @return FarmProducts
     */
    FarmProducts Kill();
};
#endif
