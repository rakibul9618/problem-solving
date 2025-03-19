#include <iostream>;

using namespace std;

double a_penny_doubled_everyday(int, double amount = 0.01);

int main()
{

  double total = a_penny_doubled_everyday(2);

  cout << total << endl;

  return 0;
}

double a_penny_doubled_everyday(int n, double amount)
{

  if (n == 0)
    return amount;

  return a_penny_doubled_everyday(--n, amount * 2);
}