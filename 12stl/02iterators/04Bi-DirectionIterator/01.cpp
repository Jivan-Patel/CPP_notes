#include<iostream>
#include <vector>
#include <list>
#include <set>
#include <forward_list>
#include <string>
using namespace std;

int main() {
    vector<char> v =  {'a','s','d','f'};
    auto itr1 = v.end();
    cout << "Travel in vector: " << endl;
    while (itr1 != v.begin()){
        itr1--;
        cout <<  *itr1 << " ";
    }
    
    list<string> li = {"Jivan", "Patel" ,"Rishab", "Anand", "Zeel"};
    auto itr2 = li.end();
    cout << endl << "Travel in List: " << endl;
    while (itr2 != li.begin()){
        itr2--;
        cout <<  *itr2 << ", ";
    }
    
    set<int> m1 = {1,2,3,4,5,6,7};
    auto itr3 = m1.end();
    cout << endl << "Travel in map: " << endl;
    while (itr3 != m1.begin()){
        itr3--;
        cout << *itr3 << " ";
    }


    // Not work in forward list
    
    // forward_list<int> fl = {1,2,3,4,5,6,7};
    // auto itr4 = fl.end();
    // cout << endl << "Travel in forward list: " << endl;
    // while (itr4 != fl.begin()){
    //     itr4--;
    //     cout << *itr4 << " ";
    // }

    return 0;
}