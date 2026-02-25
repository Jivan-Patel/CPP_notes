#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m1;
    m1[2] = "sam";
    m1[7] = "Jivan";
    m1.insert({3, "Rishab"});
    m1[7] = "New Jivan";

    for (auto& [key, value] : m1)
        cout << key << ": " << value << endl;

    return 0;
}