#include <iostream>
using namespace std;

class ClassName {
    public:
    int a;
        ClassName(int n1) {
            a = n1;
        }
        // Now the '+' operator preform substraction
        int operator+ (ClassName &o) {
            int c = this->a - o.a ;
            return c;
        }
       
        // Now the '-' operator preform substraction
        int operator- (ClassName &o) {
            int c = this->a + o.a ;
            return c;
        }
};

int main() {
    
    ClassName o1(18);
    ClassName o2(11);

    cout << "o1 + o2 = " << o1 + o2 << endl;
    cout << "o1 - o2 = " << o1 - o2 << endl;

    return 0;
}