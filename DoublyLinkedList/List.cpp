#include "List.h"
#include "iostream"

template <typename T> DLList<T>::DLList() { head = nullptr; }
template <typename T> DLList<T>::~DLList() {
  // clear();
}

template <typename T> bool DLList<T>::addFirst(const T &newEntry) {
  Node<int> *newNode = new Node<int>(newEntry);
  if (isEmpty()) {
    head = newNode;
    tail = newNode;
  } else {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
  return true;
}

template <typename T> bool DLList<T>::addLast(const T &newEntry) {
  Node<int> *newNode = new Node<int>(newEntry);
  if (isEmpty()) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
  return true;
}

template <typename T>
bool DLList<T>::addAfter(const T &anEntry, const T &newEntry) {
  Node<int> *newNode = new Node<int>(newEntry);
  bool status;

  if (!isEmpty()) {
    Node<int> *curNode = head;
    while (curNode != nullptr) {
      if (curNode->data == anEntry) {
        Node<int> *nextNode = curNode->next;
        newNode->prev = curNode;
        curNode->next = newNode;

        newNode->next = nextNode;
        nextNode->prev = newNode;
        status = true;
      }
      curNode = curNode->next;
    }
  }
  return status;
}
template <typename T> void DLList<T>::display() const {
  if (!isEmpty()) {
    Node<int> *curNode = head;
    while (curNode != nullptr) {
      std::cout << curNode->data << " ";
      curNode = curNode->next;
    }
  }
}

template <typename T> void DLList<T>::remove(const T &anEntry) {
  Node<int> *curNode = head;

  if (!isEmpty()) {
    while (curNode != nullptr) {
      if (curNode->data == anEntry) {
        if (curNode == head) {
          head = head->next;
        } else {
          curNode->prev->next = curNode->next;
        }
        delete curNode;
        curNode = nullptr;
        return;
      } else {
        curNode = curNode->next;
      }
    }
  }
}

template <typename T> void DLList<T>::removeFirst() {
  Node<int> *tempNode = head;
  if (!isEmpty()) {
    head = head->next;
    head->prev = nullptr;
    delete tempNode;
    tempNode = nullptr;
  }
}

template <typename T> void DLList<T>::removeLast() {
  Node<int> *newLastNode = tail->prev;
  Node<int> *tempNode = tail;
  if (!isEmpty()) {
    newLastNode->next = nullptr;
    tail = tempNode;
    delete tempNode;
    tempNode = nullptr;
  }
}

template <typename T> bool DLList<T>::isEmpty() const {
  return head == nullptr;
}

template <typename T> bool DLList<T>::contains(const T &anEntry) const {
  Node<int> *curNode = head;
  while (curNode != nullptr) {
    if (curNode->data == anEntry) {
      return true;
    } else {
      curNode = curNode->next;
    }
  }
  return false;
}

template <typename T> int DLList<T>::getNumOfItems() const {
  int counter = 0;
  Node<int> *curNode = head;
  while (curNode != nullptr) {
    counter++;
    curNode = curNode->next;
  }
  return counter;
}

template <typename T> int DLList<T>::getFrequencyOf(const T &anEntry) const {
  int counter = 0;
  Node<int> *curNode = head;
  while (curNode != nullptr) {
    if (curNode->data == anEntry) {
      counter++;
    }
    curNode = curNode->next;
  }
  return counter;
}

template <typename T> void DLList<T>::clear() {
  Node<int> *curNode = head;
  while (curNode != nullptr) {
    delete curNode;
    curNode = nullptr;
  }
  curNode = curNode->next;
}
