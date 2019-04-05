#include <iostream>
#include <string>
#include "Display.h"
#include "Farm.h"

int printMainMenu() {
  // Layar awal
  system("clear");
  std::cout << "-------------------------------------------------------------" << std::endl;
  std::cout << "|               Selamat Datang di Engi's Farm               |" << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl;
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

void printHelp() {
  std::cout << "Berikut daftar command yang bisa dijalankan" << std::endl;
  std::cout << "  help         : melihat daftar command ini" << std::endl;
  std::cout << "  inventory    : melihat isi inventori" << std::endl;
  std::cout << "  w a s d      : menggerakkan pemain" << std::endl;
  std::cout << "  i j k l      : mengubah arah hadap pemain" << std::endl;
  std::cout << "  exit         : keluar dari permainan" << std::endl;
  std::cout << "  grow         : menyiram land sehingga menumbuhkan rumput" << std::endl;
  std::cout << "  talk         : berbicara dengan hewan" << std::endl;
  std::cout << "  interact     : berinteraksi dengan hewan atau fasilitas" << std::endl;
  std::cout << "  kill         : menyembelih hewan" << std::endl;
  std::cout << "  mix          : membuat side product, harus dilakukan di depan mixer" << std::endl;
  std::cout << "  showreq      : melihat requirements untuk membuat side product" << std::endl;
  std::cout << "  showproducts : melihat side product apa saja yang bisa dibuat" << std::endl;
  std::cout << std::endl;
}

void printExit() {
  std::cout << "-------------------------------------------------------------" << std::endl;
  std::cout << "|                     Selamat Tinggal :)                    |" << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl;
}

void gameOver() {
  std::cout << "-------------------------------------------------------------" << std::endl;
  std::cout << "|                        Game over!                         |" << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl;
}

int main() {
  bool exitFlag = false;
  
  // Initialize everything
  Farm farm("Map.txt", "Animals.txt");
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
    std::string dum;
    getline(cin, dum);
  }
  if (pilihan == 2) {
    exitFlag = true;
  }
  if (!exitFlag) {
    system("clear");
    disp.renderAll();
    printHelp();
  }

  // Input
  std::string beforeCmd = "";
  std::string cmd;
  while (!exitFlag) {
    if (beforeCmd != "") {
      std::cout << beforeCmd << std::endl;
      beforeCmd = "";
    }

    std::cout << "Command: ";
    // std::cin >> cmd;
    getline(cin, cmd);

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
      try {
        farm.playerCmdIteract();
      } catch(char const *error){
        cout << error << endl;
        continue;
      }
    } else if (cmd == "mix") {  // mix
      std::string prod;
      cout << "Product apa yang ingin dibuat? ";
      getline(cin, prod);
      try {
        farm.playerCmdMix(prod);
        beforeCmd = prod + " berhasil dibuat";
      } catch(char const *error){
        cout << error << endl;
        continue;
      }
    } else if (cmd == "showproducts") {
      farm.playerCmdShowSideProducts();
      continue;
    } else if (cmd == "showreq") {
      std::string name;
      cout << "Requirement Side Product apa yang ingin dilihat? ";
      getline(cin, name);
      getline(cin, name);
      farm.playerCmdShowReq(name);
      continue;
    } else if (cmd == "grow") { // menumbuhkan
      farm.playerCmdGrow();
    } else if (cmd == "kill") { // membunuh hewan
      try{
        farm.playerCmdKill();
      } catch(char const *error){
        cout << error << endl;
        continue;
      }
    } else if (cmd == "talk") {
      try{
        farm.playerCmdTalk();
        continue;
      } catch(char const *error){
        cout << error << endl;
        continue;
      }
    } else if (cmd == "inventory") {
      farm.player.cekInventory();
      continue;
    } else if (cmd == "help") {
      printHelp();
      continue;
    } else {
      continue;
    }

    if (!exitFlag) {
      farm.dispatchTick();
      system("clear");
      disp.updateAndRender();
      if (farm.isGameOver()) {
        exitFlag = true;
        gameOver();
      }
    }
  }
  printExit();

  return 0;
}
