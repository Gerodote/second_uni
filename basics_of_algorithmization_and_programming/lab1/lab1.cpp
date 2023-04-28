#include "area.hpp"
#include "calculate.hpp"
#include <iomanip>
#include <iostream>
#include <cmath>

int main() {
{
    double y, a, b;
    std::cout << "Enter the values of y, a, and b: ";
    std::cin >> y >> a >> b;

    double result = calc(y, a, b);
    std::cout << std::fixed << std::setw(8) << std::setprecision(4) << result
              << std::endl;
}
 {
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
 }
{
    const double a = 1.1;
    const double b = 0.3;
    double a_stupid_calc = std::pow(std::sin(b),3) + a*std::log10(a-std::exp(b)) - a/std::log(a-std::exp(b));
    std::cout << "result of part 3 task: " << a_stupid_calc << "\n if you got nan -- that\'s right. it's because there's a negative value of value under logarithm. Such stuff is not defined for logarithm, so the task is strange." << std::endl;
}
    return 0;
}