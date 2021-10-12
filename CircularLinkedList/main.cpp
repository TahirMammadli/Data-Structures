#include "CircularLinkedList.cpp"
#include "iostream"

int main(){
    CircularLinkedList<int> cll;
    cll.addFront(43);
    cll.addFront(4312);
    cll.addFront(4);
    cll.addEnd(3);
    cll.addEnd(2);
    cll.addEnd(23);
    cll.display();
}