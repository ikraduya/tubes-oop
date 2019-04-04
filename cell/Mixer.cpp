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

void Mixer::mixProducts(Inventory* inventory, std::string name){
  if(name == "Keju"){
      if(Keju::isMixValid(*inventory)){
        inventory->removeProduct(*(new CowMilk()));
        inventory->removeProduct(*(new CowMilk()));
        inventory->addProduct(*(new Keju()));
      }else
        Keju::showReq();
  }else if(name == "Obat Super Chen Long"){
      if(ObatSuperChenLong::isMixValid(*inventory)){
        inventory->removeProduct(*(new HorseMeat()));
        inventory->removeProduct(*(new GoatMeat()));
        inventory->addProduct(*(new ObatSuperChenLong()));
      }else
        ObatSuperChenLong::showReq();
  }else if(name == "Rica Kuda"){
      if(RicaKuda::isMixValid(*inventory)){
        inventory->removeProduct(*(new CowMeat()));
        inventory->removeProduct(*(new HorseMeat()));
        inventory->addProduct(*(new RicaKuda()));
      }else
        RicaKuda::showReq();
  }else if(name == "Sop Kambing"){
      if(SopKambing::isMixValid(*inventory)){
        inventory->removeProduct(*(new GoatMeat()));
        inventory->removeProduct(*(new GoatMeat()));
        inventory->addProduct(*(new SopKambing()));
      }else
        SopKambing::showReq();
  }else if(name == "Suplemen Super"){
      if(SuplemenSuper::isMixValid(*inventory)){
        inventory->removeProduct(*(new ChickenEgg()));
        inventory->removeProduct(*(new CowMilk()));
        inventory->removeProduct(*(new DuckMeat()));
        inventory->removeProduct(*(new HorseMeat()));
        inventory->addProduct(*(new SuplemenSuper()));
      }else
        SuplemenSuper::showReq();
  }else if(name == "Susu Kuda Liar"){
      if(SusuKudaLiar::isMixValid(*inventory)){
        inventory->removeProduct(*(new HorseMeat()));
        inventory->removeProduct(*(new HorseMilk()));
        inventory->addProduct(*(new SusuKudaLiar()));
      }else
        SusuKudaLiar::showReq();
  }else if(name == "Telor Dadar Wow"){
      if(TelorDadarWow::isMixValid(*inventory)){
        inventory->removeProduct(*(new HorseMeat()));
        inventory->removeProduct(*(new GoatMilk()));
        inventory->removeProduct(*(new DuckEgg()));
        inventory->addProduct(*(new TelorDadarWow()));
      }else
        TelorDadarWow::showReq();
  }
}
