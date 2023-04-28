#ifndef A8CA1C3A_BFC6_42E6_9396_CF6AC987575C
#define A8CA1C3A_BFC6_42E6_9396_CF6AC987575C

#include <cmath>
#include <stdexcept>
#include <type_traits>

const double PI = 3.1415926535897932384626433832795028841971693993751058209;

template <typename T = double, typename T2 = double, typename T3 = double,
          typename T4 = double, typename T5 = double>
[[nodiscard]] constexpr
    typename std::enable_if<std::is_floating_point<T>::value, T>::type
    calc_area(typename std::enable_if<std::is_floating_point<T2>::value,
                                      const T2 &>::type radius,
              typename std::enable_if<std::is_floating_point<T3>::value,
                                      const T3 &>::type side_1_parallelogram,
              typename std::enable_if<std::is_floating_point<T4>::value,
                                      const T4 &>::type side_2_parallelogram,
              typename std::enable_if<std::is_floating_point<T3>::value,
                                      const T3 &>::type
                  angle_between_sides_parallelogram) {
/**
 * @brief Calculates the area of circle without a given parallelogram in it and returns the value. Allows to use any floating types.
 * 
 */
    if (radius <= 0.0) {
        throw std::invalid_argument("radius must be positive");
    }
    if (side_1_parallelogram < 0.0) {
        throw std::invalid_argument("side_1_parallelogram must be positive");
    }
    if (side_2_parallelogram < 0.0) {
        throw std::invalid_argument("side_2_parallelogram must be positive");
    }
    if (angle_between_sides_parallelogram < 0.0) {
        throw std::invalid_argument(
            "angle_between_sides_parallelogram must be positive");
    }
    if (angle_between_sides_parallelogram >= PI / 2) {
        throw std::invalid_argument(
            "angle_between_sides_parallelogram must be less than PI/2");
    }
    return PI * radius * radius -
           side_1_parallelogram * side_2_parallelogram *
               std::sin(angle_between_sides_parallelogram);
}

#endif /* A8CA1C3A_BFC6_42E6_9396_CF6AC987575C */
