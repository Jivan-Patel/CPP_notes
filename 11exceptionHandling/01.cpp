#include <iostream>
using namespace std;

void voteEligibility(int age) {
    try {
        if(age >= 18) 
            cout << "You are eligible to vote." << endl;
        else 
            throw age;
    }
    catch (int age) {
        cout << "You are not eligible to vote bcz your age is " << age << " which is less than 18." << endl;
    }
}

int main() {
    
    voteEligibility(18);
    voteEligibility(8);

    return 0;
}