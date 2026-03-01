#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;
int main() {
    deque<string> d;
    
    for(int i = 0; i < 3; i++) {
        string x;
        cin >> x;
        d.push_front(x);
    }

    cout << "Data resived, Enter an index";
    int i;
    cin >> i;

    if(i < d.size())
        cout << d.at(i) << endl;
    else
        cout << "Not a valid index";
    

    return 0;
}