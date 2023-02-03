#include <iostream>

using namespace std;
int main() {
    int temperature = 70;
    if(temperature < 60) {
        cout << "Cold" << endl;
        cout << "Wear warm clothes" << endl;
    } else if (temperature < 90)
        cout << "Nice" << endl;
    else
        cout << "Hot" << endl;
    cout << "Done" << endl;

    uint32_t sales;
    cout << "Enter Sales:" << endl;
    cin >> sales;

    if(sales <= 10'000)
        cout << "Commission: 10%" << endl;
    else if(sales <= 15'000)
        cout << "Commission: 15%" << endl;
    else
        cout << "Commission: 20%" << endl;

    return 0;
}
