#ifndef DLL_H
#define DLL_H
#include "Node.h"
#include "vector"
template <typename T>
class DLList{
    private:
        Node<T> *head;
        Node<T> *tail;
    public:
        DLList();
        ~DLList();
        bool addFirst(const T& newEntry);
        bool addLast(const T& newEntry);
        bool addAfter(const T& anEntry, const T& newEntry);
        void remove(const T& value);
        void removeFirst();
        void removeLast();
        bool isEmpty()const;
        bool contains(const T& anEntry)const;
        int getNumOfItems()const;
        int getFrequencyOf(const T& anEntry)const;
        void display()const;
        std::vector<T> toVector()const;
        void clear();

};
#endif