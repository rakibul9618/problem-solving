#include <iostream>

using namespace std;
int sum_of_digits(int n);

int main()
{
 int result = sum_of_digits(123);

 cout << result << endl;

  return 0;
}

int sum_of_digits(int n) {
  // Write your code below this line
  if(n == 0) return 0;

  return n % 10 + sum_of_digits(n / 10);

  // Write your code above this line
};