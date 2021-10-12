#include <iostream> 
#include "Vector.cpp"  

  
int main() 
{ 
    Vector v; 
    Vector a;
    Vector c;
    a.append(3);
    a.append(2);
    a.append(5);
    v.append(8);
    v.append(2);
    v.append(3); 
    

    // // print() prints out all 
    // // the elements inside of the array
    // std::cout<<"Our elements inside of the vector: ";
    // v.print();
    // std::cout<<"The size of the vector: " <<v.size()<<std::endl;
    // std::cout<<"Capacity: "<<v.getCap()<<std::endl;

    // // we can also append an 
    // // element to a certain index
    // std::cout<<"Appended 39 to index 1 which replaced the previous number"<<std::endl;
    // v.append(39,1);
    // v.print();
    // std::cout<<"vecto a: ";
    // a.print();

    // // we pop one element from the array
    // v.pop();
    // // After pop()
    // std::cout<<"After pop(): ";
    // v.print();
    // std::cout<<"The size of the vector: " <<v.size()<<std::endl;
    // std::cout<<"Capacity: "<<v.getCap()<<std::endl;

    // // we can access an element by passing its 
    // // index to the get() method
    // std::cout<<"Outputs the number at 0th index:"<<std::endl;
    // std::cout<<v.get(0)<<std::endl;


    //std::cout<<(v<a)<<std::endl;
    //std::cout<<(v>a)<<std::endl;
    std::cout<<(a == v)<<std::endl;
    //std::cout<<(a<=v)<<std::endl;
    //std::cout<<(a>=v)<<std::endl;
    //std::cout<<(a!=v)<<std::endl;
    //c=a+v;
    //c=3*a;
    //c=a*3;
    //std::cout<<v<<std::endl;
    //++a;
    // std::cout<<v[2]<<std::endl;

    return 0; 
} 