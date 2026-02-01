#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main() {
    vector<int> scores = {85, 90, 78, 92, 88};

    // Initialize random number generator
    random_device rd;
    mt19937 g(rd());

    // Shuffle the elements of the vector
    shuffle(scores.begin(), scores.end(), g);

    cout << "Shuffled scores: ";
    for (const auto& score : scores) {
        cout << score << " ";
    }

    return 0;
}