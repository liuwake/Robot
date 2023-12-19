//
// Created by liuwake on 2023/12/19.
//
#include <iostream>

int main() {

    //TODO: Use this as a playground to write a for loop and if statements
    // in the same program.

    // For example, write a for loop that iterates from 0 to 80.
    // If the iterator is greater than or equal to 0 but less than 10,
    //      output the phrase 'slow'
    // If the iterator is between 10 inclusive
    //      and less than 30, output the phrase 'medium'
    // If the iterator is between 30 inclusive and 70, output the phrase 'fast'
    // If the iterator is greater than 70 inclusive, output the phrase 'too fast'

    for (int i = 0; i <= 80; i++)
    {
        if (i < 10)
        {
            std::cout << "slow";
        }
        else if (i < 30)
        {
            std::cout << "medium";
        }
        else if (i <70)
        {
            std::cout << "fast";
        }
        else if (70 <= i)
        {
            std::cout << "too fast";
        }
        else
        {
            std::cout << "unknow";
        }
    }

    return 0;
}