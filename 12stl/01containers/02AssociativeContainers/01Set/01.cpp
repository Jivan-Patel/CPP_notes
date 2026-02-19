#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s1 = {15, 1, 2, 5, 55, 2};
    for (int num : s1) {
        cout << num << endl;
    }
    auto check = s1.find(5);

    if (check != s1.end())
        cout << "Found: " << *check << endl;
    else
        cout << "Not Found: " << *check << endl;

        
    
    if (s1.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    s1.clear();
    
    if (s1.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    return 0;
}