#ifndef DLL_H
#define DLL_H
#include "Node.h"
template <typename T>
class List{
    private:
        Node<T> *head;
    public:
        bool addToFront(const &T newEntry);
        bool addToBack(const &T newEntry);
        bool addAfter(const &T newEntry);
};
#endif