#include <iostream>
#include <windows.h>
#include "Complex.h"

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    double r1, i1, r2, i2;

    cout << "Input A (real imag): ";
    cin >> r1 >> i1;
    cout << "Input B (real imag): ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    cout << endl;
    c1.print("A");
    c2.print("B");

    Complex result = c1.plus(c2);
    result.print("A + B");

    return 0;
}