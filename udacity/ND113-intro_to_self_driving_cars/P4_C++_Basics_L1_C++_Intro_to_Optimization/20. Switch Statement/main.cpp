//
// Created by liuwake on 2023/12/19.
//
//TODO Practice writing switch statements
// Don't forget an include statement if you want to use std::cout
#include <iostream>
using namespace std;

int main() {

    // TODO: write a program that outputs whether a vehicle is a motorcycle,
    // 2-door coupe, 4-door car or a 5-door mini-van.
    // You should create a variable that holds the number of doors in the vehicle
    // A motorcycle would have doors = 0 for example.
    // Then use a switch statement to output to the terminal the kind of vehicle
    // you have

    int doors = 0;

    switch (doors) {
        case 0:
            cout << "moto";
            break;
        case 2:
            cout << "coupe";
            break;
        case 4:
            cout << "car";
            break;
    }

    return 0;
}