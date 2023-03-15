#include <iostream>

using namespace std;
int main() {
    // US Citizen
    // CA Resident: tuition = 0
    // Non-resident: tuition = 1000
    // Not a US Citizen
    // tuition = 3000

    bool isCitizen = true;
    bool caResident = false;
    uint32_t tuition = 0;

    // Outer if statement
    if(isCitizen) {
        // Inner if statement
        if(!caResident) tuition = 1000;
    } else tuition = 3000;

    cout << tuition << endl;

    return 0;
}
