//
// Created by liuwake on 2023/12/25.
//
//TODO: Write a function that receives two integer matrices and outputs
// the sum of the two matrices. Then in your main() function, input a few
// examples to check your solution. Output the results of your function to
// cout. You could even write a separate function that prints an arbitrarily
// sized matric to cout.
#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> vectorAdd(const vector <vector<int>> vIn1,
                               const vector <vector<int>> vIn2);

int main() {

    vector <vector<int>> v1(5, {1, 2, 3});
    vector <vector<int>> v2(5, vector<int>(3, 100));

    vector <vector<int>> v3(5);

    v3 = vectorAdd(v1, v2);

    for (const vector<int> &v: v3) {
        for (const int &num: v) {
            cout << num << ' ';
        }
        cout << endl;
    }

    return 0;
}

vector <vector<int>> vectorAdd(const vector <vector<int>> vIn1,
                               const vector <vector<int>> vIn2) {
    vector <vector<int>> result;

    for (size_t r = 0; r < vIn1.size(); r++) {
        vector<int> v;
        for (size_t c = 0; c < vIn1[0].size(); c++) {
            v.push_back(vIn1[r][c] + vIn2[r][c]);
        }
        result.push_back(v);
    }

    return result;
}