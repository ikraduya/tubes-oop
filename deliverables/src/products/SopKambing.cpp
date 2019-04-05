/**
 * @file SopKambing.cpp
 * @author Al Terra
 * @date 2019-03-20
 */

#include "GoatMeat.h"
#include "FarmProducts.h"
#include "SideProducts.h"
#include "SopKambing.h"
const long SopKambing::price = 85233;
const FarmProducts* SopKambing::req[] = {new GoatMeat(), new GoatMeat()};

/**
 * @brief Kelas SopKambing diturunkan dari SideProducts
 */
	/**
	 * @brief ctor default
	 */
		SopKambing::SopKambing() : SideProducts("Sop Kambing"){}
	/**
	 * @brief checker apakah isi ransel cukup untuk membuat objek
	 * 
	 * @return true isi ransel cukup
	 * @return false isi ransel tidak cukup
	 */			
		bool SopKambing::isMixValid(Inventory& a){
			int count = 0;
			if (a.getJumlahInventori() == 0){
				return false;
			}else{
				for(int i = 0; i < a.getJumlahInventori(); i++){
					if (a.getProduct(i) == *req[0]){
						count++;
					}
					if (count >= 2){
						return true;
					}
				}
			}
			return false;
		}
	/**
	 * @brief getter price
	 *
	 * @return long harga produk
	 */		
		long SopKambing::getPrice(){return price;}
	/**
	 * @brief menunujukan resep pencampuran untuk produk
	 */		
		void SopKambing::showReq(){
			for (int i = 0; i <2; i++){
				std::cout << "- " << req[i]->getName() << std::endl;
			}
		}
