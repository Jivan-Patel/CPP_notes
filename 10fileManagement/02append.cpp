#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("sample.txt", ios::app);
    if(file.is_open()) {
        file << "append any data into another file" << endl;
        file.close();
    }

    return 0;
}