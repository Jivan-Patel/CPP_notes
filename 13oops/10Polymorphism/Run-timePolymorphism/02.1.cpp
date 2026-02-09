#include <iostream>
using namespace std;

class Animal {
    public:
        string name = "Animal";
        void speak() {
            cout << "It makes sound" << endl;
        }
};

class Cat : public Animal{
    public:
        string name = "cat";
        void speak() {
            cout << "Meow" << endl;
        }
};

int main() {

    Animal a;
    a.speak();

    Cat c;
    c.speak();

    Animal *a2 = new Cat();
    a2->speak();    // calls the speak function from Animal not from cat
    cout << "Name -> " << a2->name << endl;


    return 0;
}