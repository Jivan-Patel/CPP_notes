#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = NULL; // NULL Pointer
    int *ptr3;        // Wild Pointer

    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr3 = " << *ptr3 << endl;

    return 0;
}