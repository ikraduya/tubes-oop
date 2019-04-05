/**
 * @file RicaKuda.cpp
 * @author Al Terra
 * @date 2019-03-20
 */

#include "HorseMeat.h"
#include "CowMeat.h"
#include "FarmProducts.h"
#include "SideProducts.h"
#include "RicaKuda.h"
#include "../Inventory.h"
#include "../common/LinkedList.h"
const long RicaKuda::price = 86999;
const FarmProducts* RicaKuda::req[] = {new CowMeat(), new HorseMeat()};

/**
 * @brief Kelas RicaKuda diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		RicaKuda::RicaKuda() : SideProducts("Rica Kuda"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */
		bool RicaKuda::isMixValid(Inventory& a){
			if (a.isProductExist(*req[0]) && a.isProductExist(*req[1])){
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
		long RicaKuda::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */			
		void RicaKuda::showReq(){
			for (int i = 0; i <2; i++){
				std::cout << "- " << req[i]->getName() << std::endl;
			}
		}
