#include <iostream>
#include "Map.h"
#include "Ukuran.h"
#include "cell/Cell.h"
using namespace std;

int main(){
  Map map("Map.txt");
  for(int i=0; i<map.getUkuran().getL(); i++){
    for(int j=0; j<map.getUkuran().getP(); j++){
      cout << map.getCell(i,j).getSymbol();
    }
    cout << '\n';
  }
}
