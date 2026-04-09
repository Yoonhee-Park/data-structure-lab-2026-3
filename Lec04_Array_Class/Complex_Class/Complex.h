#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double re;
    double im;

public:
    Complex(double r = 0.0, double i = 0.0);
    Complex plus(const Complex& target) const;
    void print(const char* name) const;
};

#endif