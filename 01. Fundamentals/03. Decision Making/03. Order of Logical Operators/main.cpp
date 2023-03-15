#include <iostream>

using namespace std;
int main() {
    // ()
    // !
    // &&
    // ||
    bool a = true;
    bool b = false;
    bool c = false;
    bool result = a || b && c;

    cout << boolalpha << result << endl;

    bool isCitizen = false;
    bool hasBachelorDegree = true;
    uint8_t yearsOfExperience = 10;
    result = isCitizen && (hasBachelorDegree || yearsOfExperience > 1);
    cout << boolalpha << result << endl;
    return 0;
}
