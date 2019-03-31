#include <iostream>
#include "Ayam.h"
#include "../products/ChickenEgg.h"
#include "../products/ChickenMeat.h"

using namespace std;

/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime Waktu lapar hewan
 */
Ayam::Ayam(Coordinate _posisi, int _HungryTime): FarmAnimal(_posisi, _HungryTime, true, true, false){}

/**
 * @brief Ayam bersuara
 */
void Ayam::Bersuara() const{
  cout << "Petok petok!" << endl;
}

/**
 * @brief Ayam menghasilkan telur
 *
 * @return FarmProducts berupa telur ayam
 */
FarmProducts& Ayam::Interact(){
  if (canInteract){
    canInteract = false;
    ChickenEgg *telor = new ChickenEgg();
    return *telor;
  }
}
/**
 * @brief Ayam menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging ayam
 */
FarmProducts& Ayam::Kill(){
  liveStatus = false;
  ChickenMeat *daging = new ChickenMeat();
  return *daging;
}
/**
 * Menggambar Ayam dengan A
 */
void Ayam::Render() const{
  cout << "A";
}
