#include <gtest/gtest.h>
#include "Inventory.cpp"
#include "products/CowMilk.cpp"
#include "products/Products.cpp"
#include "products/GoatMeat.cpp"
#include "common/LinkedList.h"
struct InvTest : testing::Test{
	Inventory inv;
	Inventory inv2;
	Inventory inv3;
	InvTest(){
		inv.addProduct(CowMilk());
		inv.addProduct(GoatMeat());
		inv.addProduct(GoatMeat());
		inv.removeProduct(GoatMeat());
	}
};

TEST_F(InvTest, InvDetails) { 
	CowMilk* temp = new CowMilk();
	GoatMeat* temp1 = new GoatMeat();
	EXPECT_EQ(2, inv.getJumlahInventori());
	EXPECT_EQ(0, inv2.getJumlahInventori());
	EXPECT_EQ(temp->getName(), inv.getProduct(0).getName());
	EXPECT_EQ(temp1->getName(), inv.getProduct(1).getName());
	EXPECT_EQ(true, inv.isProductExist(GoatMeat()));
	EXPECT_EQ(false, inv2.isProductExist(CowMilk()));
	EXPECT_EQ(0, inv3.getJumlahInventori());
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
