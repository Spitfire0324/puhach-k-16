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
                cout << "Помилка: число має бути > 0." << endl;
            }
        } else {
            cout << "Помилка: введіть число." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    setlocale(LC_ALL, "ukr");

    double x = inputPositive("Введіть x: ");
    double result = log2(x);

    cout << "log2(" << x << ") = " << result << endl;

    return 0;
}
