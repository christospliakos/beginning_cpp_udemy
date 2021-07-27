#include <iostream>

using namespace std;

int main() {
    
//    int num {};
//    cout << "Enter a posotive integer - start the countdown: ";
//    cin >> num;
//    
//    while (num > 0) {
//        cout << num << endl;
//        --num;
//    }

//    int num {};
//    cout << "Enter a positive integer to count up to: ";
//    cin >> num;
//    
//    int i {1};
//    while (num >= i) {
//        cout << i << endl;
//        i++;
//    }

//    int num {};
//    cout << "Enter as integer less than 100: ";
//    cin >> num;
//    
//    while (num >= 100) {
//        cout << "Enter an integer less than 100: ";
//        cin >> num;
//    }
//    
//    cout << "Thanks" << endl;

    bool done {false};
    int num {0};
    
    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> num;
        if (num <= 1 || num >= 5)
            cout << "Out of range, try again" << endl;
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }
    
    cout << endl;
    return 0;
}