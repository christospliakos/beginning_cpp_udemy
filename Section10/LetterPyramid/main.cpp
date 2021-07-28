#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string message {};
    cout << "Enter your string: ";
    getline(cin, message);
    
    size_t length {message.length()};
    
    for (int i {0}; i < length + 1; ++i) {
        string whitespace (length - i, ' ');
        cout << whitespace;
        for (int j {0}; j < i - 1; ++j)
            cout << message.at(j);
        for (int k {i}; k > 0; --k)
            cout << message.at(k - 1);
        cout << endl;
    }
    
    cout << endl;
    return 0;
}