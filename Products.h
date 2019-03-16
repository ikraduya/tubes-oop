/**
 * @file Products.h
 * @author Al Terra
 * @date 2019-03-15
 */


#ifndef _PRODUCTS_H_
#define _PRODUCTS_H_

/**
 * @brief Kelas Products untuk menyediakan abstrak kelas bagi side products dan farm products
 */
class Products{
	public:
		/**
		 * @brief Getter name
		 *
		 * @return char* nama dari produk tersebut 
		 */		
		char* getName();
	private:
		char* name; /**< Penampung nama produk */
};


#endif
