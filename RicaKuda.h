/**
 * @file RicaKuda.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _RICAKUDA_H_
#define _RICAKUDA_H_

#include "FarmProducts.h"
#include "SideProducts.h"

/**
 * @brief Kelas RicaKuda diturunkan dari SideProducts
 */
class RicaKuda : public SideProducts{
	public:
	/**
	 * @brief ctor default
	 */
		RicaKuda();
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
		static const FarmProducts* req; /**< Resep daging kuda + daging sapi */
};




#endif