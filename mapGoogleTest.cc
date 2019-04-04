// mapGoogleTest.cpp
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
#include "Inventory.h"
#include "products/Products.h"
#include "products/ChickenEgg.h"
#include "products/ChickenMeat.h"
#include "products/CowMeat.h"
#include "products/CowMilk.h"
#include "products/DuckEgg.h"
#include "products/DuckMeat.h"
#include "products/GoatMeat.h"
#include "products/GoatMilk.h"
#include "products/HorseMeat.h"
#include "products/HorseMilk.h"
#include "products/Keju.h"
#include "products/ObatSuperChenLong.h"
#include "products/RicaKuda.h"
#include "products/SopKambing.h"
#include "products/SuplemenSuper.h"
#include "products/SusuKudaLiar.h"
#include "products/TelorDadarWow.h"

struct MapTest : testing::Test{
	Ukuran* ukuran = new Ukuran();
  Ukuran* ukuranParam = new Ukuran(1,2);
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
  //Ukuran.h
	EXPECT_EQ(-1, ukuran->getL());
  EXPECT_EQ(-1, ukuran->getP());
  EXPECT_EQ(2, ukuranParam->getL());
  EXPECT_EQ(1, ukuranParam->getP());

  //Coordinate.h
  EXPECT_EQ(-1, coordinate->getX());
  EXPECT_EQ(-1, coordinate->getY());
  EXPECT_EQ(1, coordinateParam->getX());
  EXPECT_EQ(2, coordinate->getY());
  EXPECT_EQ(false, *coordinate==*coordinateParam);
  EXPECT_EQ(true, *coordinate!=*coordinateParam);

  //Cell.h
  EXPECT_EQ('?', cell->getSymbol());

  //Land.h
  EXPECT_EQ(false, barn->getHasGrass());

  //Truck.h
  EXPECT_EQ(5, truck->getRemainingTick());
  EXPECT_EQ(5, truckCoordinate->getRemainingTick());

}

/* blm di test:
  Map.h
  Map(std::string mapFilename);
  ~Map();
  Ukuran getUkuran() const;
  Cell*** getMapPtr();
  Cell getCell(int i, int j) const;
  Coordinate getMixerPosition() const;
  Coordinate getTruckPosition() const;
  Coordinate getWellPosition() const;
  Facility* getMixerPtr();
  Facility* getTruckPtr();
  Facility* getWellPtr();

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
  Coordinate getCoordinate() const;
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
