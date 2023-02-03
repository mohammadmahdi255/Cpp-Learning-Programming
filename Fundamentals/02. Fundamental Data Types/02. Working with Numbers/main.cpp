#include <iostream>

using namespace std;
int main() {
    unsigned int number = 0b1111'1111'1111'1111'1111'1111'0000'0001;
    int num = 0xFF'FF'FF'01; // 0b1111'1111'1111'1111'1111'1111'0000'0001
    cout << number << endl;
    cout << num << endl;

    number = 0xFF;
    cout << number << endl;
    return 0;
}
