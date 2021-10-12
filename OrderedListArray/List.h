#ifndef LIST_H
#define LIST_H

class List
{
private:
    int *arr;
    int numOfItems;
    int capacity;
    
public:
    List(int size);
    ~List();
    bool isEmpty();
    int getLength();
    bool remove(int pos);
    bool insert(int newPos, int newEntry);
    void clear();
    int getEntry(int pos);
    int replace(int pos, int newEntry);
    void display();
};




#endif