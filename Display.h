#include <string.h>
#include "common/LinkedList.h"
#include "Inventory.h"
#include "products/Products.h"

#define MAP_X_SIZE 21
#define MAP_Y_SIZE 10

#define SIDE_BAR_X_SIZE 21

#define INVENTORY_Y_SIZE 4

#define LEGEND_X_SIZE 21
#define LEGEND_Y_SIZE 12

class Display {
  private:
    const char *map_hard[MAP_X_SIZE] = {
      "o o o - x x x x - - T",
      "o * * - x x x x - - M",
      "o * o - x x @ @ - - -",
      "- - - - x x x @ - - W",
      "- - - - x x x x - - -",
      "- - - - x x x x - - -",
      "- - - - - - - - - - P",
      "- - # - - - - - - - -",
      "- - # # - - - - - - -",
      "- - - # # - - - - - -"
    };

    const std::string legend_hard[LEGEND_Y_SIZE] = {
      "Keterangan",
      "C : Ayam",
      "G : Kambing",
      "H : Kuda",
      "T : Truck",
      "M : Mixer",
      "W : Well",
      "P : Player",
      "- : Grassland",
      "x : Barn",
      "o : Coop",
      "*, @, # : Rumput"
    };

    char **map;
    char *title;
    char **inventory;
    char *money;
    char *water;
    char **legend;
    char *timeTick;
    char face;

    Inventory *inventoryList;

    void setStrToArrChr(char * arrChr, std::string str, int strLen) {
      int i;
      for (i=0; i < strLen && i<str.length(); i++) {
        arrChr[i] = str[i];
      }
      for (; i<strLen; i++) {
        arrChr[i] = ' ';
      }
    }

    std::string convertArrCharToStr(char arr[]) {
      std::string s(arr);
      return s;
    }

    std::string makeHorizontalLine(int n) {
      char *sc;
      sc = new char[n];
      for (int i=0; i<n; i++) {
        sc[i] = '-';
      }
      std::string s(sc);
      return s;
    }

    std::string makeHorizontalSpace(int n) {
      char *sc;
      sc = new char[n];
      for (int i=0; i<n; i++) {
        sc[i] = ' ';
      }
      std::string s(sc);
      return s;
    }

  public:
    Display(Inventory *_inventory) {   // CTOR
      // Initialize map
      map = new char*[MAP_Y_SIZE];
      for (int i=0; i<MAP_Y_SIZE; i++) {
        map[i] = new char[MAP_X_SIZE];
        for (int j=0; j<MAP_X_SIZE; j++) {
          map[i][j] = map_hard[i][j];
        }
      }

      // Initialize Title
      title = new char[SIDE_BAR_X_SIZE];
      setStrToArrChr(title, "          Engi's Farm", SIDE_BAR_X_SIZE);

      // Initialize invetory
      // Menampilkan maksimal 5 item
      inventoryList = _inventory;
      inventory = new char*[INVENTORY_Y_SIZE];
      for (int i=0; i<INVENTORY_Y_SIZE; i++) {
        inventory[i] = new char[SIDE_BAR_X_SIZE];
      }
      setStrToArrChr(inventory[0], "Inventory", SIDE_BAR_X_SIZE);
      int inventoryLen = inventoryList->getJumlahInventori();
      int iterInvetory;
      for (iterInvetory=1; iterInvetory<INVENTORY_Y_SIZE-1; iterInvetory++) {
        if (iterInvetory <= inventoryLen) {
          setStrToArrChr(inventory[iterInvetory], "- " + (inventoryList->getProduct(iterInvetory-1)).getName(), SIDE_BAR_X_SIZE);
        } else {
          setStrToArrChr(inventory[iterInvetory], " ", SIDE_BAR_X_SIZE);
        }
      }
      if (inventoryLen > INVENTORY_Y_SIZE-1) {
        setStrToArrChr(inventory[iterInvetory], "more...", SIDE_BAR_X_SIZE);
      } else if (inventoryLen == INVENTORY_Y_SIZE-1) {
        setStrToArrChr(inventory[iterInvetory], "- " + (inventoryList->getProduct(iterInvetory-1)).getName(), SIDE_BAR_X_SIZE);
      } else {
        setStrToArrChr(inventory[iterInvetory], " ", SIDE_BAR_X_SIZE);
      }

      // Initialize money
      money = new char[SIDE_BAR_X_SIZE];
      setStrToArrChr(money, "Money : 0", SIDE_BAR_X_SIZE);

      // Initialize water
      water = new char[SIDE_BAR_X_SIZE];
      setStrToArrChr(water, "Water : 0", SIDE_BAR_X_SIZE);
      
      // Initialize time
      timeTick = new char[SIDE_BAR_X_SIZE];
      setStrToArrChr(timeTick, "Time  : 0", SIDE_BAR_X_SIZE);

      // Initialize face direction
      face = 'D';

      // Initialize legend
      legend = new char*[LEGEND_Y_SIZE];
      for (int i=0; i<LEGEND_Y_SIZE; i++) {
        legend[i] = new char[LEGEND_X_SIZE];
        setStrToArrChr(legend[i], legend_hard[i], LEGEND_X_SIZE);
      }
    }

