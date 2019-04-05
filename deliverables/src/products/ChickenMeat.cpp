/**
 * @file ChickenMeat.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "ChickenMeat.h"
const long ChickenMeat::price = 8000;

/**
 * @brief Kelas ChickenMeat yang diturunkan dari FarmProducts
 */
	/**
	 * @brief ctor default
	 */
		ChickenMeat::ChickenMeat() : FarmProducts("Chicken Meat"){}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		long ChickenMeat::getPrice(){return price;}