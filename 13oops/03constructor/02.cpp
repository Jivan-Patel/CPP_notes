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
        Car(string brand, int mileage, string engine, int price) {
            this->brand = brand;
            this->mileage = mileage;
            this->engine = engine;
            this->price = price;
        }
};

int main() {

    cout << endl << "Details of car 1" << endl << endl;
    
    Car c1("BMW", 15, "Diesel", 5000000);
    c1.print();
    
    cout << endl << "Details of car 2" << endl << endl;

    Car c2("Audi", 17, "Petrol", 3000000);
    c2.print();

    return 0;
}
