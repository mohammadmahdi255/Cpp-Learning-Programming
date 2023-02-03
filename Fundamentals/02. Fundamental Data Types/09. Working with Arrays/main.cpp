#include <iostream>

using namespace std;
int main() {
    int numbers[5]{10, 20, 22};
    cout << numbers[0] << endl
         << numbers[1] << endl
         << numbers[2] << endl
         << numbers[3] << endl
         << numbers[4] << endl;

    string names[3]{};
    cout << "Enter 3 names:" << endl;
    getline(cin, names[0]);
    getline(cin, names[1]);
    getline(cin, names[2]);
    cout << names[0] << endl;

    return 0;
}
