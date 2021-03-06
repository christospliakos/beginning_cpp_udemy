#include <iostream>

using namespace std;


int main() {
    cout << "Welcome to Frank's Carpet Cleaning Service" << endl;
    
    int small_rooms {0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;
    
    int large_rooms {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;
    
    const double price_small {25};
    const double price_large {35};
    const double tax_rate {0.06};
    const int days_expiry {30};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_small << endl;
    cout << "Price per large room: $" << price_large << endl;
    
    double cost = (price_small * small_rooms) + (price_large * large_rooms);
    
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << cost * tax_rate << endl;
    cout << "===================================" << endl;
    cout << "Total estimate: $" << cost + (cost * tax_rate) << endl;
    cout << "This estimate is valid for " << days_expiry << " days" << endl;
    
    return 0;
}