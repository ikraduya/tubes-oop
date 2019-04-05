#include "Farm.h"
#include "animals/AnimalsHeader.h"
#include "common/Coordinate.h"
#include "cell/Well.h"
#include "cell/Truck.h"
#include <fstream>
#include <iostream>

int Farm::globalTick = 0;

Farm::Farm(std::string mapFilename, std::string animalFilename) : player(), map(mapFilename), farmAnimals() {
  mixerFacility = (Mixer*) map.getMixerPtr();
  truckFacility = (Truck *) map.getTruckPtr();
  wellFacility = (Well *) map.getWellPtr();

  readAnimals(animalFilename);

  player.getInventori().addProduct(GoatMeat());
  player.getInventori().addProduct(GoatMeat());
}

Farm::~Farm() {
  while (farmAnimals.count() > 0) {
    delete farmAnimals.get(0);
    farmAnimals.remove(farmAnimals.get(0));
  }
}

void Farm::removeDeadAnimal() {
  int animalsLen = farmAnimals.count();
  int i = 0;
  while (i < animalsLen) {
    FarmAnimal *animal = farmAnimals.get(i);
    if (!farmAnimals.get(i)->isAlive()) {
      delete farmAnimals.get(i);
      farmAnimals.remove(animal);
      animalsLen--;
      i--;
    }
    i++;
  }
};

LinkedList<FarmAnimal*>* Farm::getFarmAnimalsPtr() {
  return &farmAnimals;
}

bool Farm::isCellContainAnimal(Coordinate c) {
  // cek keberadaan animal
  int animalsLen = farmAnimals.count();
  int i;
  for (i=0; i<animalsLen; i++) {
    if (farmAnimals.get(i)->getPos() == c) {
      break;
    }
  }
  return (i < animalsLen);
}

bool Farm::isCellSteppableByPlayer(Coordinate c) {
  const int MAP_Y_SIZE = 10;
  const int MAP_X_SIZE = 11;

  // checking map boundary
  if (c.getY() < 0 || c.getY() >= MAP_Y_SIZE || c.getX() < 0 || c.getX() >= MAP_X_SIZE) {
    return false;
  }
  // checking facility position
  if (c == mixerFacility->getCoordinate() || c == truckFacility->getCoordinate() || c == wellFacility->getCoordinate()) {
    return false;
  }
  // cek keberadaan animal
  if (isCellContainAnimal(c)) {
    return false;
  }
  return true;
}

void Farm::dispatchTick() {
  globalTick++;
  removeDeadAnimal();
  int animalLen = farmAnimals.count();
  for (int i=0; i<animalLen; i++) {
    farmAnimals.get(i)->RespondToTic(map.getMapPtr(), player.getCoordinate(), &farmAnimals);
  }
  truckFacility->respondToTick();
};

int* Farm::getGlobalTickPtr() {
  return &globalTick;
}

bool Farm::isPlayerPossibleUp() {
  return (isCellSteppableByPlayer(player.getCoordinate().goUpRet()));
}

bool Farm::isPlayerPossibleDown() {
  return (isCellSteppableByPlayer(player.getCoordinate().goDownRet()));
}

bool Farm::isPlayerPossibleLeft() {
  return (isCellSteppableByPlayer(player.getCoordinate().goLeftRet()));
}

bool Farm::isPlayerPossibleRight() {
  return (isCellSteppableByPlayer(player.getCoordinate().goRightRet()));
}

void Farm::playerCmdGrow() {
  player.cmdGrow(map.getMapPtr());
}

void Farm::playerCmdKill() {
  player.cmdKill(&farmAnimals);
}

void Farm::playerCmdTalk() {
  player.talk(&farmAnimals);
}

void Farm::playerCmdIteract() {
  if (isFacilityAheadPlayer()) { 
    if (player.getHadap() == truckFacility->getCoordinate()) {
      player.truck(truckFacility);
    } else if (player.getHadap() == wellFacility->getCoordinate()) {   
      wellFacility->interact(player.getAirPtr());
    }
  } else {  // animals
    player.interact(&farmAnimals);
  }
}

void Farm::playerCmdMix(std::string prod) {
  if (player.getHadap() == mixerFacility->getCoordinate()) {
    mixerFacility->mixProducts(player.getInventoriPtr(), prod);
  } else {
    throw "Mixer tidak berada dalam jangkauan";
  }
}

void Farm::playerCmdShowSideProducts() {
  mixerFacility->showSideProducts();
}

void Farm::playerCmdShowReq(std::string name) {
  mixerFacility->showReqSideProducts(name);
}

bool Farm::isGameOver() {
  return (farmAnimals.count() <= 0);
}

bool Farm::isFacilityAheadPlayer() {
  Coordinate c = player.getHadap();

  const int MAP_Y_SIZE = 10;
  const int MAP_X_SIZE = 11;
  if (c.getY() < 0 || c.getY() >= MAP_Y_SIZE || c.getX() < 0 || c.getX() >= MAP_X_SIZE) {
    return false;
  }
  if (c == mixerFacility->getCoordinate() || c == truckFacility->getCoordinate() || c == wellFacility->getCoordinate()) {
    return true;
  }
  
  return false;
}

/**
 * @brief read file eksternal animals
 */
void Farm::readAnimals(std::string animalFilename){
  char *jenisHewan = new char[15];
  int hungryTime,x,y;
  ifstream file(animalFilename);
  if (file.is_open()){
    string line;
    do{
      file >> jenisHewan >> x >> y >> hungryTime;
      if (strcmp(jenisHewan, "Ayam") == 0){
        farmAnimals.add(new Ayam(Coordinate(x,y), hungryTime));
      } else if (strcmp(jenisHewan, "Bebek") == 0){
        farmAnimals.add(new Bebek(Coordinate(x,y), hungryTime));
      } else if (strcmp(jenisHewan, "Kambing") == 0){
        farmAnimals.add(new Kambing(Coordinate(x,y), hungryTime));
      } else if (strcmp(jenisHewan, "Kuda") == 0){
        farmAnimals.add(new Kuda(Coordinate(x,y), hungryTime));
      } else if (strcmp(jenisHewan, "Sapi") == 0){
        farmAnimals.add(new Sapi(Coordinate(x,y), hungryTime));
      }
    } while (getline(file,line));
  }
  delete[] jenisHewan;
}
