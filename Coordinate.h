#ifndef COORDINATE_H
#define COORDINATE_H

/**
 * @brief Kelas Ukuran berisi atribut integer x dan y
 */
class Coordinate{
private:
  int x, y; /**< x: absis, y: ordinat */
public:
  /**
   * @brief ctor parameter
   *
   * @param x absis
   * @param y ordinat
   */
  Coordinate(int x, int y);

  /**
   * @brief getter X
   */
  int getX() const;

  /**
   * @brief getter Y
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
};

#endif
