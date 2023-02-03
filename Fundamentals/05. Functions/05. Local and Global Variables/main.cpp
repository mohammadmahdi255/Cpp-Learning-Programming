#include <iostream>

using namespace std;

// Global variable (global scope)
const double taxRate = 0.2;

// Function declaration (function prototype)
double calculateTax(int sales);

int main() {
    // local variable (local scope)
    int sales = 10'000;
    double tax = calculateTax(sales);
    cout << tax << endl;

    return 0;
}

// Function definition
double calculateTax(int sales) {
    return sales * taxRate;
}
