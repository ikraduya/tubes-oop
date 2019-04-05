#include "Cell.h"

  /**
   * @brief ctor default
   *
   * symbol = '?'
   *
   */
  Cell::Cell(){
    symbol = '?';
  }

  /**
   * @brief Getter symbol
   *
   * @return char symbol
   */
  char Cell::getSymbol() const { return symbol; }

  /**
   * @brief Setter symbol
   */
  void Cell::setSymbol(char symbol) { this->symbol = symbol; }

  /**
   * @brief Getter coordinate
   *
   * @return coordinate
   */
  Coordinate Cell::getCoordinate() const { return coordinate; }

  /**
   * @brief Setter coordinate
   */
  void Cell::setCoordinate(Coordinate coordinate) { this->coordinate = coordinate; }
