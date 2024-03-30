#pragma once

#include <iostream>

using namespace std;

namespace ComplexLib{
struct Complex{
    double real;
    double imag;

    Complex(double a, double b) {
        real = a;
        imag = b;
    };

};
ostream& operator << (ostream& os, const Complex& r);
Complex operator+(const Complex& c1, const Complex& c2);
bool operator==(const Complex& c1, const Complex& c2);
Complex to_coniugate(Complex& c);
};
