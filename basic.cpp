#include <iostream>

int main(){
  int a=0;
  std::cout << "write a number: [0-10]: ";
  std::cin >> a;
  if(a>10 || a<0)
    {
      std::cout << "you don't like following instructions, do you?" << std::endl;
    }
  else
    {
      std::cout << "thanks!" << std::endl;
    }

  std::cout << "a= " << a << std::endl;

  return 0;
}
