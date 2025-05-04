#include <iostream>
using namespace std;

int main()
{

  int a{10};
  int b{20};

  int *ptr1{&a}, *ptr2{&b}, temp{0}, temp2{0};

  // temp = *ptr1;
  // temp2 = *ptr2;
  // *ptr1 = temp2;
  // *ptr2 = temp;

  // cout << "Value of a: " << a << endl;
  // cout << "Value of b: " << b << endl;
  // cout << "Value of temp: " << temp << endl;

  *ptr1 = *ptr1 + *ptr2;
  *ptr2 = *ptr1 - *ptr2;
  *ptr1 = *ptr1 - *ptr2;

  cout << "Value of a: " << a << endl;
  cout << "Value of b: " << b << endl;

  return 0;
}