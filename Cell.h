/**
 * @file Cell.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef CELL_H
#define CELL_H

#include "Coordinate.h"

/**
 * Kelas Cell yang merupakan petak tanah, akan diturunkan menjadi Land atau Facility
 */
class Cell{
private:
  char symbol;  /**< Karaktek simbol disetiap petak */
  Coordinate coordinate; /**< Koordinat setiap petak */
public:
  /**
   * Konstruktor default
   */
  Cell();

  /**
   * Konstruktor dengan parameter
   * @param symbol karakter petak, x absis petak, dan y ordinat petak
   */
  Cell(char symbol, int x, int y);

  /**
   * Getter symbol
   * @returns char symbol
   */
  char getSymbol() const;

  /**
   * Setter symbol
   * @param symbol Char simbol
   */
  void setSymbol(char symbol);
};

#endif
