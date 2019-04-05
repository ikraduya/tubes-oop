#include <gtest/gtest.h>
#include "TestHeaders.h"

struct PlayerTest : testing::Test{
  Player* player = new Player();
	PlayerTest(){

	}
	~PlayerTest(){
		delete player;
	}
};

TEST_F(PlayerTest, PlayerInventory) {
  EXPECT_EQ(0, player->getInventori().getJumlahInventori());
  player->getInventori().addProduct(ObatSuperChenLong());
  EXPECT_EQ(1, player->getInventori().getJumlahInventori());
  player->getInventori().addProduct(SusuKudaLiar());
  player->getInventori().addProduct(SuplemenSuper());
  EXPECT_EQ(3, player->getInventori().getJumlahInventori());
}

TEST_F(PlayerTest, PlayerWadahAir) {
  const int MaxWater = 20;
  EXPECT_EQ(20, player->getWadahAir());
  EXPECT_EQ(15, *(player->getAirPtr()) = *(player->getAirPtr())-5);
}

TEST_F(PlayerTest, PlayerUang) {
  EXPECT_EQ(0, player->getUang());
  EXPECT_EQ(5, *(player->getUangPtr()) = *(player->getUangPtr()) + 5);
}

TEST_F(PlayerTest, PlayerArah) {
  EXPECT_EQ(UP, player->getArah());
  ArahEnum *arah = player->getArahPtr();
  *arah = DOWN;
  EXPECT_EQ(DOWN, player->getArah());
  player->lookLeft();
  EXPECT_EQ(LEFT, player->getArah());
}

TEST_F(PlayerTest, PlayerCoordinate) {
  EXPECT_EQ(Coordinate(10,6).getX(), player->getCoordinate().getX());
  EXPECT_EQ(Coordinate(10,6).getY(), player->getCoordinate().getY());
  player->up();
  EXPECT_EQ(Coordinate(10,5).getX(), player->getCoordinate().getX());
  EXPECT_EQ(Coordinate(10,5).getY(), player->getCoordinate().getY());
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
