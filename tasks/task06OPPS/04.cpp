// Static Members

#include <iostream>
using namespace std;

class Car {
    public: 
        string car_name;
        int price;
        static int totalCars;

        Car(string car_name, int price) {
            this->car_name = car_name;
            this->price = price;
            totalCars++;
        }

        void display() {
            cout << "Name: " << car_name << endl;
            cout << "Price: " << price << endl;
        }

        static void totalCarsCreated() {
            cout << "There are total " << totalCars << " cars created." << endl;
        }
};

int Car::totalCars = 0;

int main() {
    
    Car c1("BMW", 5000000);
    Car c2("AUDI", 4000000);
    Car c3("Alto", 400000);

    c1.display();
    c2.display();
    c3.display();
    Car::totalCarsCreated();

    return 0;
}