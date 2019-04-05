/**
 * @file CowMeat.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "CowMeat.h"
const long CowMeat::price = 50000;
	/**
	 * @brief Kelas CowMeat yang diturunkan dari FarmProducts
	 */
	/**
	 * @brief ctor default
	 */
		CowMeat::CowMeat() : FarmProducts("Cow Meat") {}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
	long CowMeat::getPrice(){return price;}