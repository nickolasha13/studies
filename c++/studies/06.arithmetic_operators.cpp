#include <iostream>

int main(){

    /*
        addition == (+) ;
        subtraction == (-) ;
        multiplication == (*) ;
        division == (/) ;
        remainder == (%) ;
    */

    /*
        order of execution == paranthesis => multiplication & division => addition & substraction
    */

    int students = 20;

    //students = students + 1;
    //students += 1;
    students++; //increment; for substraction is decrement
    
    //same arithmetical results; works also with subtraction
    std::cout << students << std::endl;

    return 0;
}