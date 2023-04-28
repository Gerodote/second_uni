#include "area.hpp"
#include "calculate.hpp"
#include <iomanip>
#include <iostream>

int main() {
    double y, a, b;
    std::cout << "Enter the values of y, a, and b: ";
    std::cin >> y >> a >> b;

    double result = calc(y, a, b);
    std::cout << std::fixed << std::setw(8) << std::setprecision(4) << result
              << std::endl;

    double radius, side1, side2, angle;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Enter the first side of the parallelogram: ";
    std::cin >> side1;
    std::cout << "Enter the second side of the parallelogram: ";
    std::cin >> side2;
    std::cout << "Enter the angle between the sides of the parallelogram (in "
                 "radians): ";
    std::cin >> angle;

    try {
        double area = calc_area(radius, side1, side2, angle);
        std::cout << "The area is: " << area << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}