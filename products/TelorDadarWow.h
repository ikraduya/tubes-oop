/**
 * @file TelorDadarWow.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _TELORDADARWOW_H_
#define _TELORDADARWOW_H_

#include "FarmProducts.h"
#include "SideProducts.h"


/**
 * @brief Kelas TelorDadarWow diturunkan dari SideProducts
 */
class TelorDadarWow: public SideProducts{

	public:
	/**
	 * @brief ctor default
	 */
		TelorDadarWow();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		static bool isMixValid();
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
		static const FarmProducts* req[]; /**< Resep susu kambing + daging kuda + telor bebek*/
};




#endif