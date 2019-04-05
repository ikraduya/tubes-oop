#include <iostream>
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

void Mixer::mixProducts(Inventory* inventory, std::string name) {
  if(name == "Keju"){
    if(Keju::isMixValid(*inventory)){
      inventory->removeProduct(CowMilk());
      inventory->removeProduct(CowMilk());
      inventory->addProduct(Keju());
    } else {
      throw "tidak berhasil dibuat, requirement tidak mencukupi";
    }
  }else if(name == "Obat Super Chen Long"){
    if(ObatSuperChenLong::isMixValid(*inventory)){
      inventory->removeProduct(*(new HorseMeat()));
      inventory->removeProduct(*(new GoatMeat()));
      inventory->addProduct(*(new ObatSuperChenLong()));
    } else {
      throw " tidak berhasil dibuat, requirement tidak mencukupi";
    }
  }else if(name == "Rica Kuda"){
    if(RicaKuda::isMixValid(*inventory)){
      inventory->removeProduct(*(new CowMeat()));
      inventory->removeProduct(*(new HorseMeat()));
      inventory->addProduct(*(new RicaKuda()));
    } else {
      throw "tidak berhasil dibuat, requirement tidak mencukupi";
    }
  }else if(name == "Sop Kambing"){
    if(SopKambing::isMixValid(*inventory)){
      inventory->removeProduct(*(new GoatMeat()));
      inventory->removeProduct(*(new GoatMeat()));
      inventory->addProduct(*(new SopKambing()));
    } else {
      throw " tidak berhasil dibuat, requirement tidak mencukupi";
    }
  }else if(name == "Suplemen Super"){
    if(SuplemenSuper::isMixValid(*inventory)){
      inventory->removeProduct(*(new ChickenEgg()));
      inventory->removeProduct(*(new CowMilk()));
      inventory->removeProduct(*(new DuckMeat()));
      inventory->removeProduct(*(new HorseMeat()));
      inventory->addProduct(*(new SuplemenSuper()));
    } else {
      throw " tidak berhasil dibuat, requirement tidak mencukupi";
    }
  }else if(name == "Susu Kuda Liar"){
    if(SusuKudaLiar::isMixValid(*inventory)){
      inventory->removeProduct(HorseMeat());
      inventory->removeProduct(HorseMilk());
      inventory->addProduct(SusuKudaLiar());
    } else {
      throw " tidak berhasil dibuat, requirement tidak mencukupi";
    }
  }else if(name == "Telor Dadar Wow"){
    if(TelorDadarWow::isMixValid(*inventory)){
      inventory->removeProduct(*(new HorseMeat()));
      inventory->removeProduct(*(new GoatMilk()));
      inventory->removeProduct(*(new DuckEgg()));
      inventory->addProduct(*(new TelorDadarWow()));
    } else {
      throw "tidak berhasil dibuat, requirement tidak mencukupi";
    }
  } else {
    throw "tidak terdapat pada resep!";
  }
}

void Mixer::showSideProducts() {
  std::cout << "Daftar side products:" << std::endl;
  std::cout << "- Keju" << std::endl;
  std::cout << "- Obat Super Chen Long" << std::endl;
  std::cout << "- Rica Kuda" << std::endl;
  std::cout << "- Sop Kambing" << std::endl;
  std::cout << "- Suplemen Super" << std::endl;
  std::cout << "- Susu Kuda Liar" << std::endl;
  std::cout << "- Telor Dadar Wow" << std::endl;
  std::cout << "Jalankan perintah 'showreq' untuk melihat requirements side product" << std::endl;
}

void Mixer::showReqSideProducts(std::string name) {
  if(name == "Keju"){
    Keju::showReq();
  }else if(name == "Obat Super Chen Long"){
    ObatSuperChenLong::showReq();
  }else if(name == "Rica Kuda"){
    RicaKuda::showReq();
  }else if(name == "Sop Kambing"){
    SopKambing::showReq();
  }else if(name == "Suplemen Super"){
    SuplemenSuper::showReq();
  }else if(name == "Susu Kuda Liar"){
    SusuKudaLiar::showReq();
  }else if(name == "Telor Dadar Wow"){
    TelorDadarWow::showReq();
  } else {
    std::cout << "Tidak terdapat side product bernama " << name << std::endl;
  }
}
