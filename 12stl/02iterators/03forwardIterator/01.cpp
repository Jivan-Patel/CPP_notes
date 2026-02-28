#include<iostream>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <forward_list>
using namespace std;

int main() {
    vector<char> v =  {'a','s','d','f'};
    auto itr1 = v.begin();
    cout << "Travel in vector: " << endl;
    while (itr1 != v.end()){
        cout <<  *itr1 << " ";
        itr1++;
    }
    
    list<string> li = {"Jivan", "Patel" ,"Rishab", "Anand", "Zeel"};
    auto itr2 = li.begin();
    cout << endl << "Travel in List: " << endl;
    while (itr2 != li.end()){
        cout <<  *itr2 << ", ";
        itr2++;
    }
    
    set<int> m1 = {1,2,3,4,5,6,7};
    auto itr3 = m1.begin();
    cout << endl << "Travel in map: " << endl;
    while (itr3 != m1.end()){
        cout << *itr3 << " ";
        itr3++;
    }

    forward_list<int> fl = {1,2,3,4,5,6,7};
    auto itr4 = fl.begin();
    cout << endl << "Travel in forward list: " << endl;
    while (itr4 != fl.end()){
        cout << *itr4 << " ";
        itr4++;
    }

    return 0;
}