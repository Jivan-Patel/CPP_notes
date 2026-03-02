#include <iostream>
#include <math.h>
using namespace std;

long long int func(int arr[]) {
    string numString = "";
    for(int i = 0; i < 5; i++) {
        numString += to_string(arr[i]);
    }
    return stoll(numString) + 1;
}

long long int func(int arr[]) {
    long long int num = 0;
    for(int i = 0; i < 5; i++) {
        int len = to_string(arr[i]).size();
        num = (num * pow(10, len)) + arr[i];
    }
    return num+1;
}

int main() {
    int arr1[] = {1,2,3,4,5};
    cout << func(arr1) << endl;

    return 0;
}