/**
 * @file SopKambing.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _SOPKAMBING_H_
#define _SOPKAMBING_H_

#include "FarmProducts.h"
#include "SideProducts.h"


/**
 * @brief Kelas SopKambing diturunkan dari SideProducts
 */
class SopKambing : public SideProducts{

	public:
	/**
	 * @brief ctor default
	 */
		SopKambing();
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
		static const FarmProducts* req[]; /**< Resep daging kambinig + daging kambing*/
};


#endif