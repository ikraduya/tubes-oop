#include "Land.h"
#include <iostream>
using namespace std;

  /**
   * @brief getter hasGrass
   * @return bool hasGrass
   */
  bool Land::getHasGrass(){ 
    return hasGrass;
  }

  /**
   * @brief setter hasGrass = false
   */
  void Land::removeGrass(){
    hasGrass = false;
  }

  /**
   * @brief setter hasGrass = true
   */
  void Land::growGrass(){ hasGrass = true; }
