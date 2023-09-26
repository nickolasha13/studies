#include <iostream>

int main() {

    //switches are used to compare a variable to a list of constants
    //switches are often used to avoid long if-else statements
    //break is used to exit a switch statement
    //default is used to catch all other cases that are not defined

    //examole

    int month;
    std::cout << "Enter a number of month between 1 and 12: ";
    std::cin >> month;

    switch (month){   
        case 1:
            std::cout << "January" << std::endl;
            break;
        case 2:
            std::cout << "February" << std::endl;
            break;
        case 3:
            std::cout << "March" << std::endl;
            break;
        case 4: 
            std::cout << "April" << std::endl;
            break;
        case 5: 
            std::cout << "May" << std::endl;
            break;  
        case 6:
            std::cout << "June" << std::endl;
            break;
        case 7: 
            std::cout << "July" << std::endl;
            break;
        case 8:
            std::cout << "August" << std::endl;
            break;
        case 9:
            std::cout << "September" << std::endl;
            break;
        case 10:
            std::cout << "October" << std::endl;
            break;
        case 11:
            std::cout << "November" << std::endl;
            break;
        case 12:
            std::cout << "December" << std::endl;
            break;
        default:
            std::cout << "Invalid month" << std::endl;
    }

    return 0;
}
