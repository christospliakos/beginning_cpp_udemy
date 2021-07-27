#include <iostream>

using namespace std;

int main() {
    
    char selection {};
    
    do {
        cout << "\n----------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Do quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        switch (selection){
            case '1': cout << "You chose 1 - doing this" << endl;
                break;
            case '2' : cout << "You chose 2 - doing that " << endl;
                break;
            case '3' : cout << "You chose 3 - doint something else " << endl;
                break;
            case 'Q':
            case 'q': cout << "Bye" << endl;
                break;
            default : cout << "Invalid choice, try again" << endl;
        }
        
//        if (selection == '1')
//            cout << "You chose 1 - doing this " <<endl;
//        else if (selection == '2')
//            cout << "You chose 2 - doing that " << endl;
//        else if (selection == '3')
//            cout << "You chose 3 - doint something else " << endl;
//        else if (selection == 'Q' or selection == 'q')
//            cout << "Bye" << endl;
//        else 
//            cout << "Invalid choice, try again" << endl;
        
    } while (selection != 'Q' && selection != 'q');
    
    
    cout << endl;
    return 0;
}