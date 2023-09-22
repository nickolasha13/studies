#include <iostream>

//cout is used for output
//cin is used for input


int main() {

    std::string name;
    std::string fullname;

    std::cout << "Enter your name: ";
    std::cin >> name;

    // getline() is used to get a line of text from the user
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, fullname); 

    std::cout << "Hello " << name << std::endl;
    std::cout << "Welcome " << fullname << std::endl;

    return 0;
}
