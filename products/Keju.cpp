/**
 * @file Keju.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "FarmProducts.h"
#include "CowMilk.h"
#include "SideProducts.h"
#include "Keju.h"
#include "../Inventory.h"

const long Keju::price = 100000;
const Products* Keju::req[] = {new CowMilk(), new CowMilk()};
//Keju::req = {CowMeat(), CowMeat()}

/**
 * @brief Kelas Keju diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		Keju::Keju() : SideProducts("Keju"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		bool Keju::isMixValid(){return false;}
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		long Keju::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */		
		void Keju::showReq(){
			for (int i = 0; i <2; i++){
				std::cout << req[i]->getName() << std::endl;
			}
		}