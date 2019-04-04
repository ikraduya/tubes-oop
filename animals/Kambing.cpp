#include <iostream>
#include "Kambing.h"
#include "../products/GoatMeat.h"
#include "../products/GoatMilk.h"

using namespace std;
/**
 * @brief default ctor
 */
Kambing::Kambing(): FarmAnimal(){
  isProduceMeat = true;
  isProduceMilk = true;
}
/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime Waktu lapar hewan
 */
Kambing::Kambing(Coordinate _posisi, int _HungryTime): FarmAnimal(_posisi, _HungryTime, false, true, true){
  symbol = 'g';
}

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
    return produceMilk();
  }
}

/**
 * @brief Kambing menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging kambing
 */
FarmProducts& Kambing::Kill(){
  liveStatus = false;
  return produceMeat();
}
/**
 * Menggambar Kambing dengan K
 */
char Kambing::Render() const{
  return 'K';
}
/**
 * Menghasilkan daging kambing
 */
FarmProducts& Kambing::produceMeat(){
  GoatMeat *daging = new GoatMeat();
  return *daging;
}
/**
 * Menghasilkan susu kambing
 */
FarmProducts& Kambing::produceMilk(){
  GoatMilk *susu = new GoatMilk();
  return *susu;
}