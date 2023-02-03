#include <iostream>

using namespace std;

void greet(const string& name) {
    cout << "Hello " << name;
}

// signature = name + (number and type of parameters)
void greet(const string& title, const string& name) {
    cout << "Hello " << title << " " << name;
}

int main() {
    greet("Mr", "Mahdi");
    return 0;
}


