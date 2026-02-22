#include<iostream>
#include<map>
using namespace std;

int main() {

    multimap<int, string> m1;
    m1.insert({1, "Jivan"});
    m1.insert({2, "Anand"});
    m1.insert({3, "Rishab"});
    m1.insert({1, "Jivan2"});

    for (auto& [key, value] : m1) {
        cout << key << ": " << value << endl;
    }

    return 0;
}