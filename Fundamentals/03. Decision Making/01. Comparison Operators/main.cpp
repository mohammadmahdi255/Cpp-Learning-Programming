#include <iostream>

using namespace std;
int main() {
    int x = 10;
    double y = 5;
    bool result = x == y;
    cout << boolalpha << result << endl;

    char first = 'a';
    char second = 'A';
    result = first == second;
    cout << result;
    return 0;
}
