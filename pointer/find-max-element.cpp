#include <iostream>
using namespace std;

int findMaxElement(int *arr, int size);

int main()
{
  int arr[] = {12, 45, 67, 23, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maxElement = findMaxElement(arr, size);

  cout << maxElement << endl;
  return 0;
}

int findMaxElement(int *arr, int size)
{

  int maxNumber = *arr;

  for (int i = 1; i < size; i++)
  {
    if (*(arr + i) > maxNumber)
    {
      maxNumber = *(arr + i);
    }
  }

  return maxNumber;
}