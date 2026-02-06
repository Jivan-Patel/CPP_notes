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
    cout << endl << "Details of car 1" << endl;

    Car c[2]; // objects
    c[0].brand = "Toyota";
    c[0].mileage = 20;
    c[0].engine = "Petrol";
    c[0].price = 1200000;
    c[0].print();
        
    cout << endl << "Details of car 2" << endl;

    c[1].brand = "Maruti";
    c[1].mileage = 22;
    c[1].engine = "Diesel";
    c[1].price = 800000;
    c[1].print();

    return 0;
}