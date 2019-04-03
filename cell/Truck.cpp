#include "Truck.h"

  /**
   * Konstruktor dengan parameter, inisialisasi simbol 'W'
   *
   * @param x absis petak, dan y ordinat petak
   */
  Truck::Truck(int x, int y){
    setCoordinate(Coordinate(x,y));
    setSymbol('T');
  }

  Truck::Truck(Coordinate posisi) {
    setCoordinate(posisi);
    setSymbol('T');
  }

  /**
   * @brief Jual seluruh product pada inventory, menambah uang
   */
  void jualBarangHasilTernak(Inventory *inventory, int* uang){
    Products product;
    std::string name;
    while(inventory->getJumlahInventori() > 0){
      product = inventory->getProduct(1);
      name = product.getName();
      if(name == "Chicken Egg"){
          *uang = *uang + ChickenEgg::getPrice();
          break;
      }else if(name == "Chicken Meat"){
          *uang = *uang + ChickenMeat::getPrice();
          break;
      }else if(name == "Cow Meat"){
          *uang = *uang + CowMeat::getPrice();
          break;
      }else if(name == "Cow Milk"){
          *uang = *uang + CowMilk::getPrice();
          break;
      }else if(name == "Duck Egg"){
          *uang = *uang + DuckEgg::getPrice();
          break;
      }else if(name == "Duck Meat"){
          *uang = *uang + DuckMeat::getPrice();
          break;
      }else if(name == "Goat Meat"){
          *uang = *uang + GoatMeat::getPrice();
          break;
      }else if(name == "Goat Milk"){
          *uang = *uang + GoatMilk::getPrice();
          break;
      }else if(name == "Horse Meat"){
          *uang = *uang + HorseMeat::getPrice();
          break;
      }else if(name == "Horse Milk"){
          *uang = *uang + HorseMilk::getPrice();
          break;
      }else if(name == "Keju"){
          *uang = *uang + Keju::getPrice();
          break;
      }else if(name == "Obat Super Chen Long"){
          *uang = *uang + ObatSuperChenLong::getPrice();
          break;
      }else if(name == "Rica Kuda"){
          *uang = *uang + RicaKuda::getPrice();
          break;
      }else if(name == "Sop Kambing"){
          *uang = *uang + SopKambing::getPrice();
          break;
      }else if(name == "Suplemen Super"){
          *uang = *uang + SuplemenSuper::getPrice();
          break;
      }else if(name == "Susu Kuda Liar"){
          *uang = *uang + SusuKudaLiar::getPrice();
          break;
      }else if(name == "Telor Dadar Wow"){
          *uang = *uang + TelorDadarWow::getPrice();
          break;
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
