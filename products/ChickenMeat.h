/**
 * @file ChickenMeat.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _CHICKENMEAT_H_
#define _CHICKENMEAT_H_

#include "FarmProducts.h"

/**
 * @brief Kelas ChickenMeat yang diturunkan dari FarmProducts
 */
class ChickenMeat : public FarmProducts{
	public:
	/**
	 * @brief ctor default
	 */
		ChickenMeat();
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