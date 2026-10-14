#include <iostream>

using namespace std;

int countRealRoots(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                return -1; 
            }
            return 0;      
        }
        return 1;          
    }

    double d = b * b - 4 * a * c;
    if (d > 0) {
        return 2;
    }
    if (d == 0) {
        return 1;
    }
    return 0;
}

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    cout << "Number of real solutions: " << countRealRoots(a, b, c) << endl;

    return 0;
}
