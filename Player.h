#ifndef PLAYER_H
#define PLAYER_H
#include "EngisFarm.h"

/**
* Kelas Player untuk segala aksi dan atribut yang dimiliki player
*/

enum arahEnum {
	UP,  /*!< Enum value Up. */  
	DOWN,  /*!< Enum value Down. */ 
	LEFT,  /*!< Enum value Left. */ 
	RIGHT /*!< Enum value Right. */ 
};

/**
* Konstanta max inventory
*/
const int MaxInventory = 20;
/**
* Konstanta max water
*/
const int MaxWater = 20;

class Player {
	private:
		/**
		* Jumlah Barang saat ini
		*/
		int jumlahInventori; 

		/**
		* Array Inventori
		*/
		LinkedList<Product> inventori; 

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
		arahEnum arah; 

		/**
		* Position X
		*/
		int absis; 

		/**
		* Position Y
		*/
		int ordinat; 

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
		void setJumlahInventori(int); 
		/**
		* Get jumlah inventori
		*/
		int getJumlahInventori();  
		/**
		* Set jumlah air
		*/
		void setWadahAir(int); 
		/**
		* Get jumlah air
		*/
		int getWadahAir(); 
		/**
		* Set nilai uang
		*/
		void setUang(int); 
		/**
		* Get nilai uang
		*/
		int getUang(); 
		/**
		* Set arah player menghadap
		*/
		void setArah(arahEnum); 
		/**
		* Get arah player menghadap
		*/
		arahEnum getArah(); 
		/**
		* Set posisi absis player
		*/
		void setAbsis(int); 
		/**
		* Get posisi absis player
		*/
		int getAbsis(); 
		/**
		* Set posisi ordinat player
		*/
		void setOrdinat(int); 
		/**
		* Get posisi ordinat player
		*/
		int setOrdinat(); 
		
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
		void interact(FarmAnimal &x);
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