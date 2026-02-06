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
        // Constructor
        Car(string brand1, int mileage1, string engine1, int price1) {
            brand = brand1;
            mileage = mileage1;
            engine = engine1;
            price = price1;
        }
};

int main() {

    Car c1("BMW", 15, "Diesel", 5000000);
    c1.print();

    Car c2("Audi", 17, "Petrol", 3000000);
    c2.print();

    return 0;
}


// Name of Constructor must be same as class name 