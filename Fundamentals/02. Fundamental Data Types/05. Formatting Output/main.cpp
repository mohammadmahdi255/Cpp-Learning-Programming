#include <iostream>
#include <iomanip>

using namespace std;
int main() {
//    left is sticky manipulator
//    setw is not sticky manipulator
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot" << endl << endl;

    cout << fixed << setprecision(10);
    cout << 12.34567 << endl << 29.87654 << endl << endl;

    cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
         << setw(15) << "C++" << right << setw(10) << 100 << left << endl
         << setw(15) << "JavaScript" << right << setw(10) << 50 << left << endl;

    return 0;
}
