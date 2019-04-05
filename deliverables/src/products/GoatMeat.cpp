/**
 * @file GoatMeat.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "GoatMeat.h"
const long GoatMeat::price = 15000;

/**
 * @brief Kelas GoatMeat yang diturunkan dari FarmProducts
 */
	/**
	 * @brief ctor default
	 */
		GoatMeat::GoatMeat() : FarmProducts("Goat Meat"){}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		long GoatMeat::getPrice(){return price;}
