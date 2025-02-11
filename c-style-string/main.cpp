#include<iostream>
#include<cstring> // for c-style string functions
#include<cctype> // for character base funtions

using namespace std;

int main () {

  char first_name[20] {};
  char last_name[20] {};
  char full_name[50] {};
  char temp[50] {};

  // cout << "Please enter first name: ";
  // cin  >> first_name;
  // cout << endl;
  // cout << "Please enter last name: ";
  // cin  >> last_name;

  // cout << "----------------------------------------" << endl;

  // cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
  // cout << "and your last name, " << last_name << ", has " << strlen(last_name) << " characters" << endl;

  // strcpy(full_name, first_name); // copy first_name to full_name
  // strcat(full_name, " ");
  // strcat(full_name, last_name);
  // cout << endl;

  // cout << "Your full name is " << full_name << endl;
  // cout << "----------------------------------------" << endl;

  cout << "Enter your full name: ";
  cin.getline(full_name, 50);
  cout << "Your full name is: " << full_name << endl;
  cout << "----------------------------------------" << endl;

  strcpy(temp, full_name);
  if(strcmp(temp, full_name) == 0)
    cout << temp << " and " << full_name << " are same name." << endl;
  else 
    cout << temp << " and " << full_name << " are not same name." << endl;

  cout << "----------------------------------------" << endl;

  for (size_t i{0}; i < strlen(full_name); ++i){
    full_name[i] = toupper(full_name[i]);
  }

  cout << "Yor uppercase full name is: " << full_name << endl;

  return 0;
}
   