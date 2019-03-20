/**
 * @file DuckEgg.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _DUCKEGG_H_
#define _DUCKEGG_H_

#include "FarmProducts.h"


/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class DuckEgg : public FarmProducts{
	public:
		/**
		 * @brief ctor default
		 */
		DuckEgg();
		/**
		 * @brief getter price
		 *
		 * @return long price dari produk farm tersebut
		 */	
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
		
};

#endif