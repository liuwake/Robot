/**
	helpers.cpp

	Purpose: helper functions which are useful when
	implementing a 2-dimensional histogram filter.

	This file is incomplete! Your job is to make the
	normalize and blur functions work. Feel free to 
	look at helper.py for working implementations 
	which are written in python.
*/

#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include "helpers.h"
// #include "debugging_helpers.cpp"

using namespace std;

/**
	TODO - implement this function

    Normalizes a grid of numbers. 

    @param grid - a two dimensional grid (vector of vectors of floats)
		   where each entry represents the unnormalized probability 
		   associated with that grid cell.

    @return - a new normalized two dimensional grid where the sum of 
    	   all probabilities is equal to one.
*/
vector <vector<float>> normalize(vector <vector<float>> grid) {

    vector <vector<float>>
            newGrid(grid.size(), vector<float>(grid[0].size(), 0.0));

    // todo - your code here
    float sum = 0.0;

    for (size_t r = 0; r < grid.size(); r++) {
        for (size_t c = 0; c < grid[0].size(); c++) {
            sum += grid[r][c];
        }
    }

    for (size_t r = 0; r < grid.size(); r++) {
        for (size_t c = 0; c < grid[0].size(); c++) {
            newGrid[r][c] = grid[r][c] / sum;
        }
    }

    return newGrid;
}

/**
	TODO - implement this function.

    Blurs (and normalizes) a grid of probabilities by spreading 
    probability from each cell over a 3x3 "window" of cells. This 
    function assumes a cyclic world where probability "spills 
    over" from the right edge to the left and bottom to top. 

    EXAMPLE - After blurring (with blurring=0.12) a localized 
    distribution like this:

    0.00  0.00  0.00 
    0.00  1.00  0.00
    0.00  0.00  0.00 

    would look like this:
	
	0.01  0.02	0.01
	0.02  0.88	0.02
	0.01  0.02  0.01

    @param grid - a two dimensional grid (vector of vectors of floats)
		   where each entry represents the unnormalized probability 
		   associated with that grid cell.

	@param blurring - a floating point number between 0.0 and 1.0 
		   which represents how much probability from one cell 
		   "spills over" to it's neighbors. If it's 0.0, then no
		   blurring occurs. 

    @return - a new normalized two dimensional grid where probability 
    	   has been blurred.
*/
vector <vector<float>> blur(vector <vector<float>> grid, float blurring) {

    vector <vector<float>>
            newGrid(grid.size(), vector<float>(grid[0].size(), 0.0));

    // your code here
    for (size_t r = 0; r < grid.size(); r++) {
        for (size_t c = 0; c < grid[0].size(); c++) {
            newGrid[r][c] += (1 - blurring) * grid[r][c]
                             + blurring * 2 / (3 * 4) * grid[(r - 1 + grid.size()) % grid.size()][c]
                             + blurring * 2 / (3 * 4) * grid[(r + 1) % grid.size()][c]
                             + blurring * 2 / (3 * 4) * grid[r][(c - 1 + grid[0].size()) % grid[0].size()]
                             + blurring * 2 / (3 * 4) * grid[r][(c + 1) % grid[0].size()]
                             + blurring * 1 / (3 * 4) *
                               grid[(r - 1 + grid.size()) % grid.size()]
                               [(c - 1 + grid[0].size()) % grid[0].size()]
                             + blurring * 1 / (3 * 4) *
                               grid[(r - 1 + grid.size()) % grid.size()]
                               [(c + 1) % grid[0].size()]
                             + blurring * 1 / (3 * 4) *
                               grid[(r + 1) % grid.size()]
                               [(c - 1 + grid[0].size()) % grid[0].size()]
                             + blurring * 1 / (3 * 4) * grid[(r + 1) % grid.size()]
                               [(c + 1) % grid[0].size()];
        }
    }

    return normalize(newGrid);
}

/** -----------------------------------------------
#
#
#	You do not need to modify any code below here.
#
#
# ------------------------------------------------- */


/**
    Determines when two grids of floating point numbers 
    are "close enough" that they should be considered 
    equal. Useful for battling "floating point errors".

    @param g1 - a grid of floats
    
    @param g2 - a grid of floats

    @return - A boolean (True or False) indicating whether
    these grids are (True) or are not (False) equal.
*/
bool close_enough(vector <vector<float>> g1, vector <vector<float>> g2) {
    int i, j;
    float v1, v2;
    if (g1.size() != g2.size()) {
        return false;
    }

    if (g1[0].size() != g2[0].size()) {
        return false;
    }
    for (i = 0; i < g1.size(); i++) {
        for (j = 0; j < g1[0].size(); j++) {
            v1 = g1[i][j];
            v2 = g2[i][j];
            if (abs(v2 - v1) > 0.0001) {
                return false;
            }
        }
    }
    return true;
}

bool close_enough(float v1, float v2) {
    if (abs(v2 - v1) > 0.0001) {
        return false;
    }
    return true;
}

/**
    Helper function for reading in map data

    @param s - a string representing one line of map data.

    @return - A row of chars, each of which represents the
    color of a cell in a grid world.
*/
vector<char> read_line(string s) {
    vector<char> row;

    size_t pos = 0;
    string token;
    string delimiter = " ";
    char cell;

    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.length());

        cell = token.at(0);
        row.push_back(cell);
    }

    return row;
}

/**
    Helper function for reading in map data

    @param file_name - The filename where the map is stored.

    @return - A grid of chars representing a map.
*/
vector <vector<char>> read_map(string file_name) {
    ifstream infile(file_name);
    vector <vector<char>> map;
    if (infile.is_open()) {

        char color;
        vector<char> row;

        string line;

        while (std::getline(infile, line)) {
            row = read_line(line);
            map.push_back(row);
        }
    }
    return map;
}

/**
    Creates a grid of zeros

    For example:

    zeros(2, 3) would return

    0.0  0.0  0.0
    0.0  0.0  0.0

    @param height - the height of the desired grid

    @param width - the width of the desired grid.

    @return a grid of zeros (floats)
*/
vector <vector<float>> zeros(int height, int width) {
    int i, j;
    vector <vector<float>> newGrid;
    vector<float> newRow;

    for (i = 0; i < height; i++) {
        newRow.clear();
        for (j = 0; j < width; j++) {
            newRow.push_back(0.0);
        }
        newGrid.push_back(newRow);
    }
    return newGrid;
}

// int main() {
// 	vector < vector < char > > map = read_map("maps/m1.txt");
// 	show_grid(map);
// 	return 0;
// }