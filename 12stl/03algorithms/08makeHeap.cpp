#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores = {85, 90, 78, 92, 88};
    cout << "Before Heap: ";
    for (const auto& score : scores) {
        cout << score << " ";
    }

    // Create a max-heap
    make_heap(scores.begin(), scores.end());
    cout << endl << "After Heap: ";
    for (const auto& score : scores) {
        cout << score << " ";
    }
    
    return 0;
}