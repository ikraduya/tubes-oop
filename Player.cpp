/**
 * @file Player.cpp
 * @author Akhmal
 * @date 2019-03-16
 */

#include <iostream>
#include "Player.h"
#include "cell/Land.h"
#include "cell/Barn.h"
#include "cell/Grassland.h"
#include "cell/Coop.h"
#include "animals/FarmAnimal.h"
#include "common/LinkedList.h"

// posisi default (10, 6)
Player::Player() : posisi(10,6), inventori() {
	wadahAir = MaxWater;
	uang = 0;
	arah = UP;
}

		/**
		* destructor
		*/
Player::~Player(){}

/**
* Get inventori
*/
Inventory& Player::getInventori() {
	return inventori;
}

Inventory* Player::getInventoriPtr() {
	return &inventori;
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

int* Player::getAirPtr() {
	return &wadahAir;
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

int* Player::getUangPtr() {
	return &uang;
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

ArahEnum* Player::getArahPtr() {
	return &arah;
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

Coordinate* Player::getCoordinatePtr() {
	return &posisi;
}

		/**
		* Player bergerak
		* Player pindah ke atas
		*/
void Player::up(){
	posisi.goUp();
} 
		/**
		* Player pindah ke bawah
		*/
void Player::down(){
	posisi.goDown();
} 
		/**
		* Player pindah ke kiri
		*/
void Player::left(){
	posisi.goLeft();
} 
		/**
		* Player pindah ke kanan
		*/
void Player::right(){
	posisi.goRight();
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
void Player::talk(LinkedList<FarmAnimal*> *animals){
	FarmAnimal *animal = getAnimal(animals);
	animal->Bersuara();
}
/**
* Berinteraksi dengan Farm Animal
*/
void Player::interact(LinkedList<FarmAnimal*> *animals){
	FarmAnimal *animal = getAnimal(animals);
	inventori.addProduct(animal->Interact());//return FarmProducts
	
}
/**
* User memberi perintah kill
*/
void Player::cmdKill(LinkedList<FarmAnimal*> *animals){
	FarmAnimal *animal = getAnimal(animals);
	inventori.addProduct(animal->Kill());

}

void Player::cmdGrow(Cell*** map){
	if (wadahAir > 0) {
		int posX = posisi.getX(), posY = posisi.getY();
		Land *land = (Land*) &((*map)[posY][posX]);
		if (land->getSymbol() == 'o' || land->getSymbol() == 'x' || land->getSymbol() == '-') {
			land->growGrass();
			if (land->getSymbol() == 'o') {
        ((Coop*)land)->setSymbol('*');
      } else if (land->getSymbol() == 'x') {
        ((Barn*)land)->setSymbol('@');
      } else if (land->getSymbol() == '-') {
        ((Grassland*)land)->setSymbol('#');
      }
			wadahAir--;
		}
	} else {
		std::cout << "\nWadah air kosong!" << std::endl;
	}
} 

void Player::cekInventory(){
	if (inventori.getJumlahInventori() <= 0) {
		std::cout << "Inventory kosong!" << std::endl;	
	} else {
		std::cout << "Inventory:" << std::endl;
		int invLen = inventori.getJumlahInventori();
		for (int i=0; i<invLen; i++) {
			std::cout << "- " + inventori.getProduct(i).getName() << std::endl;
		}
		std::cout << std::endl;
	}
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

FarmAnimal* Player::getAnimal(LinkedList<FarmAnimal*> *animals){
	int x,y;
	switch(arah){
		case UP :
			x = 0;
			y = -1;
			break;
		case DOWN :
			x = 0;
			y = 1;
			break;
		case LEFT :
			x = -1;
			y = 0;
			break;
		case RIGHT :
			x = 1;
			y = 0;
			break;
	}
	Coordinate hadap(posisi.getX() + x, posisi.getY() + y);
	for (int i = 0; i < animals->count(); i++){
		if (animals->get(i)->getPos() == hadap){
			return animals->get(i);
		}
	}
	throw "Tidak ada animal";
}

/**
		int jumlahInventori; 
		LinkedList<Products> inventori; 
		int wadahAir; 
		int uang; 
		ArahEnum arah; 
		Coordinate posisi; 
*/

/*int main() {
	Player akhmal;
	int i = akhmal.getUang();
	cout << i << endl;
	return 0;
}*/