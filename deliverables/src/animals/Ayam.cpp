#include <iostream>
#include "Ayam.h"
#include "../products/ChickenEgg.h"
#include "../products/ChickenMeat.h"

using namespace std;
/**
 * @brief default ctor
 */
Ayam::Ayam(): FarmAnimal(){
  isProduceMeat = true;
  isProduceMilk = true;
  symbol = 'c';
}
/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime Waktu lapar hewan
 */
Ayam::Ayam(Coordinate _posisi, int _HungryTime): FarmAnimal(_posisi, _HungryTime, true, true, false){
  symbol = 'c';
}

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
    return produceEgg();
  }
  throw "belum makan";
}
/**
 * @brief Ayam menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging ayam
 */
FarmProducts& Ayam::Kill(){
  liveStatus = false;
  return produceMeat();
}
/**
 * Menggambar Ayam dengan A
 */
char Ayam::Render() const{
  return 'C';
}
/**
 * Menghasilkan telur ayam
 */
FarmProducts& Ayam::produceEgg(){
  ChickenEgg *telor = new ChickenEgg();
  return *telor;
}
/**
 * Menghasilkan daging ayam
 */
FarmProducts& Ayam::produceMeat(){
  ChickenMeat *daging = new ChickenMeat();
  return *daging;
}
