#include <iostream>

// variables are containers for storing data values
int main() {
    int x; //integer declaration
    x = 5; //integer assignment
    
    int a, b; // you can declare multiple variables of the same type in one line

    int y = 10; 
    // you can assaign a value to a variable when you declare it
    
    int sum = x + y; 
    // you can also assign the result of an operation to a variable

    /*
        integers are whole numbers

        occupies 4 bytes of memory
    */
    int age = 18;
    
    /*
        double is a floating point number with double precision

        double precision means that the number can be as big as 1.79769e+308
        and as small as 2.22507e-308

        occupies twice as much memory as a float (8 bytes)
    */
    double pi = 3.14159265358979323846;

    /*
        float is a floating point number with single precision

        single precision means that the number can be as big as 3.40282e+38
        and as small as 1.17549e-38

        occupies 4 bytes of memory
    */
    float pi2 = 3.14159265358979323846;

    /*
        char is a single character

        occupies 1 byte of memory
    */
    char letter = 'a';

    /*
        bool is a boolean value

        can only be true or false

        occupies 1 byte of memory
    */
    bool isTrue = true;

    /*
        string is a sequence of characters

        occupies 1 byte of memory for each character
    */
    std::string name = "John";

    std::cout << "Hello " << name << std::endl;

    return 0;
}