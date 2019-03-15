#ifndef _SIDEPRODUCTS_H_
#define _SIDEPRODUCTS_H_

#include "Products.h"
#include "FarmProducts.h"

/**
 * Header untuk kelas kelas produk olahan hasil peternakan
 */
	
class SideProducts : public Products{

};

class RicaKuda : public SideProducts{
	public:
	/**
	 * ctor default
	 */
		RicaKuda();
	/**
	 * checker apakah isi ransel cukup untuk membuat objek
	 */
		static bool isMixValid();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	/**
	 * menunujukan resep pencampuran untuk produk
	 */			
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep daging kuda + daging sapi */
};

class SusuKudaLiar : public SideProducts{
	
	public:
	/**
	 * ctor default
	 */
		SusuKudaLiar();
	/**
	 * checker apakah isi ransel cukup untuk membuat objek
	 */		
		static bool isMixValid();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu kuda + daging kuda */
};

class Keju : public SideProducts{

	public:
	/**
	 * ctor default
	 */
		Keju();
	/**
	 * checker apakah isi ransel cukup untuk membuat objek
	 */			
		static bool isMixValid();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu  sapi + susu sapi*/
};

class SuplemenSuper: public SideProducts{

	public:
	/**
	 * ctor default
	 */
		SuplemenSuper();
	/**
	 * checker apakah isi ransel cukup untuk membuat objek
	 */			
		static bool isMixValid();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu sapi + daging kuda +  telor ayam + daging bebek*/
};

class TelorDadarWow: public SideProducts{

	public:
	/**
	 * ctor default
	 */
		TelorDadarWow();
	/**
	 * checker apakah isi ransel cukup untuk membuat objek
	 */			
		static bool isMixValid();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu kambing + daging kuda + telor bebek*/
};

class ObatSuperChenLong: public SideProducts{

	public:
	/**
	 * ctor default
	 */
		ObatSuperChenLong();
	/**
	 * checker apakah isi ransel cukup untuk membuat objek
	 */			
		static bool isMixValid();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep daging kambing + daging kuda*/
};

class SopKambing : public SideProducts{

	public:
	/**
	 * ctor default
	 */
		SopKambing();
	/**
	 * checker apakah isi ransel cukup untuk membuat objek
	 */			
		static bool isMixValid();
	/**
	 * getter price
	 */		
		static long getPrice(){return price;}
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep daging kambinig + daging kambing*/
};

#endif
