#include <iostream>
#include <string>
using namespace std;

int main()
{
  int *p;

  cout << "Value of p: " << p << endl;
  cout << "Address of p: " << &p << endl;
  cout << "Size of p: " << sizeof p << endl;

  p = nullptr;
  cout << "Value of p: " << p << endl;

  return 0;
}