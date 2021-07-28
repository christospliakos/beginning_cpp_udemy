#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string message {};
    string encrypted {};
    size_t position {};
    
    cout << "Enter your secret message: ";
    getline(cin, message);
    
    cout << "\nEncrypting message..." << endl;
    
    for (size_t i{0}; i < message.length(); ++i){
         position = alphabet.find(message.at(i));
         if (position != string::npos)
             encrypted += key.at(position);
         else
             encrypted += message.at(i);
    } 
    
    cout << "\nEncrypted message: " << encrypted << endl;
    
    cout << "\nDecrypting message..." << endl;
    
    cout << "\nDecrypted message: " << message << endl;
    
    cout << endl;
    return 0;
}