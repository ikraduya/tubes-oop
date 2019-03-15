#ifndef UKURAN_H
#define UKURAN_H

class Ukuran{
private:
  int x, y;
public:
  //ctor parameter
  Ukuran(int x, int y);

  //getter X
  int getX() const;

  //getter Y
  int getY() const;

  //setter X
  void setX(int x);

  //setter Y
  void setY(int y);
};

#endif
