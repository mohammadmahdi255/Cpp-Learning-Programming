#include <iostream>

using namespace std;
int main() {
    int numbers[] = {1, 2, 3, 4};
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        cout << numbers[i] << endl;

    cout << endl;

    for (int item: numbers)
        cout << item << endl;

    cout << endl;

    string name = "Mohammad Mahdi";
    for (char ch: name) {
        cout << ch;
    }

    cout << endl;

    double temperatures[] = {10.1, 2.3, 32.4};
    double sum = 0;

    for (double temperature: temperatures) {
        sum += temperature;
    }

    short count = sizeof(temperatures) / sizeof(double);
    double average = sum / count;
    cout << "Average Temperature: " << average << endl;

    return 0;
}
