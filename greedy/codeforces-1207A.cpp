// https://codeforces.com/contest/1207/problem/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int b, p, f, h, c, profit{0};
    cin >> b >> p >> f >> h >> c;

    int availableBurger = b / 2;

    if (h > c)
    {
      int burgerWithPatties = min(availableBurger, p);
      profit += (burgerWithPatties * h);
      availableBurger -= burgerWithPatties;

      int burgerWithCutlets = min(availableBurger, f);
      profit += (burgerWithCutlets * c);
      cout << profit << endl;
    }
    else
    {
      int burgerWithCutlets = min(availableBurger, f);
      profit += (burgerWithCutlets * c);
      availableBurger -= burgerWithCutlets;

      int burgerWithPatties = min(availableBurger, p);
      profit += (burgerWithPatties * h);

      cout << profit << endl;
    }
  }

  return 0;
}