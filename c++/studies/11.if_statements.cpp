#include <iostream>

int main() {

    // if statements are used to execute code if a condition is true.
    // else statements are used to execute code if a condition is false.
    // else if statements are used to specify a new condition if the first condition is false.

    // example

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "You are an adult" << std::endl;
    }
    else if (age == 0)
    {
        std::cout << "You are a baby" << std::endl;
    }
    else {
        std::cout << "You are not an adult" << std::endl;
    }

    return 0;
}
