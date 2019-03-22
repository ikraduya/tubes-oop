/**
 * @file Player.cpp
 * @author Akhmal
 * @date 2019-03-16
 */

#include "Player.h"


		/**
		* default constructor
		*/
Player::Player() : posisi(0,0) {
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
void Player::setArah(ArahEnum _arah){
	arah = _arah;
} 
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
void Player::up(){
	Coordinate translate(0,-1);
	if (getCoordinate().getY() != 0) {
		posisi = posisi + translate;
	}
} 
		/**
		* Player pindah ke bawah
		*/
void Player::down(){
	Coordinate translate(0,1);
	if (getCoordinate().getY() != 0) {
		posisi = posisi + translate;
	}
} 
		/**
		* Player pindah ke kiri
		*/
void Player::left(){
	Coordinate translate(-1,0);
	if (getCoordinate().getX() != 0) {
		posisi = posisi + translate;
	}
} 
		/**
		* Player pindah ke kanan
		*/
void Player::right(){
	Coordinate translate(1,0);
	if (getCoordinate().getY() != 0) {
		posisi = posisi + translate;
	}
}

		/**
		* Player menghadap ke atas
		*/
void Player::lookUp(){
	arah = UP;
} 
		/**
		* Player menghadap ke bawah
		*/
void Player::lookDown(){
	arah = DOWN;
} 
		/**
		* Player menghadap ke kiri
		*/
void Player::lookLeft(){
	arah = LEFT;
} 
		/**
		* Player menghadap ke kanan
		*/
void Player::lookRight(){
	arah = RIGHT;
} 

		/**
		* Command dengan animal
		* Berbicara dengan hewan
		*/
void Player::talk(){}
		/**
		* Berinteraksi dengan Farm Animal
		*/
void Player::interact(FarmAnimal &animal){}
		/**
		* User memberi perintah kill
		*/
void Player::cmdKill(){}
		/**
		* User memberi perintah grow
		*/
void Player::cmdGrow(){} 
		/**
		* Command dengan facility
		* Melihat inventori
		*/
void Player::cekInventory(){

} 
		/**
		* Isi air
		*/
void Player::fillWater(){
	wadahAir = MaxWater;
} 
		/**
		* Mengosongkan bag dan jual 
		*/
void Player::truck(){}
		/**
		* Mix dengan mixer
		*/
void Player::mixProduct(){} 

/**
		int jumlahInventori; 
		LinkedList<Products> inventori; 
		int wadahAir; 
		int uang; 
		ArahEnum arah; 
		Coordinate posisi; 
*/