#include <iostream>
#include "FarmAnimal.h"
#include "../common/LinkedList.h"
#include "../cell/Barn.h"
#include "../cell/Grassland.h"
#include "../cell/Coop.h"
#include "../cell/Cell.h"
#include <stdlib.h>
#include <time.h>
#include "../common/Coordinate.h"

using namespace std;

int FarmAnimal::jumlahHewan = 0; /**< Jumlah hewan di suatu waktu */
int FarmAnimal::autoIncAnimalId = 0;
bool FarmAnimal::srandExecuted = false;
/**
 * @brief Construct a new Farm Animal object
 */
FarmAnimal::FarmAnimal() : posisi(){
  if (!srandExecuted) {
    srand(time(NULL));
    srandExecuted = true;
  }
  animalId = autoIncAnimalId++;
  isProduceEgg = false;
  isProduceMeat = false;
  isProduceMilk = false;
  liveStatus = true;
  isHungry = false; //???
  canInteract = false;
  remainingTic = false;
  jumlahHewan++;
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
FarmAnimal::FarmAnimal(Coordinate _posisi, int _HungryTime, bool _isProduceEgg, bool _isProduceMeat, bool _isProduceMilk) : posisi(_posisi.getX(), _posisi.getY()){
  if (!srandExecuted) {
    srand(time(NULL));
    srandExecuted = true;
  }
  animalId = autoIncAnimalId++;
  HungryTime = _HungryTime;
  isProduceEgg = _isProduceEgg;
  isProduceMeat = _isProduceMeat;
  isProduceMilk = _isProduceMilk;
  liveStatus = true;
  isHungry = false; //???
  canInteract = false;
  remainingTic = _HungryTime;
  jumlahHewan++;
}

/**
 * @brief dtor
 */
FarmAnimal::~FarmAnimal(){
  jumlahHewan--;
}

bool FarmAnimal::isCellContainAnimal(LinkedList<FarmAnimal>* farmAnimals, Coordinate &c) {
  int animalsLen = farmAnimals->count();
  int i;
  for (i=0; i<animalsLen; i++) {
    if (farmAnimals->get(i).getPos() == c) {
      break;
    }
  }
  return (i < animalsLen);
}

bool FarmAnimal::isCellSteppable(Cell * cell, LinkedList<FarmAnimal>* farmAnimals, Coordinate& playerPos) {
  Coordinate c = (*cell).getCoordinate();  
  // cek apakah berada di land yang diperbolehkan
  if ((isProduceEgg && ((*cell).getSymbol() == 'o' || (*cell).getSymbol() == '*'))
    ||(isProduceMeat && ((*cell).getSymbol() == 'x' || (*cell).getSymbol() == '@'))
    ||(isProduceMilk && ((*cell).getSymbol() == '-' || (*cell).getSymbol() == '#'))) {

    // cek apakah ada player atau animal di cell tersebut
    return (playerPos != c) && !isCellContainAnimal(farmAnimals, c);
  }
  return false;
}

Coordinate FarmAnimal::gerakF(int c) {
  switch (c) {
    case 0:
      return Coordinate(0, 1);
      break;
    case 1:
      return Coordinate(0, -1);
      break;
    case 2:
      return Coordinate(1, 0);
      break;
    case 3:
      return Coordinate(-1, 0);
      break;
  }
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

bool FarmAnimal::getIsHungry() const {
  return isHungry;
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
void FarmAnimal::Makan(Cell ***cell){
  if (isHungry) {
    int x = posisi.getX(), y = posisi.getY();
    
    Land *land = (Land *) &((*cell)[y][x]);
    if (land->getSymbol() == '*' || land->getSymbol() == '@' || land->getSymbol() == '#') {
      land->removeGrass();
      if (land->getSymbol() == '*') {
        ((Coop*)land)->setSymbol('o');
      } else if (land->getSymbol() == '@') {
        ((Barn*)land)->setSymbol('x');
      } else if (land->getSymbol() == '#') {
        ((Grassland*)land)->setSymbol('-');
      }
      isHungry = false;
      remainingTic = HungryTime;
    } else {
      remainingTic--;
    }
    canInteract = true;
  } else {
    remainingTic--;
  }
}

/**
 * Hewan bergerak
 */
void FarmAnimal::Move(Cell*** cell, Coordinate& playerPos, LinkedList<FarmAnimal>* farmAnimals){
  const int MAP_SIZE_Y = 10;
  const int MAP_SIZE_X = 11;

  LinkedList<int> mvChoice;
  // bawah, atas, kanan, kiri
  int posX = posisi.getX(), posY = posisi.getY();
  if (posY < MAP_SIZE_Y-1 && isCellSteppable(&(*cell)[posY+1][posX], farmAnimals, playerPos)) {
    mvChoice.add(0);
  }
  if (posY > 0 && isCellSteppable(&(*cell)[posY-1][posX], farmAnimals, playerPos)) {
    mvChoice.add(1);
  }
  if (posX < MAP_SIZE_X-1 && isCellSteppable(&(*cell)[posY][posX+1], farmAnimals, playerPos)) {
    mvChoice.add(2);
  }
  if (posX > 0 && isCellSteppable(&(*cell)[posY][posX-1], farmAnimals, playerPos)) {
    mvChoice.add(3);
  }

  if (!mvChoice.isEmpty()) {
    srand(time(NULL));
    int choice = mvChoice.get(rand() % mvChoice.count());
    posisi = posisi + gerakF(choice);
  }
}


/**
 * Aksi hewan setiap Tic
 */
void FarmAnimal::RespondToTic(Cell ***cell, Coordinate playerPos, LinkedList<FarmAnimal>* farmAnimal){
  Makan(cell);
  int r = rand() % 10;
  if (r < 7) {
    Move(cell, playerPos, farmAnimal);
  }
  countHungry();
}

/**
 * Menghitung waktu hingga lapar
 */
void FarmAnimal::countHungry(){
  if (remainingTic == 0){
    isHungry = true;
  } else if (remainingTic <= -5){
    liveStatus = false;
  }
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

char FarmAnimal::getSymbol() const {
  return symbol;
}
/**
 * Menggambar Hewan jadi-jadian
 */
char FarmAnimal::Render() const{
  return '-';
}

FarmAnimal& FarmAnimal::operator=(const FarmAnimal& other) {
  if (this != &other) {
    animalId = other.autoIncAnimalId;
    HungryTime = other.HungryTime;
    isProduceEgg = other.isProduceEgg;
    isProduceMeat = other.isProduceMeat;
    isProduceMilk = other.isProduceMilk;
    liveStatus = other.liveStatus;
    isHungry = other.isHungry; //???
    canInteract = other.canInteract;
    remainingTic = other.remainingTic;
  }
  return *this;
}

bool FarmAnimal::operator==(const FarmAnimal& other) {
  return (this->animalId == other.animalId);
}

bool FarmAnimal::operator!=(const FarmAnimal& other) {
  return (this->animalId != other.animalId);
}

