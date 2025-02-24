// https://codeforces.com/contest/514/problem/A

#include <iostream>
#include <string>
using namespace std;

int main()
{

  string value{};

  cin >> value;

  char firstChar = value[0];

  for (size_t i = 0; i < value.size(); i++)
  {

    int t = value[i] - '0';

    if (9 - t < t)
    {
      value[i] = (9 - t) + '0';
    }
  }

  if (value[0] == '0')
  {
    value[0] = firstChar;
  }

  cout << value << endl;

  return 0;
}