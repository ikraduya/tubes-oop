/**
 * @file Products.h
 * @author Al Terra
 * @date 2019-03-15
 */


#ifndef _PRODUCTS_H_
#define _PRODUCTS_H_
#include <string>
#include <iostream>

/**
 * @brief Kelas Products untuk menyediakan abstrak kelas bagi side products dan farm products
 */
class Products{
	public:
		/**
		 * @brief Constructor default 
		 */	
		 Products();
		 Products(std::string);
		/**
		 * @brief Getter name
		 *
		 * @return string nama dari produk tersebut 
		 */		
		std::string getName() const{
			return name;
		};
		
		bool operator==(const Products& a){return name == a.getName();}
		
		bool operator!=(const Products& a){return name != a.getName();}
	private:
		std::string name; /**< Penampung nama produk */
};


#endif
