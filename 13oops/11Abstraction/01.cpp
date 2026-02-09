#include <iostream>
using namespace std;

class Car {
    public:
        // By using pure virtual function we will list out those necessary info which has to be shown to user...
        virtual void engineInfo() = 0;
        virtual void breakInfo() = 0;
};

class Toyota : Car {
    public:
        void engineInfo() {
            cout << "Engine started" << endl;
        }
        void breakInfo() {
            cout << "The break is used to stop the car and only front break is there" << endl;
        }
};

int main() {
    Toyota car1;

    car1.engineInfo();
    car1.breakInfo();

    return 0;
}