#include<iostream>
#include<list>
#include <algorithm>

using namespace std;
int main() {
    list<int> l1;
    list<int> l2;
    int m , n;
    cin >> m;
    cin >> n;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        l1.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        l2.push_back(temp);
    }
    

    list<int> con;
    for(int num: l1) {
        con.push_back(num);
    }
    for(int num: l2) {
        con.push_back(num);
    }

    con.sort();

    for(int num : con) {
        cout << num << " ";
    }
    
    con.reverse();
    for(int num : con) {
        cout << num << " ";
    }


    return 0;
}