#include <iostream>
using namespace std;

class CreateObj {
    public:
        // to trace number of object createred from CreateObj class
        static int count;

        // constructor
        CreateObj() {
            count++;
            cout << "Value of count is " << count << endl;
        }

        // Function member
        void displayAllMembers() {
            cout << "Number of object created from CreateObj class is " << CreateObj::count << endl;
        }
        
        // Static function
        static void staticFunction() {
            cout << "This function is static is belongs to the class not an object" << endl;
        }
};

// Initializing the value of count
int CreateObj::count = 0;

int main () {

    cout << endl << "Obj a is crated..." << endl;
    CreateObj a;

    a.staticFunction();
    CreateObj::staticFunction();

    return 0;
}