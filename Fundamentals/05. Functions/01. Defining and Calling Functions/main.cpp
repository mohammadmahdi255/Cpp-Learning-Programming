#include <iostream>

using namespace std;

void greet(const string& name) {
    cout << "Hello " << name << endl;
}

string fullName(const string& firstName, const string& lastName) {
    // Concatenation (combining)
    return  firstName + " " + lastName;
}

int myMax(const int first, const int second) {
    return first > second ? first : second;
}

int main() {
    // Calling - invoking - executing
    greet(fullName("Mohammad Mahdi", "Nemati"));

    cout << myMax(100, 20) << endl;
    return 0;
}
