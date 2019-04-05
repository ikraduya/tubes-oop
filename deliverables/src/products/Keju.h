/**
 * @file Keju.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _KEJU_H_
#define _KEJU_H_

#include "FarmProducts.h"
#include "SideProducts.h"
#include "../Inventory.h"
#include "../common/LinkedList.h"
/**
 * @brief Kelas Keju diturunkan dari SideProducts
 */
class Keju : public SideProducts{

	public:
	/**
	 * @brief ctor default
	 */
		Keju();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		static bool isMixValid(Inventory& a);
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req[]; /**< Resep susu  sapi + susu sapi*/
};




#endif