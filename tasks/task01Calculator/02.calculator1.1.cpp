#include <iostream>
using namespace std;

int main() {

    int a, b;
    char c;
    cout << "Enter Number 1: ";
    cin >> a;
    cout << "Enter Operation: ";
    cin >> c;
    cout << "Enter Number 2: ";
    cin >> b;

    switch (c) {
    case '+':
        cout << a + b;
        break;
    case '-':
        if(a > b) cout << a - b;
        else cout << b - a;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0)
            cout << (float)a / b;
        else
            cout << "divide by 0 is not possible";
        break;
    default:
        cout << "Enter a valid operations";
    }

    return 0;
}