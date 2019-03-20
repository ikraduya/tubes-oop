/**
 * @file CowMilk.h
 * @author Al Terra
 * @date 2019-03-20
 */
#ifndef _COWMILK_H_
#define _COWMILK_H_

#include "FarmProducts.h"

/**
 * @brief Kelas CowMilk yang diturunkan dari FarmProducts
 */
class CowMilk : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		CowMilk();
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