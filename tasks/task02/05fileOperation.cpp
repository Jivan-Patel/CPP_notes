#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

bool checkfibo(int num) {
    int a = 0;
    int b = 1;
    int c = 1;
    while(a <= num) {
        a = b;
        b = c;
        c = a + b;
        if (a == num) return true;
    }
    return false;
}

string appendRes(int num) {
    ofstream file;
    file.open("sample.txt", ios::app);
    string res = "Error";
    if(file.is_open()) {
        res = (checkfibo(num)) ? "Fibonacii" : "Not Fibonacii";
        file << num << " is " << res << endl;
        file.close();
    }
    cout << res;
    return res;
}

int main() {
    int num;
    scanf("%d",&num);
    appendRes(num);

    return 0;
}