#ifndef ENGISFARM_H
#define ENGISFARM_H
#define MaxInventory 20

class Animal {

};

class FarmAnimal : public Animal {

};

class Product {

};

class Land {

};

class Player {
	private:
		int JumlahInventori; //Jumlah Barang saat ini
		Product *Inventori; //Array Inventori
		bool WadahAir; //Boolean wadah air terisi atau belum
	public:
		Player();
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

		// Command dengan animal
		void Talk(Animal x);
		/* Kayanya ini ntar bisa pake generic / fungsi template
		void Interact(FarmAnimal x);
		void Interact(Facility x);
		*/
		void Kill(FarmAnimal x);
		void Grow(Land x);

		// Command dengan facility
		void CekInventory(); 
		void FillWater(); // Isi air
		void Truck(); // Mengosongkan bag dan jual
		void Mix(Product x, Product y); // Mix dengan mixer
};

#endif