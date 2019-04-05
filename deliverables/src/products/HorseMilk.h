/**
 * @file HorseMilk.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _HORSEMILK_H_
#define _HORSEMILK_H_

#include "FarmProducts.h"

/**
 * @brief Kelas HorseMilk yang diturunkan dari FarmProducts
 */
class HorseMilk : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		HorseMilk();
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