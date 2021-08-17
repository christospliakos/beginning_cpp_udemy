#include <iostream>
#include <vector>
#include <string> 

using namespace std;

int main() {
    
    int num{100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n-----------------------------" << endl;
    cout << num << endl; 
    cout << ref << endl;
    
    ref = 300;
    cout << "\n-----------------------------" << endl;
    cout << num << endl; 
    cout << ref << endl;    
    
    
    cout << "\n---------------------------" << endl;
    vector<string> stooges {"kkk", "lll", "mmm"};
    
    for (auto str:stooges)
        str = "funny";      // str is a copy of the eachj vector element
        
    for (auto str:stooges)
        cout << str << endl;
        
    cout << "\n---------------------------" << endl;
    for (auto &str:stooges)
        str = "funny";
    
    for (auto const &str:stooges)
        cout << str << endl;
    
    
    return 0;
}