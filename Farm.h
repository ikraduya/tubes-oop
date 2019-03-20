/**
 * @file Farm.h
 * @author Ikraduya
 * @date 2019-03-15
 */

#ifndef _FARM_H
#define _FARM_H

#include "Player.h"
#include "Map.h"
#include "animals/FarmAnimal.h"
#include "LinkedList.h"

/**
 * Kelas Farm yang membungkus semua object di game
 */
class Farm {
private:
  Player player;  /**< Objek player */  
  Map map;  /**< Objek map */  
  LinkedList<FarmAnimal> farmAnimals;  /**< List farmAnimals */  
  Truck truckFacility;  /**< Objek Fasilitas Truck */  
  Mixer mixerFacility;  /**< Objek Fasilitas Mixer */  
  Well wellFacility;  /**< Objek Fasilitas Well */

public:
  int globalTick; /**< Variabel tick global */

  /**
   * Konstruktor dengan parameter
   * 
   * @param mapFilename Nama file input eksternal untuk konstruksi map
   */
  Farm(string mapFilename);

  /**
   * Me-render semua grafik (map, player, animal, facilities, jumlah uang, jumlah water)
   */
  void renderAll() const;

  /**
   * menghapus animal yang telah mati di farmAnimals
   */
  void removeDeadAnimal();

  /**
   * Dispatch tick
   * Menambah variabel tick
   */
  void tickDispatcher();

  /**
   * Menerima perintah
   * 
   * @param cmd String perintah
   */
	void terimaPerintah(string cmd);
};

#endif
