#pragma once
#ifndef CAR_H
#define CAR_H

class Car {
protected:
    int speed;

public:
    Car();
    void setSpeed(int s);
    void drive();
};

class SportsCar : public Car {
private:
    bool turbo;

public:
    SportsCar();
    void setTurbo(bool t);
    void drive();
};

#endif