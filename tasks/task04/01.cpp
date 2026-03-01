#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main() {

    int size;
    vector<int> v;
    cout << "Enter size of a vector: ";
    cin >> size;
    cout << "Enter numbers:" << endl;
    for(int i = 0; i < size; i++) {
        int temp;
        cout << "Enter " << i << "th Element: ";
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    cout << endl << "After sort: ";
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl << "After reverse: ";
    reverse(v.begin(), v.end());
    for(int num : v) {
        cout << num << " ";
    }

    ofstream file;
    file.open("result.txt", ios::app);
    if(file.is_open()) {
        file << "v = ";
        for(int num : v) {
            file << endl << num << " ";
        }
        file.close();
    }

    return 0;
}