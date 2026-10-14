#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);

void printGreeting() {
    
    cout << " This program takes the circumference of a circle" << endl;
    cout << " and calculates its radius and the area of the disk." << endl;
    cout << " Written by Puhach Mark." << endl;
    
}

double readCircumference() {
    double c;
    cout << "Enter the circumference (a positive number): ";
    cin >> c;
    return c;
}

double radiusFromCircumference(double c) {
    return c / (2.0 * PI);
}

double areaFromRadius(double r) {
    return PI * r * r;
}

int main() {
    printGreeting();

    double circumference = readCircumference();
    cout << fixed << setprecision(4);
    cout << endl << "You entered: circumference = " << circumference << endl;

    double radius = radiusFromCircumference(circumference);
    double area = areaFromRadius(radius);

    cout << endl << "Results:" << endl;
    cout << "Radius = " << radius << endl;
    cout << "Area of the disk = " << area << endl;

    return 0;
}