    void updateDisplay() {
      // Update map
      for (int i=0; i<MAP_Y_SIZE; i++) {
        for (int j=0; j<MAP_X_SIZE; j++) {
          map[i][j] = map_hard[i][j];
        }
      }

      // Update invetory
      // Menampilkan maksimal 3 item
      // setStrToArrChr(inventory[0], "Inventory", SIDE_BAR_X_SIZE);
      int inventoryLen = inventoryList->getJumlahInventori();
      int iterInvetory;
      for (iterInvetory=1; iterInvetory<INVENTORY_Y_SIZE-1; iterInvetory++) {
        if (iterInvetory <= inventoryLen) {
          setStrToArrChr(inventory[iterInvetory], "- " + (inventoryList->getProduct(iterInvetory-1)).getName(), SIDE_BAR_X_SIZE);
        } else {
          setStrToArrChr(inventory[iterInvetory], " ", SIDE_BAR_X_SIZE);
        }
      }
      if (inventoryLen > INVENTORY_Y_SIZE-1) {
        setStrToArrChr(inventory[iterInvetory], "more...", SIDE_BAR_X_SIZE);
      } else if (inventoryLen == INVENTORY_Y_SIZE-1) {
        setStrToArrChr(inventory[iterInvetory], "- " + (inventoryList->getProduct(iterInvetory-1)).getName(), SIDE_BAR_X_SIZE);
      } else {
        setStrToArrChr(inventory[iterInvetory], " ", SIDE_BAR_X_SIZE);
      }

      // Update money
      setStrToArrChr(money, "Money : 0", SIDE_BAR_X_SIZE);

      // Update water
      setStrToArrChr(water, "Water : 0", SIDE_BAR_X_SIZE);
      
      // Update time
      setStrToArrChr(timeTick, "Time  : 0", SIDE_BAR_X_SIZE);

      // Update face direction
      face = 'D';

      // Update legend
      for (int i=0; i<LEGEND_Y_SIZE; i++) {
        setStrToArrChr(legend[i], legend_hard[i], LEGEND_X_SIZE);
      }
    }

    void renderAll() {
      system("clear");
      std::cout << "---------------------------------------------  -----------------------" << std::endl;
      for (int i=0; i<LEGEND_Y_SIZE; i++) {
        std::cout << "|";
        // map side
        if (i < MAP_Y_SIZE) {
          std::cout << convertArrCharToStr(map[i]);
        } else if (i == MAP_Y_SIZE) {
          std::cout << makeHorizontalLine(MAP_X_SIZE);
        } else {
          std::cout << "                     ";
        }
        
        if (i == LEGEND_Y_SIZE-1) {
          std::cout << face;
        } else if (i == 10) {
          std::cout << "-";
        } else {
          std::cout << "|";
        }

        // side bar
        if (i == 1 || i == 6 || i == 10) {
          std::cout << makeHorizontalLine(SIDE_BAR_X_SIZE);
        } else if (i == 0) { // title
          std::cout << title;
        } else if (i >= 2 && i < 2+INVENTORY_Y_SIZE) {    // inventory
          std::cout << inventory[i-2];
        } else if (i == 7) {
          std::cout << money;
        } else if (i == 8) {
          std::cout << water;
        } else if (i == 9) {
          std::cout << timeTick;
        } else {
          std::cout << "                     ";
        }

        std::cout << "|  |";

        std::cout << legend[i] << "|" << std::endl;
      }

      std::cout << "---------------------------------------------  -----------------------" << std::endl;

      std::cout << "Command : ";
    }
};