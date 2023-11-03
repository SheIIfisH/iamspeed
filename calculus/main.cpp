#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    // Calculus 1.1
    double a, b;
    cout << "Enter numbers: " << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << endl;

    cout << "Choose operator:" << endl;
    cout << " + - add\n - - sub\n * - mul\n / - div\n\n";
    cout << ">> ";

    char k;
    cin >> k;

    switch (k){
    case '+':
        cout << Add(a, b) << endl;
        break;
    case '-':
        cout << Sub(a, b) << endl;
        break;
    case '*':
        cout << Mul(a, b) << endl;
        break;
    case '/':
        cout << Div(a, b) << endl;
        break;
    default:
        cout << Add(a, b) << endl;
    }

    return 0;
}

