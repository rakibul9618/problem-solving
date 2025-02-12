#include<iostream>
#include<string>

using namespace std;

int main () {
  string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {".ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"}; 
  
  string message;
  string encrypted_message;
  string decrypted_message;
  size_t chat_index;

  cout << "Enter the message: ";
  getline(cin, message);

  for (size_t i{0}; i < message.length(); ++i){

    chat_index = alphabet.find(message[i]);
    if(chat_index != string::npos){
      encrypted_message += key.at(chat_index);
    } else {
      encrypted_message += ' ';
    }
  }
  
  cout << "Encrypted Message: " <<encrypted_message << endl;


  for (char c:encrypted_message){
    chat_index = key.find(c);
    if(chat_index != string::npos){
      decrypted_message += alphabet.at(chat_index);
    } else {
      decrypted_message += ' ';
    }
  }

  cout << "Decrypted Message: " <<decrypted_message << endl;
  
  return 0;
}