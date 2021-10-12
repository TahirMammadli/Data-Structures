#ifndef CLL_H
#define CLL_H
#include "Node.h"

template <typename T>
class CircularLinkedList
{
private:
    Node* tail;
public:
    CircularLinkedList();
    bool addFront(const T& newEntry);
    bool addEnd(const T& newEntry);
    void display();
    bool removeEnd();
    bool removeFront();
    
};



#endif