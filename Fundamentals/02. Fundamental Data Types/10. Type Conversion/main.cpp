#include <iostream>

using namespace std;
int main() {
    int x = 1;
    double y = 2.2;

//  c casting
    int z = x + (int)y;

//  c++ casting
    int w = x + static_cast<int>(y);

    cout << z << endl;
    cout << w << endl;

    x = 10;
    z = 3;
    double a = static_cast<double>(x) / z;
    cout << a << endl;

    return 0;
}
