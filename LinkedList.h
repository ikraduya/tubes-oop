/**
 * @file LinkedList.h
 * @author Ikraduya
 * @date 2019-03-12
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/**
 * @brief Kelas LinkedList yang mampu menyimpan tipe generic
 * 
 * @tparam T Tipe data elemen
 */
template <class T>
class LinkedList {
private:
  struct Node* head; /**< head of linkedlist */

public:
  /**
   * Node untuk menyimpan tiap elemen
   */

  struct Node {
    T data;             /**< struct data */
    struct Node *next;  /**< struct next pointer */
  };

  /**
   * @brief Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
   * 
   * @param el Elemen yang dicari
   * @return int Indeks dimana elemen ditemukan
   */
  int find(T el) const;

  /**
   * Mengembalikan True jika linked list kosong
   */
  bool isEmpty() const;

  /**
   * @brief Menambahkan elemen sebagai elemen paling akhir
   * 
   * @param el Elemen yang ingin ditambahkan
   */
  void add(T el);

  /**
   * @brief Menghapus elemen dari linked list
   * 
   * @param el Elemen yang ingin dihapus
   */
  void remove(T el);

  /**
   * @brief Mengembalikan elemen pada indeks
   * 
   * @param idx Indeks yang diperiksa
   * @return T Elemen yang diperiksa
   */
  T get(int idx) const;
};

#endif