#include <iostream>

using namespace std;

// This program calculates the area of a room in sqft

int main() {
    
    int width {0};
    cout << "Enter the width of the room: ";
    cin >> width;
    
    int length {0};
    cout << "Enter the length of the room: ";
    cin >> length;

    cout << "The area of the room is: " << length * width << " square feet." << endl;
    
    return 0;
}