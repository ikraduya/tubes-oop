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
   * @brief pindah ke atas
   */
  void goUp();

  /**
   * @brief pindah ke bawah
   */
  void goDown();

  /**
   * @brief pindah ke kiri
   */
  void goLeft();

  /**
   * @brief pindah ke kanan
   * 
   */
  void goRight();

  /**
   * @brief return koordinat ke atas
   * 
   * @return Coordinate 
   */
  Coordinate goUpRet();
  
  /**
   * @brief return koordinat ke bawah
   * 
   * @return Coordinate 
   */
  Coordinate goDownRet();

  /**
   * @brief return koordinat ke kiri
   * 
   * @return Coordinate 
   */
  Coordinate goLeftRet();

  /**
   * @brief return koordinat ke kanan
   * 
   * @return Coordinate 
   */
  Coordinate goRightRet();

  

  /**
   * @brief operator overloading +
   *
   */
   Coordinate operator+(const Coordinate& c);
   //friend Coordinate& operator+(Coordinate& c1, Coordinate& c2);

  /**
   * @brief operator overloading ==
   * 
   * @param c koordinat objek lain
   * @return true koordinat sama
   * @return false koordinat beda
   */
  bool operator==(const Coordinate& c);

  /**
   * @brief operator overloading !=
   * 
   * @param c koordinat objek lain
   * @return true koordinat beda
   * @return false koordinat sama
   */
  bool operator!=(const Coordinate& c);
};

#endif
