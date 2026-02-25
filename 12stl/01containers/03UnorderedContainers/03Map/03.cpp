#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m1 = {{5, "xyz"}};
    m1[2] = "sam";
    m1[7] = "Jivan";
    m1.insert({3, "Rishab"});
    m1.erase(3);
    cout << m1.at(7) << endl;
    for (auto& [key, value] : m1) {
        cout << key << ": " << value << endl;
    } 
    return 0;
}