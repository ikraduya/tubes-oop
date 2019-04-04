#include "Kambing.cpp"
#include "Ayam.cpp"
#include "Kuda.cpp"
#include "Sapi.cpp"
#include "Bebek.cpp"
#include "FarmAnimal.cpp"
#include <gtest/gtest.h>
#include "FarmAnimal.h"
#include "../common/LinkedList.h"
#include "../products/Products.cpp"
#include "../products/ChickenMeat.cpp"
#include "../products/ChickenEgg.cpp"
#include "../products/DuckMeat.cpp"
#include "../products/DuckEgg.cpp"
#include "../products/GoatMilk.cpp"
#include "../products/GoatMeat.cpp"
#include "../products/CowMilk.cpp"
#include "../products/CowMeat.cpp"
#include "../products/HorseMilk.cpp"
#include "../products/HorseMeat.cpp"
#include "../common/Coordinate.cpp"
#include "../cell/Cell.cpp"
#include "../cell/Barn.cpp"
#include "../cell/Coop.cpp"
#include "../cell/Grassland.cpp"



struct AnimalTest : testing::Test{
    Ayam *c = new Ayam();
    Bebek *d = new Bebek();
    Sapi *s = new Sapi();
    Kuda *h = new Kuda();
    Kambing *k = new Kambing();
    AnimalTest(){};
    ~AnimalTest(){ };
};