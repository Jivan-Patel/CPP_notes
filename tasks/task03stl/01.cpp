#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> v1;
    for(int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    // for(int i = 0; i < v1.size(); i++) {
    //     for(int j = i + 1; j < v1.size();j++){
    //         if(v1[i] > v1[j]) {
    //             int temp = v1[i];
    //             v1[i] = v1[j];
    //             v1[j] = temp;
    //         }
    //     }
    // }
    sort(v1.begin(), v1.end());

    cout << endl << "Incresing order: ";
    for(int num : v1){
        cout << num << " ";
    }
    // int i = 0;
    // int j = v1.size() - 1;
    // while(i<j) {
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    //     i++;
    //     j--;
    // }
    reverse(v1.begin(),v1.end());
    
    cout << endl << "Decricing order: ";
    for(int num : v1){
        cout << num << " ";
    }


    return 0;
}