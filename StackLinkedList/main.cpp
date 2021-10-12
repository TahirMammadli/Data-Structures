#include "iostream"
#include "Stack.cpp"
int main(){
    Stack<int> stack;
    //std::cout<<stack.isEmpty()<<std::endl;
    stack.push(5);
    stack.push(6);
    stack.push(3);
    //std::cout<<stack.isEmpty()<<std::endl;
    stack.display();
    std::cout<<std::endl;
    //std::cout<<stack.peek()<<std::endl;
    stack.pop();    
    stack.display();
}