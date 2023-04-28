#ifndef C8086AD7_27F2_424A_9AC8_9A512E31881D
#define C8086AD7_27F2_424A_9AC8_9A512E31881D

#include <cmath>
/**
 * Calculates and returns the result of the given formula.
 *
 * @param y The value of y.
 * @param a The value of a.
 * @param b The value of b.
 * @return The result of the formula.
 */
double calc(const double& y, const double& a,const double& b) {
    return ((1 + 2 * 0.31 * a - 3 * a * a * a * a * y * y * b) / (std::sqrt(std::sin(0.31) + 1))) - (std::cos(y) - 5 * y * y * y * y * y * y) / std::fabs(2 + std::sin(y));
}

#endif /* C8086AD7_27F2_424A_9AC8_9A512E31881D */
