#include <iostream>
using namespace std;

class CreateObj {
    public:
        // Data member 
        // to trace number of object createred from CreateObj class
        int count = 0;

        // constructor
        CreateObj() {
            count++;
            cout << "Value of count is " << count << endl;
        }
        // function member
        void displayNumberOfObj() {
            cout << "Number of object created from CreateObj class is " << this->count << endl;
        }
};

int main () {

    CreateObj a;
    a.displayNumberOfObj();
    CreateObj b;
    b.displayNumberOfObj();
    CreateObj c;
    c.displayNumberOfObj();
    
    a.displayNumberOfObj();
    
    return 0;
}