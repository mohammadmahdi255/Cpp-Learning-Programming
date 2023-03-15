#include <iostream>

using namespace std;
int main() {
    char ch = 'd';
    cout << ch << endl
         << +ch << endl;

    string name = "Mohammad Mahdi";
    cout << name << endl << endl;

    cout << "Enter your name: ";
    getline(cin , name);
    cout << "Hi " << name;

    string street;
    cout << "Enter your home Street:";
    getline(cin, street);

    string city;
    cout << "Enter your city:";
    getline(cin, city);

    string state;
    cout << "Enter your state:";
    getline(cin, state);

    string zipCode;
    cout << "Enter your zip code:";
    getline(cin, zipCode);

    cout << street << endl
         << city << ", " << state << ", " << zipCode;

    return 0;
}
