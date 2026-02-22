#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> s1 = {15, 1, 2, 5, 55, 2};
    for (int num : s1) {
        cout << num << endl;
    }

    if (s1.count(22))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}