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


void Matrix::setGrid(std::vector< std::vector<float> > new_grid) {
    grid = new_grid;
    rows = new_grid.size();
    cols = new_grid[0].size();
}

std::vector< std::vector<float> > Matrix::getGrid() {
    return grid;
}

std::vector<float>::size_type Matrix::getRows() {
    return rows;
}

std::vector<float>::size_type Matrix::getCols() {
    return cols;
}