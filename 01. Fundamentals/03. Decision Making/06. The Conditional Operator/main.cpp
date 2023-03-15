#include <iostream>

using namespace std;
int main() {
    srand(time(nullptr));
    int sales = 8'000 * (rand() % 2 + 1);
    double commission = (sales > 10'000) ? 0.1 : 0.05;
    cout << commission << endl;

    int first;
    int second;
    cout << "Enter two values:" << endl;
    cin >> first >> second;

    int result = (first > second) ? first : second;
    cout << result << endl;
    return 0;
}
