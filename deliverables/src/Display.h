/**
 * @file Display.h
 * @author Ikraduya
 * @date 2019-03-30
 */

#ifndef _DISPLAY_H
#define _DISPLAY_H

#include <string>
#include <gtest/gtest_prod.h>
#include "common/LinkedList.h"
#include "Inventory.h"
#include "products/Products.h"
#include "Player.h"
#include "common/Coordinate.h"

#define MAP_X_DISP_SIZE 21
#define MAP_Y_DISP_SIZE 10

#define SIDE_BAR_X_SIZE 21

#define INVENTORY_Y_SIZE 4

#define LEGEND_X_SIZE 21
#define LEGEND_Y_SIZE 12

class Display {
  private:
    FRIEND_TEST(DispTest, TestDisp);
    /**
     * @brief Hardcoded legend
     */
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

    char **map; /**< Tampilan map */
    char *title; /**< Tampilan title game */
    char **inventory; /**< Tampilan product list (inventory) */
    char *money; /**< Tampilan money */
    char *water; /**< Tampilan water */
    char **legend; /**< Tampilan legend */
    char *timeTick; /**< Tampilan time tick */
    char face; /**< Tampilan arah hadap pemain */
    
    Inventory *inventoryPtr; /**< Product list pointer */
    Cell*** mapPtr;
    int* uangPtr;
    int* airPtr;
    ArahEnum* arahPtr;
    int* tickPtr;
    Coordinate* posisiPlayer;
    LinkedList<FarmAnimal*>* farmAnimals;

    /**
     * @brief Set the string To array of char object
     * 
     * @param arrChr array of char (output)
     * @param str string (input)
     * @param strLen panjang array of char maksimal
     */
    void setStrToArrChr(char * arrChr, std::string str, int strLen);

    /**
     * @brief Mengubah arah ke char
     * 
     * @param arah arah
     * @return char char arah
     */
    char arahToChar(ArahEnum arah);

    /**
     * @brief Mengubah array of char ke strings
     * 
     * @param arr array of char
     * @return std::string string keluaran
     */
    std::string convertArrCharToStr(char arr[]);

    /**
     * @brief Menghasilkan horizontal line '-'
     * 
     * @param n jumlah karakter '-'
     * @return std::string horizontal line dalam bentuk string
     */
    std::string makeHorizontalLine(int n);

    /**
     * @brief Menghasilkan horizontal space ' '
     * 
     * @param n jumlah karakter ' '
     * @return std::string horizontal space dalam bentuk string
     */
    std::string makeHorizontalSpace(int n);

  public:
    /**
     * @brief Construct a new Display object
     * 
     * @param _inventory alamat inventory pemain
     */
    Display(Cell*** _map, Inventory *_inventory, int* _uang, int *_air, ArahEnum* _arah,
      Coordinate* _posisiPlayer, LinkedList<FarmAnimal*>* _farmAnimals, int* _tick);

    /**
     * @brief Destroy the Display object
     */
    ~Display();

    /**
     * @brief update tampilan
     */
    void updateDisplay();

    /**
     * @brief merender tampilan ke layar
     */
    void renderAll();

    /**
     * @brief Update dan render tampilan
     */
    void updateAndRender();
};

#endif
