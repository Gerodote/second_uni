#ifndef SRC_PART2_2_INCLUDE_2_2_1
#define SRC_PART2_2_INCLUDE_2_2_1

#include <algorithm>
#include <cmath>
#include <iomanip>
#include <ostream>
#include <stdexcept>
#include <vector>

inline double function(double x) {
  /**
   * @brief calculate (std::sin(x) + 3)/(1-2*x). if x == 1/2, throws
   * std::invalid_argument exception
   */
  if (x == 1.0 / 2.0) {
    throw std::invalid_argument("x == 1/2, so function is undefined");
  }
  return (std::sin(x) + 3) / (1 - 2 * x);
}

template <typename const_Iterator, typename Function>
inline std::ostream &print(std::ostream &out, const_Iterator cbegin,
                           const_Iterator cend, Function func) {
  auto copy = cbegin;
  std::for_each(copy, cend,
                [&out](auto val) { out << '|' << std::setw(10) << val; });
  out << '\n';
  std::for_each(copy, cend, [&out, &func](auto val) {
    out << '|' << std::setw(10);
    double res;
    try {
      res = func(val);
    }
    catch (std::invalid_argument& e) {
      out << "--";
      return;
    }
    out << res;
  });
  out << '\n';
  return out;
}

#endif /* SRC_PART2_2_INCLUDE_2_2_1 */
