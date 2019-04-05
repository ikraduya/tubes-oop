#include <iostream>
#include "Kuda.h"
#include "../products/HorseMeat.h"
#include "../products/HorseMilk.h"

using namespace std;
/**
 * @brief default ctor
 */
Kuda::Kuda(): FarmAnimal(){
  isProduceMeat = true;
  isProduceMilk = true;
  symbol = 'h';
}
/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime Waktu lapar hewan
 */
Kuda::Kuda(Coordinate _posisi, int _HungryTime): FarmAnimal(_posisi, _HungryTime, false, true, true){
  symbol = 'h';
}

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
    return produceMilk();
  }
  throw "belum makan";
}

/**
 * @brief Kuda menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging kuda
 */
FarmProducts& Kuda::Kill(){
  liveStatus = false;
  return produceMeat();
}
/**
 * Menggambar Kuda dengan H
 */
char Kuda::Render() const{
  return 'H';
}
/**
 * Menghasilkan daging kuda
 */
FarmProducts& Kuda::produceMeat(){
  HorseMeat *daging = new HorseMeat();
  return *daging;
}
/**
 * Menghasilkan susu kuda
 */
FarmProducts& Kuda::produceMilk(){
  HorseMilk *susu = new HorseMilk();
  return *susu; 
}
