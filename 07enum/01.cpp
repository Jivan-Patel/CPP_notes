#include <iostream>
using namespace std;

enum words
{
    LOW,
    MID,
    HIGH
};

int main()
{
    enum words a1 = LOW;
    enum words a2 = MID;
    enum words a3 = HIGH;

    cout << "value of a1 is: " << a1 << endl;

    switch (a3)    {
    case 0:
        cout << "Case 0" << endl;
        break;
    case 1:
        cout << "Case 1" << endl;
        break;
    case 2:
        cout << "Case 2" << endl;
        break;

    default:
        cout << "Default" << endl;

        break;
    }

    return 0;
}