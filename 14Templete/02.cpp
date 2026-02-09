#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Pair{    
    public:      
      T1 first;
      T2 second;
      
      Pair(T1 a, T2 b){
          first = a;
          second = b;
      }
      
      void display(){
          cout << "First value is -> " << first << " and Second value is-> " << second << endl;
      }    
};

int main(){
    
    // map<int, string> m1();
    Pair<string, char>p1("Samir", 'G');
    p1.display();
    return 0;
}