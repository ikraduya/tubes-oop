/**
 * @file Inventory.h
 * @author Akhmal
 * @date 2019-03-16
 */

#ifndef INVENTORY_H
#define INVENTORY_H
#include "products/Products.h"
#include "common/LinkedList.h"

/**
* Konstanta max inventory
*/
const int MaxInventory = 20;

class Inventory {
	private:
		/**
		* Jumlah Barang saat ini
		*/
		int jumlahInventori; 

		/**
		* Array Inventori
		*/

		LinkedList<Products*> inventori; 

		/**
		* Wadah air yang sudah terisi
		*/
	public:
		/**
		* Default constructor
		*/
		Inventory();

		/**
		* Getter dan setter
		* Set jumlah inventori
		*/
		void setJumlahInventori(int jumlah); 
		/**
		* Get jumlah inventori
		*/
		int getJumlahInventori(); 
		/**
		* Get Product
		*/
		Products* getProduct(int idx);
		/**
		* Is Product exist
		*/
		bool isProductExist(Products *p);
		/**
		* Add Product
		*/
		void addProduct(Products *p);
		/**
		* Is Product exist
		*/
		void removeProduct(Products *p);
};
#endif