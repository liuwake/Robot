#include "blur_factor_improved.hpp"

using namespace std;

vector <vector<float>> blur_factor_improved() {

    // calculate blur factors
    static float center = 1.0 - .12;
    static float corner = .12 / 12.0;
    static float adjacent = .12 / 6.0;

    // create the blur window

    static vector <vector<float>> window = {
            {corner,   adjacent, corner},
            {adjacent, center,   adjacent},
            {corner,   adjacent, corner}
    };

    return window;
}