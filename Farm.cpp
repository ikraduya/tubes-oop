#include "Farm.h"
#include "animals/AnimalsHeader.h"
#include "common/Coordinate.h"

int Farm::globalTick = 0;

Farm::Farm(std::string mapFilename) : player(), map(mapFilename), farmAnimals() {
  mixerFacility = (Mixer*) map.getMixerPtr();
  truckFacility = (Truck *) map.getTruckPtr();
  wellFacility = (Well *) map.getWellPtr();

  // hardcode animal
  const int hungryTimeAyam = 8;
  const int hungryTimeKambing = 8;
  const int hungryTimeKuda = 10;
  const int hungryTimeBebek = 6;
  const int hungryTimeSapi = 7;
  farmAnimals.add(new Ayam(Coordinate(0, 0), hungryTimeAyam));
  farmAnimals.add(new Ayam(Coordinate(2, 0), hungryTimeAyam));
  farmAnimals.add(new Kambing(Coordinate(5, 0), hungryTimeKambing));
  farmAnimals.add(new Kambing(Coordinate(6, 4), hungryTimeKambing));
  farmAnimals.add(new Kuda(Coordinate(7, 7), hungryTimeKuda));
  farmAnimals.add(new Kuda(Coordinate(5, 8), hungryTimeKuda));
}

Farm::~Farm() {
  while (farmAnimals.count() > 0) {
    delete farmAnimals.get(0);
  }
}

void Farm::removeDeadAnimal() {
  int animalsLen = farmAnimals.count();
  int i = 0;
  while (i < animalsLen) {
    FarmAnimal *animal = farmAnimals.get(i);
    if (!farmAnimals.get(i)->isAlive()) {
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
  player.interact(&farmAnimals);
}

bool Farm::isGameOver() {
  return (farmAnimals.count() <= 0);
}

