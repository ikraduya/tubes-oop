/**
 * @file SusuKudaLiar.cpp
 * @author Al Terra
 * @date 2019-03-20
 */
#include "HorseMeat.h"
#include "HorseMilk.h"
#include "FarmProducts.h"
#include "SideProducts.h"
#include "SusuKudaLiar.h"
#include "../Inventory.h"
#include "../common/LinkedList.h"
const long SusuKudaLiar::price = 13444;
const FarmProducts* SusuKudaLiar::req[] = {new HorseMeat(), new HorseMilk()};


/**
 * @brief Kelas SusuKudaLiar diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		SusuKudaLiar::SusuKudaLiar() : SideProducts("Susu Kuda Liar"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */		
		bool SusuKudaLiar::isMixValid(Inventory& a){
			if (a.isProductExist(*req[0]) && a.isProductExist(*req[1])){
				return true;
			}else{
				return false;
			}
		}
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		long SusuKudaLiar::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */			
		void SusuKudaLiar::showReq(){
			for (int i = 0; i <2; i++){
				std::cout << req[i]->getName() << std::endl;
			}
		}