#include <iostream>
using namespace std;

class Car {
public: 
    virtual void engine() {
        cout << "It has an engine" << endl;
    }
};

class Toyota : public Car{
public: 
    void engine() override {
        cout << "It has Petrol and CNG engine" << endl;
    }
};

int main() {

    Car *obj1 = new Toyota();  
    obj1->engine();

    return 0;
}