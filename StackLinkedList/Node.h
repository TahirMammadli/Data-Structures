#ifndef STACK_H
#define STACK_H
template <typename T>
class Node{
    public: 
    T data;
    Node *next;
    Node(T d){
        data = d;
        next = nullptr;
    }
};

#endif