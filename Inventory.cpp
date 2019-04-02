/**
 * @file Inventory.cpp
 * @author Akhmal
 * @date 2019-03-16
 */

#include "Inventory.h"
#include "products/Products.h"

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
	// return inventori.count();
}  

Products Inventory::getProduct(int idx) {
	return (inventori.get(idx));
}

bool Inventory::isProductExist(Products p) {
	return (inventori.find(p) != 1);
}

void Inventory::addProduct(Products p) {
	inventori.add(p);
}

void Inventory::removeProduct(Products p) {
	inventori.remove(p);
}