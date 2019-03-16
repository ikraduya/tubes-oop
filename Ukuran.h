/**
 * @file Ukuran.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#ifndef UKURAN_H
#define UKURAN_H

/**
 * @brief Kelas Ukuran berisi atribut integer p dan l
 */
class Ukuran{
private:
  int p, l; /**< p: panjang, l: tinggi */
public:
  /**
   * @brief ctor parameter
   *
   * @param p panjang
   * @param l tinggi
   */
  Ukuran(int p, int l);

  /**
   * @brief getter P
   *
   * @return int p
   */
  int getP() const;

  /**
   * @brief getter L
   *
   * @return int l
   */
  int getL() const;

  /**
   * @brief setter P
   */
  void setP(int x);

  /**
   * @brief setter L
   */
  void setL(int y);
};

#endif
