/**
 * @file ObatSuperChenLong.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "HorseMeat.h"
#include "GoatMeat.h"
#include "FarmProducts.h"
#include "SideProducts.h"
#include "ObatSuperChenLong.h"

const long ObatSuperChenLong::price = 150000;
const FarmProducts* ObatSuperChenLong::req[] = {new GoatMeat(), new HorseMeat()};

/**
 * @brief Kelas ObatSuperChenLong diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		ObatSuperChenLong::ObatSuperChenLong() : SideProducts("Obat Super Chen Long"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		bool ObatSuperChenLong::isMixValid(){return false;}
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		long ObatSuperChenLong::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */		
		void ObatSuperChenLong::showReq(){
			for (int i = 0; i <2; i++){
				std::cout << req[i]->getName() << std::endl;
			}
		}