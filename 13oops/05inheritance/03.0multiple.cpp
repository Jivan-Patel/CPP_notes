#include <iostream>
#include <string>
using namespace std;

class Parent1 {
    public:
        string parentName;

        Parent1(string parentName) {
            cout << "Parent constructor called" << endl;
            this->parentName = parentName;
            cout << "work done..." << endl;
        }
        void displayP1() {
            cout << "Parent 1 name is " << parentName << endl;
        }
};

class Parent2 {
    public:
        string parent2Name;

        Parent2(string parentName) {
            cout << "Child constructor called" << endl;
            this->parent2Name = parent2Name;
            cout << "work done..." << endl;
        }
        void displayP2() {
            cout << "Parent 2 Name name is " << parent2Name << endl;
        }
};

class Child : public Parent1, Parent2 {
    public:
        string grandChildName;

        Child(string parent1Name, string parent2Name, string childName) : Parent1(parent1Name) , Parent2(parent2Name) {
            cout << "Child constructor called" << endl;
            this->grandChildName = childName;
            cout << "work done..." << endl;
        }
        void displayC() {
            cout << "Child name is " << grandChildName << endl;
        }
};

int main() {

    Child gc("Name 1", "Name 2", "Name 3");
    gc.displayC();
    gc.displayP1();
    // gc.displayP2();

    return 0;
}