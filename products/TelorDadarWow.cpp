/**
 * @file TelorDadarWow.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "GoatMilk.h"
#include "HorseMeat.h"
#include "DuckEgg.h"
#include "FarmProducts.h"
#include "SideProducts.h"
#include "TelorDadarWow.h"
const long TelorDadarWow::price = 99999;
const FarmProducts* TelorDadarWow::req[] = {new HorseMeat(), new GoatMilk(), new DuckEgg()};

/**
 * @brief Kelas TelorDadarWow diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		TelorDadarWow::TelorDadarWow() : SideProducts("Telor Dadar Wow"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		bool TelorDadarWow::isMixValid(){return false;}
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		long TelorDadarWow::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */		
		void TelorDadarWow::showReq(){
			for (int i = 0; i <3; i++){
				std::cout << req[i]->getName() << std::endl;
			}
		}