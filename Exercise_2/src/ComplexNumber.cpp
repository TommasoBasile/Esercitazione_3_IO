#include <ComplexNumber.hpp>
#include <iostream>

using namespace std;
namespace ComplexLib{

// stampa
ostream& operator << (ostream& os, const Complex& c)
{
    if (c.imag > 0)
        os << c.real << "+" << c.imag << "i";
    else if (c.imag == 0)
        os << c.real;
    else
        os << c.real << "-" << abs(c.imag) << "i";
    return os;
}

// somma
Complex operator+(const Complex& c1, const Complex& c2)
{
    double sumR = c1.real + c2.real;
    double sumI = c1.imag + c2.imag;
    Complex c(sumR,sumI);
    return c;
}

// uguale
bool operator==(const Complex& c1, const Complex& c2)
{
    if (abs(c1.real-c2.real)/abs(c1.real) < 1e-16 && abs(c1.imag-c2.imag)/abs(c1.imag) < 1e-16)
        return true;
    else
         return false;
}

// coniugato
Complex to_coniugate(Complex& c)
{
    Complex coniug(c.real,-c.imag);
    return coniug;
}
};
