/**
 * @file CowMilk.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "CowMilk.h"
const long CowMilk::price = 5000;
	/**
	 * @brief Kelas CowMilk yang diturunkan dari FarmProducts
	 */
	/**
	 * @brief ctor default
	 */
		CowMilk::CowMilk() : FarmProducts("Cow Milk") {}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
	long CowMilk::getPrice(){return price;}