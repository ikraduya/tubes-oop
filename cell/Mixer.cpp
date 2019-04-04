#include <iostream>
#include <string>
#include "Mixer.h"

/**
 * Konstruktor dengan parameter, inisialisasi simbol 'M'
 *
 * @param x absis petak, dan y ordinat petak
 */
Mixer::Mixer(int x, int y){
  Coordinate place(x,y);
  setCoordinate(place);
  setSymbol('M');
}

Mixer::Mixer(Coordinate posisi) {
  setCoordinate(posisi);
  setSymbol('M');
}

void mixProducts(Inventory* inventory, std::string name) {
  if(name == "Keju"){
      if(Keju::isMixValid(*inventory)){
        inventory->removeProduct(*(new CowMilk()));
        inventory->removeProduct(*(new CowMilk()));
        inventory->addProduct(*(new Keju()));
      }else {
        std::cout << name << " tidak berhasil dibuat :(" << std::endl;
        Keju::showReq();
        return;
      }
  }else if(name == "Obat Super Chen Long"){
      if(ObatSuperChenLong::isMixValid(*inventory)){
        inventory->removeProduct(*(new HorseMeat()));
        inventory->removeProduct(*(new GoatMeat()));
        inventory->addProduct(*(new ObatSuperChenLong()));
      }else {
        std::cout << name << " tidak berhasil dibuat :(" << std::endl;
        ObatSuperChenLong::showReq();
        return;
      }
  }else if(name == "Rica Kuda"){
      if(RicaKuda::isMixValid(*inventory)){
        inventory->removeProduct(*(new CowMeat()));
        inventory->removeProduct(*(new HorseMeat()));
        inventory->addProduct(*(new RicaKuda()));
      }else {
        std::cout << name << " tidak berhasil dibuat :(" << std::endl;
        RicaKuda::showReq();
        return;
      }
  }else if(name == "Sop Kambing"){
      if(SopKambing::isMixValid(*inventory)){
        inventory->removeProduct(*(new GoatMeat()));
        inventory->removeProduct(*(new GoatMeat()));
        inventory->addProduct(*(new SopKambing()));
      }else {
        std::cout << name << " tidak berhasil dibuat :(" << std::endl;
        SopKambing::showReq();
        return;
      }
  }else if(name == "Suplemen Super"){
      if(SuplemenSuper::isMixValid(*inventory)){
        inventory->removeProduct(*(new ChickenEgg()));
        inventory->removeProduct(*(new CowMilk()));
        inventory->removeProduct(*(new DuckMeat()));
        inventory->removeProduct(*(new HorseMeat()));
        inventory->addProduct(*(new SuplemenSuper()));
      }else {
        std::cout << name << " tidak berhasil dibuat :(" << std::endl;
        SuplemenSuper::showReq();
        return;
      }
  }else if(name == "Susu Kuda Liar"){
      if(SusuKudaLiar::isMixValid(*inventory)){
        inventory->removeProduct(*(new HorseMeat()));
        inventory->removeProduct(*(new HorseMilk()));
        inventory->addProduct(*(new SusuKudaLiar()));
      }else {
        std::cout << name << " tidak berhasil dibuat :(" << std::endl;
        SusuKudaLiar::showReq();
        return;
      }
  }else if(name == "Telor Dadar Wow"){
      if(TelorDadarWow::isMixValid(*inventory)){
        inventory->removeProduct(*(new HorseMeat()));
        inventory->removeProduct(*(new GoatMilk()));
        inventory->removeProduct(*(new DuckEgg()));
        inventory->addProduct(*(new TelorDadarWow()));
      }else {
        std::cout << name << " tidak berhasil dibuat :(" << std::endl;
        TelorDadarWow::showReq();
        return;
      }
  } else {
    std::cout << name << " tidak terdapat pada resep!" << std::endl;
  }
  std::cout << name << " berhasil dibuat :)" << std::endl;
}
