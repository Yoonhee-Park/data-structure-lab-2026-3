#include <iostream>
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial() {
    degree = 0;
    for (int i = 0; i < 20; i++) coef[i] = 0;
}

void Polynomial::set(float c, int d) {
    coef[d] = c;
    if (d > degree) degree = d;
}

Polynomial Polynomial::add(const Polynomial& p) {
    Polynomial res;
    res.degree = (degree > p.degree) ? degree : p.degree;
    for (int i = 0; i <= res.degree; i++) {
        res.coef[i] = coef[i] + p.coef[i];
    }
    return res;
}

void Polynomial::display(const char* header) {
    cout << header << " ";
    for (int i = degree; i > 0; i--) {
        if (coef[i] != 0) cout << coef[i] << "x^" << i << " + ";
    }
    cout << coef[0] << endl;
}