//
// Created by liuwake on 2023/12/19.
//
#include <iostream>

int main() {

    /*
    * TODO: Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    *
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    *
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking,
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking,
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    *
    * You can see an example solution in the solution.cpp file
    */

    char status = 'q';

    if (status == 'a')
    {
        std::cout << "acceleration";
    }
    else if (status == 'b')
    {
        std::cout << "breaking";
    }
    else if (status == 'p')
    {
        std::cout << "parked";
    }
    else if (status == 'n')
    {
        std::cout << "neutral";
    }
    else
    {
        std::cout << "unknown";
    }
    return 0;
}