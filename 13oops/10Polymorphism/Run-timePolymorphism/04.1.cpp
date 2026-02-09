#include <iostream>
using namespace std;

class Car {
public: 
    virtual void engine() {
        cout << "It has an engine" << endl;
    }
    virtual ~Car() {
        cout << "Destructor of Car class" << endl;
    }
};

class Tata : public Car {
public: 
    void engine() override {
        cout << "It has Petrol, Diesel, Electric and CNG engine" << endl;
    }
    virtual ~Tata() {
        cout << "Destructor of Tata class" << endl;
    }
};

int main() {

    Car *obj1 = new Tata();
    obj1->engine();

    delete obj1;

    return 0;
}