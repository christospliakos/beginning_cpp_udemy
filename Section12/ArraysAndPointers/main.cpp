#include <iostream>

using namespace std;

int main() {

    int scores[] {100, 95, 89};
    
    int *scores_ptr {scores};
    
    cout << "\nArray subscript notation -------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    
    cout << "\nPointer subscript notation -------------------" << endl;
    cout << scores_ptr[0] << endl;
    cout << scores_ptr[1] << endl;
    cout << scores_ptr[2] << endl;
    
    cout << "\nPointer offset notation -------------------" << endl;
    cout << *scores_ptr << endl;
    cout << *(scores_ptr + 1) << endl;
    cout << *(scores_ptr + 2) << endl;
    
    cout << "\nArray offset notation -------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;


    return 0;
}