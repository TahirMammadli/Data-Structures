#include "LinkedSet.h"
#include "iostream"
using namespace std;
#include "vector"
#include <algorithm>
template <typename T> LinkedSet<T>::LinkedSet() { head = nullptr; }

template <typename T> bool LinkedSet<T>::add(T newEntry) {
  Node *newNode = new Node(newEntry);

  // newNode->next = nullptr; 
  if (head == nullptr) {
    head = newNode;
    return false;
  }
  Node *last = head;

  while (last->next != NULL) {
    last = last->next;
  }
  last->next = newNode;
  return true;
}
template <typename T> void LinkedSet<T>::display() {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
template <typename T> bool LinkedSet<T>::isEmpty() {
  if (head == nullptr) {
    return true;
  }
  return false;
}
template <typename T> int LinkedSet<T>::getCurrentSize() {
  int counter = 0;
  while (head != nullptr) {
    counter++;
    head = head->next;
  }
  return counter;
}
template <typename T> bool LinkedSet<T>::contains(int val) {
  while (head != nullptr) {
    if (head->data == val) {
      return true;
    } else {
      head = head->next;
    }
  }
  return false;
}
template <typename T> bool LinkedSet<T>::remove(int val) {
  Node *temp = head;
  Node *last = head;
  while (last->next != nullptr) {
    last = last->next;
  }

  while (temp != nullptr) {
    if (temp->data == val) {
      last->next = temp;
      delete last->next;
      last->next = nullptr;

      return true;
    } else {
      temp = temp->next;
    }
  }
  return false;
}
template <typename T> bool LinkedSet<T>::remove() {
  Node *temp = head;
  srand(time(0));
  int random = rand() % 100;
  cout << "random number: " << random;
  while (temp != nullptr) {
    if (temp->data == random) {
      delete temp;
      temp = nullptr;
    } else {
      temp = temp->next;
    }
  }
  return 0;
}
template <typename T> void LinkedSet<T>::clear() {
  Node *temp = head;
  while (temp != nullptr) {
    head = temp->next;
    delete temp;
    temp = head;
    
  }
}
template <typename T> vector<int> LinkedSet<T>::toVector() {
  vector<int> vect;
  Node *temp = head;
  while (temp != nullptr) {
    vect.push_back(temp->data);
    temp = temp->next;
  }
  return vect;
}
template <typename T> LinkedSet<T> LinkedSet<T>::setUnion(LinkedSet ls2) {
  LinkedSet<int> setUnion;
  vector<int> ls1_vector = toVector();
  vector<int> ls2_vector = ls2.toVector();

  for (int i = 0; i < ls1_vector.size(); i++) {
    setUnion.add(ls1_vector[i]);
  }
  for (int i = 0; i < ls2_vector.size(); i++) {
    setUnion.add(ls2_vector[i]);
  }
  return setUnion;
}
template <typename T> LinkedSet<T> LinkedSet<T>::intersection(LinkedSet ls2) {
  LinkedSet intersection;

  vector<int> ls1_vector = toVector();
  vector<int> ls2_vector = ls2.toVector();

  for (int i = 0; i < ls1_vector.size(); i++) {
    for (int j = 0; j < ls2_vector.size(); j++) {
      if (ls1_vector[i] == ls2_vector[j]) {
        intersection.add(ls1_vector[i]);
      }
    }
  }
  return intersection;
}
template <typename T> LinkedSet<T> LinkedSet<T>::difference(LinkedSet ls2) {
  LinkedSet difference;
  vector<int> ls1_vector = toVector();

  vector<int> ls2_vector = ls2.toVector();

  for (int i = 0; i < ls2_vector.size(); i++) {
    if (!count(ls1_vector.begin(), ls1_vector.end(), ls2_vector[i])) {
      difference.add(ls2_vector[i]);
    }
  }
  return difference;
}
