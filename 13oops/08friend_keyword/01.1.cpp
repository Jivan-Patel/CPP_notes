#include <iostream>
using namespace std;

class BankAccount{
    private:
        int balance = 0;
    protected:
        string name;
    public:
        BankAccount(int balance, string name){
            this->name = name;
            if(balance > 0) {
                this->balance += balance;
                cout << "₹" << balance <<" is added in your account. Now your current balance is ₹" << this->balance << endl;
            }
            else {
                cout << "The amount must be grater than zero" << endl;
            }
        }
        friend void displayWithFriend(BankAccount &acc);
};

// void displayWithoutFriend(BankAccount &acc) {
//     //                 Not Allowed
//     cout << "Your current balance is ₹" << acc.balance << endl;   
//     cout << "Your name is " << acc.name << endl; 
// }

void displayWithFriend(BankAccount &acc) {
    //     Allowed bcz of friend keyword
    cout << "Your name is " << acc.name << endl; 
    cout << "Your current balance is ₹" << acc.balance << endl;     
}

int main() {
    
    BankAccount p1(3446, "Anand");
    BankAccount p2(3534, "Jivan");
    BankAccount p3(-785, "Prince");

    displayWithFriend(p2);

    return 0;
}

// Friend Keyword is use When we have to use any private or procted members only in specific function or class which is outside that class.

// Friend keyword is only in cpp