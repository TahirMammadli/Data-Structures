#include "ArraySet.h"
#include "iostream"
using namespace std;
#include "vector"


template <typename T> ArraySet<T>::ArraySet(int capacity) {
  arr = new T[capacity];
}

template <typename T> bool ArraySet<T>::add(const T &newEntry) {
  for (int i = 0; i < currentSize; i++) {
    if (arr[i] == newEntry) {
      // std::cout<<"Duplicates are not allowed."<<std::endl;
      return false;
    }
  }
  if (currentSize == capacity) {
    T *newArr = new T[capacity * 2];
    for (int i = 0; i < currentSize; i++) {
      newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
  }
  arr[currentSize] = newEntry;
  currentSize++;
  return true;
}

template <typename T> void ArraySet<T>::display() {
  for (int i = 0; i < currentSize; i++) {
    cout << arr[i] << " ";
  }
}

template <typename T> int ArraySet<T>::getCurrentSize() const {
  return currentSize;
}

template <typename T> bool ArraySet<T>::isEmpty() {
  if (currentSize == 0) {
    return true;
  }
  return false;
}

template <typename T> void ArraySet<T>::clear() {
  currentSize = 0;
  delete[] arr;
  arr = nullptr;
}

template <typename T> bool ArraySet<T>::contains(const T &anEntry) const {
  for (int i = 0; i < currentSize; i++) {
    if (arr[i] == anEntry) {
      return true;
    }
  }
  return false;
}

template <typename T> bool ArraySet<T>::remove(const T &anEntry) {
  for (int i = 0; i < currentSize; i++) {
    if (arr[i] == anEntry) {
      arr[i] = arr[currentSize - 1];
      currentSize--;
      cout << "removed " << anEntry << endl;
      return true;
    }
  }
  cout << anEntry << " is not in the set.";
  return false;
}

template <typename T> bool ArraySet<T>::remove() {
  srand(time(0));
  T random = rand() % 100;
  for (int i = 0; i < currentSize; i++) {
    if (arr[i] == random) {
      arr[i] = arr[currentSize - 1];
      currentSize--;
      cout << "removed " << random << " from the array." << endl;
      return true;
    }
  }
  cout << "Randomly generated number " << random << " is not in the array."
       << endl;
  return false;
}

template <typename T> vector<T> ArraySet<T>::toVector() {
  vector<T> v;
  for (int i = 0; i < currentSize; i++) {
    v.push_back(arr[i]);
  }
  return v;
}

template <typename T> ArraySet<T> ArraySet<T>::setUnion(ArraySet<T> setB) {
  ArraySet<int> setUnion(10);
  for (int i = 0; i < currentSize; i++) {
    setUnion.add(arr[i]);
  }
  for (int i = 0; i < setB.currentSize; i++) {
    setUnion.add(setB.arr[i]);
  }
  return setUnion;
}

template <typename T> ArraySet<T> ArraySet<T>::intersection(ArraySet<T> setB) {
  ArraySet<int> intersectionSet(10);
  // USE VECTOR FOR BOTH
  for (int i = 0; i < currentSize; i++) {
    for (int j = 0; j < setB.currentSize; j++) {
      if (arr[i] == setB.arr[j]) {
        intersectionSet.add(arr[i]);
      }
    }
  }
  return intersectionSet;
}

template <typename T> ArraySet<T> ArraySet<T>::difference(ArraySet<T> setB) {
  ArraySet<int> differenceSet(10);

  for (int j = 0; j < setB.currentSize; j++) {
    if (!contains(setB.arr[j])) {
      differenceSet.add(setB.arr[j]);
    }
  }
  return differenceSet;
}