#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

// TEST_CASE("calc") {
//     CHECK(std::abs(calc(-1.0, 2.0, 3.0) + 120.2411) < 0.0001);
//     CHECK(std::abs(calc(0.0, 0.0, 3.0) - 0.3754) < 0.0001);
//     CHECK(std::abs(calc(3.1415, 0, 0) - 2404.3117) < 0.0001);
// }
//
// TEST_CASE("area") {
//     CHECK_THROWS_AS(auto smth = calc_area(-1, 0.0, 0.0, 0.0), std::invalid_argument);
//     CHECK_THROWS_AS(auto smth = calc_area(0, -1.0, 0.0, 0.0), std::invalid_argument);
//     CHECK_THROWS_AS(auto smth = calc_area(0, 0.0, -1.0, 0.0), std::invalid_argument);
//     CHECK_THROWS_AS(auto smth = calc_area(0, 0.0, 0.0, -1.0), std::invalid_argument);
//     CHECK_THROWS_AS(auto smth = calc_area(0, 0.0, 0.0, PI*2), std::invalid_argument);
//     CHECK(std::abs(calc_area(1,0,0,0) - 3.1415) < 0.0001);  
// }