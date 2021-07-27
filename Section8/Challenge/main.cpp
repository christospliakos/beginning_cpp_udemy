
/* 
 * For this program I will be using US dollars and cents.
 * Write a program that asks the user to enter the following:
 * An integer repesenting the number of cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * Your program should then display how to provide the change to the user
 * 
 * In the US:
 *    1 dollar is 100 cents
 *    1 quarter is 25 cents
 *    1 dime is 10 cents
 *    1 nickel is 5 cents and
 *    1 penny is 1 cent.
 * 
 * Here is a sample run:
 * 
 * Enter an amount in cents : 92
 * 
 * You can provide this change as follows:
 * dollars  :0
 * quarters : 3
 * dimes    : 1
 * nickels  : 1
 * pennies  : 2
 * 
 */ 

#include <iostream>

using namespace std;


int main() {
    
    
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int cents {};
    cout << "Enter the amount in cents : ";
    cin >> cents;
    
    int dollars{}, quarters {}, dimes {}, nickels {}, pennies {};
    int balance {cents};
    
    dollars = cents / dollar_value;
    balance = cents % dollar_value;
    
    quarters = balance / quarter_value;
    balance = balance % quarter_value;
    
    dimes = balance / dime_value;
    balance = balance % dime_value;
    
    nickels = balance / nickel_value;
    balance = balance % nickel_value;
    
    pennies = balance;

//    dollars = cents / 100;
//    quarters = (cents % 100) / 25;
//    dimes = ((cents % 100) % 25) / 10;
//    nickels = (((cents % 100) % 25) % 10) / 5;
//    pennies = ((((cents % 100) % 25) % 10) % 5) / 1;


    cout << "\nYou can provide this change as follows: " << endl;
    cout << "dollars    : " << dollars << endl;
    cout << "quarters   : " << quarters << endl;
    cout << "dimes      : " << dimes << endl;
    cout << "nickels    : " << nickels << endl;
    cout << "pennies    : " << pennies << endl;


    return 0;
}