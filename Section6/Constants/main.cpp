#include <iostream>

/* 
 * Franks Carpet Cleaning Service
 * Charges $30 per room
 * Sales tax rate is 6%
 * Estimates are valid for 30days
 * 
 * Prompt the user for the num,ber of rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service:
 * Number of rooms: 2
 * Price per room: $30
 * Cost: $60
 * tax: $3.6
 * =====================================
 * Total estimate: $63.6
 * This estimate is valid for 30 days. */

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet cleaning service" << endl << endl;
    cout << "How many rooms would you like cleaned? ";
    
    int rooms {0};
    const double price_per_room {30};
    const double tax_rate {0.06};
    const int estimate_expiry {30};

    cin >> rooms;
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * rooms << endl;
    cout << "Tax: $" << price_per_room * rooms * tax_rate << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << (price_per_room * rooms) + (price_per_room * rooms * tax_rate) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    return 0;
}