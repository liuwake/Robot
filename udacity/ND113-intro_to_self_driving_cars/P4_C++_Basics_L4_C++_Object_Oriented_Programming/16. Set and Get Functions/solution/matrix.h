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

    // constructor functions
    Matrix ();
    Matrix (std::vector< std::vector<float> >);

    // set functions
    void setGrid(std::vector< std::vector<float> >);

    // get functions
    std::vector< std::vector<float> > getGrid();
    std::vector<float>::size_type getRows();
    std::vector<float>::size_type getCols();
};
#endif //ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H
