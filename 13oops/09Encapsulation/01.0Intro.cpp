#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter methods
    void setName(string n) { name = n; }
    void setAge(int a) {
        if(a > 0) age = a;  // Data validation
        else cout << "Invalid age!" << endl;
    }

    // Getter methods
    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    Student s;
    s.setName("Jenil");
    s.setAge(20);
    cout << "The age of " << s.getName() << " is " << s.getAge() << "." << endl;
    return 0;
}


// Encapsulation is a methodology or process to bind the Data members with their member function
// so no one can access the datamembers directly without the help of it's member function