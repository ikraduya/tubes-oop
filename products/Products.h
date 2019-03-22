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
		 * @return string nama dari produk tersebut 
		 */		
		std::string getName() {
			return name;
		};
	private:
		std::string name; /**< Penampung nama produk */
};


#endif
