#include <iostream>

using namespace std;
int main() {
    int age = 10;
    int salary = 50'000;
    bool isEligible = (age > 18 && age < 65) || (salary > 30'000);
    cout << boolalpha << !isEligible << endl ;
    return 0;
}
