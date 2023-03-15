#include <iostream>

using namespace std;
int main() {
    int number = 1'000'000;
    short another{number}; // loss data
    cout << another << endl;
    return 0;
}
