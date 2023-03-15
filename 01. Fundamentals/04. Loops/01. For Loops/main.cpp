#include <iostream>

using namespace std;
int main() {
    for (int i = 5; i > 0; i--) {
        if(i % 2)
            cout << i << endl;
    }

    cout << "Enter a number to get factorial:" << endl;

    int number;
    cin >> number;

    if(number < 0)
        cout << "Error! Number is not positive." << endl;
    else {
        int factorial = 1;
        for (int i = 1; i < number; ++i) {
            factorial *= (i + 1);
        }
        cout << number << "! = " << factorial << endl;
    }


    return 0;
}
