#include "iostream"
#include "Bag.h"
 template <class T>
Bag<T>::Bag(){    
    currentSize = 0;
    arr = new T[CAPACITY];
}
 template <class T>
int Bag<T>::getCurrentSize() const {
    return currentSize;
}
 template <class T>
bool Bag<T>::addItem(const T& item){
    if(currentSize == CAPACITY){
        
        T *newArr = new T[CAPACITY * 2];
        for (int i = 0; i < currentSize; i++)
        {
            newArr[i] = arr[i];            
        }   
        // delete the content of the old arr(the address still stays) 
        delete[] arr;

        // point the newArr to the adress of the old
        arr = newArr;       
    }    
    arr[currentSize] = item;
    currentSize++; 
    return true;
}


/* template <class T>
void Bag<T>::display(){
    if(currentSize > 0){
        for(int i = 0; i < currentSize; i++){
            std::cout<<arr[i]<<" ";
        }
    }
    else
        std::cout<<"No items found."<<std::endl;
}*/

template <class T>
bool Bag<T>::contains(const T& item) const {
    

    for(int i = 0; i < currentSize; i++){
            if(arr[i] == item){
                return true;
            }
    }
           
            return false;

}


 template <class T>
int Bag<T>::getFrequencyOf(const T& item) const {
    int counter = 0;
    for(int i = 0; i < currentSize; i++){
            if(arr[i] == item){
                counter++;
            }
    }
            if(counter > 0){
                return counter;
            }else{
            return 0;
        }
}

 template <class T>
bool Bag<T>::removeItem(const T& item){
        for(int i = 0; i < currentSize; i++){
            if(arr[i] == item){
                arr[i] = arr[currentSize-1];
                currentSize--;
                return true;
            }
        }
        return false;
}
 template <class T>
void Bag<T>::clear(){
    currentSize = 0;
}

 template <class T>
std::vector<T> Bag<T>::toVector(){
    std::vector<T> vect;
    for (int i = 0; i < currentSize; i++)
    {
        vect.push_back(arr[i]);
    }
    return vect;
 }