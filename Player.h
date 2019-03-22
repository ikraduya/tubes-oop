/**
 * @file Player.h
 * @author Akhmal
 * @date 2019-03-16
 */

#ifndef PLAYER_H
#define PLAYER_H
#include "products/Products.h"
#include "../common/LinkedList.h"
#include "animals/FarmAnimal.h"
#include "Coordinate.h"

enum ArahEnum {
	UP,  /**< Enum value Up. */  
	DOWN,  /**< Enum value Down. */ 
	LEFT,  /**< Enum value Left. */ 
	RIGHT /**< Enum value Right. */ 
};

/**
* Konstanta max inventory
*/
const int MaxInventory = 20;
/**
* Konstanta max water
*/
const int MaxWater = 20;

/**
* Kelas Player untuk segala aksi dan atribut yang dimiliki player
*/
class Player {
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
		int wadahAir; 

		/**
		* Uang yang dimiliki
		*/
		int uang; 

		/**
		* Arah player menghadap
		*/
		ArahEnum arah; 

		/**
		* Posisi player
		*/
		Coordinate posisi; 

	public:
		/**
		* default constructor
		*/
		Player();

		/**
		* destructor
		*/
		~Player();

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
		* Set jumlah air
		*/
		void setWadahAir(int jumlah); 
		/**
		* Get jumlah air
		*/
		int getWadahAir(); 
		/**
		* Set nilai uang
		*/
		void setUang(int nilai); 
		/**
		* Get nilai uang
		*/
		int getUang(); 
		/**
		* Set arah player menghadap
		*/
		void setArah(ArahEnum); 
		/**
		* Get arah player menghadap
		*/
		ArahEnum getArah(); 
		/**
		* Set posisi player
		*/
		void setCoordinate(Coordinate); 
		/**
		* Get posisi absis player
		*/
		Coordinate getCoordinate(); 
		
		/**
		* Player bergerak
		* Player pindah ke atas
		*/
		void up(); 
		/**
		* Player pindah ke bawah
		*/
		void down(); 
		/**
		* Player pindah ke kiri
		*/
		void left(); 
		/**
		* Player pindah ke kanan
		*/
		void right();

		/**
		* Player menghadap ke atas
		*/
		void lookUp(); 
		/**
		* Player menghadap ke bawah
		*/
		void lookDown(); 
		/**
		* Player menghadap ke kiri
		*/
		void lookLeft(); 
		/**
		* Player menghadap ke kanan
		*/
		void lookRight(); 

		/**
		* Command dengan animal
		* Berbicara dengan hewan
		*/
		void talk();
		/**
		* Berinteraksi dengan Farm Animal
		*/
		void interact(FarmAnimal &animal);
		/**
		* User memberi perintah kill
		*/
		void cmdKill();
		/**
		* User memberi perintah grow
		*/
		void cmdGrow(); 
		/**
		* Command dengan facility
		* Melihat inventori
		*/
		void cekInventory(); 
		/**
		* Isi air
		*/
		void fillWater(); 
		/**
		* Mengosongkan bag dan jual 
		*/
		void truck();
		/**
		* Mix dengan mixer
		*/
		void mixProduct(); 
};

#endif