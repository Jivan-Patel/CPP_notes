// Public -> Accessible everywhere

#include <iostream>
using namespace std;

class BankAccount {
    public:
        int balance;
        string name;
        void details() {
            cout << "The balance of " << this->name << " is " << this->balance << " (Access from the function)"<< endl;;
        }
        BankAccount(string name,  int balance) {
            this->name = name;
            this->balance = balance;
        }
};

int main() {
    
    BankAccount c1("Jivan", 4558);
    cout << "The balance of " << c1.name << " is " << c1.balance << " (Access from the object)"<< endl;

    c1.balance = 500000; // Also change the value
    c1.details();

    return 0;
}



// Public :- Any member of a class declared as public can be accessed from anywhere in the program using the object of that class.
