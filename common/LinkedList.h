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
template <class T>
struct tNode {
  tNode(T data) : data(data), next(nullptr) {}
  tNode() : next(nullptr){}
  T data;           /**< struct data */
  tNode<T> *next;   /**< struct next pointer */
};

/**
 * @brief Kelas LinkedList yang mampu menyimpan tipe generic
 * 
 * @tparam T Tipe data elemen
 */
template <class T>
class LinkedList {
private:
  tNode<T>* head; /**< head of linkedlist */

public:
  /**
   * @brief Membuat objek linked list baru sesuai tipe
   */
  LinkedList() {
    head = NULLLinkedList;
  };

  /**
   * @brief Destroy the Linked List object
   */
  ~LinkedList() {
    if (!isEmpty()) {
      tNode<T>* pt = head;
      tNode<T>* ptDel;
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
      tNode<T>* pt = head;
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
      head = new tNode<T>(el);
      head->data = el;
      head->next = NULLLinkedList;
    } else {
      tNode<T>* pt = head;
      while(pt->next != NULLLinkedList){
        pt = pt->next;
      }

      tNode<T>* pIns = new tNode<T>(el);
      // pIns->data = el;
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
          tNode<T>* delPt = head;
          head = head->next;
          delete delPt;
        }
      } else {  // elemen yang ingin dihapus kemungkinan bukan di awal
        // cari elemen yang ingin dihapus
        tNode<T>* fPt = head;
        while (fPt->next != NULLLinkedList && fPt->data != el) {
          fPt = fPt->next;
        }

        if (fPt->data == el) {  // elemen ketemu
          tNode<T>* befPt = head;
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
  T& get(int idx) const {
    if (idx >= 0 && !isEmpty()) {
      int i = 0;
      tNode<T>* pt = head;
      while (i < idx && pt != NULLLinkedList){
        pt = pt->next;
        i++;
      }
      if (i == idx && pt != NULLLinkedList) {
        //std::cout << pt->data << std::endl;
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
    if (head != nullptr) {
      int i = 1;
      tNode<T>* pt = head;
      while (pt->next != nullptr) {
        pt = pt->next;
        i++;
      }

      return i;
    }
    return 0;
  }
};

#endif