// Multiple inheritance
#include <iostream>
using namespace std;

class Base {
    public:
        int length;
        int width;
        Base(int length, int width) {
            this->length = length;
            this->width = width;
        }
};
class Rectangle : public Base {
    public:
        Rectangle(int length, int width) : Base(length, width){}
        void area(){
            cout << "Area of rectangle is " << length * width << endl;
        }
};
class Triangle : public Base {
    public:
        Triangle(int length, int width) : Base(length, width){}
        void area(){
            cout << "Area of triangle is " << length * width * 0.5 << endl;
        }
};

int main() {
    
    Rectangle r(5,5);
    Triangle t(5,5);

    r.area();
    t.area();

    return 0;
}