/**
 * @file SideProducts.h
 * @author Al Terra
 * @date 2019-03-15
 */

#ifndef _SIDEPRODUCTS_H_
#define _SIDEPRODUCTS_H_

#include "Products.h"
#include "FarmProducts.h"
#include <string>
#include <iostream>

/**
 * @brief Header untuk kelas kelas produk olahan hasil peternakan
 */
class SideProducts : public Products{
	public:
		SideProducts() : Products(){}
		SideProducts(std::string name) : Products(name){}
};

#endif
