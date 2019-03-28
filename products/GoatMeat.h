/**
 * @file GoatMeat.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _GOATMEAT_H_
#define _GOATMEAT_H_

#include "FarmProducts.h"

/**
 * @brief Kelas HorseMilk yang diturunkan dari FarmProducts
 */
class GoatMeat : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		GoatMeat();
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