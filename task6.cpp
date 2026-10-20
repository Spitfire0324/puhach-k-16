#include <iostream>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

double inputPositive(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            if (value > 0) {
                return value;
            } else {
                cout << "error: number must be > 0." << endl;
            }
        } else {
            cout << "Error.Enter the number" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    setlocale(LC_ALL, "eng");

    double x = inputPositive("enter x: ");
    double result = log2(x);

    cout << "log2(" << x << ") = " << result << endl;

    return 0;
}
