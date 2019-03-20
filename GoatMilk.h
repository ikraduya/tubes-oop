/**
 * @file GoatMilk.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _GOATMILK_H_
#define _GOATMILK_H_

#include "FarmProducts.h"

/**
 * @brief Kelas GoatMilk yang diturunkan dari FarmProducts
 */
class GoatMilk : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		GoatMilk();
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