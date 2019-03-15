// File : Player.h
// Modul ini berisi kode untuk mengatur player (move, interact, talk)

#ifndef PLAYER_H
#define PLAYER_H
#include "EngisFarm.h"

enum arahEnum {UP, DOWN, LEFT, RIGT};

const int MaxInventory = 20;
const int MaxWater = 20;

class Player {
	private:
		int jumlahInventori; // Jumlah Barang saat ini
		LinkedList<Product> inventori; // Array Inventori
		int wadahAir; // Boolean wadah air terisi atau belum
		int uang; // Uang yang dimiliki
		arahEnum arah; // Arah player menghadap
		int absis; // Position X
		int ordinat; // Position Y
	public:
		// default constructor
		Player();

		// destructor
		~Player();

		// Getter dan setter
		void setJumlahInventori(int); // Set jumlah inventori
		int getJumlahInventori();  // Get jumlah inventori
		void setWadahAir(int); // Set jumlah air
		int getWadahAir(); // Get jumlah air
		void setUang(int); // Set nilai uang
		int getUang(); // Get nilai uang
		void setArah(arahEnum); // Set arah player menghadap
		arahEnum getArah(); // Get arah player menghadap
		void setAbsis(int); // Set posisi absis player
		int getAbsis(); // Get posisi absis player
		void setOrdinat(int); // Set posisi ordinat player
		int setOrdinat(); // Get posisi ordinat player

		
		// Player bergerak
		void up(); // Player pindah ke atas
		void down(); // Player pindah ke bawah
		void left(); // Player pindah ke kiri
		void right(); // Player pindah ke kanan

		void lookUp(); // Player menghadap ke atas
		void lookDown(); // Player menghadap ke bawah
		void lookLeft(); // Player menghadap ke kiri
		void lookRight(); // Player menghadap ke kanan

		// Command dengan animal
		void talk();
		void interact(FarmAnimal &x);
		
		//void kill();
		//void grow(); 

		// Command dengan facility
		void cekInventory(); // Melihat inventori
		void fillWater(); // Isi air
		void truck(); // Mengosongkan bag dan jual {
		void mixProduct(); // Mix dengan mixer
};

#endif