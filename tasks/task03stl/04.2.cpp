#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> v;

    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        if (i % 2 == 0) v.erase(v.begin() + i);
    }

    cout << endl << "Result" << endl;

    for (int num : v) {
        cout << num << endl;
    }

    cout << "Total Size of vector: " << v.size();

    return 0;
}