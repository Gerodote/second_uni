#ifndef DE8BE175_4959_4ADE_886E_51C3D5D8FF97
#define DE8BE175_4959_4ADE_886E_51C3D5D8FF97

#include <cmath>
#include <stdexcept>

double calculateStuff(double x) {
    if (x >= 0 && x < 2) {
        return std::pow(5*x, 1.0/6.0) - (1 / std::tan(std::pow(x,4) / 4 ));
    }
    else if (x > 3) {
        return (3/2.0) * x*x - x*x*x;
    }
    else {
        throw std::invalid_argument("Invalid argument: x must be in the range [0,2) or (3,inf)");
    }
}


#endif /* DE8BE175_4959_4ADE_886E_51C3D5D8FF97 */
