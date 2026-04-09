#include <iostream>
#include <windows.h>
#include "Polynomial.h"

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    Polynomial p1, p2;

    p1.set(3, 2); // 3x^2
    p1.set(2, 1); // 2x
    p1.set(1, 0); // 1

    p2.set(1, 2); // 1x^2
    p2.set(4, 1); // 4x
    p2.set(5, 0); // 5

    p1.display("P1 =");
    p2.display("P2 =");

    Polynomial p3 = p1.add(p2);
    p3.display("P1 + P2 =");

    return 0;
}