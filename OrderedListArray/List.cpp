#include "List.h"
#include "iostream"

List::List(int capacity) {
  arr = new int[capacity];
  numOfItems = 0;
}

List::~List() { delete[] arr; }

bool List::isEmpty() {
  bool status;
  // std::cout<<getLength();
  if (getLength() == 0)
    status = true;
  else
    status = false;
  return status;
}

int List::getLength() { return numOfItems; }

void List::clear() { delete[] arr; }

int List::getEntry(int pos) { return arr[pos]; }

bool List::insert(int pos, int newEntry) {
    std::cout<<"is empty "<<isEmpty()<<std::endl;
    if(isEmpty()){
        arr[0] = newEntry;
        numOfItems++;
    }else{
        
        for(int i = numOfItems-1; i>=pos; i--)
            arr[i+1] = arr[i];
        
        arr[pos] = newEntry;
        numOfItems++;
        
        return true;
        
    }
    
    return false;
}

bool List::remove(int pos) {
  if (pos >= 0 && pos < numOfItems) {
    for (int i = pos; i < numOfItems; i++)
      arr[i] = arr[i + 1];
    numOfItems--;

    return true;
  }

  return false;
}

void List::display() {
  for (int i = 0; i < numOfItems; i++) {
    std::cout << arr[i] << " ";
  }
}