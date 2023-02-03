#include <iostream>
#include <cmath>

int main() {
    double result = floor(1.2);
    std::cout << result << std::endl;

    result = pow(2, 3);
    std::cout << result << std::endl;

    std::cout << "Enter the radius of circle:" << std::endl;
    std::cin >> result;

    double area = pow(result, 2) * M_PI;

    std::cout << "Area of circle:" << area << std::endl;
    return 0;
}
