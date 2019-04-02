#include <iostream>
#include "Sapi.h"
#include "../products/CowMeat.h"
#include "../products/CowMilk.h"

using namespace std;
/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime Waktu lapar hewan
 */
Sapi::Sapi(Coordinate _posisi, int _HungryTime): FarmAnimal(_posisi, _HungryTime, false, true, true){
  symbol = 's';
}

/**
 * @brief Sapi bersuara
 */
void Sapi::Bersuara() const{
  cout << "Moo moo!" << endl;
}

/**
 * @brief Sapi menghasilkan susu
 *
 * @return FarmProducts berupa susu sapi
 */
FarmProducts& Sapi::Interact(){
  if (canInteract){
    canInteract = false;
    CowMilk *susu = new CowMilk();
    return *susu;
  }
}

/**
 * @brief Sapi menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging sapi
 */
FarmProducts& Sapi::Kill(){
  liveStatus = false;
  CowMeat *daging = new CowMeat();
  return *daging;
}
/**
 * Menggambar Sapi dengan S
 */
char Sapi::Render() const{
  return 'S';
}
