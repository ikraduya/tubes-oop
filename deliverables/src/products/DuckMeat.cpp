/**
 * @file DuckMeat.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "DuckMeat.h"
const long DuckMeat::price = 10000;

/**
 * @brief Kelas DuckMeat yang diturunkan dari FarmProducts
 */
	/**
	 * @brief ctor default
	 */
		DuckMeat::DuckMeat() : FarmProducts("Duck Meat"){}
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		long DuckMeat::getPrice(){return price;}