#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    
//    int scores[] {10, 20, 30};
//    
//    for (auto score: scores)
//        cout << score << endl;

//    vector<double> temperatures {87.9, 77.56, 33.34, 23.45};
//    double sum_ {};
//    double average {};
//    
//    for (auto temp:temperatures)
//        sum_ += temp;
//        
//    if (temperatures.size() != 0) {
//        average = sum_ / temperatures.size();
//        cout << fixed << setprecision(1);
//        cout << average << endl;
//    }

//    for (auto val: {1,2,3,4,5})
//        cout << val << endl;

    for (auto c: "Chris Pliakos")
        if (c != ' ')
            cout << c;
        
    cout << endl;
    return 0;
}