#include <iostream>
#include <string>
using namespace std;

class Parent {
    public:
        string parentName;

        Parent(string parentName) {
            cout << "Parent constructor called" << endl;
            this->parentName = parentName;
            cout << "work done..." << endl;
        }
        void displayP() {
            cout << "Parent name is " << parentName << endl;
        }
};

class Children : public Parent {
    public:
        string childName;

        Children(string parentName, string childName) : Parent(parentName) {
            cout << "Child constructor called" << endl;
            this->childName = childName;
            cout << "work done..." << endl;
        }
        void displayC() {
            cout << "Child name is " << childName << endl;
        }
};

class GrandChild : public Children {
    public:
        string grandChildName;

        GrandChild(string parentName, string childName, string grandChildName) : Children(parentName, childName) {
            cout << "Child constructor called" << endl;
            this->grandChildName = grandChildName;
            cout << "work done..." << endl;
        }
        void displayG() {
            cout << "Grand Child name is " << grandChildName << endl;
        }
};

int main() {

    GrandChild gc("Parent", "Child", "Grand Child");
    gc.displayP();
    gc.displayC();
    gc.displayG();

    return 0;
}