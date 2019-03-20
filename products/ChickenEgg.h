/**
 * @file ChickenEgg.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _CHICKENEGG_H_
#define _CHICKENEGG_H_

#include "FarmProducts.h"

/**
 * @brief Kelas ChickenEgg yang diturunkan dari FarmProducts
 */
class ChickenEgg : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		ChickenEgg();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price;/**< Harga dari produk */
};



#endif