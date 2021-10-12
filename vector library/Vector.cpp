#include <iostream>
#include "Vector.h"  
 
    Vector::Vector() 
    { 
        arr = new int[1]; 
        capacity = 1; 
        current = 0; 
    } 

    // Vector::~Vector(){
    //     std::cout<<"destroyed"<<std::endl;
    // }
  
    void Vector::append(int value) 
    { 
        
        // double the capacity 
        // if the number of elements is equal to the capacity 

        if (current == capacity) { 
            int* temp = new int[capacity*2]; 
  
            // copying old array elements to new array 
            for (int i = 0; i < capacity; i++) { 
                temp[i] = arr[i]; 
            } 
  
            // deleting the old array 
            delete[] arr; 
            capacity *= 2; 
            arr = temp; 
        } 
  
        // Inserting data 
        arr[current] = value; 
        current++; 
    } 
    
  
    // method to add element at any index 
    void Vector::insert(int value, int index) 
    { 
  
        // if index is equal to capacity then this 
        // function is same as push defined above 
        if (index == capacity) 
            append(value); 
        else
            arr[index] = value; 
    } 

    void Vector::append(int num, int values){
        for(current = 0; current < num; current++){
            arr[current] = values;
        }
    }
  
    // method to extract element at any index 
    int Vector::get(int index) 
    { 
  
        // if index is within the range 
        if (index < current) 
            return arr[index]; 
        else{return 0;}
    } 
  
    // method to delete last element 
    void Vector::pop() 
    { 
        current--; 
    } 
  
    // method to get size of the vector 
    int Vector::size() 
    { 
        return current; 
    } 
  
    // method to get capacity of the vector 
    int Vector::getCap() 
    { 
        return capacity; 
    } 
  
    // method to print array elements 
    void Vector::print() 
    { 
        
        for (int i = 0; i < current; i++) { 
            std::cout << arr[i] << " "; 
        } 
        std::cout << std::endl; 
    }

    bool operator <(Vector& a, Vector& v){ return a < v; } 
  
  
    bool operator <=(Vector& a, Vector& v){ 
        if(a.size() <= v.size()){
            return true;
        }else{return false;}
    } 

    bool operator >=(Vector& a, Vector& v){ 
        if(a.size() >= v.size()){
            return true;
        }else{return false;}
    }

    bool operator !=(Vector& a, Vector& v){
       if(a.size() == v.size()){
           for(int i = 0; i < a.size(); i++){
            if(a.getArr(i) == v.getArr(i)){
               return false;
            }
        }
        
       }
       return true;
    }    

    int Vector::getArr(int index){
        return arr[index];
     }

    bool operator == (Vector &a, Vector &v){        
       if(a.size() == v.size()){
           for(int i = 0; i < a.size(); i++){
            if(a.getArr(i) != v.getArr(i)){
                std::cout<<a.getArr(i)<<std::endl;
                std::cout<<v.getArr(i)<<std::endl;
               return false;
            }
        }
       }
       return true;
    } 

   Vector operator + (Vector &a, Vector &v){        
      Vector d;
        for(int i = 0; i < a.size(); i++){
            d.append(a.getArr(i));               
        }
        for(int i = 0; i < v.size(); i++){
            d.append(v.getArr(i));               
        }
       for(int i = 0; i < d.size(); i++){
            std::cout<<d.getArr(i);          
       }
        return d;
       }

    Vector operator * (int, Vector &a){        
       Vector d;
       for(int j=0; j < 3; j++){
         for(int i = 0; i < a.size(); i++){
            d.append(a.getArr(i));    
                
          }
       }
       for(int i = 0; i < d.size(); i++){
            std::cout<<d.getArr(i);          
       }
        return d;
       }

    Vector operator * (Vector &a, int){        
       Vector d;
       for(int j=0; j < 3; j++){
         for(int i = 0; i < a.size(); i++){
            d.append(a.getArr(i));    
                
          }
       }
       for(int i = 0; i < d.size(); i++){
            std::cout<<d.getArr(i);          
       }
        return d;
       }
    
    std::ostream &operator <<(std::ostream &strm,Vector& a){
        // for(int i =0;  i < a.size(); i++){
        //     strm << a.getArr(i);
        // }
        a.print();
        return strm;
    } 

    Vector& operator ++ (Vector& a){
         for(int i =0;  i < a.size(); i++){
             std::cout<<a.getArr(i)+1;
         }
         return a;
    }

     int& Vector::operator[] (int i){    
         return arr[i];   
     }