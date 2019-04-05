// MapTests.cpp
#include "Map.cpp"
#include "Ukuran.cpp"
#include "common/Coordinate.cpp"
#include "cell/Barn.cpp"
#include "cell/Cell.cpp"
#include "cell/Coop.cpp"
#include "cell/Grassland.cpp"
#include "cell/Land.cpp"
#include "cell/Mixer.cpp"
#include "cell/Truck.cpp"
#include "cell/Well.cpp"
#include <gtest/gtest.h>

//additional include
#include "Inventory.cpp"
#include "products/Products.cpp"
#include "products/ChickenEgg.cpp"
#include "products/ChickenMeat.cpp"
#include "products/CowMeat.cpp"
#include "products/CowMilk.cpp"
#include "products/DuckEgg.cpp"
#include "products/DuckMeat.cpp"
#include "products/GoatMeat.cpp"
#include "products/GoatMilk.cpp"
#include "products/HorseMeat.cpp"
#include "products/HorseMilk.cpp"
#include "products/Keju.cpp"
#include "products/ObatSuperChenLong.cpp"
#include "products/RicaKuda.cpp"
#include "products/SopKambing.cpp"
#include "products/SuplemenSuper.cpp"
#include "products/SusuKudaLiar.cpp"
#include "products/TelorDadarWow.cpp"

struct MapTest : testing::Test{
	Map* map = new Map("Map.txt");
	Ukuran* ukuran = new Ukuran();
  Ukuran* ukuranParam = new Ukuran(10,11);
	Coordinate* coordinate = new Coordinate();
  Coordinate* coordinateParam = new Coordinate(1,2);
	Barn* barn = new Barn(*coordinateParam, false);
	Cell* cell = new Cell();
	Coop* coop = new Coop(*coordinateParam, true);
	Grassland* grassland = new Grassland(*coordinateParam, false);
	Mixer* mixer = new Mixer(2, 1);
  Mixer* mixerCoordinate = new Mixer(*coordinateParam);
	Truck* truck = new Truck(2, 1);
  Truck* truckCoordinate = new Truck(*coordinateParam);
	Well* well = new Well(2, 1);
  Well* wellCoordinate = new Well(*coordinateParam);
	MapTest(){}
	~MapTest(){
		delete ukuran;
    delete ukuranParam;
    delete coordinateParam;
    delete coordinate;
    delete barn;
    delete cell;
    delete coop;
    delete grassland;
    delete mixer;
    delete mixerCoordinate;
    delete truck;
    delete truckCoordinate;
    delete well;
    delete wellCoordinate;
	}
};

TEST_F(MapTest, MapName) {
	//Map.h
	EXPECT_EQ(10, map->getUkuran().getL());
	EXPECT_EQ('o', map->getCell(0,0).getSymbol());
	EXPECT_EQ(10, map->getMixerPosition().getX());
	EXPECT_EQ(10, map->getTruckPosition().getX());
	EXPECT_EQ(10, map->getWellPosition().getX());
	EXPECT_EQ('T', map->getTruckPtr()->getSymbol());
	EXPECT_EQ('W', map->getWellPtr()->getSymbol());
	EXPECT_EQ('M', map->getMixerPtr()->getSymbol());

  //Ukuran.h
	EXPECT_EQ(-1, ukuran->getL());
  EXPECT_EQ(-1, ukuran->getP());
  EXPECT_EQ(11, ukuranParam->getL());
  EXPECT_EQ(10, ukuranParam->getP());

  //Coordinate.h
  EXPECT_EQ(-1, coordinate->getX());
  EXPECT_EQ(-1, coordinate->getY());
  EXPECT_EQ(1, coordinateParam->getX());
  EXPECT_EQ(2, coordinateParam->getY());
  EXPECT_EQ(false, *coordinate==*coordinateParam);
  EXPECT_EQ(true, *coordinate!=*coordinateParam);

  //Cell.h
  EXPECT_EQ('?', cell->getSymbol());

  //Land.h
  EXPECT_EQ(false, barn->getHasGrass());

  //Truck.h
  EXPECT_EQ(0, truck->getRemainingTick());
  EXPECT_EQ(0, truckCoordinate->getRemainingTick());

}

/* blm di test:
  Map.h
  Cell*** getMapPtr();

  Ukuran.h
  void setP(int x);
  void setL(int y);

  Coordinate.h
  void setX(int x);
  void setY(int y);
  void goUp();
  void goDown();
  void goLeft();
  void goRight();
  Coordinate goUpRet();
  Coordinate goDownRet();
  Coordinate goLeftRet();
  Coordinate goRightRet();
  Coordinate operator+(const Coordinate& c);

  Barn.h
  void grow();
  void eaten();

  Cell.h
  void Cell::setSymbol(char symbol);
  void setCoordinate(Coordinate coordinate);

  Coop.h
  void grow();
  void eaten();

  Grassland.h
  void grow();
  void eaten();

  Land.h
  void removeGrass();
  void growGrass();

  Truck.h
  void jualBarangHasilTernak(Inventory *inventory, int *uang);
  void setRemainingTick(int remainingTick);

*/

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
