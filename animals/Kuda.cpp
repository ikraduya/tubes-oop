#include <iostream>
#include "Kuda.h"
#include "../products/HorseMeat.h"
#include "../products/HorseMilk.h"

using namespace std;
/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime Waktu lapar hewan
 */
Kuda::Kuda(Coordinate _posisi, int _HungryTime): FarmAnimal(_posisi, _HungryTime, false, true, true){}

/**
 * @brief Kuda bersuara
 */
void Kuda::Bersuara() const{
  cout << "Hihi hihi!" << endl;
}

/**
 * @brief Kuda menghasilkan susu
 *
 * @return FarmProducts berupa susu kuda
 */
FarmProducts& Kuda::Interact(){
  if (canInteract){
    canInteract = false;
    HorseMilk *susu = new HorseMilk();
    return *susu;
  }
}

/**
 * @brief Kuda menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging kuda
 */
FarmProducts& Kuda::Kill(){
  liveStatus = false;
  HorseMeat *daging = new HorseMeat();
  return *daging;
}
/**
 * Menggambar Kuda dengan H
 */
void Kuda::Render() const{
  cout << "H";
}
