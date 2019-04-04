#include <gtest/gtest.h>
#include "TestHeaders.h"

struct FarmTest : testing::Test{
  Farm* farm = new Farm("Map.txt");
	FarmTest(){
			
	}
	~FarmTest(){
		delete farm;
	}
};

TEST_F(FarmTest, FarmSteppableByPlayer) {
  EXPECT_EQ(true, farm->isCellSteppableByPlayer(Coordinate(0,0)));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
