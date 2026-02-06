#include <iostream>
using namespace std;

class CreateObj {
    public:
        // to trace number of object createred from CreateObj class
        static int count;   // Can't initializing the value here
        static float num;
        static string name;

        // constructor
        CreateObj() {
            count++;
            cout << "Value of count is " << count << endl;
        }
        // Function member
        void displayAllMembers() {
            cout << "Number of object created from CreateObj class is " << CreateObj::count << endl;
            cout << "The value of Float number is " << num << endl;
            cout << "My name is " << name << endl;
        }
};
// Initializing the value of count
int CreateObj::count = 0;
float CreateObj::num = 15.5;
string CreateObj::name = "Patel Jivan";

int main () {

    cout << endl << "Obj a is crated..." << endl << endl;

    CreateObj a;
    a.displayAllMembers();

    cout << endl << "Obj b is crated..." << endl << endl;

    CreateObj b;
    b.displayAllMembers();

    cout << endl << "Obj c is crated..." << endl << endl;

    CreateObj c;
    c.displayAllMembers();

    return 0;
}