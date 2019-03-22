/**
 * @file LinkedListTest.h
 * @author Ikraduya
 * @date 2019-03-22
 */

#include <iostream>
#include "LinkedList.h"
#include "LinkedListException.h"

using namespace std;

int main() {
  LinkedList<int> L;
  L.add(10);
  L.add(11);
  L.add(12);
  cout << "Iyo cp: " << L.find(12) << endl;
  // L.print();

  cout << "mimpi" << endl;
  L.remove(10);
  L.remove(11);

  // L.print();

  if (L.isEmpty()) {
    cout << "Kosong cuk" << endl;
  } else {
    cout << "dak kosong" << endl;
  }

  try {
    cout << L.get(0) << endl;
    cout << L.get(3) << endl;
  } catch (LinkedListExp& err) {
    cout << "gagal " << err.what() << endl;
  } catch (...) {
    cout << "bootcamp" << endl;
  }

  cout << "Linked List Test Passed :)" << endl;
  return 0;
}
