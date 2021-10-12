#include "Stack.h"
#include "iostream"

template <typename T> Stack<T>::Stack() { top = nullptr; }
template <typename T> bool Stack<T>::isEmpty() { return top == nullptr; }
template <typename T> bool Stack<T>::push(const T &newEntry) {
  Node<int> *newNode = new Node<int>(newEntry);
  if (top == nullptr) {
    top = newNode;
  } else {
    newNode->next = top;
    top = newNode;
  }
  return true;
}
template <typename T> T Stack<T>::peek() const { return top->data; }
template <typename T> T Stack<T>::pop() {
  Node<int> *temp = top;
  int poppedVal = top->data;
  top = top->next;
  delete temp;
  temp = nullptr;
  return poppedVal;
}
template <typename T> void Stack<T>::display()const{
    Node<int> *curNode = top;
    while(curNode != nullptr){
        std::cout<<curNode->data<<" ";
        curNode = curNode->next;
    }
}
