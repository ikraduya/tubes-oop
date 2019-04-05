/**
 * @file HorseMeat.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _HORSEMEAT_H_
#define _HORSEMEAT_H_

#include "FarmProducts.h"

/**
 * @brief Kelas HorseMeat yang diturunkan dari FarmProducts
 */
class HorseMeat : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		HorseMeat();
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