#ifndef B3CE6E0C_1028_4778_A663_B5B1EB6AD250
#define B3CE6E0C_1028_4778_A663_B5B1EB6AD250

enum class triangle_type {
    Right,
    Obtuse,
    Acute,
    Bad
};

inline triangle_type determine_triangle_type(double a, double b, double c) {
    /**
     * @brief determines triangle type from its sides using cosine theorem. returns a triangle_type. 
     * 
     */
    if (a + b <= c || a + c <= b || b + c <= a) {
        return triangle_type::Bad;
    }
    auto smth = a*a + b*b - c*c;
    if (smth == 0) {
        return triangle_type::Right;
    }
    else if (smth > 0) {
        return triangle_type::Acute;
    }
    else {
        return triangle_type::Obtuse;
    }
}



#endif /* B3CE6E0C_1028_4778_A663_B5B1EB6AD250 */
