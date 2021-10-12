#include "CircularLinkedList.h"
#include "iostream"

template <typename T> CircularLinkedList<T>::CircularLinkedList() {
  tail = nullptr;
}
template <typename T> bool CircularLinkedList<T>::addFront(const T &newEntry) {
  Node *newNode = new Node(newEntry);
  if(tail == nullptr){
    tail = newNode;
    tail->next = tail;
  }
  newNode->next = tail->next;
  tail->next = newNode;
  return true;
}
template <typename T> bool CircularLinkedList<T>::addEnd(const T &newEntry) {
  Node *newNode = new Node(newEntry);
  if(tail == nullptr){
    tail = newNode;
    tail->next = tail;
  }
  newNode->next = tail->next;
  tail->next = newNode;
  tail = newNode;
  return true;
}
// template <typename T> bool CircularLinkedList<T>::addMiddle(const T &newEntry) {
//   Node *newNode = new Node(newEntry);
//   if(tail == nullptr){
//     tail = newNode;
//     tail->next = tail;
//   }
//   newNode->next = tail->next;
//   tail->next = newNode;
//   tail = newNode;
//   return true;
// }


template <typename T> bool CircularLinkedList<T>::removeFront() {
  Node *newNode = new Node(newEntry);
 
 
  tail->next = tail->next->next;
  delete tail->next;
  tail->next = nullptr;
}


template <typename T> bool CircularLinkedList<T>::removeEnd() {
  Node *newNode = new Node(newEntry);
  if(tail == nullptr){
    tail = newNode;
    tail->next = tail;
  }
  newNode->next = tail->next;
  tail->next = newNode;
  tail = newNode;
  return true;
}




template <typename T> void CircularLinkedList<T>::display() {
  if (tail != nullptr) {
    Node *curNode = tail->next;
    do {
      std::cout << curNode->data << " ";
      curNode = curNode->next;
    } while (curNode != tail->next);
  }
}

