#include <gtest/gtest.h>
#include "TestHeaders.h"

struct FarmTest : testing::Test{
	Farm* farm = new Farm("Map.txt", "Animlas.txt");
	FarmTest(){
	}
	~FarmTest(){
		delete farm;
	}
};

TEST_F(FarmTest, FarmSteppableByPlayer) {
	EXPECT_EQ(false, farm->isCellSteppableByPlayer(Coordinate(10,0)));
	EXPECT_EQ(true, farm->isCellSteppableByPlayer(Coordinate(10,5)));
	EXPECT_EQ(false, farm->isCellSteppableByPlayer(Coordinate(10,1)));
	EXPECT_EQ(false, farm->isCellSteppableByPlayer(Coordinate(10,3)));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
