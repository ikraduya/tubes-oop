#include "ChickenEgg.h"
#include "GoatMilk.h"
#include "CowMilk.h"
#include "CowMeat.h"
#include "GoatMeat.h"
#include "HorseMilk.h"
#include "HorseMeat.h"
#include "ChickenMeat.h"
#include "DuckMeat.h"
#include "DuckEgg.h"
#include "Keju.h"
#include "SideProducts.h"
#include "FarmProducts.h"
#include "Products.h"
#include "../Inventory.h"
#include "../common/LinkedList.h"

int main(){
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
	std::cout << Keju::getPrice() << k->getName() << std::endl;
	if (*a==*o){std::cout << "true" << std::endl;}
	return 0;
}