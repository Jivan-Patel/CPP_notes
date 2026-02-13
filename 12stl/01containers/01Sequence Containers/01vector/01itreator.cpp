#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    for (int value : v) {
        cout << value << endl;
    }
    
    return 0;
}