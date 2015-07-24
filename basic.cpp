#include <iostream>

using namespace std:

int main(){
  int a=0;
  cout << "write a number: [0-10]: ";
  cin >> a;
  if(a>10 || a<0)
    {
      cout << "you don't like following instructions, do you?" << endl;
    }
  else
    {
      cout << "thanks!" << endl;
    }

  cout << "a= " << a << endl;

  return 0;
}
