#include "List.cpp"
#include "iostream"

int main() {
  DLList<int> dll;
  dll.addFirst(23);
  dll.addFirst(6);
  dll.addFirst(2);
  dll.addFirst(23);
  dll.addFirst(23);

  // dll.addFirst(69);

  //   dll.addLast(3);
  //   dll.addLast(7);
  dll.addAfter(2, 69);
  //   dll.addAfter(6,12);
  //   dll.remove(2);
  //   dll.remove(69);
  // dll.removeLast();
  // std::cout<<dll.contains(2323)<<std::endl;
  dll.display();
  dll.clear();
  std::cout << std::endl;
  dll.display();
}