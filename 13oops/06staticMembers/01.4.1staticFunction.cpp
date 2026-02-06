#include <iostream>
using namespace std;

class CreateObj {
    public:
        // to trace number of object createred from CreateObj class
        int count;

        // constructor
        CreateObj(int count) {
            this->count = count;
            cout << "Value of count is " << this->count << endl;
        }

        // Function member
        void displayAllMembers() {
            cout << "Number of object created from CreateObj class is " << CreateObj::count << endl;
        }
        
        // Static function
        static void staticFunction(CreateObj &obj) {
            cout << "This function is static is belongs to the class not an object and value of count is " << obj.count << endl;
        }
};

int main () {

    cout << endl << "Obj a is crated..." << endl;
    CreateObj a(1);
    CreateObj b(10);

    a.staticFunction(a);
    CreateObj::staticFunction(b);

    return 0;
}