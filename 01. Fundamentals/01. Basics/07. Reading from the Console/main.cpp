#include <iostream>

using namespace std;

int main() {
    // stream insertion operation
    cout << "Enter a values for x and y: ";

    double x;
    double y;
    // stream extraction operation
    cin >> x >> y;

    cout << x + y;

    cout << "Enter fahrenheit temperature: ";

    double fahrenheit;
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) / 1.8;
    cout << "Celsius Temperature = " << celsius << " C" << endl;

    return 0;
}
