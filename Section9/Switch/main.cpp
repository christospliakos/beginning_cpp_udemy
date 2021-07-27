#include <iostream>

using namespace std;

int main() {
    
    char letter_grade {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for B, go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79 for C!" << endl;
            break;
        case 'd':
        case 'D':
            cout << "You need a better grade than that. " << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "OK, I guess you didnt study..." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good, go study then" << endl;
            else
                cout << "Invalid choice" << endl; 
            break;
        }
        default:
            cout << "Sorry thats not a valid grade" << endl;
    }
    
    return 0;
}