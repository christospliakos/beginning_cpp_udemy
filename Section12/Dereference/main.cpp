#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int score {100};
    int *score_ptr {&score};
    
    cout << *score_ptr << endl; // 100
    
    *score_ptr = 200;
    
    cout << *score_ptr << endl; // 200
    cout << score << endl;      // 200

    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    
    cout << *temp_ptr << endl;  // 100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;  // 37.4
    
    string name {"Frank"};
    string *string_ptr {&name};
    
    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;
    
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    cout << "\nFirst stooge: " << (*vector_ptr).at(0) << endl;
    
    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;
    
    return 0;
}