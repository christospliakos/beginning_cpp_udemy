#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    char choice {};
    vector<int> collection {};
    
    do {
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;
        
        if (choice == 'P' || choice == 'p'){
            if (collection.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto val: collection)
                    cout << val << " ";
                cout << "]";
            }
        } else if (choice == 'A' || choice == 'a') {
            int new_entry {};
            cout << "Enter an integer to append to the list: ";
            cin >> new_entry;
            collection.push_back(new_entry);
            cout << new_entry << " added." << endl;
        } else if (choice == 'M' || choice == 'm') {
            if (collection.size() == 0)
                cout << "Unable to calculate the mean - no data" << endl;
            else {
                double mean {};
                int total {0};
                for (auto val: collection)
                    total += val;
                mean = static_cast<double>(total) / collection.size();
                cout << "The mean is: " << mean << endl;
            }
        } else if (choice == 'S' || choice == 's') {
            if (collection.size() == 0)
                cout << "Unable to determine the smallest number - list is empty" << endl;
            else {
                int min {collection[0]};
                for (auto val: collection) {
                    if (val < min)
                        min = val;
                }
                cout << "The smallest number is: " << min << endl;
            }
        } else if (choice == 'L' || choice == 'l') {
            if (collection.size() == 0)
                cout << "Unable to determine the largest number - list is empty" << endl;
            else {
                int max {collection[0]};
                for (auto val: collection) {
                    if (val > max)
                        max = val;
                }
                cout << "The largest number is: " << max << endl;
            }
        } else if (choice == 'Q' || choice == 'q')
            cout << "Goodbye!" << endl;
          else
              cout << "Invalid choice, try again!" << endl;

    } while (choice != 'Q' && choice != 'q');
    
    
    
    cout << endl;
    return 0;
}