#ifndef COORDINATE_H
#define COORDINATE_H

/**
 * @brief Kelas Coordinate berisi atribut integer x dan y
 */
class Coordinate {
private:
  int x, y; /**< x: absis, y: ordinat */
public:
  /**
   * @brief ctor default
   *
   */
  Coordinate();

  /**
   * @brief ctor parameter
   *
   * @param x absis
   * @param y ordinat
   */
  Coordinate(int x, int y);

  /**
   * @brief getter X
   *
   * @return int x
   */
  int getX() const;

  /**
   * @brief getter Y
   *
   * @return int y
   */
  int getY() const;

  /**
   * @brief setter X
   */
  void setX(int x);

  /**
   * @brief setter Y
   */
  void setY(int y);

  /**
   * @brief operator overloading +
   *
   */
   Coordinate operator+(const Coordinate& c);
   //friend Coordinate& operator+(Coordinate& c1, Coordinate& c2);
};

#endif
