/**
 * @file Cell.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef CELL_H
#define CELL_H

/**
 * Kelas Cell yang merupakan petak tanah, akan diturunkan menjadi Land atau Facility
 */
class Cell{
private:
  char symbol;  /*!< Char symbol */  
public:
  /**
   * Konstruktor default
   */
  Cell();

  /**
   * Konstruktor dengan parameter
   * @param symbol Char simbol
   */
  Cell(char symbol);

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
