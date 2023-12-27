//
// Created by liuwake on 2023/12/26.
//

#ifndef ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H
#define ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H

#include <vector>

// Header file for the Matrix class

/*
**  TODO:
**    Declare the following private variables:
**      a 2D float vector variable called grid
**      a vector size_type variable called rows
**      a vector size_type variable called cols
*/

class Matrix
{
    std::vector <std::vector<float>> grid;
    std::vector <float>::size_type rows;
    std::vector <float>::size_type cols;

};
#endif //ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H
