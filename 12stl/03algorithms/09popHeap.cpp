#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores = {85, 90, 78, 92, 88};
    make_heap(scores.begin(), scores.end());
    cout << "Heap: " << endl;
    for (const auto& score : scores) {
        cout << score << " ";
    }
    pop_heap(scores.begin(), scores.end());
    
    cout << endl << "Heap after pop_heap: " << endl;
    for (const auto& score : scores) {
        cout << score << " ";
    }
    
    cout << endl << "Heap after pop_back: " << endl;
    scores.pop_back();
    for (const auto& score : scores) {
        cout << score << " ";
    }

    return 0;
}