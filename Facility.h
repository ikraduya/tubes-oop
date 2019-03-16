/**
 * @file Facility.h
 * @author Rakhmad
 * @date 2019-03-13
 */

#include "Cell.h"

#ifndef FACILITY_H
#define FACILITY_H

/**
 * Kelas Facility merupakan fasilitas peternakan
 */
class Facility : public Cell{
public:
  /**
   * Konstruktor dengan parameter, setSymbol(symbol) 
   * @param symbol Char symbol
   */
  Facility(char symbol);
};

#endif
