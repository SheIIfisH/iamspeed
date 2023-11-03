#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    // Calculus
    double a, b;
    cout << "Enter numbers: " << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << endl;

    cout << Add(a, b) << endl;
    cout << Sub(a, b) << endl;
    cout << Mul(a, b) << endl;
    cout << Div(a, b) << endl;
    return 0;
}

