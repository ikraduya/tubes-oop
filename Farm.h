#ifndef _FARM_H
#define _FARM_H

#include "Player.h"
#include "Map.h"
#include "FarmAnimal.h"
#include "LinkedList.h"

/**
 * Kelas Farm yang membungkus semua object di game
 */

class Farm {
private:
  Player player;
  Map map;
  staticLinkedList<FarmAnimal> farmAnimals;
  Truck truckFacility;
  Mixer mixerFacility;
  Well wellFacility;

  bool isAnyAnimalDead();

public:
  /**
   * Constructor dengan parameter
   * @param mapFilename sebagai nama file input eksternal untuk konstruksi map
   */
  Farm(string mapFilename);

  void renderAll() const;

  void removeDeadAnimal();

  void tickDispatcher();

	void terimaPerintah(string cmd);
};

#endif
