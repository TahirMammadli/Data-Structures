#include "Stack.h"
#include "iostream"

template <typename T> Stack<T>::Stack(int size) {
  top = -1;
  arr = new T[size];
  stackSize = size;
}

template <typename T> bool Stack<T>::push(const T &newEntry) {
  top++;
  arr[top] = newEntry;

  return true;
}

template <typename T> bool Stack<T>::isEmpty() {
  bool status;
  if (top == -1)
    status = true;
  else
    status = false;
  return status;
}

template <typename T> T Stack<T>::pop() {
  int poppedNum = arr[top];
  arr[top] = 0;
  top--;

  return poppedNum;
}

template <typename T> T Stack<T>::peek() {
    return arr[top];
}

template <typename T> void Stack<T>::display() {
  for (int i = stackSize; i >= 0; i--) {
    std::cout << arr[i] << " ";
  }
}
