/**
 * @file FarmAnimal.h
 * @author Azhar
 * @date 2019-03-18
 */

#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "../products/FarmProducts.h"
#include "../common/Coordinate.h"
#include "../common/LinkedList.h"
#include "../cell/Cell.h"

/**
 * Kelas FarmAnimal menyimpan semua jenis hewan
 */
class FarmAnimal{
  private:
    /**
     * @brief menghasilkan opsi gerak sesuai choice
     * 
     * @param c 
     * @return Coordinate 
     */
    Coordinate gerakF(int c);

    /**
     * @brief Memeriksa apakah di sebuah sel terdapat animal
     */
    bool isCellContainAnimal(LinkedList<FarmAnimal*>* farmAnimals, Coordinate &c);

    /**
     * @brief memeriksa apakah suatu cell dapat dipijak oleh hewan
     * 
     * @param cell cell yang ingin diperiksa
     * @param farmAnimals pointer to farm animals
     * @param playerPos posisi player
     * @return true jika cell bisa dipijak
     * @return false jika cell tidak bisa dipijak
     */
    bool isCellSteppable(Cell * cell, LinkedList<FarmAnimal*>* farmAnimals, Coordinate& playerPos) ;

  protected:
    int animalId; /**< ID hewan */
    bool isProduceEgg; /**< Mengahasilkan telur atau tidak */
    bool isProduceMeat; /**< Menghasilkan daging atau tidak */
    bool isProduceMilk; /**< Menghasilkan susu atau tidak */
    bool liveStatus; /**< Status hidup atau mati */
    bool isHungry; /**< Status hewan lapar atau tidak */
    bool canInteract; /**< Status hewan sudah bisa interact atau belum */
    int remainingTic; /**< Ketika hewan lapar, akan memberitahu berapa lama lagi hewan itu lapar (HungryTime .. 0). Ketika hewan tidak lapar, akan memberitahu berapa lama lagi hewan itu akan mati (0 .. -5) */
    int HungryTime; /**< Waktu lapar */
    Coordinate posisi; /**< Posisi hewan pada cell */
    char symbol; /**< Simbol hewan */

  public:
    static int jumlahHewan; /**< Jumlah hewan di suatu waktu */
    static int autoIncAnimalId;
    static bool srandExecuted;
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
     * @brief Get the Is Hungry object
     * 
     * @return true hewan lapar
     * @return false hewan tidak lapar
     */
    bool getIsHungry() const;

    /**
	   * Hewan makan
	   */
    void Makan(Cell*** cell);

    /**
     * @brief Hewan bergerak
     * 
     * @param cell pointer ke map
     * @param playerPos posisi player
     * @param farmAnimals 
     */
    void Move(Cell*** cell, Coordinate& playerPos, LinkedList<FarmAnimal*>* farmAnimals);

    /**
	   * virtual bersuara
	   */
    virtual void Bersuara() const;
    /**
     * Aksi hewan setiap Tic
     */
    void RespondToTic(Cell ***cell, Coordinate playerPos, LinkedList<FarmAnimal*>* farmAnimal);
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
     * @brief Get the Symbol object
     * 
     * @return char simbol hewan
     */
    char getSymbol() const;

    /**
     * @brief Overloading =
     * 
     * @param other 
     * @return FarmAnimal& 
     */
    FarmAnimal& operator=(const FarmAnimal& other);

    /**
     * @brief Overide operator==
     * 
     * @param other FarmAnimal lain
     * @return true Jika animalId sama
     * @return false Jika animalId beda
     */
    bool operator==(const FarmAnimal& other);

    /**
     * @brief Overide operator!=
     * 
     * @param other FarmAnimal lain
     * @return true Jika animalId beda
     * @return false Jika animalId sama
     */
    bool operator!=(const FarmAnimal& other);
};
#endif
