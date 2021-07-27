#include <iostream>

using namespace std;

int main() {
    
    const int num3 {10};
    int num1 {10};
    int num2 {20};
    
//    num1 = 100;
//    num1 = num2 = 1000;
    
//    num1 = 'Frank';  // Compiler catches the error before runtime. It raises a warning
    
//    num3 = 100; // You cant assign to a constant

    100 = num1; // 100 is a literal. It hasnt a memory location for the num1 to get stored.
    
    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
    
    cout << endl;
    return 0;
}