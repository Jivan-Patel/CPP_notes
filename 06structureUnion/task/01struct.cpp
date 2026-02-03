#include <iostream>
#include <string>

using namespace std;

struct Student {
    int ID;
    string name;
    int rollNum;
};

int main() {

    Student std[3];
    for(int i = 0; i < 3; i++) {
        cout << "Enter your ID: ";
        cin >> std[i].ID;
        cout << "Enter your name: ";
        cin >> std[i].name;
        cout << "Enter your roll number: ";
        cin >> std[i].rollNum;
    }

    for (int i = 0; i < 3; i++) {
        cout << "Given student data are: " << std[i].ID << " " << std[i].name << " " << std[i].rollNum << endl;
    }


    return 0;
}