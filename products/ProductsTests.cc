#include <gtest/gtest.h>
#include "ChickenEgg.cpp"
#include "GoatMilk.cpp"
#include "CowMilk.cpp"
#include "CowMeat.cpp"
#include "GoatMeat.cpp"
#include "HorseMilk.cpp"
#include "HorseMeat.cpp"
#include "ChickenMeat.cpp"
#include "DuckMeat.cpp"
#include "DuckEgg.cpp"
#include "Keju.cpp"
#include "SideProducts.h"
#include "FarmProducts.h"
#include "ObatSuperChenLong.cpp"
#include "RicaKuda.cpp"
#include "SopKambing.cpp"
#include "Products.cpp"
#include "SuplemenSuper.cpp"
#include "SusuKudaLiar.cpp"
#include "TelorDadarWow.cpp"
#include "../Inventory.cpp"
#include "../common/LinkedList.h"
struct ProductsTest : testing::Test{
	Products* prod = new Products;
	ChickenEgg* a = new ChickenEgg();
	ChickenEgg* o = new ChickenEgg();
	HorseMeat* b = new HorseMeat();
	HorseMilk* c = new HorseMilk();
	GoatMeat* d = new GoatMeat();
	ChickenMeat* e = new ChickenMeat();
	GoatMilk* f = new GoatMilk();
	DuckMeat* g = new DuckMeat();
	DuckEgg* h = new DuckEgg();
	CowMilk* i = new CowMilk();
	CowMeat* j = new CowMeat();
	Keju* k = new Keju();
	RicaKuda* r = new RicaKuda();
	SopKambing* sk = new SopKambing();
	SuplemenSuper* ss = new SuplemenSuper();
	ObatSuperChenLong* q = new ObatSuperChenLong();
	SusuKudaLiar* skl = new SusuKudaLiar();
	TelorDadarWow* tdw = new TelorDadarWow();
	Inventory inv;
	Inventory invkos;
	ProductsTest(){
			inv.addProduct(CowMilk());
			inv.addProduct(CowMilk());
			inv.addProduct(GoatMeat());
			inv.addProduct(HorseMeat());
			inv.addProduct(HorseMilk());
			inv.addProduct(GoatMilk());
			inv.addProduct(DuckEgg());
			inv.addProduct(ChickenEgg());
			inv.addProduct(DuckMeat());
			inv.addProduct(CowMeat());
			inv.addProduct(GoatMeat());
		}
	~ProductsTest(){
		delete prod;
	}
};

