#include <iostream>

int main() {
    const double PI = 3.14159265358979323846; // const means that the value of the variable cannot be changed
    
    /*
        !!! code notation !!! 
        for constants is all uppercase with underscores between words
    */
   
    double radius = 5.0;
    double area = PI * radius * radius;

    std::cout << "The area of a circle with radius " << radius << " is " << area << std::endl;
}