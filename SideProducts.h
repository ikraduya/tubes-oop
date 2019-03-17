/**
 * @file SideProducts.h
 * @author Al Terra
 * @date 2019-03-15
 */

#ifndef _SIDEPRODUCTS_H_
#define _SIDEPRODUCTS_H_

#include "Products.h"
#include "FarmProducts.h"

/**
 * @brief Header untuk kelas kelas produk olahan hasil peternakan
 */
class SideProducts : public Products{};

/**
 * @brief Kelas RicaKuda diturunkan dari SideProducts
 */
class RicaKuda : public SideProducts{
	public:
	/**
	 * @brief ctor default
	 */
		RicaKuda();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */
		static bool isMixValid();
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
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
	 * @brief ctor default
	 */
		SusuKudaLiar();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */		
		static bool isMixValid();
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
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
	 * @brief ctor default
	 */
		Keju();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		static bool isMixValid();
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
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
	 * @brief ctor default
	 */
		SuplemenSuper();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		static bool isMixValid();
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
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
	 * @brief ctor default
	 */
		TelorDadarWow();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		static bool isMixValid();
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
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
	 * @brief ctor default
	 */
		ObatSuperChenLong();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		static bool isMixValid();
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
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
	 * @brief ctor default
	 */
		SopKambing();
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		static bool isMixValid();
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		static long getPrice();
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */		
		static void showReq();
	private:
		static const long price; /**< Harga dari produk */
		static const FarmProducts* req; /**< Resep daging kambinig + daging kambing*/
};

#endif
