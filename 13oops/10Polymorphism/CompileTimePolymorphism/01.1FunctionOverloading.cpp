// Polymorphism :- It allows the same function or operator to behave differently in different situation.

// Real life example: Water is in liquid state in normal temperature but in lower temperature it is in solid state
//                    and in higher temperature it is in gases form


// Compile time polymorphism :- Function Overloading 
// (1) Same Class & Same function
// (2) But make sure that the arguments or it's data type must be different else compiler gives ambiguous error
// (3) If only the function return types are different, compiler gives ambiguous error

#include <iostream>
using namespace std;

class Poly {
    public:
        void add(int a, int b) {
            cout << a + b << endl;
        }
        void add(int a, int b, int c) {
            cout << a + b + c << endl;
        }
};

int main() {
    Poly p;
    p.add(10,6);
    p.add(5,7,8);    

    return 0;
}