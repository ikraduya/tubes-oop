#include <iostream>
#include <string.h>
#include "Display.h"
#include "Farm.h"

int printMainMenu() {
  // Layar awal
  system("clear");
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "|          Selamat Datang di Engi's Farm           |" << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "Pilihan menu:" << std::endl;
  std::cout << "[1] Start Game" << std::endl;
  std::cout << "[2] Exit" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "Pilihan: ";
  std::string cmd;
  std::cin >> cmd;
  if (cmd == "1") {
    return 1;
  } else if (cmd == "2") {
    return 2;
  } else {
    return -1;
  }
}

void printExit() {
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "|                Selamat Tinggal :)                |" << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
}

void gameOver() {
  std::cout << "----------------------------------------------------" << std::endl;
  std::cout << "|                    Game over!                    |" << std::endl;
  std::cout << "----------------------------------------------------" << std::endl;
}

int main() {
  bool exitFlag = false;
  // Initialize everything

  Farm farm("Map.txt");
  Display disp(farm.map.getMapPtr(), 
    farm.player.getInventoriPtr(), 
    farm.player.getUangPtr(), 
    farm.player.getAirPtr(),
    farm.player.getArahPtr(),
    farm.player.getCoordinatePtr(),
    farm.getFarmAnimalsPtr(),
    farm.getGlobalTickPtr());

  // Print main menu
  int pilihan = -1;
  while (pilihan == -1) {
    pilihan = printMainMenu();
  }
  if (pilihan == 2) {
    printExit();
    exitFlag = true;
  }
  if (!exitFlag) {
    disp.renderAll();
  }

  // Input
  std::string cmd;
  while (!exitFlag) {
    std::cout << "Command: ";
    std::cin >> cmd;
    if (cmd == "w") { // gerak atas
      if (farm.isPlayerPossibleUp()) {
        farm.player.up();
      }
      farm.player.lookUp();
    } else if (cmd == "a") { // gerak kiri
      if (farm.isPlayerPossibleLeft()) {
        farm.player.left();
      }
      farm.player.lookLeft();
    } else if (cmd == "s") { // gerak bawah
      if (farm.isPlayerPossibleDown()) {
        farm.player.down();
      }
      farm.player.lookDown();
    } else if (cmd == "d") { // gerak kanan
      if (farm.isPlayerPossibleRight()) {
        farm.player.right();
      }
      farm.player.lookRight();
    } else if (cmd == "i") { // hadap atas
      farm.player.lookUp();
    } else if (cmd == "j") { // hadap kiri
      farm.player.lookLeft();
    } else if (cmd == "k") { // hadap bawah
      farm.player.lookDown();
    } else if (cmd == "l") { // hadap kanan
      farm.player.lookRight();
    } else if (cmd == "exit") { // exit
      exitFlag = true;
    } else if (cmd == "interact") { // interaksi
      
    } else if (cmd == "mix") {  // mix
      
    } else if (cmd == "grow") { // menumbuhkan
      
    } else if (cmd == "kill") { // membunuh hewan
      
    } else if (cmd == "talk") {
      
    } else if (cmd == "inventory") {
      
    } else {
      continue;
    }

    if (farm.farmAnimals.count() <= 0) {
      exitFlag = true;
      gameOver();
      std::cin >> cmd;
    }
    if (!exitFlag) {
      farm.dispatchTick();
      disp.updateAndRender();
    }
  }

  system("clear");
  printExit();
  return 0;
}
