#ifndef CELL_H
#define CELL_H

class Cell{
private:
  char symbol;
public:
  //ctor default
  Cell();

  //ctor parameter
  Cell(char symbol);

  //getter symbol
  char getSymbol() const;

  //setter symbol
  void setSymbol(char symbol);
};

#endif
