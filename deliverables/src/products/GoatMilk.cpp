/**
 * @file GoatMilk.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "GoatMilk.h"

const long GoatMilk::price = 2000;
/**
 * @brief Kelas GoatMilk yang diturunkan dari FarmProducts
 */
	/**
	 * @brief ctor default
	 */
		GoatMilk::GoatMilk() : FarmProducts("Goat Milk"){}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		long GoatMilk::getPrice(){return price;}
