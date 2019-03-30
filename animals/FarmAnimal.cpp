#include <iostream>
#include "FarmAnimal.h"
#include "../cell/Barn.h"
#include "../cell/GrassLand.h"
#include "../cell/Coop.h"
#include "../cell/Cell.h"
#include <stdlib.h>
#include <time.h>
#include "../common/Coordinate.h"

using namespace std;

int FarmAnimal::jumlahHewan = 0; /**< Jumlah hewan di suatu waktu */
/**
 * @brief Construct a new Farm Animal object
 */
FarmAnimal::FarmAnimal(){
  Coordinate posisi;
  isProduceEgg = false;
  isProduceMeat = false;
  isProduceMilk = false;
  liveStatus = true;
  isHungry = false; //???
  canInteract = false;
  remainingTic = false;
  jumlahHewan++;
  gerak= new Coordinate[8];
  gerak[0].setX(0);
  gerak[0].setY(1);
  gerak[1].setX(0);
  gerak[1].setY(-1);
  gerak[2].setX(1);
  gerak[2].setY(0);
  gerak[3].setX(-1);
  gerak[3].setY(0);
  gerak[4].setX(-1);
  gerak[4].setY(1);
  gerak[5].setX(1);
  gerak[5].setY(1);
  gerak[6].setX(-1);
  gerak[6].setY(1);
  gerak[7].setX(-1);
  gerak[7].setY(-1);
}
/**
 * @brief Construct a new Farm Animal object
 *
 * @param _posisi posisi hewan
 * @param _HungryTime waktu lapar hewan
 * @param _isProduceEgg menghasilkan telur atau tidak
 * @param _isProduceMeat menghasilkan daging atau tidak
 * @param _isProduceMilk menghasilkan susu atau tidak
 */
FarmAnimal::FarmAnimal(Coordinate _posisi, int _HungryTime, bool _isProduceEgg, bool _isProduceMeat, bool _isProduceMilk){
  Coordinate posisi(_posisi.getX(), _posisi.getY());
  HungryTime = _HungryTime;
  isProduceEgg = _isProduceEgg;
  isProduceMeat = _isProduceMeat;
  isProduceMilk = _isProduceMilk;
  liveStatus = true;
  isHungry = false; //???
  canInteract = false;
  remainingTic = _HungryTime;
  jumlahHewan++;
  gerak= new Coordinate[8];
  gerak[0].setX(0);
  gerak[0].setY(1);
  gerak[1].setX(0);
  gerak[1].setY(-1);
  gerak[2].setX(1);
  gerak[2].setY(0);
  gerak[3].setX(-1);
  gerak[3].setY(0);
  gerak[4].setX(-1);
  gerak[4].setY(1);
  gerak[5].setX(1);
  gerak[5].setY(1);
  gerak[6].setX(-1);
  gerak[6].setY(1);
  gerak[7].setX(-1);
  gerak[7].setY(-1);
}

/**
 * @brief dtor
 */
FarmAnimal::~FarmAnimal(){
  jumlahHewan--;
}

/**
 * @brief Hewan bisa menghasilkan daging atau tidak
 *
 * @return True or False
 */
bool FarmAnimal::isKillAble() const{
  return isProduceMeat;
}

/**
 * @brief Hewan bisa menghasilkan susu atau telur atau tidak
 *
 * @return True or False
 */
bool FarmAnimal::isInteractAble() const{
  return isProduceEgg || isProduceMilk;
}

/**
 * Status hewan mati atau tidak
 */
bool FarmAnimal::isAlive() const{
  return liveStatus;
}

/**
 * Hewan makan
 */
void FarmAnimal::Makan(Cell **cell){
  if (isHungry && ((isProduceEgg && cell[posisi.getX()][posisi.getY()].getSymbol() == '*')
               || (isProduceMeat && cell[posisi.getX()][posisi.getY()].getSymbol() == '@')
               || (isProduceMilk && cell[posisi.getX()][posisi.getY()].getSymbol() == '#'))
      ){
    isHungry = false;
  }
  if (!isHungry){
    remainingTic = HungryTime;
    canInteract = true;
    //cell[posisi.getX()][posisi.getY()].eaten();
  }
}

/**
 * Hewan bergerak
 */
void FarmAnimal::Move(Cell** cell){
  bool MasukPakEko = false;
  int choice;
  Coordinate test;
  while (!MasukPakEko){
    srand(time(NULL));
    choice = rand() % 4;
    test.setX(posisi.getX() + gerak[choice].getX());
    test.setY(posisi.getY() + gerak[choice].getY());
    MasukPakEko = (isProduceEgg && cell[test.getX()][test.getY()].getSymbol() == 'o')
       ||(isProduceMeat && cell[test.getX()][test.getY()].getSymbol() == 'x')
       ||(isProduceMilk && cell[test.getX()][test.getY()].getSymbol() == '-');
  }
  posisi.setX(test.getX());
  posisi.setY(test.getY());
}


/**
 * Aksi hewan setiap Tic
 */
void FarmAnimal::RespondToTic(Cell **cell){
  Move(cell);
  Makan(cell);
  countHungry();
}

/**
 * Menghitung waktu hingga lapar
 */
void FarmAnimal::countHungry(){
  if (remainingTic == 0){
    isHungry = true;
  } else if (remainingTic == -5){
    liveStatus = false;
  }
  remainingTic--;
}

/**
 * Mengembalikkan posisi hewan
 */
Coordinate FarmAnimal::getPos() const{
  return posisi;
}
/**
 * Pure virtual bersuara
 */
void FarmAnimal::Bersuara() const{
  cout << "-" << endl;
}
/**
 * Pure virtual interract.
 * Menghasilkan susu atau telur
 */
FarmProducts& FarmAnimal::Interact(){throw "error";};
/**
 * Pure virtual kill.
 * Menghasilkan daging
 */
FarmProducts& FarmAnimal::Kill(){throw "error";}
/**
 * pure virtual Menggambar Hewan
 */
void FarmAnimal::Render() const{
  cout << "-";
}
