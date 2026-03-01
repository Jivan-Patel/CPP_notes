#include <iostream>
using namespace std;

int main() {

    string a;
    cout << "Enter a string: ";
    cin >> a;
    int i = 0, j = a.size() - 1;
    bool check = true;
    while (i < j) {
        if(a[i] != a[j]) check = false;
        i++;
        j--;
    }
    cout << check;

    return 0;
}