//
// Created by liuwake on 2023/12/25.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<float> p(5, 0.2);
vector <string> world =
        {"green", "red", "red", "green", "green"};
vector <string> measurement =
        {"red", "green"};
vector<int> motions = {1, 1};

float pHit = 0.6;
float pMiss = 0.2;
float pExact = 0.8;

float pOvershoot = 0.1;
float pUndershoot = 0.1;

vector<float> sense(const vector<float> &p, const string &Z);

vector<float> move(const vector<float> &p, const int &U);

void vectorPrint(const vector<float> &p);

int main() {
    cout << "before p : ";
    vectorPrint(p);

    vector<float> new_p = p;
    for (size_t k = 0; k < measurement.size(); k++) {
        new_p = sense(new_p, measurement[k]);
        new_p = move(new_p, motions[k]);
    }

    cout << "after p:";
    vectorPrint(new_p);

    //before p : 0.2 0.2 0.2 0.2 0.2
    //after p:0.161053 0.148421 0.0810526 0.168421 0.387368

    //should be:
    //# 0.211579 0.151579 0.0810526 0.168421 0.387368

    return 0;
}

vector<float> sense(const vector<float> &p, const string &Z) {
    vector<float> q;

    for (size_t i = 0; i < p.size(); i++) {
        bool hit = (Z == world[i]);
        q.push_back(p[i] * (hit * pHit + (1 - hit) * pMiss));
    }

    float s = 0;
    for (const auto &num: q) {
        s += num;
    }

    for (size_t i = 0; i < q.size(); i++) {
        q[i] = q[i] / s;
    }

    return q;
}

vector<float> move(const vector<float> &p, const int &U) {

    vector<float> q;
    float s;

    for (size_t i = 0; i < p.size(); i++) {
        s = pExact * p[(i - U) % p.size()];
        s += pOvershoot * p[(i - U - 1) % p.size()];
        s += pUndershoot * p[(i - U + 1) % p.size()];
        q.push_back(s);
    }

    return q;
}


void vectorPrint(const vector<float> &p) {
    for (size_t i = 0; i < p.size(); i++) {
        cout << p[i] << ' ';
    }
    cout << endl;
}
