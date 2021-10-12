#include "List.cpp"
#include "iostream"

int main() {
    List list(5);
    std::cout<<list.insert(0,3)<<std::endl;
    std::cout<<list.insert(1,4)<<std::endl;
    std::cout<<list.insert(2,1)<<std::endl;
    std::cout<<list.insert(3,6)<<std::endl;
    std::cout<<list.insert(1,5)<<std::endl;
    std::cout<<list.remove(2)<<std::endl;

    list.display();
    std::cout<<std::endl;
    std::cout<<list.isEmpty();
    
}