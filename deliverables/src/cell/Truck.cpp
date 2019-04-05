#include "Truck.h"

const int Truck::maxRemainingTick = 10;

Truck::Truck(int x, int y) {
    setCoordinate(Coordinate(x,y));
    setSymbol('T');
    remainingTick = 0;
}

Truck::Truck(Coordinate posisi) {
    setCoordinate(posisi);
    setSymbol('T');
    remainingTick = 0;
}

void Truck::jualBarangHasilTernak(Inventory *inventory, int* uang){
    if (remainingTick > 0) {
        throw "Truck masih otw farm";
    }
    
    Products product;
    std::string name;
    bool menjual = false;
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
        menjual = true;        
    }
    if (menjual) {
        remainingTick = maxRemainingTick;
        symbol = 't';
    } else {
        throw "Tidak ada barang yang bisa dijual";
    }
}

int Truck::getRemainingTick(){ return remainingTick; }

void Truck::setRemainingTick(int remainingTick){ this->remainingTick = remainingTick; }

void Truck::respondToTick() {
    if (remainingTick > 0) {
        remainingTick--;
    }
    if (remainingTick <= 0 && symbol == 't') {
        symbol = 'T';
    }
}
