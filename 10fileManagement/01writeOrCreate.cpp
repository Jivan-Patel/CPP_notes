#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("sample.txt");
    if(file.is_open()) {
        file << "write operation in another file using ofstream" << endl;
        file.close();
    }

    return 0;
}