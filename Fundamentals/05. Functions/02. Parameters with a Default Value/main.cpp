#include <iostream>

using namespace std;
double calculateTax(double income, double taxRate = 0.2) {
    return income * taxRate;
}

int main() {
    double tax = calculateTax(10'000);
    cout << tax << endl;
    return 0;
}
