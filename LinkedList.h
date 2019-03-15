#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/**
 * Kelas LinkedList yang mampu menyimpan tipe generic
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
   * Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
   */
  int find(T el) const;

  /**
   * Mengembalikan True jika linked list kosong
   */
  bool isEmpty() const;

  /**
   * Menambahkan elemen sebagai elemen paling akhir
   */
  void add(T el);

  /**
   * Membuang elemen dari linked list
   */
  void remove(T el);

  /**
   * Mengembalikan elemen pada indeks
   */
  T get(int idx) const;
};

#endif