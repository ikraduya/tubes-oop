/**
 * @file Products.h
 * @author Altera
 * @date 2019-03-15
 */


#ifndef _PRODUCTS_H_
#define _PRODUCTS_H_

/**
 * Kelas Products untuk menyediakan abstrak kelas bagi side products dan farm products
 */
class Products{
	public:
		/**
		 * Getter name
		 */		
		char* getName();
	private:
		char* name; /**< Penampung nama produk */
};


#endif
