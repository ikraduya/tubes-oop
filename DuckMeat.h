/**
 * @file DuckMeat.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _DUCKMEAT_H_
#define _DUCKMEAT_H_

#include "FarmProducts.h"

/**
 * @brief Kelas DuckMeat yang diturunkan dari FarmProducts
 */
class DuckMeat : public FarmProducts{
	public:
	/**
	 * @brief ctor default
	 */
		DuckMeat();
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