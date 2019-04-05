#include "Ukuran.h"

  Ukuran::Ukuran(){
    p = -1;
    l = -1;
  }
  /**
   * @brief ctor parameter
   *
   * @param p panjang
   * @param l tinggi
   */
Ukuran::Ukuran(int p, int l){
  this->p = p;
  this->l = l;
}

  /**
   * @brief getter P
   *
   * @return int p
   */
int Ukuran::getP() const { return p; }

  /**
   * @brief getter L
   *
   * @return int l
   */
int Ukuran::getL() const { return l; }

  /**
   * @brief setter P
   */
void Ukuran::setP(int p) { this->p = p; }

  /**
   * @brief setter L
   */
void Ukuran::setL(int l) { this->l = l; }
