/**
 * @file Farm.h
 * @author Ikraduya
 * @date 2019-03-15
 */

#ifndef _FARM_H
#define _FARM_H

#include <string>
#include <gtest/gtest_prod.h>
#include "Display.h"
#include "Player.h"
#include "Map.h"
#include "animals/FarmAnimal.h"
#include "common/LinkedList.h"

/**
 * Kelas Farm yang membungkus semua object di game
 */
class Farm {
private:
  FRIEND_TEST(FarmTest, FarmSteppableByPlayer);
  Truck *truckFacility;  /**< Objek Fasilitas Truck */  
  Mixer *mixerFacility;  /**< Objek Fasilitas Mixer */  
  Well *wellFacility;  /**< Objek Fasilitas Well */

  /**
   * @brief Memeriksa apakah suatu cell sedang ditempati oleh seekor hewan
   * 
   * @param c cell yang ingin diperiksa
   * @return true cell ditempati hewan
   * @return false cell tidak ditempati hewan
   */
  bool isCellContainAnimal(Coordinate c);
  
  /**
   * @brief memeriksa apakah suatu cell dapat dipijak oleh pemain
   * 
   * @param c cell yang ingin diperiksa
   * @return true cell dapat dipijak
   * @return false cell tidak dapat dipijak
   */
  bool isCellSteppableByPlayer(Coordinate c);

public:
  Map map;  /**< Objek map */  
  Player player;  /**< Objek player */  
  LinkedList<FarmAnimal*> farmAnimals;  /**< List farmAnimals */  
  static int globalTick; /**< Variabel tick global */

  /**
   * Konstruktor dengan parameter
   * 
   * @param mapFilename Nama file input eksternal untuk konstruksi map
   */
  Farm(std::string mapFilename);

  /**
   * @brief Destroy the Farm object
   */
  ~Farm();

  /**
   * menghapus animal yang telah mati di farmAnimals
   */
  void removeDeadAnimal();

  /**
   * @brief Get the Farm Animals Ptr object
   * 
   * @return LinkedList<FarmAnimal*>* 
   */
  LinkedList<FarmAnimal*>* getFarmAnimalsPtr();

  /**
   * Dispatch tick
   * Menambah variabel tick
   */
  void dispatchTick();

  /**
   * Menerima perintah
   * 
   * @param cmd String perintah
   */
	void terimaPerintah(std::string cmd);

  /**
   * @brief Get the Global Tick Ptr object
   * 
   * @return int* global tick pointer
   */
  static int* getGlobalTickPtr();

  /**
   * @brief memeriksa apakah player dapat bergerak ke atas
   */
  bool isPlayerPossibleUp();

  /**
   * @brief memeriksa apakah player dapat bergerak ke bawah
   */
  bool isPlayerPossibleDown();

  /**
   * @brief memeriksa apakah player dapat bergerak ke kiri
   */
  bool isPlayerPossibleLeft();

  /**
   * @brief memeriksa apakah player dapat bergerak ke kanan
   */
  bool isPlayerPossibleRight();

  /**
   * @brief Memerintahkan player untuk menyiram land
   */
  void playerCmdGrow();

  /**
   * @brief Memerintahkan player untuk menyembelih hewan
   */
  void playerCmdKill();

  /**
   * @brief Memerintahkan player untuk berbicara dengan hewan
   */
  void playerCmdTalk();

  /**
   * @brief memerintahkan player untuk berinteraksi dengan hewan atau fasilitas
   */
  void playerCmdIteract();

  /**
   * @brief Menghandle perintah mixing
   */
  void handleMixer();

  /**
   * @brief Memeriksa apakah permainan telah berakhir
   */
  bool isGameOver();
  /**
   * @brief pakai fasilitas truck
   */
  void useTruck(); 
  /**
   * @brief read file eksternal animals
   */
  void readAnimals(); 
};

#endif
