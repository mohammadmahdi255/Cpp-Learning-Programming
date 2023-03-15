#include <iostream>

using namespace std;

void printOddNumbers(int limits) {
    for(int i = 0; i < limits; i++) {
        if(i % 2 != 0)
            cout << i << endl;
    }
}

int main() {
    printOddNumbers(10);
    return 0;
}
