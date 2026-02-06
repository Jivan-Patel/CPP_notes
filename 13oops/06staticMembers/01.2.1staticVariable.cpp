#include <iostream>
using namespace std;

class CreateObj {
    public:
        // to trace number of object createred from CreateObj class
        static int count;

        // constructor
        CreateObj() {
            // Increment the count when the class is created
            count++;
            cout << "Value of count is " << count << endl;
        }
        // Deconstructor
        ~CreateObj() {
            // to decrement the count when the object gets destroyed
            count--;
            cout << "Object is destroyed and now the total object exist is " << count << endl;
        }
        // Function member
        void displayAllMembers() {
            cout << "Number of object created from CreateObj class is " << CreateObj::count << endl;
        }
};
// Initializing the value of count
int CreateObj::count = 0;

void create () {
    cout << endl << "Obj e is crated..." << endl << endl;
    CreateObj e;

    cout << endl << "Obj f is crated..." << endl << endl;
    CreateObj f;

    cout << endl << "Obj g is crated..." << endl << endl;
    CreateObj g;
}

int main () {

    cout << endl << "Obj a is crated..." << endl << endl;
    CreateObj a;
    
    cout << endl << "Obj b is crated..." << endl << endl;   
    CreateObj b;    
    
    create();
    
    cout << endl << "Obj c is crated..." << endl << endl;
    CreateObj c;

    c.displayAllMembers();

    return 0;
}