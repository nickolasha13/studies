#include <iostream>
#include <cmath>

int main() {

    double side1, side2, hypotenuse, hypotenuse_alt;

    std::cout << "This program calculates the hypotenuse of a right triangle." << std::endl;

    std::cout << "Enter side 1: ";
    std::cin >> side1;

    std::cout << "Enter side 2: ";
    std::cin >> side2;

    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2)); // hypotenuse = √(side1^2 + side2^2)
    //hypotenuse_alt = hypot(side1, side2); // hypot() is a function from the cmath library that calculates the hypotenuse of a right triangle

    std::cout << "The hypotenuse is: " << hypotenuse << std::endl;
    //std::cout << "The hypotenuse is: " << hypotenuse_alt << " //was executed by hypot() function from cmath library" << std::endl;

    return 0;
}
