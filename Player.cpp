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
#include "cell/Truck.h"

// posisi default (10, 6)
Player::Player() : posisi(10,6), inventori() {
	wadahAir = MaxWater;
	uang = 0;
	arah = UP;
}

Player::~Player(){}

Inventory& Player::getInventori() {
	return inventori;
}

Inventory* Player::getInventoriPtr() {
	return &inventori;
}

void Player::setWadahAir(int jumlah){
	wadahAir = jumlah;
} 
	
int Player::getWadahAir(){
	return wadahAir;
} 

int* Player::getAirPtr() {
	return &wadahAir;
}
		
void Player::setUang(int nilai){
	uang = nilai;
} 
		
int Player::getUang(){
	return uang;
} 

int* Player::getUangPtr() {
	return &uang;
}
	
void Player::setArah(ArahEnum _arah){
	arah = _arah;
} 
		
ArahEnum Player::getArah(){
	return arah;
} 

ArahEnum* Player::getArahPtr() {
	return &arah;
}
	
void Player::setCoordinate(Coordinate _posisi){
	posisi = _posisi;
} 
		
Coordinate Player::getCoordinate(){
	return posisi;
} 

Coordinate* Player::getCoordinatePtr() {
	return &posisi;
}

		
void Player::up(){
	posisi.goUp();
} 
	
void Player::down(){
	posisi.goDown();
} 
	
void Player::left(){
	posisi.goLeft();
} 
	
void Player::right(){
	posisi.goRight();
}

void Player::lookUp(){
	arah = UP;
} 
		
void Player::lookDown(){
	arah = DOWN;
} 
		
void Player::lookLeft(){
	arah = LEFT;
} 
		
void Player::lookRight(){
	arah = RIGHT;
} 


void Player::talk(LinkedList<FarmAnimal*> *animals){
	FarmAnimal *animal = getAnimal(animals);
	animal->Bersuara();
}

void Player::interact(LinkedList<FarmAnimal*> *animals){
	FarmAnimal *animal = getAnimal(animals);
	inventori.addProduct(animal->Interact());
	
}

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

void Player::fillWater(){
	wadahAir = MaxWater;
} 


void Player::truck(Truck* truck){
	Coordinate hadap = getHadap();
	if (truck->getCoordinate() == hadap){
		truck->jualBarangHasilTernak(&inventori, &uang);
	} else {
		throw "Tidak ada truck";
	}
}
		/**
		* Mix dengan mixer
		*/
void Player::mixProduct(){} 

Coordinate Player::getHadap(){
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
	return hadap;
}

FarmAnimal* Player::getAnimal(LinkedList<FarmAnimal*> *animals){
	Coordinate hadap = getHadap();
	for (int i = 0; i < animals->count(); i++){
		if (animals->get(i)->getPos() == hadap){
			return animals->get(i);
		}
	}
	throw "Tidak ada animal";
}
