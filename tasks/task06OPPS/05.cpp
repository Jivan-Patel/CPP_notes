#include <iostream>
#include <string>
using namespace std;

class Students {
    private: 
        int grade;
        string password;
    public:
        string name;
        Students(string name, int grade, string password) {
            if(password.size() > 0 && grade >= 0 && grade <= 100) {
                this->name = name;
                this->grade = grade;
                this->password = password;
                cout << "The Student is created successfully." << endl;
            }
            else {
                cout << "Please Enter a valid data." << endl;
            }
        }
        void getResult(string password){
            if(password == this->password) {
                if(grade > 50) 
                    cout << "Congratulations!, You are Pass." << endl;
                else 
                    cout << "You are Fail" << endl;
            }
            else {
                cout << "Incorrect Password." << endl;
            }
        }
        void setGrade(int grade, string password){
            if(password == this->password) {
                if(grade >= 0 && grade <= 100) 
                    cout << "Grade updated successfully." << endl;
                else 
                    cout << "Enter a valid grade" << endl;
            }
            else {
                cout << "Incorrect Password." << endl;
            }
        }
};

int main() {
    Students s1("Jivan", 70 , "1234");
    Students s2("Rishab", 450 , "123");

    s1.getResult("1234");
    s2.getResult("123");
    s1.getResult("123");

    return 0;
}