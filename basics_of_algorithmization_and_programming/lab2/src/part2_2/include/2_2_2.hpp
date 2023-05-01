#ifndef SRC_PART2_2_INCLUDE_2_2_2
#define SRC_PART2_2_INCLUDE_2_2_2

#include <cmath>

inline double series_1(int n,double x) {
    double result = 0;
    for(int i = 0; i <= n; ++i) {
        result += std::pow(x,4*i + 1)/(4*i + 1);       
    }
    return result;
}

inline double series_2(double x, double eps) {
    double result = 0;
    double new_result;
    int i = 0;
    do {
        new_result = std::pow(x,4*i + 1)/(4*i + 1);       
        ++i;
        result += new_result;
    } while(std::fabs(new_result) > eps);

    return result;
}




#endif /* SRC_PART2_2_INCLUDE_2_2_2 */
