#include <iostream>
#include <string.h>
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

int main() {
  // Initialize everything
  Farm farm("Map.txt");

  // Print main menu
  int pilihan = -1;
  while (pilihan == -1) {
    pilihan = printMainMenu();
  }
  if (pilihan == 2) {
    printExit();
    exit(0);
  }

  // Input
  farm.renderAll();
  std::string cmd;
  while (cmd != "exit") {
    std::cout << "Command: ";
    std::cin >> cmd;
    if (cmd == "w") { // gerak atas
      
    } else if (cmd == "a") { // gerak kiri
      
    } else if (cmd == "s") { // gerak bawah
      
    } else if (cmd == "d") { // gerak kanan
      
    } else if (cmd == "i") { // hadap atas
      
    } else if (cmd == "j") { // hadap kiri
      
    } else if (cmd == "k") { // hadap bawah
      
    } else if (cmd == "l") { // hadap kanan
      
    } else if (cmd == "exit") { // exit
      // do nothing
    } else if (cmd == "interact") { // interaksi
      
    } else if (cmd == "mix") {  // mix
      
    } else if (cmd == "grow") { // menumbuhkan
      
    } else if (cmd == "kill") { // membunuh hewan
      
    } else if (cmd == "talk") {
      
    } else if (cmd == "inventory") {
      
    }
  }


  return 0;
}
