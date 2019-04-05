/**
 * @file HorseMeat.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "HorseMeat.h"
const long HorseMeat::price = 20000;

/**
 * @brief Kelas HorseMeat yang diturunkan dari FarmProducts
 */
	/**
	 * @brief ctor default
	 */
		HorseMeat::HorseMeat() : FarmProducts("Horse Meat"){}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
	long HorseMeat::getPrice(){return price;}