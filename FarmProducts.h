/**
 * @file FarmProducts.h
 * @author Al Terra
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
		 * @brief ctor default
		 */
		DuckEgg();
		/**
		 * @brief getter price
		 *
		 * @return long price dari produk farm tersebut
		 */	
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
		
};

/**
 * @brief Kelas DuckMeat yang diturunkan dari FarmProducts
 */
class DuckMeat : public FarmProducts{
	public:
	/**
	 * @brief ctor default
	 */
		DuckMeat();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas GoatMilk yang diturunkan dari FarmProducts
 */
class GoatMilk : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		GoatMilk();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas GoatMeat yang diturunkan dari FarmProducts
 */
class GoatMeat : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		GoatMeat();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */			
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas HorseMilk yang diturunkan dari FarmProducts
 */
class HorseMilk : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		HorseMilk();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas HorseMeat yang diturunkan dari FarmProducts
 */
class HorseMeat : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		HorseMeat();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas CowMilk yang diturunkan dari FarmProducts
 */
class CowMilk : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		CowMilk();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas CowMeat yang diturunkan dari FarmProducts
 */
class CowMeat: public FarmProducts{ 
	public:	
	/**
	 * @brief ctor default
	 */
		CowMeat();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};

/**
 * @brief Kelas ChickenEgg yang diturunkan dari FarmProducts
 */
class ChickenEgg : public FarmProducts{
	public:	
	/**
	 * @brief ctor default
	 */
		ChickenEgg();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price;/**< Harga dari produk */
};

/**
 * @brief Kelas ChickenMeat yang diturunkan dari FarmProducts
 */
class ChickenMeat : public FarmProducts{
	public:
	/**
	 * @brief ctor default
	 */
		ChickenMeat();
	/**
	 * @brief getter price
	 *
	 * @return long price dari produk farm tersebut 
	 */		
		static long getPrice();
	private:
		static const long price; /**< Harga dari produk */
};


#endif
