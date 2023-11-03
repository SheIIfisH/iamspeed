#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    // Calculus
<<<<<<< HEAD
    double a, b;
    cout << "Enter numbers: " << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << endl;

    cout << Add(a, b) << endl;
    cout << Sub(a, b) << endl;
    cout << Mul(a, b) << endl;
    cout << Div(a, b) << endl;
=======
    cout << "Choose operator:" << endl;
    cout << " + - add\n - - sub\n * - mul\n / - div\n\n";
    cout << ">> ";

    char k;
    cin >> k;

    switch (k){
    case '+':
        cout << Add(5, 2) << endl;
        break;
    case '-':
        cout << Sub(5, 2) << endl;
        break;
    case '*':
        cout << Mul(5, 2) << endl;
        break;
    case '/':
        cout << Div(5, 2) << endl;
        break;
    default:
        cout << Add(5, 2) << endl;
    }


>>>>>>> abfa0f0e0613e3cce1a979c3ff75ab4e5950e4c4
    return 0;
}

