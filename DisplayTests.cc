#include <gtest/gtest.h>
#include "Display.cpp"
#include "TestHeaders.h"

struct DispTest : testing::Test{
	Farm* farm = new Farm("Map.txt", "Animals.txt");
	Display* disp = new Display(farm->map.getMapPtr(), 
    farm->player.getInventoriPtr(), 
    farm->player.getUangPtr(), 
    farm->player.getAirPtr(),
    farm->player.getArahPtr(),
    farm->player.getCoordinatePtr(),
    farm->getFarmAnimalsPtr(),
    farm->getGlobalTickPtr());
    char chararr[6] = "tests";
    std::string str;
    std::string line;
    std::string space;
    std::string strtest;
	DispTest(){
		str = "tests";
		line = "-----";
		space = "     ";
		strtest = "sample";
		
	}
	~DispTest(){
		delete disp;
		delete farm;
	}
};
TEST_F(DispTest, TestDisp) { 
	EXPECT_EQ('^', disp->arahToChar(UP));
	EXPECT_EQ('V', disp->arahToChar(DOWN));
	EXPECT_EQ('>', disp->arahToChar(RIGHT));
	EXPECT_EQ('<', disp->arahToChar(LEFT));
	EXPECT_EQ(str, disp->convertArrCharToStr(chararr));
	EXPECT_EQ(line, disp->makeHorizontalLine(5));
	EXPECT_EQ(space, disp->makeHorizontalSpace(5));
	char arrtest[6];
	disp->setStrToArrChr(arrtest, strtest, 6);
	EXPECT_TRUE(strcmp(arrtest,strtest.c_str()) == 0);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
