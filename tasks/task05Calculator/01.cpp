#include <iostream>
#include <fstream>
#include <map>
using namespace std;

map<string, int> freq = {
    {"addition" , 0},
    {"substraction" , 0},
    {"multiplication" , 0},
    {"division" , 0}
};

void appendInFile(int a, char operation, int b, double result) {
    ofstream file;
    file.open("result.txt", ios::app);
    if(file.is_open()) {
        file << a << " " << operation << " " << b << " = " << result << endl;
        file.close();
    }
}

class Addition {
    public:
        void add(int a, int b) {
            freq["addition"]++;
            appendInFile(a, '+', b, a + b);
            cout << a << " + "<< b << " = " <<  a + b << endl;
            cout << "Now the addition frequency is " << freq["addition"] << endl;
        }
};
class Substraction {
    public:
        void substract(int a, int b) {
            freq["substraction"]++;
            appendInFile(a, '-', b, a - b);
            cout << a << " - "<< b << " = " <<    a - b << endl;
            cout << "Now the substraction frequency is " << freq["substraction"] << endl;
        }
};
class Multiply {
    public:
        void product(int a, int b) {
            freq["multiplication"]++;
            appendInFile(a, '*', b, a * b);
            cout << a << " * " << b << " = " <<    a * b << endl;
            cout << "Now the multiplication frequency is " << freq["multiplication"] << endl;
        }
    };
    class Division {
        public:
        void divide(int a, int b) {
            freq["division"]++;
            double result;
            if(b == 0) result = INT_MAX;
            else result = (double)a / b;
            appendInFile(a, '/', b, result);
            cout << a << " / " << b << " = " << result << endl;
            cout << "Now the division frequency is " << freq["division"] << endl;
        }
};

class Calculator : public Addition , public Substraction , public Multiply, public Division {

};



int main() {

    Calculator c ;
    c.add(1,20);
    c.add(100,20);
    c.product(1,55);
    c.divide(4654878,454688);
    c.divide(4654878,1456);
    c.substract(5555,55);
    c.substract(4567,687);

    return 0;
}