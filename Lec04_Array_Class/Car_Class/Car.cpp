#include <iostream>
#include "Car.h"

using namespace std;

Car::Car() : speed(0) {}

void Car::setSpeed(int s) {
    speed = s;
}

void Car::drive() {
    cout << "일반 자동차 주행 중: " << speed << "km/h" << endl;
}

SportsCar::SportsCar() : turbo(false) {}

void SportsCar::setTurbo(bool t) {
    turbo = t;
}

void SportsCar::drive() {
    if (turbo) {
        cout << "스포츠카 터보 주행 중: " << speed + 50 << "km/h" << endl;
    }
    else {
        cout << "스포츠카 일반 주행 중: " << speed << "km/h" << endl;
    }
}