// Private -> Accessible only inside the class

#include <iostream>
using namespace std;

class BankAccount {
    private:
        int balance;

    public:
        string name;
        void details() {
            cout << "The balance of " << this->name << " is " << this->balance << " (Access from the function)"<< endl;;
        }
        BankAccount(string name,  int balance) {
            this->name = name;
            this->balance = balance;
        }
};

// class child : private BankAccount {
//     public:
//         void display() {
//             cout << "Current balance is: " << balance << endl;
//              // Also the child class is not access the private members
//         }
// };

int main() {
    
    BankAccount c1("Jivan", 4558);
    
    // c1.balance = 500000; // Can't change the value
    // cout << "The balance of " << c1.name << " is " << c1.balance << " (Access from the object)"<< endl;
    // Can't access like this in private modifier's member. 

    cout << "Can't access the balance of " << c1.name << " outside the class"<< endl;
    c1.details();

    return 0;
}

// Private :- Any member of a class declared as private can be accessed only inside the same class and cannot be accessed directly outside the class.