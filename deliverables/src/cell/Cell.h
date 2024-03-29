/**
 * @file Cell.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef CELL_H
#define CELL_H

#include "../common/Coordinate.h"

/**
 * Kelas Cell yang merupakan petak tanah, akan diturunkan menjadi Land atau Facility
 */
class Cell{
private:
  Coordinate coordinate; /**< Koordinat setiap petak */
protected:
  char symbol;  /**< Karaktek simbol disetiap petak */
public:
  /**
   * @brief ctor default
   *
   */
   Cell();

  /**
   * @brief Getter symbol
   *
   * @return char symbol
   */
  char getSymbol() const;

  /**
   * @brief Setter symbol
   */
  void setSymbol(char symbol);

  /**
   * @brief Getter coordinate
   *
   * @return coordinate
   */
  Coordinate getCoordinate() const;

  /**
   * @brief Setter coordinate
   */
  void setCoordinate(Coordinate coordinate);
};

#endif
