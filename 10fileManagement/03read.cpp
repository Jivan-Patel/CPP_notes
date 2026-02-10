#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string oneLine;
    ifstream file;
    file.open("sample.txt");
    if(file.is_open()) {
        while(getline(file,oneLine)) {
            cout << oneLine << endl;
        }
        file.close();
    }

    return 0;
}