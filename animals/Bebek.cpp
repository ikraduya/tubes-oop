#include <iostream>
#include "Bebek.h"
#include "../products/DuckEgg.h"
#include "../products/DuckMeat.h"

using namespace std;
/**
 * @brief ctor dengan parameter
 *
 * @param _posisi posisi hewan
 * @param _HungryTime
 */
Bebek::Bebek(Coordinate _posisi, int _HungryTime):FarmAnimal(_posisi, _HungryTime, true, true, false){
  symbol = 'b';
}

/**
 * Bebek bersuara
 */
void Bebek::Bersuara() const{
  cout << "Kwek kwek!" << endl;
}

/**
 * @brief Bebek menghasilkan telur
 *
 * @return FarmProducts berupa telur bebek
 */
FarmProducts& Bebek::Interact(){
  if (canInteract){
    canInteract = false;
    DuckEgg *telor = new DuckEgg();
    return *telor;
  }
}

/**
 * @brief Bebek menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging bebek
 */
FarmProducts& Bebek::Kill(){
  liveStatus = false;
  DuckMeat *daging = new DuckMeat();
  return *daging;
}
/**
 * Menggambar Bebek dengan B
 */
char Bebek::Render() const{
  return 'B';
}
