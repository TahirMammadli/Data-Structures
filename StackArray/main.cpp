#include "Stack.cpp"
#include "iostream"

int main() {
  int poppedNum;
  Stack<int> stack(7);
  stack.push(5);
  stack.push(4);
  stack.push(2);
  stack.push(7);
    std::cout<<stack.peek();

  poppedNum = stack.pop();
  std::cout<<"Popping " << poppedNum << std::endl;
  poppedNum = stack.pop();
  std::cout<<"Popping " << poppedNum << std::endl;


  std::cout << std::endl;
  //   std::cout << stack.isEmpty();

  stack.display();
}