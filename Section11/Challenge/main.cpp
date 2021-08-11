#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_menu();
char get_choice();

void print_numbers(vector<int> &numbers);
void display_list(vector<int> &numbers);
void add_number(vector<int> &numbers);
void print_mean(vector<int> &numbers);
void calc_mean(vector<int> &numbers);
void print_min(vector<int> &numbers);
void print_max(vector<int> &numbers);

int main() {
    
    char choice {};
    vector<int> numbers{};
    
    do {
        print_menu();
        choice = get_choice();
        if (choice == 'p' || choice == 'P'){
            print_numbers(numbers);
        } else if (choice == 'A' || choice == 'a'){
            add_number(numbers);
        } else if (choice == 'm' || choice == 'M'){
            print_mean(numbers);
        } else if (choice == 'S' || choice == 's'){
            print_min(numbers);
        } else if (choice == 'L' || choice == 'l'){
            print_max(numbers);
        } else if (choice != 'q' and choice != 'Q') {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (choice != 'Q' && choice != 'q');
     
    cout << endl;
    return 0;
}

// Functions
void print_menu(){
     cout << "\nP - Print numbers" << endl;
     cout << "A - Add a number" << endl;
     cout << "M - Display mean of the numbers" << endl;
     cout << "S - Display the smallest number" << endl;
     cout << "L - Display the largest number" << endl;
     cout << "Q - Quit" << endl;
}

char get_choice(){
    char local_choice {};
    cout << "\nEnter your choice: ";
    cin >> local_choice;
    return local_choice;
}

void print_numbers(vector<int> &numbers){
    if (numbers.size() == 0) {
        cout << "[] - the list is empty" << endl;
    } else {
        display_list(numbers);
    }
}

void display_list(vector<int> &numbers){
    cout << "[ ";
        for (auto s:numbers)
            cout << s << " ";
        cout << "]";
    cout << endl;
}

void add_number(vector<int> &numbers){
    int temp {};
    cout << "Enter an integer to add to the list: ";
    cin >> temp;
    numbers.push_back(temp);
}

void print_mean(vector<int> &numbers){
    if (numbers.size() == 0){
        cout << "Unable to calculate the mean - no data" << endl;
    } else {
        calc_mean(numbers);
    }
}

void calc_mean(vector<int> &numbers){
    double mean {};
    double sum {};
    for (auto s:numbers){
        sum += s;
    }
    mean = sum / numbers.size();
    cout << "The mean is: " << mean << endl;
}

void print_min(vector<int> &numbers){
    if (numbers.size() == 0) {
        cout << "Unable to determine the smallest number - list is empty" << endl;
    } else {
        int min {numbers.at(0)};
        for (auto s:numbers){
            if (s < min)
                min = s;
        }
        cout << "The smallest number is: " << min << endl;
    }
}

void print_max(vector<int> &numbers){
    if (numbers.size() == 0) {
        cout << "Unable to determine the largest number - list is empty" << endl;
    } else {
        int max {numbers.at(0)};
        for (auto s:numbers){
            if (s > max)
                max = s;
        }
        cout << "The largest number is: " << max << endl;
    }
}