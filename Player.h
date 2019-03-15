#ifndef PLAYER_H
#define PLAYER_H
#include "EngisFarm.h"
#define MaxInventory 20

enum arahEnum {UP, DOWN, LEFT, RIGT};

const int MaxWater 20

class Player {
	private:
		int JumlahInventori; //Jumlah Barang saat ini
		LinkedList<Product> Inventori; //Array Inventori
		int WadahAir; //Boolean wadah air terisi atau belum
		int Uang;
		arahEnum arah;
	public:
		// default constructor
		Player();

		// destructor
		~Player();

		// Getter dan setter
		void setJumlahInventori();
		int getJumlahInventori();
		void setWadahAir();
		bool getWadahAir();
		
		// Player bergerak
		void up();
		void down();
		void left();
		void right();

		void lookUp();
		void lookDown();
		void lookLeft();
		void lookRight();

		// Command dengan animal
		void Talk();
		/* Kayanya ini ntar bisa pake generic / fungsi template */
		void Interact(FarmAnimal &x);
		
		void Kill();
		void Grow();

		// Command dengan facility
		void CekInventory(); 
		void FillWater(); // Isi air
		void Truck(); // Mengosongkan bag dan jual {
		void MixProduct(); // Mix dengan mixer
};

#endif