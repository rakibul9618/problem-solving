#include<iostream>
#include<string>

using namespace std;

int main () {

  // string unformatted_full_name {"StephenHawking"};

  // string first_name {unformatted_full_name, 0, 7};
  // string last_name = unformatted_full_name.substr(7);
  // string formatted_full_name{first_name + last_name};
  // formatted_full_name.insert(7, " ");
 
  string journal_entry_1 {"Isaac Newton"};
  string journal_entry_2 {"Leibniz"};

  journal_entry_1.erase(0, 6);

  if(journal_entry_2 < journal_entry_1) swap(journal_entry_1, journal_entry_2);


  cout << journal_entry_1 << "\n" << journal_entry_2;

  return 0;
}