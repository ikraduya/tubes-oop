/**
 * @file LinkedList.h
 * @author Ikraduya
 * @date 2019-03-12
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define NULLLinkedList nullptr

#include <iostream>
#include "LinkedListException.h"

/**
 * @brief Node untuk menyimpan tiap elemen
 */
template<typename U>
struct tNode {
  U data;             /**< struct data */
  struct tNode<U>* next;  /**< struct next pointer */
};

/**
 * @brief Address node untuk traversal linked list
 */
template<typename V>
using addr = tNode<V>*; /**<  */

/**
 * @brief Kelas LinkedList yang mampu menyimpan tipe generic
 * 
 * @tparam T Tipe data elemen
 */
template <class T>
class LinkedList {
private:
  addr<T> head; /**< head of linkedlist */

public:
  /**
   * @brief Membuat objek linked list baru sesuai tipe
   */
  LinkedList() {
    head = NULLLinkedList;
  };

  ~LinkedList() {
    if (!isEmpty()) {
      addr<T> pt = head;
      addr<T> ptDel;
      while(pt != NULLLinkedList) {
        ptDel = pt;
        pt = pt->next;
        delete ptDel;
        std::cout << "hehe" << std::endl;
      }
    }
  };

  /**
   * @brief Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
   * 
   * @param el Elemen yang dicari
   * @return int Indeks dimana elemen ditemukan
   */
  int find(T el) const {
    if (!isEmpty()) {
      int i = 0;
      addr<T> pt = head;
      while (pt->next != nullptr && pt->data != el) {
        pt = pt->next;
        i++;
      }
      if (pt->data == el) {
        return i;
      }
    }
    return -1;
  };

  /**
   * @brief Mengembalikan True jika linked list kosong
   * 
   * @return true LinkedList kosong
   * @return false LinkedList tidak kosong
   */
  bool isEmpty() const {
    return head == NULLLinkedList;
  };

  /**
   * @brief Menambahkan elemen sebagai elemen paling akhir
   * 
   * @param el Elemen yang ingin ditambahkan
   */
  void add(T el) {
    if (isEmpty()) {
      head = new tNode<T>();
      head->data = el;
      head->next = NULLLinkedList;
    } else {
      addr<T> pt = head;
      while(pt->next != NULLLinkedList){
        pt = pt->next;
      }

      addr<T> pIns = new tNode<T>();
      pIns->data = el;
      pIns->next = NULLLinkedList;
      pt->next = pIns;
    }
  };

  /**
   * @brief Menghapus elemen dari linked list
   * 
   * @param el Elemen yang ingin dihapus
   */
  void remove(T el) {
    if (!isEmpty()) {
      if (head->data == el) { // elemen di awal
        if (head->next == NULLLinkedList) { // elemen hanya 1
          delete head;
          head = NULLLinkedList;
        } else {
          std::cout << "fuk" << std::endl;
          addr<T> delPt = head;
          head = head->next;
          delete delPt;
        }
      } else {  // elemen yang ingin dihapus kemungkinan bukan di awal
        // cari elemen yang ingin dihapus
        addr<T> fPt = head;
        while (fPt->next != NULLLinkedList && fPt->data != el) {
          fPt = fPt->next;
        }

        if (fPt->data == el) {  // elemen ketemu
          addr<T> befPt = head;
          while (befPt->next != fPt) {
            befPt = befPt->next;
          }
          befPt->next = fPt->next;

          delete fPt;
        }
      }
    }
  };

  /**
   * @brief Mengembalikan elemen pada indeks
   * 
   * @param idx Indeks yang diperiksa
   * @return T Elemen yang diperiksa
   */
  T get(int idx) const {
    if (idx >= 0 && !isEmpty()) {
      int i = 0;
      addr<T> pt = head;
      while (i < idx && pt != NULLLinkedList){
        pt = pt->next;
        i++;
      }
      if (i == idx && pt != NULLLinkedList) {
        std::cout << pt->data << std::endl;
        return pt->data;
      } else {
        throw LinkedListExp("Element tidak ditemukan");
      }
    } else if (idx < 0) {
      throw LinkedListExp("Indeks < 0, tidak valid");
    } else if (isEmpty()) {
      throw LinkedListExp("LinkedList kosong!");
    }
  };

  /**
   * @brief Menghitung panjang jumlah elemen di list
   * @return int Jumlah elemen di list
   */
  int count() {
    int i = 0;
    addr<T> pt = head;
    while (pt->next != nullptr) {
      pt = pt->next;
      i++;
    }

    return i;
  }
};

#endif