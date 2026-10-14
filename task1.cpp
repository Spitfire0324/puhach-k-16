#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x;
    double y;
};

void printGreeting() {
    
    cout << " This program reads two points A and B on a plane," << endl;
    cout << " then calculates the length of segment AB" << endl;
    cout << " and the coordinates of its midpoint." << endl;
    
}

Point readPoint(const string& name) {
    Point p;
    cout << "Enter coordinates of point " << name << endl;
    cout << "  x" << (name == "A" ? "1" : "2") << " = ";
    cin >> p.x;
    cout << "  y" << (name == "A" ? "1" : "2") << " = ";
    cin >> p.y;
    return p;
}

void printPoint(const string& name, const Point& p) {
    cout << name << "(" << p.x << ", " << p.y << ")" << endl;
}

double segmentLength(const Point& a, const Point& b) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    return sqrt(dx * dx + dy * dy);
}

Point midpoint(const Point& a, const Point& b) {
    Point m;
    m.x = (a.x + b.x) / 2.0;
    m.y = (a.y + b.y) / 2.0;
    return m;
}

int main() {
    printGreeting();

    Point a = readPoint("A");
    Point b = readPoint("B");

    cout << endl << "You entered:" << endl;
    printPoint("A", a);
    printPoint("B", b);

    double length = segmentLength(a, b);
    Point mid = midpoint(a, b);

    cout << fixed << setprecision(4);
    cout << endl << "Results:" << endl;
    cout << "Length of segment AB = " << length << endl;
    cout << "Midpoint of segment AB = (" << mid.x << ", " << mid.y << ")" << endl;

    return 0;
}
