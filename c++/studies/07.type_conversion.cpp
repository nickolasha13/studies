#include <iostream>

int main() {

    //type conversion is the conversion of one data type to another
    //implicit conversion is done automatically by the compiler
    //explicit conversion is done by the programmer
    //implicit conversion is also known as coercion
    //explicit conversion is also known as casting

    //implicit conversion
    int a = 5; 
    double b = 13.5;
    double c = a + b; //implicit conversion of a to double
    std::cout << c << std::endl;

    //explicit conversion
    double d = (int) 5.5; //explicit conversion of 5.5 to int
    std::cout << d << std::endl;

    //
    char x = 100;
    std::cout << x << std::endl; //std::cout prints the character with the ASCII code 100
    std::cout << (int) x << std::endl; //explicit conversion of x to int
    std::cout << (char) 100 << std::endl; //explicit conversion of 100 to char

    //real life example
    int dollars = 10;
    int cents = 99;
    double money = dollars + (cents / 100.0); //explicit conversion of cents to double
    std::cout << money << std::endl;

    return 0;
}
