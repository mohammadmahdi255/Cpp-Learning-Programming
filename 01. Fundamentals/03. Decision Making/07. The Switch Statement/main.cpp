#include <iostream>

using namespace std;

int main() {
    cout << "1- Create account" << endl
         << "2- Change password" << endl
         << "3- Quit" << endl
         << "Select an option:";

    short input;
    cin >> input;

    switch (input) {
        case 1:
            cout << "You select 1" << endl;
            break;
        case 2:
            cout << "You select 2" << endl;
            break;
        default:
            cout << "Goodbye!";
    }
}