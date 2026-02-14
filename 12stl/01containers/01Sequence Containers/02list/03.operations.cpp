#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};
    cout << "Without any operations: " << endl;
    for (int num : l) cout << num << " ";
    
    l.push_front(5);  // Add at front
    l.push_back(40);  // Add at end
    cout << endl << endl << "After push from front and back: " << endl;
    
    for (int num : l) cout << num << " ";
    
    
    l.sort();      // Sort list

    cout << endl << endl << "After sort: " << endl;
    for (int num : l) cout << num << " ";
    
    l.reverse();      // Reverse list
    
    cout << endl << endl << "After reverse: " << endl;
    for (int num : l) cout << num << " ";
    
    return 0;
}