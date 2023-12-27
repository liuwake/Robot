//
// Created by liuwake on 2023/12/27.
//

#include "matrix.h"

Matrix::Matrix() {
    std::vector <std:: vector <float> > initial_grid (10, std::vector <float>(5, 0.5));
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();

}

Matrix::Matrix(std::vector <std:: vector <float> > initial_grid) {
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}

/*
** TODO: Define a function setGrid()
**   INPUTS: a 2-D vector
**   OUPUTS: void
**
**   This function receives a 2-D vector reprenting a matrix, and then
**    updates the grid, rows, and cols variables
**
*/

/*
** TODO: Define getGrid(), getRows(), and getCols() functions.
**    INPUTS: None of these functions have inputs
**    OUPUTS: Each function should return its respective variable
**            For example, getRows returns the rows variable
*/