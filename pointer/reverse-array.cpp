#include <iostream>
using namespace std;

int reverse_array(int *arr, int size);

int main()
{
  int arr[] = {12, 45, 67, 23, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  reverse_array(arr, size);

  return 0;
}

int reverse_array(int *arr, int size)
{

  int *start = arr;
  int *end = arr + size - 1;

  while (start < end)
  {
    int temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}