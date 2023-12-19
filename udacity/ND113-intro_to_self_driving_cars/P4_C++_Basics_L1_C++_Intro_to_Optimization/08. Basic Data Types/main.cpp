//
// Created by liuwake on 2023/12/18.
//
#include <iostream>

int main() {

    // TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the
    // second floating point number.
    float p_1 = 12.07;
    float p_2 = 65.102;

    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.

    float float_sum;
    float_sum = p_1 + p_2;
    std::cout << float_sum << std::endl;

    // TODO: Calculate difference between the second and first number
    // output the results to cout.
    float p_diff = p_1 - p_2;
    std::cout << p_diff << std::endl;

    // TODO: Calculate second_float / first_float and output the results
    // to cout.
    std::cout << p_2 / p_1 << std::endl;

    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
    std::cout << p_1 * p_2 << std::endl;

    return 0;
}