TEST_F(ProductsTest, ProductsName) { 
	EXPECT_EQ("NULL", prod->getName());
	EXPECT_EQ("Chicken Egg", a->getName());
	EXPECT_EQ("Horse Meat", b->getName());
	EXPECT_EQ("Horse Milk", c->getName());
	EXPECT_EQ("Goat Meat", d->getName());
	EXPECT_EQ("Chicken Meat", e->getName());
	EXPECT_EQ("Goat Milk", f->getName());
	EXPECT_EQ("Duck Meat", g->getName());
	EXPECT_EQ("Duck Egg", h->getName());
	EXPECT_EQ("Cow Milk", i->getName());
	EXPECT_EQ("Cow Meat", j->getName());
	EXPECT_EQ("Keju", k->getName());
	EXPECT_EQ("Rica Kuda", r->getName());
	EXPECT_EQ("Sop Kambing", sk->getName());
	EXPECT_EQ("Suplemen Super", ss->getName());
	EXPECT_EQ("Obat Super Chen Long", q->getName());
	EXPECT_EQ("Susu Kuda Liar", skl->getName());
	EXPECT_EQ("Telor Dadar Wow", tdw->getName());
	EXPECT_EQ(20000, a->getPrice());
	EXPECT_EQ(20000, b->getPrice());
	EXPECT_EQ(40000, c->getPrice());
	EXPECT_EQ(15000, d->getPrice());
	EXPECT_EQ(8000, e->getPrice());
	EXPECT_EQ(2000, f->getPrice());
	EXPECT_EQ(10000, g->getPrice());
	EXPECT_EQ(25000, h->getPrice());
	EXPECT_EQ(5000, i->getPrice());
	EXPECT_EQ(50000, j->getPrice());
	EXPECT_EQ(100000, k->getPrice());
	EXPECT_EQ(86999, r->getPrice());
	EXPECT_EQ(85233, sk->getPrice());
	EXPECT_EQ(47329, ss->getPrice());
	EXPECT_EQ(150000, q->getPrice());
	EXPECT_EQ(13444, skl->getPrice());
	EXPECT_EQ(99999, tdw->getPrice());
	EXPECT_EQ(true, Keju::isMixValid(inv));
	EXPECT_EQ(false, Keju::isMixValid(invkos));
	EXPECT_EQ(true, ObatSuperChenLong::isMixValid(inv));
	EXPECT_EQ(false, ObatSuperChenLong::isMixValid(invkos));
	EXPECT_EQ(true, SusuKudaLiar::isMixValid(inv));
	EXPECT_EQ(false, SusuKudaLiar::isMixValid(invkos));
	EXPECT_EQ(true, TelorDadarWow::isMixValid(inv));
	EXPECT_EQ(false, TelorDadarWow::isMixValid(invkos));
	EXPECT_EQ(true, SuplemenSuper::isMixValid(inv));
	EXPECT_EQ(false, SuplemenSuper::isMixValid(invkos));
	EXPECT_EQ(true, SopKambing::isMixValid(inv));
	EXPECT_EQ(false, SopKambing::isMixValid(invkos));
	EXPECT_EQ(true, RicaKuda::isMixValid(inv));
	EXPECT_EQ(false, RicaKuda::isMixValid(invkos));
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



/*int main(){
	ChickenEgg* a = new ChickenEgg();
	ChickenEgg* o = new ChickenEgg();
	HorseMeat* b = new HorseMeat();
	HorseMilk* c = new HorseMilk();
	GoatMeat* d = new GoatMeat();
	ChickenMeat* e = new ChickenMeat();
	GoatMilk* f = new GoatMilk();
	DuckMeat* g = new DuckMeat();
	DuckEgg* h = new DuckEgg();
	CowMilk* i = new CowMilk();
	CowMeat* j = new CowMeat();
	Keju* k = new Keju();
	RicaKuda* r = new RicaKuda();
	SopKambing* sk = new SopKambing();
	SuplemenSuper* ss = new SuplemenSuper();
	ObatSuperChenLong* q = new ObatSuperChenLong();
	SusuKudaLiar* skl = new SusuKudaLiar();
	TelorDadarWow* tdw = new TelorDadarWow();
	std::cout << ChickenEgg::getPrice() << a->getName() <<std::endl;
	std::cout << HorseMeat::getPrice() << b->getName() << std::endl;
	std::cout << HorseMilk::getPrice() << c->getName() << std::endl;;
	std::cout << GoatMeat::getPrice() << d->getName() << std::endl;;
	std::cout << ChickenMeat::getPrice() << e->getName() << std::endl;;
	std::cout << GoatMilk::getPrice() << f->getName() << std::endl;;
	std::cout << DuckMeat::getPrice() << g->getName() << std::endl;;
	std::cout << DuckEgg::getPrice() << h->getName() << std::endl;;
	std::cout << CowMilk::getPrice() << i->getName() << std::endl;;
	std::cout << CowMeat::getPrice() << j->getName() << std::endl;;
	Keju::showReq();
	ObatSuperChenLong::showReq();
	RicaKuda::showReq();
	SopKambing::showReq();
	SuplemenSuper::showReq();
	SusuKudaLiar::showReq();
	TelorDadarWow::showReq();
	std::cout << ObatSuperChenLong::getPrice() << q->getName() << std::endl;
	std::cout << Keju::getPrice() << k->getName() << std::endl;
	std::cout << RicaKuda::getPrice() << r->getName() << std::endl;
	std::cout << SopKambing::getPrice() << sk->getName() << std::endl;
	std::cout << SuplemenSuper::getPrice() << ss->getName() << std::endl;
	std::cout << SusuKudaLiar::getPrice() << skl->getName() << std::endl;
	std::cout << TelorDadarWow::getPrice() << tdw->getName() << std::endl;
	if (*a==*o){std::cout << "true" << std::endl;}
	return 0;
}*/
