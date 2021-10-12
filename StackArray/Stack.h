#ifndef STACK_H
#define STACK_H

template <typename T> 
class Stack{
    private:
        int *arr;
        int stackSize;
        int top;
        
    public:
        Stack(int size);
        bool isEmpty();
        bool push(const T& newEntry);
        T pop();
        T peek();

        void display();
};

#endif