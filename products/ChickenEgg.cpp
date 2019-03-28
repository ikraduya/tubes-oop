/**
 * @file ChickenEgg.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "ChickenEgg.h"
const long ChickenEgg::price = 20000;
	/**
	 * @brief Kelas ChickenEgg yang diturunkan dari FarmProducts
	 */
	/**
	 * @brief ctor default
	 */
		ChickenEgg::ChickenEgg() : FarmProducts("Chicken Egg") {}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
	long ChickenEgg::getPrice(){return price;}