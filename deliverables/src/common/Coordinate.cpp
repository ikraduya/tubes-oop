#include "Coordinate.h"
  /**
   * @brief ctor default
   *
   */
  Coordinate::Coordinate(){
    x = -1;
    y = -1;
  }

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


void Coordinate::goUp() {
  y -= 1;
}

void Coordinate::goDown() {
  y += 1;
}

void Coordinate::goLeft() {
  x -= 1;
}

void Coordinate::goRight() {
  x += 1;
}

Coordinate Coordinate::goUpRet() {
  return Coordinate(x, y-1);
}
  
Coordinate Coordinate::goDownRet() {
  return Coordinate(x, y+1);
}

Coordinate Coordinate::goLeftRet() {
  return Coordinate(x-1, y);
}

Coordinate Coordinate::goRightRet() {
  return Coordinate(x+1, y);
}

/**
 * @brief operator overloading +
 *
 */
Coordinate Coordinate::operator+(const Coordinate& c){
  return Coordinate(this->getX()+c.getX(), this->getY()+c.getY());
}

//Coordinate operator+(const Coordinate& c1, const Coordinate& c2){
//  return Coordinate(c1.getX()+c2.getX(), c1.getY()+c2.getY());
//}

bool Coordinate::operator==(const Coordinate& c) {
  return (x == c.getX()) && (y == c.getY());
}

bool Coordinate::operator!=(const Coordinate& c) {
  return (!operator==(c));
}