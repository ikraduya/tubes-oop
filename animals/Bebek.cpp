#include <iostream>
#include "Bebek.h"
#include "../products/DuckEgg.h"
#include "../products/DuckMeat.h"

using namespace std;
/**
 * @brief default ctor
 */
Bebek::Bebek(): FarmAnimal(){
  isProduceMeat = true;
  isProduceEgg = true;
  symbol = 'b';
}
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
    return produceEgg();
  }
  throw "belum makan";
}

/**
 * @brief Bebek menghasilkan daging dan mati
 *
 * @return FarmProducts berupa daging bebek
 */
FarmProducts& Bebek::Kill(){
  liveStatus = false;
  return produceMeat();
}
/**
 * Menggambar Bebek dengan B
 */
char Bebek::Render() const{
  return 'B';
}
/**
 * Menghasilkan telur bebek
 */
FarmProducts& Bebek::produceEgg(){
  DuckEgg *telor = new DuckEgg();
  return *telor;
}
/**
 * Menghasilkan daging bebek
 */
FarmProducts& Bebek::produceMeat(){
  DuckMeat *daging = new DuckMeat();
  return *daging;
}
