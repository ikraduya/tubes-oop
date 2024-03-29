/**
 * @file FarmProducts.h
 * @author Al Terra
 * @date 2019-03-15
 */

#ifndef _FARMPRODUCTS_H_
#define _FARMPRODUCTS_H_
#include <cstring>
#include <iostream>
#include "Products.h"

/**
 * @brief Kelas FarmProducts yang menyimpan kelas-kelas produk mentah peternakan
 */
class FarmProducts : public Products{
	public:
		FarmProducts() : Products(){}
		FarmProducts(std::string name) : Products(name){}
};


#endif