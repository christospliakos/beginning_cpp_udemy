#include <iostream>

using namespace std;

int main(){
    /*******************************
     * Character Type
     ******************************/
    
    char middle_initial {'J'}; // Notice the single quotes around characters
    cout << "My middle initial is: " << middle_initial << endl;
    
    /*******************************
     * Integer Type
     ******************************/
     unsigned short int exam_score {55}; // same as unsigned short exam_score {55}
     cout << "My exam score was: " << exam_score << endl;
     
     int countries_represented {65};
     cout << "There were " << countries_represented << " countries in my meeting" << endl;
     
     long people_in_florida {20610000};
     cout << "In florida live " << people_in_florida << " people" << endl;
     
     long long people_on_earth {7600000000};
     cout << "There are about " << people_on_earth << " people on earth" << endl;
     
     long long distance_to_alpha_centuri {9'461'000'000'000};
     cout << "The distance to alpha centuri is " << distance_to_alpha_centuri << " km" << endl;
     
    /*******************************
     * Floating Point Type
     ******************************/
     
     float car_payment {401.32};
     cout << "The car payment is " << car_payment << " dollars" << endl;
     
     double pi {3.14159};
     cout << "Pi is " << pi << endl;
     
     long double large_amount {2.7e10};
     cout << "large amount: " << large_amount << endl;
     
    /*******************************
     * Boolean Type
     ******************************/
     
     bool GameOver {false};
     cout << "The value of gameOver is " << GameOver << endl;
     
    /*******************************
     * Overflow Examples
     ******************************/
     
     short value1 {30000};
     short value2 {1000};
     short product {value1 * value2};
     
     cout << "The product of val1 and val2 is " << product << endl;
     
     return 0;
}