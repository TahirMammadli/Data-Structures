#ifndef LIST_H
#define LIST_H
#include "Node.h"
template <typename T>
class Stack{
    private:
        Node<T>* top;
        public:
        Stack();
        bool isEmpty();
        bool push(const T& newEntry);
        T peek()const;
        T pop();
        void display()const;
};

#endif 