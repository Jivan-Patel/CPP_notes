#include <iostream>
using namespace std;

class Animal {
    public:
        string name = "Animal";
        void speak() {
            cout << "It makes sound" << endl;
        }
};

class Dog : public Animal{
    public:
        string name = "Dog";
        void speak() {
            cout << "Bark" << endl;
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

    Dog d;
    d.speak();

    Cat c;
    c.speak();

    return 0;
}


// Runtime polymorphism :- 

// -> If function members which was defined in  base (parent) class but it override by 
//    it's own derived (child) class but with some changes.

// -> The derived class must 

// -> The override function members is executed during runtime where decision is actually taken 
//    based on object which is created not by "object reference variable".