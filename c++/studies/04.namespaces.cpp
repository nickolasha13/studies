#include <iostream>

namespace first {
    int x = 5;
    int y = 10;
}

namespace second {
    double x = 3.14159265358979323846;
    double y = 2.71828182845904523536;
}

int main() {

    /*
        namespaces are used to organize code
        each entity in a namespace has a unique name
        a namespace allows for identical names in different scopes
    */

    // using namespace first will allow you to use x and y without specifying the namespace

    // using namespace std is a common practice, but it is not recommended
       
    int x = 0;
    int y = 0;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    std::cout << first::x << std::endl;
    std::cout << first::y << std::endl;
    
    std::cout << second::x << std::endl;
    std::cout << second::y << std::endl;

    return 0;
}