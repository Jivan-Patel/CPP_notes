#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Employee {
    int ID;
    string name;
    int salary;
};


int main() {

    Employee emp[5];
    for(int i = 0; i < 5; i++) {
        cout << "Enter ID: ";
        cin >> emp[i].ID;
        cout << "Enter name: ";
        cin >> emp[i].name;
        cout << "Enter Salary: ";
        cin >> emp[i].salary;
        cout << endl;
    }

    int maxI = 0;
    for (int i = 0; i < 5; i++) {
        if (emp[i].salary > emp[maxI].salary) maxI = i;
        cout << "Given Employee data are: " << emp[i].ID << " " << emp[i].name << " " << emp[i].salary << endl;
    }

    printf("Employee with max salary: \nID: %d\nName: %s\nsalary: %d\n", emp[maxI].ID, emp[maxI].name,emp[maxI].salary);

    ofstream file;
    file.open("Employee.txt", ios::app);
    if(file.is_open()) {
        for (int i = 0; i < 5; i++) {
            file << "Employee details"  << endl << endl << "ID: " << emp[i].ID  << endl << "Name: " << emp[i].name  << endl << "Salary: " << emp[i].salary << endl << endl  << endl;
        }
        file.close();
    }

    return 0;
}