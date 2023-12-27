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



    /* TODO: Declare the setGrid(), getGrid(), getRows(),
    **       and getCols() functions.
    **
    **  Here are the inputs and outputs of each function:
    **  setGrid()
    **  INPUTS: 2D vector
    **  OUPUTS: void
    **
    **  getGrid()
    **  INPUTS: void
    **  OUPUTS: 2D vector
    **
    **  getRows()
    **  INPUTS: void
    **  OUTPUTS: std::vector<float>::size_type
    **
    **  getCols()
    **  INPUTS: void
    **  OUPUTS: std::vector<float>::size_type
    */
};
#endif //ND113_INTRO_TO_SELF_DRIVING_CARS_MATRIX_H
