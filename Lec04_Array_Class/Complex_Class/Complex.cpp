#include <iostream>
#include <iomanip>
#include "Complex.h"

using namespace std;

Complex::Complex(double r, double i) : re(r), im(i) {}

Complex Complex::plus(const Complex& target) const {
    return Complex(re + target.re, im + target.im);
}

void Complex::print(const char* name) const {
    cout << name << " = " << fixed << setprecision(2)
        << re << " + " << im << "i" << endl;
}