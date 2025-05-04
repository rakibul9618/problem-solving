#include <iostream>
using namespace std;

std::string reverse_string(const std::string &str);

int main()
{
  std::string input = "Hello, World!";
  std::string reversed = reverse_string(input);

  return 0;
}

std::string reverse_string(const std::string &str)
{

  std::string reversed;
  const char *start = str.c_str();
  const char *end = str.c_str() + str.size() - 1;

  while (start <= end)
  {
    reversed.push_back(*end);
    end--;
  }
  return reversed;
}