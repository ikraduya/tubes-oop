#include "Coordinate.h"

  /**
   * @brief ctor parameter
   *
   * @param x absis
   * @param y ordinat
   */

Coordinate::Coordinate(int x, int y){
  this->x = x;
  this->y = y;
}

  /**
   * @brief getter X
   *
   * @return int x
   */
int Coordinate::getX() const { return x; }

  /**
   * @brief getter Y
   *
   * @return int y
   */
int Coordinate::getY() const { return y; }

  /**
   * @brief setter X
   */
void Coordinate::setX(int x) { this->x = x; }

  /**
   * @brief setter Y
   */
void Coordinate::setY(int y) { this->y = y; }

/**
 * @brief operator overloading +
 *
 */
Coordinate Coordinate::operator+(const Coordinate& c){
  return Coordinate(this->getX()+c.getX(), this->getY()+c.getY());
}

Coordinate operator+(const Coordinate& c1, const Coordinate& c2){
  return Coordinate(c1.getX()+c2.getX(), c1.getY()+c2.getY());
}
