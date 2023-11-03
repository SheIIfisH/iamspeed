#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    // Calculus
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


    return 0;
}

