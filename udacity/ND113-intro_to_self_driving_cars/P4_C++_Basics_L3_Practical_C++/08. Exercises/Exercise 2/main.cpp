//
// Created by liuwake on 2023/12/25.
//
//Exercise 2
//Write a C++ function that takes in two matrices and outputs their product. Your function should first check that the two matrices can actually be multiplied together; if matrix one is m by n and matrix two is w by z, then n must equal w. And the resulting matrix will be m by z.

#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> matrixMul(const vector <vector<int>> & vIn1,
                               const vector <vector<int>> & vIn2);

void matrixPrint(const vector <vector<int>> & vIn);

int main() {

    vector <vector<int>> v1 = {{1, 2, 3, 10},
                               {4, 5, 6, 10},
                               {7, 8, 9, 10}};

//    vector <vector<int>> v1 = {{1, 2, 3},
//                               {4, 5, 6},
//                               {7, 8, 9},
//                               {10, 11, 12}};

    vector <vector<int>> v2(3, vector<int> (3, 1));

    vector <vector<int>> v3;

    cout << "v1: " << endl;
    matrixPrint(v1);
    cout << "v2: " << endl;
    matrixPrint(v2);

    v3 = matrixMul(v1, v2);
    cout << "v3: " << endl;
    matrixPrint(v3);

    return 0;
}

vector <vector<int>> matrixMul(const vector <vector<int>> & vIn1,
                               const vector <vector<int>> & vIn2){
    vector <vector<int>> result(vIn1.size(),
                                vector <int> (vIn2[0].size(), 0));
    // When can't mul, it shall return a empty matrix,
    // rather than a ZEROS matrix!
    // TODO: return a empty matrix, when can't mul.
    if (vIn1[0].size() != vIn2.size()){
        cout << "Can't mul, caz dimensions were not match!" << endl;
        return result;
    }

    for (size_t r = 0; r < vIn1.size(); r ++){
        for (size_t c = 0; c < vIn2[0].size(); c++){
            int dot_mul = 0;

            for (size_t k = 0; k < vIn1[0].size(); k ++){
                dot_mul += vIn1[r][k] * vIn2[k][c];
            }

            result[r][c] = dot_mul;
        }
    }

    return result;
}

void matrixPrint(const vector <vector<int>> & vIn){
    for (size_t r = 0; r < vIn.size(); r ++){
        for (size_t c = 0; c < vIn[0].size(); c++){
            cout << vIn[r][c];
            if (c == vIn[0].size() - 1){
                cout << endl;
            }
            else{
                cout << ", ";
            }
        }
    }
    return;
}