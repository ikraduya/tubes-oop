/**
 * @file CowMeat.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _COWMEAT_H_
#define _COWMEAT_H_

#include "FarmProducts.h"

/**
 * @brief Kelas CowMeat yang diturunkan dari FarmProducts
 */
class CowMeat: public FarmProducts{ 
	public:	
	/**
	 * @brief ctor default
	 */
		CowMeat();
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