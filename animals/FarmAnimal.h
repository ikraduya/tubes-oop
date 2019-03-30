/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-18
 */

#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "../products/FarmProducts.h"
#include "../common/Coordinate.h"
#include "../cell/Cell.h"

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
    Coordinate *gerak; /**< Gerak atas, bawah, kanan kiri */

  public:
    static int jumlahHewan; /**< Jumlah hewan di suatu waktu */
    /**
     * @brief Construct a new Farm Animal object
     */
    FarmAnimal();
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
    void Makan(Cell** cell);
    /**
	   * Hewan bergerak
	   */
    void Move(Cell** cell);
    /**
	   * Pure virtual bersuara
	   */
    virtual void Bersuara() const;
    /**
     * Aksi hewan setiap Tic
     */
    void RespondToTic(Cell **cell);
    /**
	   * Menghitung waktu hingga lapar
     * ======================Diubah dari int menjadi void karena tidak perlu return int
	   */
    void countHungry();

    /**
	   * Pure virtual interract.
     * Menghasilkan susu atau telur
	   */
    virtual FarmProducts& Interact();
    /**
	   * Pure virtual kill.
     * Menghasilkan daging
	   */
    virtual FarmProducts& Kill();
    /**
     * Status hewan mati atau tidak
     * ================Diubah karena tidak ada getter
     */
    bool isAlive() const;
    /**
     * Mengembalikkan posisi hewan
     * ================Diubah karena tidak ada getter
     */
    Coordinate getPos() const;
    /**
     * pure virtual Menggambar Hewan
     */
    virtual void Render() const;
};
#endif
