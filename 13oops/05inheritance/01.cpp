#include <iostream>
#include <string>
using namespace std;

class Laptop {
    public:
        // Common Data members
        string Ram = "Available";
        string Storage = "Available";
        string Mother_Board = "Available";
        
        // Common Function members
        void display() {
            cout << "Parent function got called and the members are: " << endl;
            cout << "Ram: " << this->Ram << endl;
            cout << "Storage: " << this->Storage << endl;
            cout << "Mother_Board: " << this->Mother_Board << endl;
        }
};

class Lenovo : public Laptop{
    public: 
        string Storage_type;
        string Ram_type;

        Lenovo (string Storage_type, string Ram_type) {
            this->Storage_type = Storage_type;
            this->Ram_type = Ram_type;
        }
        void display1() {
            cout << "Child function got called and the members are: " << endl;
            cout << "Ram: " << this->Storage_type << endl;
            cout << "Storage: " << this->Ram_type << endl;
        }
        void laptopDetails () {
            cout << "Child function got called and the members of it's parents are: " << endl;
            cout << "Ram: " << Ram << endl;
            cout << "Storage: " << Storage << endl;
            cout << "Mother_Board: " << Mother_Board << endl;           
        }
};

class Lenovo_sub : public Lenovo {
    public:
        void display2() {
            cout << "This func is declare inside the lenovo_sub class which is child of Lenovo which is child of Laptop class " << endl;
        }
};

int main () {

    Lenovo l1("HDD", "16GB");
    l1.display();
    l1.display1();
    l1.laptopDetails();

    return 0;
}