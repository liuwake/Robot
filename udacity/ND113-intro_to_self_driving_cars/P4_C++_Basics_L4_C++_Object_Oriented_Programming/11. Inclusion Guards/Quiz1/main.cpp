//
// Created by liuwake on 2023/12/26.
//
//What's Wrong with This Code?
//Take a look at this main.cpp file and click the "Test Run" button. Why doesn't the code compile?

#include <iostream>
#include <string>

using namespace std;

int main() {

    string color;
    int doors;

    color = "blue";
    doors = 4;

    //string color;
    color = "red";

    cout << "This " << color << " car has " << doors << " doors";

    return 0;

}
