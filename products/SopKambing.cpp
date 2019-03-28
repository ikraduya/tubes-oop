/**
 * @file SopKambing.cpp
 * @author Al Terra
 * @date 2019-03-20
 */

#include "GoatMeat.h"
#include "FarmProducts.h"
#include "SideProducts.h"
#include "SopKambing.h"
const long SopKambing::price = 85233;
const FarmProducts* SopKambing::req[] = {new GoatMeat(), new GoatMeat()};

/**
 * @brief Kelas SopKambing diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		SopKambing::SopKambing() : SideProducts("Sop Kambing"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		bool SopKambing::isMixValid(){return false;}
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		long SopKambing::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */		
		void SopKambing::showReq(){
			for (int i = 0; i <2; i++){
				std::cout << req[i]->getName() << std::endl;
			}
		}