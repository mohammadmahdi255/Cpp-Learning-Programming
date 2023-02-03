#include <iostream>
using namespace std;

void greet(const string& name) {
    cout << "Hello " << name << endl;
}

void increasePrice(double& price) {
    price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(price);
    cout << price << endl;

    string name = "Mahdi";
    greet(name);

    return 0;
}
