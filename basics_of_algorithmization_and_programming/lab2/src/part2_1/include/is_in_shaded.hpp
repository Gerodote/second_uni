#ifndef D8D1F296_2ED3_4B05_B60F_5D87C681151B
#define D8D1F296_2ED3_4B05_B60F_5D87C681151B

inline bool is_in_shaded(double x, double y) {
    if ((-1 <= x && x <= 1 && 0 <= y && y <= 1) || ((y <= -(x*x)) && (y <= 0)))
    {
        return true;
    }
    return false;
}

#endif /* D8D1F296_2ED3_4B05_B60F_5D87C681151B */
