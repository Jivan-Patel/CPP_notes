#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<string, int> m2;
    m2["Sam"] = 1;
    m2["Jivan"] = 7;
    m2.insert({"3", 7});

    for (auto& [key, value] : m2) {
        cout << key << ": " << value << endl;
    }
    return 0;
}