#ifndef NODE_H
#define NODE_H

template <typename T> class Node {

public:
  Node *next;
  Node *prev;
  T data;
  Node(T d) {
    data = d;
    next = nullptr;
    prev = nullptr;
  }
};

#endif