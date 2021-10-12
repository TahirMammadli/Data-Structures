#ifndef BAG_H
#define BAG_H
#include "vector"

 template <class T>
class Bag{
    private: 
        static const int CAPACITY = 6;
        int currentSize;
        T *arr;

    public: 
        Bag();
        int getCurrentSize() const;
        bool addItem(const T& item);
        bool removeItem(const T& item);
        void clear();
        bool contains(const T& item) const;
        int getFrequencyOf(const T& item) const;

        // void display(); // vector version of this method is used instead. For generic types.
        std::vector<T> toVector();
        void display(std::vector<T> vect); 
};


#endif