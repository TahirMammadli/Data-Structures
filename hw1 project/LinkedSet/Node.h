#ifndef NODE_H
#define NODE_H

class Node{
    public:
     int data;
     Node* next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};

#endif