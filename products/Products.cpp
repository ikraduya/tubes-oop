/**
 * @file Products.cpp
 * @author Al Terra
 * @date 2019-03-15
 */
#include "Products.h"
#include <string.h>
#include <iostream>
using namespace std;


/**
 * @brief Kelas Products untuk menyediakan abstrak kelas bagi side products dan farm products
 */
		Products::Products(std::string _name){name = _name;}
		Products::Products(){name = "NULL";}