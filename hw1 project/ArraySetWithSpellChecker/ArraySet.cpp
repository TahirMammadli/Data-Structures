#include "ArraySet.h"
#include "iostream"
using namespace std;
#include "fstream"
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




template <typename T> bool ArraySet<T>::contains(const T &anEntry) const {
  for (int i = 0; i < currentSize; i++) {
    if (arr[i] == anEntry) {
      return true;
    }
  }
  return false;
}

// template <typename T> bool ArraySet<T>::remove(const T &anEntry) {
//   for (int i = 0; i < currentSize; i++) {
//     if (arr[i] == anEntry) {
//       arr[i] = arr[currentSize - 1];
//       currentSize--;
//       cout << "removed " << anEntry << endl;
//       return true;
//     }
//   }
//   cout << anEntry << " is not in the set.";
//   return false;
// }

// template <typename T> bool ArraySet<T>::remove() {
//   srand(time(0));
//   T random = rand() % 100;
//   for (int i = 0; i < currentSize; i++) {
//     if (arr[i] == random) {
//       arr[i] = arr[currentSize - 1];
//       currentSize--;
//       cout << "removed " << random << " from the array." << endl;
//       return true;
//     }
//   }
//   cout << "Randomly generated number " << random << " is not in the array."
//        << endl;
//   return false;
// }

template <typename T> vector<T> ArraySet<T>::toVector() {
  vector<T> v;
  for (int i = 0; i < currentSize; i++) {
    v.push_back(arr[i]);
  }
  return v;
}



template <typename T> std::vector<string> ArraySet<T>::read(string fileName) {
  ArraySet<string> readWords(20);
  ArraySet<string> incorrect(5);
  std::vector<std::string> dictVect;
  fstream file;
  string word;
  file.open(fileName.c_str());

  while (file >> word) {
    dictVect.push_back(word);
  }

  // for(int i = 0; i < dictVect.size(); i ++){
  //   readWords.add(dictVect[i]);
  // }
  
  file.close();
  return dictVect;
}

template <typename T>
ArraySet<string> ArraySet<T>::check(vector<string> dictVect, vector<string> incorrectVect) {
  ArraySet<string> differenceSet(30);
  ArraySet<string> dictionary(30);
  ArraySet<string> incorrect(30);



  for (int j = 0; j < dictVect.size(); j++) {
    dictionary.add(dictVect[j]);
  }
  for (int j = 0; j < incorrectVect.size(); j++) {
    incorrect.add(incorrectVect[j]);
  }
  
  for (int j = 0; j < incorrectVect.size(); j++) {
    if (!dictionary.contains(incorrect.arr[j])) {
      differenceSet.add(incorrectVect[j]);
    }
  }
  return differenceSet;
}