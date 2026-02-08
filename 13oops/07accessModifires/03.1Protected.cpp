// Protected -> Accessible inside the class and derived classes

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class BankAccount {
    protected:
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

class Child : public BankAccount {
    public:
        void display() {
            cout << "Current balance of " << name << " is: " << balance << endl;
             // the child class access the procted members
        }
        Child(string name, int balance) : BankAccount(name, balance) {}
};

int main() {
    
    BankAccount account1("Jivan", 4558);
    
    // account1.balance = 500000; // Can't change the value
    // cout << "The balance of " << account1.name << " is " << account1.balance << " (Access from the object)"<< endl;
    // Can't access like this in private modifier's member. 

    cout << "Can't access the balance of " << account1.name << " outside the class"<< endl;
    account1.details();


    Child child1("Patel", 7879787);
    child1.display();

    return 0;

}


// Protected :- Any member of a class declared as protected can be accessed inside the same class and inside its derived (child) classes, but not directly outside the class hierarchy.