#include <iostream>

using namespace std;

const double pi {3.14159};
double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius {};
    cout << "\n Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}


double calc_volume_cylinder(double radius, double height){
    return calc_area_circle(radius) * height;
}


void volume_cylinder() {
    double radius {};
    double height {};
    
    cout << "\n Enter the radius of the circle: ";
    cin >> radius;
    cout << "\n Enter the height of the circle: ";
    cin >> height;
    
    cout << "The volume of the cylinder with R: " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}



int main() {
    
    area_circle();
    volume_cylinder();
    
    
    
    return 0;
}