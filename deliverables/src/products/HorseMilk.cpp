/**
 * @file HorseMilk.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "HorseMilk.h"
const long HorseMilk::price = 40000;

/**
 * @brief Kelas HorseMilk yang diturunkan dari FarmProducts
 */
	/**
	 * @brief ctor default
	 */
		HorseMilk::HorseMilk() : FarmProducts("Horse Milk"){}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		long HorseMilk::getPrice(){return price;}