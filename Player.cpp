/**
 * @file Player.cpp
 * @author Akhmal
 * @date 2019-03-16
 */

#include "Player.h"


		/**
		* default constructor
		*/
Player::Player(){
	jumlahInventori = 0;
	wadahAir = 0;
	uang = 0;
	arah = UP;
}

		/**
		* destructor
		*/
Player::~Player(){}

		/**
		* Getter dan setter
		* Set jumlah inventori
		*/
void Player::setJumlahInventori(int jumlah){
	jumlahInventori = jumlah;
} 
		/**
		* Get jumlah inventori
		*/
int Player::getJumlahInventori(){
	return jumlahInventori;
}  
		/**
		* Set jumlah air
		*/
void Player::setWadahAir(int jumlah){
	wadahAir = jumlah;
} 
		/**
		* Get jumlah air
		*/
int Player::getWadahAir(){
	return wadahAir;
} 
		/**
		* Set nilai uang
		*/
void Player::setUang(int nilai){
	uang = nilai;
} 
		/**
		* Get nilai uang
		*/
int Player::getUang(){
	return uang;
} 
		/**
		* Set arah player menghadap
		*/
void Player::setArah(ArahEnum){} 
		/**
		* Get arah player menghadap
		*/
ArahEnum Player::getArah(){
	return arah;
} 
		/**
		* Set posisi player
		*/
void Player::setCoordinate(Coordinate _posisi){
	posisi = _posisi;
} 
		/**
		* Get posisi absis player
		*/
Coordinate Player::getCoordinate(){
	return posisi;
} 
		
		/**
		* Player bergerak
		* Player pindah ke atas
		*/
void up(){} 
		/**
		* Player pindah ke bawah
		*/
void down(){} 
		/**
		* Player pindah ke kiri
		*/
void left(){} 
		/**
		* Player pindah ke kanan
		*/
void right(){}

		/**
		* Player menghadap ke atas
		*/
void lookUp(){
	arah = UP;
} 
		/**
		* Player menghadap ke bawah
		*/
void lookDown(){
	arah = DOWN;
} 
		/**
		* Player menghadap ke kiri
		*/
void lookLeft(){
	arah = LEFT;
} 
		/**
		* Player menghadap ke kanan
		*/
void lookRight(){
	arah = RIGHT;
} 

		/**
		* Command dengan animal
		* Berbicara dengan hewan
		*/
void talk(){}
		/**
		* Berinteraksi dengan Farm Animal
		*/
void interact(FarmAnimal &animal){}
		/**
		* User memberi perintah kill
		*/
void cmdKill(){}
		/**
		* User memberi perintah grow
		*/
void cmdGrow(){} 
		/**
		* Command dengan facility
		* Melihat inventori
		*/
void cekInventory(){} 
		/**
		* Isi air
		*/
void fillWater(){} 
		/**
		* Mengosongkan bag dan jual 
		*/
void truck(){}
		/**
		* Mix dengan mixer
		*/
void mixProduct(){} 

/**
		int jumlahInventori; 
		LinkedList<Products> inventori; 
		int wadahAir; 
		int uang; 
		ArahEnum arah; 
		Coordinate posisi; 
/*