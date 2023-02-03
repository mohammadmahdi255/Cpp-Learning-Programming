#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14;
    double innerRadius = 2;
    double outerRadius = 5;
    double perimeter = outerRadius - innerRadius;
    perimeter = perimeter * pi;

    cout << "Perimeter: " << perimeter << endl;
    return 0;
}
