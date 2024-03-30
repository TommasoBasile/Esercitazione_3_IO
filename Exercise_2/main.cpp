#include "ComplexNumber.hpp"

using namespace std;
using namespace ComplexLib;

int main()
{
    Complex c1(1,2);
    Complex c2(1+1e-17,2+1e-17);
    Complex s = c1 + c2;
    Complex c1con = to_coniugate(c1);
    cout << "c1 è " << c1 << endl;
    cout << "c2 è " << c2 << endl;
    cout << "La somma tra c1 e c2 è " << s << endl;
    cout << "Il coniugato di c1 è " << c1con << endl;
    cout << "Uguaglianza tra c1 e c2: " << bool (c1 == c2) << endl;
    // l'uguaglianza è 1 cioé vero in quanto differiscono di una quantità più piccola della precisione di macchina

    return 0;
}
