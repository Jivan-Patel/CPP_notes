#include<iostream>
#include<string>
using namespace std;

class Poly{
    private:
     
        int a1, b1;
        
    
    public:
    
        Poly(int a, int b){
            a1 = a;
            b1 = b;
            cout << "A1 value is: " << a1 << " and B1 value is: " << b1 << endl;
        }
        
        int operator+(Poly& p2){
            int c = this->a1 - p2.b1;
            return c;
        }
        
        void operator() (){
            cout << "Good Morning" << endl;
        }
        
        void operator++(){
            a1 += 5;
            b1 -= 10;
            
            cout << this->a1 << " and " << this->b1 << endl;
        }
        
        void operator++(int){
            --a1;
            --b1;
            cout << this->a1 << " and " << this->b1 << endl;
        }
    
};


int main(){
    
    Poly p1(23, 56);
    Poly p2(56, -45);
    
    cout << p1 + p2 << endl;
    
    p1();
    
    p1++;
    ++p1;

    return 0;
}