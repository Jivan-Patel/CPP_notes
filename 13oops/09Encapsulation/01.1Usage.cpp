#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        int balance;
        int pin;
    public:
        string name;
        BankAccount(string name, int balance, int pin) {
            if(pin && balance > 0) {
                this->name = name;
                this->balance = balance;
                this->pin = pin;
                cout << "Congratulation! your Account created successfully." << endl;
            }
            else {
                cout << "somethings went wrong" << endl;
            }
        }
        void getDetails(int pin) {
            if(this->pin == pin) {
                cout << "Your name is " << this->name << endl;
                cout << "Your current balance is ₹" << this->balance << endl;
            }
            else {
                cout << "Incorrect pin" << endl;
            }
        }
        void setBalance(int balance, int pin) {
            if(this->pin == pin) {
                this->balance += balance;
                cout << "Amount added successfully now your current balance is ₹" << this->balance << endl;
            }
            else {
                cout << "Amount not added because your pin is incorrect" << endl;
            }
        }
        void setName(string name, int pin) {
                if(this->pin == pin) {
                    string oldName = this->name;
                    this->name = name;
                    cout << "Name update successfully from " << oldName << " to " << this->name << "." << endl;
                }
                else {
                    cout << "Amount not added because your pin is incorrect" << endl;
                }
            }
};

int main() {
    BankAccount account("Jivan", 5000, 1234);
    account.getDetails(1234);
    account.getDetails(12);
    account.setBalance(500, 1234);
    account.setName("Patel Jivan", 1234);
    account.setBalance(500, 12);
    account.getDetails(1234);

    return 0;
}