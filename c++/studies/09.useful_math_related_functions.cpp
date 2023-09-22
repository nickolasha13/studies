#include <iostream>
#include <cmath> // For math functions


int main() {

    double x = 3;
    double y = 4;

    // 1. Power
    std::cout << pow(x, y) << std::endl; // 3^4 = 81
    // 2. Square root
    std::cout << sqrt(x) << std::endl; // sqrt(3) = 1.73205
    // 3. Round to the nearest integer
    std::cout << round(5.5) << std::endl; // 6
    // 4. Round up
    std::cout << ceil(5.1) << std::endl; // 6
    // 5. Round down
    std::cout << floor(5.9) << std::endl; // 5
    // 6. Absolute value
    std::cout << abs(-5) << std::endl; // 5
    // 7. Sine
    std::cout << sin(90) << std::endl; // 1
    // 8. Cosine
    std::cout << cos(0) << std::endl; // 1
    // 9. Tangent
    std::cout << tan(45) << std::endl; // 1
    // 10. Natural logarithm
    std::cout << log(2.718281828459045) << std::endl; // 1
    // 11. Base 10 logarithm
    std::cout << log10(100) << std::endl; // 2
    // 12. Minimum
    std::cout << fmin(5, 10) << std::endl; // std::min() is also available
    // 13. Maximum
    std::cout << fmax(5, 10) << std::endl; // std::max() is also available

    return 0;
}
