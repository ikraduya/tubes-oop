/**
 * @file Ukuran.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef UKURAN_H
#define UKURAN_H

/**
 * @brief Kelas Ukuran berisi atribut integer x dan y
 */
class Ukuran{
private:
  int x, y; /**< x: panjang, y: tinggi */ 
public:
  /**
   * @brief ctor parameter
   * 
   * @param x panjang
   * @param y tinggi
   */
  Ukuran(int x, int y);

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
