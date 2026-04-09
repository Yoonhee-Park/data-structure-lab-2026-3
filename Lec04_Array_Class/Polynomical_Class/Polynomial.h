#pragma once
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial {
private:
    int degree;
    float coef[20];

public:
    Polynomial();
    void set(float c, int d);
    Polynomial add(const Polynomial& p);
    void display(const char* header);
};

#endif