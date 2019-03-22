/**
 * @file Inventory.cpp
 * @author Akhmal
 * @date 2019-03-16
 */

#include "Inventory.h"

Inventory::Inventory() {
	jumlahInventori = 0;
}
		/**
		* Getter dan setter
		* Set jumlah inventori
		*/
void Inventory::setJumlahInventori(int jumlah){
	jumlahInventori = jumlah;
} 
		/**
		* Get jumlah inventori
		*/
int Inventory::getJumlahInventori(){
	return jumlahInventori;
}  