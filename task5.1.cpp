#include <iostream>

using namespace std;

bool sameParity(int a, int b) {
    return (a % 2 == b % 2);
}

bool isDivisible(int a, int b) {
    if (b == 0) {
        return false; // division by zero is not allowed
    }
    return (a % b == 0);
}

int main() {
    int a, b;
    cout << "Enter integer a: ";
    cin >> a;
    cout << "Enter integer b: ";
    cin >> b;

    cout << boolalpha;
    cout << "Same parity: " << sameParity(a, b) << endl;
    cout << "a is divisible by b: " << isDivisible(a, b) << endl;

    return 0;
}
