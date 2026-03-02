// Multilevel inheritance
#include <iostream>
using namespace std;


class Person {
    public: 
        string name;
        int age;
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void display() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

class Employee: public Person {
    public: 
        int employee_id;
        int salary;
        Employee(string name, int age, int employee_id, int salary): Person(name, age) {
            this->employee_id = employee_id;
            this->salary = salary;
        }
        void display() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Id: " << this->employee_id << endl;
            cout << "Salary: " << this->salary << endl;
        }
};

class Manager : public Employee {
    public: 
        string department;
        Manager(string name, int age, int employee_id, int salary, string department) : Employee(name, age, employee_id, salary) {
            this->department = department;
        }
        void display() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Id: " << this->employee_id << endl;
            cout << "Salary: " << this->salary << endl;
            cout << "Department: " << this->department << endl;
        }
};

int main() {
    
    Manager m1("XYZ", 18, 5 , 50000, "HOD");
    m1.display();

    Employee e1("ABC", 25, 7 , 70000000);
    e1.display();

    return 0;
}