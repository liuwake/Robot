//TODO: Use this as a playground to practice with vectors


//TODO:
// Fill out your program's header. The header should contain any necessary
// include statements and also function declarations
#include <iostream>
#include <vector>

using namespace std;

vector<int> vectorSub(vector<int> vIn1, vector<int> vIn2);

vector<int> vectorMul(const vector<int> &vIn1, const vector<int> &vIn2);

//TODO:
// Write your main program. Remember that all C++ programs need
// a main function. The most important part of your program goes
// inside the main function.
int main() {
    vector<int> v1 = {5, 10, 27};
    vector<int> v2 = {3, 17, 12};

    vector<int> v3(3);
    vector<int> v4;

    vector<int> v6 = {17, 10, 31, 5, 7};
    vector<int> v7 = {17, 1, 6, 19, 8};
    vector<int> v8;

    for (int i = 0; i < v3.size(); i++) {
        v3[i] = v2[i] - v1[i];
    }

    cout << "v3: " << endl;
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << ' ';
    }
    cout << endl;

    v4 = vectorSub(v2, v1);
    cout << "v4: " << endl;
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] << ' ';
    }
    cout << endl;

    v8 = vectorMul(v6, v7);
    cout << "v8: " << endl;
    for (size_t i = 0; i < v8.size(); i++) {
        cout << v8[i] << ' ';
    }
    cout << endl;

    return 0;
}

vector<int> vectorSub(vector<int> vIn1, vector<int> vIn2) {
    vector<int> result;

    if (vIn1.size() != vIn2.size()) {
        return result;
    }
    //correct: i < vIn1.size();
    //NG: i <= vIn1.size();
    for (size_t i = 0; i < vIn1.size(); i++) {
        result.push_back(vIn1[i] - vIn2[i]);
    }
    cout << "result.size = " << result.size() << endl;
    return result;
}

vector<int> vectorMul(const vector<int> &vIn1, const vector<int> &vIn2) {
    vector<int> result;

    if (vIn1.size() != vIn2.size()) {
        cout << "These vectors' sizes not equal!" << endl;
        return result;
    }

    for (size_t i = 0; i < vIn1.size(); i++) {
        result.push_back(vIn1[i] * vIn2[i]);
    }

    return result;
}