//
// Created by liuwake on 2023/12/27.
//

#ifndef ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H
#define ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H
#include <vector>

class Matrix
{

private:

    std::vector< std::vector<float> > grid;
    std::vector<float>::size_type rows;
    std::vector<float>::size_type cols;

public:

    // constructor function declarations
    Matrix ();
    Matrix (std::vector< std::vector<float> >);
};
#endif //ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H
