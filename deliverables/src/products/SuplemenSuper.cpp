/**
 * @file SuplemenSuper.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "HorseMeat.h"
#include "CowMilk.h"
#include "ChickenEgg.h"
#include "DuckMeat.h"
#include "FarmProducts.h"
#include "SideProducts.h"
#include "SuplemenSuper.h"
#include "../Inventory.h"
#include "../common/LinkedList.h"
const long SuplemenSuper::price = 47329;
const FarmProducts* SuplemenSuper::req[] = {new ChickenEgg(), new CowMilk(), new DuckMeat(), new HorseMeat()};

/**
 * @brief Kelas SuplemenSuper diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		SuplemenSuper::SuplemenSuper() : SideProducts("Suplemen Super"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		bool SuplemenSuper::isMixValid(Inventory& a){
			if (a.isProductExist(*req[0]) && a.isProductExist(*req[1]) && a.isProductExist(*req[2]) && a.isProductExist(*req[3])){
				return true;
			}else{
				return false;
			}
		}
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		long SuplemenSuper::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */	
		void SuplemenSuper::showReq(){
			for (int i = 0; i <4; i++){
				std::cout << "- " << req[i]->getName() << std::endl;
			}
		}
