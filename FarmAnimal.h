/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-15
 */

#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "FarmProducts.h"

/**
 * Kelas FarmAnimal menyimpan semua jenis hewan
 */
class FarmAnimal{
  protected:
    bool isProduceEgg; /**< Mengahasilkan telur atau tidak */
    bool isProduceMeat; /**< Menghasilkan daging atau tidak */
    bool isProduceMilk; /**< Menghasilkan susu atau tidak */
    bool liveStatus; /**< Status hidup atau mati */
    int remainingHungryTic; /**< Waktu sisa lapar */
    int HungryTime; /**< Waktu lapar */
    int posX; /**< Posisi Koordinat X */
    int poxY; /**< Posisi Koordinat Y */

  public:
    static int jumlahHewan;

    /**
	   * ctor default
	   */
    FarmAnimal();

    /**
     * @brief Construct a new Farm Animal object
     * 
     * @param _posX posisi X
     * @param _posY posisi Y
     * @param _HungryTime waktu lapar hewan
     */
    FarmAnimal(int _posX, int _posY, int _HungryTime);
    /**
	   * dtor
	   */
    ~FarmAnimal();

    /**
	   * True jika hewan KillAble
	   */
    bool isKillAble() const;
    /**
	   * True jika hewa InteractAble
	   */
    bool isInteractAble() const;

    /**
	   * Pure virtual makan
	   */
    virtual void Makan() = 0;
    /**
	   * Hewan bergerak
	   */
    virtual void Move();
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
     * @param _posX Posisi X
     * @param _posY Posisi Y
     * @param _HungryTime Waktu lapar hewan
     */
    Ayam(int _posX, int _posY, int _HungryTime);

    /**
	   * Ayam bersuara
	   */
    void Bersuara();
    /**
	   * Ayam makan
	   */
    void Makan();

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
     * @param _posX Posisi X
     * @param _posY Posisi Y
     * @param _HungryTime Waktu lapar hewan
     */
    Sapi(int _posX, int _posY, int _HungryTime);

    /**
	   * Sapi bersuara
	   */
    void Bersuara();

    /**
	   * Sapi makan
	   */
    void Makan();

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
     * @param _posX Posisi X
     * @param _posY Posisi Y
     * @param _HungryTime Waktu lapar hewan
     */
    Kambing(int _posX, int _posY, int _HungryTime);

    /**
	   * Kambing bersuara
	   */
    void Bersuara();
    /**
	   * Kambing makan
	   */
    void Makan();

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
     * @param _posX Posisi X
     * @param _posY Posisi Y
     * @param _HungryTime Waktu lapar hewan
     */
    Kuda(int _posX, int _posY, int _HungryTime);

    /**
	   * Kuda bersuara
	   */
    void Bersuara();
    /**
	   * Kuda makan
	   */
    void Makan();

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
     * @param _posX 
     * @param _posY 
     * @param _HungryTime 
     */
    Bebek(int _posX, int _posY, int _HungryTime);

    /**
	   * Bebek bersuara
	   */
    void Bersuara();
    /**
	   * Bebek makan
	   */
    void Makan();

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
