#include "Truck.h"

  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'W'
   *
   * @param x absis petak, dan y ordinat petak
   */
  Truck::Truck(int x, int y){
    setCoordinate(Coordinate(x,y));
    setSymbol('T');
    remainingTick = 5;
  }

  Truck::Truck(Coordinate posisi) {
    setCoordinate(posisi);
    setSymbol('T');
    remainingTick = 5;
  }

  /**
   * @brief Jual seluruh product pada inventory, menambah uang
   */
  void Truck::jualBarangHasilTernak(Inventory *inventory, int* uang){
    Products product;
    std::string name;
    while(inventory->getJumlahInventori() > 0){
      product = inventory->getProduct(0);
      name = product.getName();
      if(name == "Chicken Egg"){
          *uang = *uang + ChickenEgg::getPrice();
          
      }else if(name == "Chicken Meat"){
          *uang = *uang + ChickenMeat::getPrice();
          
      }else if(name == "Cow Meat"){
          *uang = *uang + CowMeat::getPrice();
          
      }else if(name == "Cow Milk"){
          *uang = *uang + CowMilk::getPrice();
          
      }else if(name == "Duck Egg"){
          *uang = *uang + DuckEgg::getPrice();
          
      }else if(name == "Duck Meat"){
          *uang = *uang + DuckMeat::getPrice();
          
      }else if(name == "Goat Meat"){
          *uang = *uang + GoatMeat::getPrice();
          
      }else if(name == "Goat Milk"){
          *uang = *uang + GoatMilk::getPrice();
          
      }else if(name == "Horse Meat"){
          *uang = *uang + HorseMeat::getPrice();
          
      }else if(name == "Horse Milk"){
          *uang = *uang + HorseMilk::getPrice();
          
      }else if(name == "Keju"){
          *uang = *uang + Keju::getPrice();
          
      }else if(name == "Obat Super Chen Long"){
          *uang = *uang + ObatSuperChenLong::getPrice();
          
      }else if(name == "Rica Kuda"){
          *uang = *uang + RicaKuda::getPrice();
          
      }else if(name == "Sop Kambing"){
          *uang = *uang + SopKambing::getPrice();
          
      }else if(name == "Suplemen Super"){
          *uang = *uang + SuplemenSuper::getPrice();
          
      }else if(name == "Susu Kuda Liar"){
          *uang = *uang + SusuKudaLiar::getPrice();
          
      }else if(name == "Telor Dadar Wow"){
          *uang = *uang + TelorDadarWow::getPrice();
      }
      inventory->removeProduct(product);
    }
  }

  /**
   * @brief getter remainingTick
   *
   * @return int remainingTick
   */
  int Truck::getRemainingTick(){ return remainingTick; }

  /**
   * @brief setter remainingTick
   */
  void Truck::setRemainingTick(int remainingTick){ this->remainingTick = remainingTick; }
