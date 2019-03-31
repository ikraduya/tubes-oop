#include <iostream>
#include "Kambing.h"
#include "../products/GoatMeat.h"
#include "../products/GoatMilk.h"

using namespace std;
/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime Waktu lapar hewan
 */
Kambing::Kambing(Coordinate _posisi, int _HungryTime): FarmAnimal(_posisi, _HungryTime, false, true, true){}

/**
 * @brief Kambing bersuara
 */
void Kambing::Bersuara() const{
  cout << "Mbee mbee!" << endl;
}

/**
 * @brief Kambing menghasilkan susu
 *
 * @return FarmProducts berupa susu kambing
 */
FarmProducts& Kambing::Interact(){
  if (canInteract){
    canInteract = false;
    GoatMilk *susu = new GoatMilk();
    return *susu;
  }
}

/**
 * @brief Kambing menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging kambing
 */
FarmProducts& Kambing::Kill(){
  liveStatus = false;
  GoatMeat *daging = new GoatMeat();
  return *daging;
}
/**
 * Menggambar Kambing dengan K
 */
void Kambing::Render() const{
  cout << "K";
}
