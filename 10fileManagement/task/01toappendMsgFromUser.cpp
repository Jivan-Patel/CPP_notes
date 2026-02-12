// Take a message from user and store it in another file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string msg;
    cout << "Type your message: ";
    // cin >> msg;
    getline(cin,msg);
    ofstream file;
    file.open("userInpute.txt", ios::app);
    if(file.is_open()) {
        file << msg << endl;
        file.close();
    }

    return 0;
}