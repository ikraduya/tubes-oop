#ifndef CELL_H
#define CELL_H

class Cell{
private:
  char symbol;
public:
  //ctor parameter
  Cell(char symbol);

  //getter symbol
  char getSymbol();

  //setter symbol
  void setSymbol(char symbol);
};

#endif
