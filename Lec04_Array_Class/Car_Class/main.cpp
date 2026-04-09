#include <iostream>
#include <windows.h>
#include "Car.h"

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    Car myCar;
    myCar.setSpeed(60);
    myCar.drive();

    SportsCar mySportsCar;
    mySportsCar.setSpeed(100);
    mySportsCar.setTurbo(true);
    mySportsCar.drive();

    return 0;
}