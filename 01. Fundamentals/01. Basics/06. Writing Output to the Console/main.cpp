#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;
    cout << "x = " << x << endl
         << "y = " << y << endl;

    double sales = 95000;

    const double state_tax_rate = 0.04;
    double state_tax = sales * state_tax_rate;

    const double county_tax_rate = 0.02;
    double county_tax = sales * county_tax_rate;

    double total_tax = state_tax + county_tax;

    cout << "Sales = $" << sales << endl
         << "State Tax = $" << state_tax << endl
         << "County Tax = $" << county_tax << endl
         << "Total Tax = $" << total_tax << endl;


    return EXIT_SUCCESS;
}
