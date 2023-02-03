#include <iostream>
#include <limits>

using namespace std;
int main() {
//  overflow
    int overflow = numeric_limits<int>::max();
    overflow++;
//  underflow
    int underflow = numeric_limits<int>::min();
    underflow--;
    cout << overflow << endl
         << underflow << endl << endl
         << sizeof(int) << endl
         << numeric_limits<int>::min() << endl
         << numeric_limits<int>::max() << endl << endl;

    cout << sizeof(double) << endl
         << numeric_limits<double>::min() << endl
         << numeric_limits<double>::denorm_min() << endl
         << numeric_limits<double>::lowest() << endl
         << numeric_limits<double>::max() << endl;
    return 0;
}
