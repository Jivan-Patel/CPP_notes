#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Add at end
    v.push_back(40);
    
    // Remove last element
    v.pop_back();

    // Insert 15 at index 1
    v.insert(v.begin() + 2, 15);

    // Removes an element at a given position
    v.erase(v.begin() + 1);

    // Return size of vector
    int i = v.size();
    cout << "Size: " << i << endl;

    // Return first or last element
    int first = v.front();
    int last = v.back();
    cout << "First element: " << first << endl
         << "Last element: " << last << endl;

    // Returns the element at the specified index
    int elementAt1 = v.at(1);
    cout << "Element at 1st index: " << elementAt1 << endl;

    // Removes all elements
    v.clear();

    for (int value : v) {
        cout << value << endl;
    }

    return 0;
}