#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string brand;
        int mileage;
        string engine;
        int price;
        void print() {
            cout << "Brand: " <<  this->brand << endl;
            cout << "Milage: "<< this->mileage << " kmpl" << endl;
            cout << "Engine: "<< this->engine  << endl;
            cout << "Price: ₹ "<< this->price<< endl;
        }
};

int main() {

    Car c;      // objects
    c.brand = "Toyota";
    c.mileage = 20;
    c.engine = "Petrol";
    c.price = 1200000;
    c.print();

    return 0;
}