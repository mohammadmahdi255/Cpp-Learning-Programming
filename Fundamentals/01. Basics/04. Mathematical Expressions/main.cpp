#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 3;

    cout << "Sum: " << x + y << endl;
    cout << "Sub: " << x - y << endl;
    cout << "Mul: " << x * y << endl;
    cout << "Div: " << (double) x / y << endl;
    cout << "Mod: " << x % y << endl << endl;

    cout << "Increment Postfix: " << x++ << ", " << x << endl;
    x = 10;

    cout << "Decrement Postfix: " << x-- << ", " << x << endl;
    x = 10;

    cout << "Increment Prefix: " << ++x << ", " << x << endl;
    x = 10;

    cout << "Decrement Prefix: " << --x << ", " << x << endl;

    return 0;
}
