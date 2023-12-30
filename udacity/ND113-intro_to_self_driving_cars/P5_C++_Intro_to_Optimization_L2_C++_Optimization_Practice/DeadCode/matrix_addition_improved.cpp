#include "matrix_addition_improved.h"

using namespace std;

vector <vector<int>> matrix_addition_improved(vector <vector<int>> matrixa, vector <vector<int>> matrixb) {

    // default zero vector
    vector <vector<int>> matrix_ans;
    if (matrixa.size() != matrixb.size() || matrixa[0].size() != matrixb[0].size()) {
        return matrix_ans;
    }

    // store the number of rows and columns in the matrices
    vector<int>::size_type rows = matrixa.size();
    vector<int>::size_type cols = matrixa[0].size();


    // if both matrices have the same size, calculate and return the sum
    // otherwise check if the number of rows and columns are not equal and return a matrix of zero

////Method 1
    matrix_ans = matrixa;

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            matrix_ans[i][j] += matrixb[i][j];
        }
    }

//// Method 2
//    matrix_ans.resize(rows, vector<int> (cols));
//
//    for (size_t i = 0; i < rows; i++) {
//        for (size_t j = 0; j < cols; j++) {
//            matrix_ans[i][j] = matrixa[i][j] + matrixb[i][j];
//        }
//    }
    return matrix_ans;
}
