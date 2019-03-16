/**
 * @file FarmProducts.h
 * @author Altera
 * @date 2019-03-15
 */

#ifndef _FARMPRODUCTS_H_
#define _FARMPRODUCTS_H_

#include "Products.h"

/**
 * @brief Kelas FarmProducts yang menyimpan kelas-kelas produk mentah peternakan
 */
class FarmProducts : public Products{};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class DuckEgg : public FarmProducts{
	public:
		/**
		 * ctor default
		 */
		DuckEgg();
		/**
		 * getter price
		 */	
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
		
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class DuckMeat : public FarmProducts{
	public:
	/**
	 * ctor default
	 */
		DuckMeat();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class GoatMilk : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		GoatMilk();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class GoatMeat : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		GoatMeat();
	/**
	 * getter price
	 */			
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class HorseMilk : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		HorseMilk();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class HorseMeat : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		HorseMeat();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class CowMilk : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		CowMilk();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class CowMeat: public FarmProducts{ 
	public:	
	/**
	 * ctor default
	 */
		CowMeat();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class ChickenEgg : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		ChickenEgg();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price;/**< Harga dari produk */
};

/**
 * @brief Kelas DuckEgg yang diturunkan dari FarmProducts
 */
class ChickenMeat : public FarmProducts{
	public:
	/**
	 * ctor default
	 */
		ChickenMeat();
	/**
	 * getter price
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};


#endif
