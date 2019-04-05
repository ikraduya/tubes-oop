#include <iostream>
#include "Farm.h"

int main() {
  Farm farm("Map.txt");
  farm.renderAll();
  farm.removeDeadAnimal();
  farm.tickDispatcher();

  std::cout << "done beibe" << std::endl;
  return 0;
}
