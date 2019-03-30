/**
 * @file LinkedListTest.h
 * @author Ikraduya
 * @date 2019-03-22
 */

#include <iostream>
#include "LinkedList.h"
#include "LinkedListException.h"

using namespace std;

class Point {
  public:
    int x;
    int y;
    Point(int _x, int _y) : x(_x), y(_y) {};
};

int main() {
  LinkedList<Point> L;
  cout << "panjang: " << L.count() << endl;
  
  L.add(Point(1, 2));
  L.add(Point(3, 4));
  cout << "panjang: " <<  L.count() << endl;
  cout << "isi: " <<  L.get(0).y << endl;
  // L.add(11);
  // L.add(12);
  cout << "cuk" << endl;
  // cout << "Iyo cp: " << L.find(12) << endl;

  cout << "mimpi" << endl;
  // L.remove(10);
  // L.remove(11);

  // L.print();

  if (L.isEmpty()) {
    cout << "Kosong cuk" << endl;
  } else {
    cout << "dak kosong" << endl;
  }

  try {
    // cout << L.get(0) << endl;
    // cout << L.get(3) << endl;
  } catch (LinkedListExp& err) {
    cout << "gagal " << err.what() << endl;
  } catch (...) {
    cout << "bootcamp" << endl;
  }


  cout << "Linked List Test Passed :)" << endl;
  return 0;
}
