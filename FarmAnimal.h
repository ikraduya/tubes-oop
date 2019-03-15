#ifndef "FARMANIMAL_H"
#define "FARMANIMAL_H"

#include FarmProducts.h
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
	   * ctor dengan parameter
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
    void Makan() = 0;
    /**
	   * Hewan bergerak
	   */
    void Move();
    /**
	   * Pure virtual bersuara
	   */
    void Bersuara() = 0;
    /**
	   * Menghitung waktu hingga lapar
	   */
    int countHungry();

    /**
	   * Pure virtual interract.
     * Menghasilkan susu atau telur
	   */
    FarmProducts Interact() = 0;
    /**
	   * Pure virtual kill. 
     * Menghasilkan daging
	   */
    FarmProducts Kill() = 0;
};

class Ayam : public FarmAnimal{
  public:
    /**
	   * ctor dengan parameter
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

class Sapi : public FarmAnimal{
  public:
    /**
	   * ctor dengan parameter
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
	   * Sapi menghasilkan susu
	   */
    FarmProducts Interact();
    /**
	   * Sapi menghasilkan daging dan mati
	   */
    FarmProducts Kill();
};

class Kambing : public FarmAnimal{
  public:
    /**
	   * ctor dengan parameter
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
	   * Kambing menghasilkan susu
	   */
    FarmProducts Interact();
    /**
	   * Kambing menghasilkan daging dan mati
	   */
    FarmProducts Kill();
};

class Kuda : public FarmAnimal{
  public:
    /**
	   * ctor dengan parameter
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
	   * Kuda menghasilkan susu
	   */
    FarmProducts Interact();
    /**
	   * Kuda menghasilkan daging dan mati
	   */
    FarmProducts Kill():
};

class Bebek : public FarmAnimal{
  public:
    /**
	   * ctor dengan parameter
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
	   * Bebek menghasilkan telur
	   */
    FarmProducts Interact();
    /**
	   * Bebek menghasilkan daging dan mati
	   */
    FarmProducts Kill();
};
#endif
