#include <ios>
#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

#include "magic_enum.hpp"

#include "calc_a_foo.hpp"
#include "is_in_shaded.hpp"
#include "triangle_type_str.hpp"
#include "2_2_1.hpp"
#include "2_2_2.hpp"

int main() {
    
    double a;
    try {
    std::cout << "calculate a foo, enter x: ";
    std::cin >> a;
    std::cout << '\n' << calculateStuff(a) << '\n';
    }
    catch(std::invalid_argument & e) {
        std::cerr << e.what() << '\n';
    }

    double aa, bb;

    std::cout << "enter x, y: ";
    std::cin >> aa >> bb;
    std::cout << '\n' << std::boolalpha << is_in_shaded(aa, bb) << '\n';

    double side_a, side_b, side_c;
    std::cout << "enter lengthes of sides of a triangle to get type of it: ";
    std::cin >> side_a >> side_b >> side_c;
    std::cout << magic_enum::enum_name(determine_triangle_type(side_a, side_b, side_c)) << '\n' << '\n';

    std::cout << "part 2.2.1:\n";
    std::vector<double> v;
    std::generate_n(std::back_insert_iterator<std::vector<double> >(v),21, [n = 0]() mutable -> double{ return static_cast<double>(n++) * 0.1; });
    print(std::cout, v.begin(), v.end(), function);

    std::cout << "part 2.2.2a:\n" << series_1(7,0.4) << '\n';
    
    std::cout << "part 2.2.2b:\n" << series_2(0.4, 0.001) << '\n';
    
    std::cout << "part 2.2.2c:\n";
    std::vector<double> v2;
    std::generate_n(std::back_insert_iterator<std::vector<double> >(v2), 5, [n = 0]() mutable -> double{ return 0.1 + static_cast<double>(n++) * 0.15; });
    std::transform(v2.begin(), v2.end(), v2.begin(), [](double x){ return series_2(x, 0.001); });
    std::copy(begin(v2), end(v2), std::ostream_iterator<double>(std::cout, " "));
    std::cout << '\n';

    std::cout << "part 2.2.3:\n";
    std::vector<double> v3;
    std::generate_n(std::back_insert_iterator<std::vector<double> >(v3), 11, [n = 0]() mutable -> double{ return 1 + static_cast<double>(n++) * 0.1; });
    double res = std::accumulate(v3.begin(), v3.end(),0.0, [](double x, double y){return x + std::sin(y);});
    std::cout << res << '\n';

    return 0;
}