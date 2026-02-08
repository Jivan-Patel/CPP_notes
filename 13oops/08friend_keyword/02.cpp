#include <iostream>
using namespace std;

class Triangle;

class Rectangle {
    private:
        int length , width;
    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }
    friend void area(Rectangle &r, Triangle &t);
};

class Triangle {
    private:
        int length , width;
    public:
        Triangle(int l, int w) {
            length = l;
            width = w;
        }
    friend void area(Rectangle &r, Triangle &t);
};

void area(Rectangle &rec, Triangle &tri) {
    cout << "Area of rectangle is " << rec.length * rec.width << endl;
    cout << "Area of triangle is " << tri.length * rec.width * 0.5 << endl;
}

int main() {
    Rectangle r(5, 6);
    Triangle t(5, 6);

    area(r,t);

    return 0;
}