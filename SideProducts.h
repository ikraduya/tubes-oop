/**
 * @file SideProducts.h
 * @author Altera
 * @date 2019-03-15
 */

#ifndef _SIDEPRODUCTS_H_
#define _SIDEPRODUCTS_H_

#include "Products.h"
#include "FarmProducts.h"

/**
 * Header untuk kelas kelas produk olahan hasil peternakan
 */
class SideProducts : public Products{};

/**
 * @brief Kelas RicaKuda diturunkan dari SideProducts
 */
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
		static long getPrice();
	/**
	 * menunujukan resep pencampuran untuk produk
	 */			
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep daging kuda + daging sapi */
};

/**
 * @brief Kelas SusuKudaLiar diturunkan dari SideProducts
 */
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
		static long getPrice();
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu kuda + daging kuda */
};

/**
 * @brief Kelas Keju diturunkan dari SideProducts
 */
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
		static long getPrice();
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu  sapi + susu sapi*/
};

/**
 * @brief Kelas SuplemenSuper diturunkan dari SideProducts
 */
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
		static long getPrice();
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu sapi + daging kuda +  telor ayam + daging bebek*/
};

/**
 * @brief Kelas TelorDadarWow diturunkan dari SideProducts
 */
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
		static long getPrice();
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep susu kambing + daging kuda + telor bebek*/
};

/**
 * @brief Kelas ObatSuperChenLong diturunkan dari SideProducts
 */
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
		static long getPrice();
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep daging kambing + daging kuda*/
};

/**
 * @brief Kelas SopKambing diturunkan dari SideProducts
 */
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
		static long getPrice();
	/**
	 * menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep daging kambinig + daging kambing*/
};

#endif
