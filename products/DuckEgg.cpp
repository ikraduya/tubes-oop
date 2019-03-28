/**
 * @file DuckEgg.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "DuckEgg.h"
const long DuckEgg::price = 25000;
	/**
	 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
	 */
	/**
	 * @brief ctor default
	 */
		DuckEgg::DuckEgg() : FarmProducts("Duck Egg") {}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
	long DuckEgg::getPrice(){return price;}