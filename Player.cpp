/**
 * @file Player.h
 * @author Akhmal
 * @date 2019-03-16
 */

#include "Player.h"


		/**
		* default constructor
		*/
Player::Player(){}

		/**
		* destructor
		*/
Player::~Player(){}

		/**
		* Getter dan setter
		* Set jumlah inventori
		*/
void Player::setJumlahInventori(int jumlah){} 
		/**
		* Get jumlah inventori
		*/
int Player::getJumlahInventori(){}  
		/**
		* Set jumlah air
		*/
void Player::setWadahAir(int jumlah){} 
		/**
		* Get jumlah air
		*/
int Player::getWadahAir(){} 
		/**
		* Set nilai uang
		*/
void Player::setUang(int nilai){} 
		/**
		* Get nilai uang
		*/
int Player::getUang(){} 
		/**
		* Set arah player menghadap
		*/
void Player::setArah(ArahEnum){} 
		/**
		* Get arah player menghadap
		*/
ArahEnum Player::getArah(){
	
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
void lookUp(){} 
		/**
		* Player menghadap ke bawah
		*/
void lookDown(){} 
		/**
		* Player menghadap ke kiri
		*/
void lookLeft(){} 
		/**
		* Player menghadap ke kanan
		*/
void lookRight(){} 

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
