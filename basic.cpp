#include <iostream>

int main(){
  int a=1;
  std::cout << "a= " << a << std::endl;
  if(a==1)
    {
      a=2;
    }
  else
    {
      //this part never executes
    }

  std::cout << "a= " << a << std::endl;

  return 0;
}
