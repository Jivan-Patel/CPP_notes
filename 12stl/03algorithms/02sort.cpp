#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    deque<int> scores = {85, 90, 78, 92, 88};

    // Sort scores in ascending order
    sort(scores.begin(), scores.end());

    cout << "Sorted scores: ";
    for (auto& score : scores) {
        cout << score << " ";
    }

    return 0;
}