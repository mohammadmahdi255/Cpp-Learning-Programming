#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main() {
    // Jan 1 1970
    srand(time(nullptr));
    int number = rand();
    cout << number << endl;

    const short minValue = 1;
    const short maxValue = 6;
    short first = rand() % (maxValue - minValue + 1) + minValue;
    short second = rand() % (maxValue - minValue + 1) + minValue;
    cout << first << ", " << second << endl;
    return 0;
}
