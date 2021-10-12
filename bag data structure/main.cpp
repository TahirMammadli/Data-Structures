#include "iostream"
#include "Bag.cpp"

void display(std::vector<int> vect){
    for(int i = 0; i < vect.size(); i++){
        std::cout<<vect[i]<<" ";
    }
}

int main(){
    Bag<int> bag;
    bag.addItem(5);  
    bag.addItem(6.2);
    bag.addItem(6.9);
    bag.addItem(69);
    bag.addItem(6.9);
    bag.addItem(69);
    bag.addItem(23);
    bag.addItem(23);
      







    // std::cout<<bag.contains(68)<<std::endl;
    std::cout<<bag.getCurrentSize()<<std::endl;
    // std::cout<<std::endl;

    std::vector<int> vect = bag.toVector();
    display(vect);

    return 0;
}