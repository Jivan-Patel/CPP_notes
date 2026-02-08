#include <iostream>
using namespace std;

class Class1 {
    private:
        int num = 0;
    public: 
        Class1(int n) {
            num = n;
        }
    friend class Class2;
};

class Class2 {
    public:
        void multiply(Class1 &c) {
            cout << "Accessing Child1's private member from class2 using friend keyword" << endl << "Value of num is " << c.num;
        }
};

int main() {
    Class1 c1(7);
    Class2 c2;

    c2.multiply(c1);

    return 0;
}