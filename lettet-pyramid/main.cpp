#include <iostream>
#include <string>

using namespace std;

int main()
{

  // string enteredValue;
  // cin >> enteredValue;

  // size_t letterCount{1};
  // size_t resultLength{0};
  // size_t spaceCount;

  // resultLength = (enteredValue.length() * 2) - 1;

  // string result{};

  // for (size_t i{0}; i < enteredValue.length(); ++i)
  // {

  //   spaceCount = (resultLength - letterCount) / 2;
  //   int indexValue{0};
  //   int j{0};

  //   for (size_t j = 0; j < letterCount; j++)
  //   {
  //     if (j <= i)
  //     {
  //       result += enteredValue[j];
  //     }
  //     else if (j > i)
  //     {
  //       result += enteredValue[letterCount - (j + 1)];
  //     }
  //   }

  //   for (size_t i = 0; i < spaceCount; i++)
  //   {
  //     result = ' ' + result + ' ';
  //   }
  //   cout << result << endl;

  //   letterCount += 2;
  //   result = "";
  // }

  std::string letters{};

  std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
  getline(std::cin, letters);

  size_t num_letters = letters.length();

  int position{0};

  // for each letter in the string
  for (char c : letters)
  {

    size_t num_spaces = num_letters - position;
    while (num_spaces > 0)
    {
      std::cout << " ";
      --num_spaces;
    }

    // Display in order up to the current character
    for (size_t j = 0; j < position; j++)
    {
      std::cout << letters.at(j);
    }

    // Display the current 'center' character
    std::cout << c;

    // Display the remaining characters in reverse order
    for (int j = position - 1; j >= 0; --j)
    {
      // You can use this line to get rid of the size_t vs int warning if you want
      auto k = static_cast<size_t>(j);
      std::cout << letters.at(k);
    }

    std::cout << std::endl; // Don't forget the end line
    ++position;
  }

  return 0;
}