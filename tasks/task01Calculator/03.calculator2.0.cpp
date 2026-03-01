#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "Choose one of the following options given below:" << endl;
    cout << "Press -> 1 for Addition" << endl ;
    cout << "Press -> 2 for Substraction" << endl ;
    cout << "Press -> 3 for Multiplication" << endl ;
    cout << "Press -> 4 for Division" << endl;
    cin >> c;
    cout << "Enter Number 1: ";
    cin >> a;
    cout << "Enter Number 2: ";
    cin >> b;

    switch (c) {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        if (b != 0)
            cout << (float)a / b;
        else
            cout << "divide by 0 is not possible";
        break;
    default:
        cout << "Enter a valid Options";
    }

    return 0;
}