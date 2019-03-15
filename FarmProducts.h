#ifndef _FARMPRODUCTS_H_
#define _FARMPRODUCTS_H_

#include <iostream>
#include "Products.h"
/**
 * Kelas FarmProducts yang menyimpan kelas-kelas produk mentah peternakan
 */

class FarmProducts : public Products{

};

class DuckEgg : public FarmProducts{
	public:
	/**
	 * ctor default
	 */
		DuckEgg();
	/**
	 * getter price
	 */	
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class DuckMeat : public FarmProducts{
	public:
	/**
	 * ctor default
	 */
		DuckMeat();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class GoatMilk : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		GoatMilk();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class GoatMeat : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		GoatMeat();
	/**
	 * getter price
	 */			
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class HorseMilk : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		HorseMilk();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class HorseMeat : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		HorseMeat();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class CowMilk : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		CowMilk();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class CowMeat: public FarmProducts{ 
	public:	
	/**
	 * ctor default
	 */
		CowMeat();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};

class ChickenEgg : public FarmProducts{
	public:	
	/**
	 * ctor default
	 */
		ChickenEgg();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price;/**< Harga dari produk */
};

class ChickenMeat : public FarmProducts{
	public:
	/**
	 * ctor default
	 */
		ChickenMeat();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	private:
		static const long price; /**< Harga dari produk */
};


#endif