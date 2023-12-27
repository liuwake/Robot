//
// Created by liuwake on 2023/12/27.
//
#include "matrix.h"

/* TODO: Define the default constructor. Remember the syntax is
**      Classname::ClassName() {
**
**          initialize variables
**
**       }
**
**
**      You need to initialize the grid variable to a default value such as
**      a 4x4 matrix with all zeros.
**
**      Then initialize the rows variable, and the cols variable using the
**      vector size method. For example myvector.size() will give the size of
**      a vector. For a 2-dimensional vector, myvector.size() would be the
**      number of rows in a matrix.
**
*/

Matrix::Matrix() {
    grid = {{0, 0, 0,0},
            {0, 0, 0,0},
            {0, 0, 0,0},
            {0, 0, 0,0}};

    rows = grid.size();
    cols = grid[0].size();
}

/* TODO: Define a constructor that receives a 2-Dimensional vector
**       and assigns the vector to the grid variable.
**
**      Remember the syntax is
**      Classname::ClassName(datatype inputvariablename) {
**
**          classvariable = inputvariablename
**
**       }
**
**      Then initialize the rows variable, and the cols variable exactly
**      as you did for the default constructor.
**
*/
Matrix::Matrix(std::vector <std::vector<float>> gridIn) {
    grid = gridIn;

    rows = grid.size();
    cols = grid[0].size();
}