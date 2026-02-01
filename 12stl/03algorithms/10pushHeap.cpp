#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores = {85, 90, 78, 92, 88};

    // Create a max-heap
    make_heap(scores.begin(), scores.end());
    cout << "Heap: " << endl;
    for (const auto& score : scores) {
        cout << score << " ";
    }
    // Insert a new element into the heap
    scores.push_back(79);
    
    cout << endl << "Heap after push_back: " << endl;
    for (const auto& score : scores) {
        cout << score << " ";
    }
    push_heap(scores.begin(), scores.end());
    cout << endl << "Heap after push_heap: " << endl;
    for (const auto& score : scores) {
        cout << score << " ";
    }

    return 0;
}