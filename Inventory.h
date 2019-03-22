/**
 * @file Inventory.h
 * @author Akhmal
 * @date 2019-03-16
 */

#ifndef PLAYER_H
#define PLAYER_H
#include "products/Products.h"
#include "LinkedList.h"

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

		LinkedList<Products> inventori; 

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
		void Inventory::setJumlahInventori(int jumlah); 
		/**
		* Get jumlah inventori
		*/
		int Inventory::getJumlahInventori(); 
		
		
};
#endif