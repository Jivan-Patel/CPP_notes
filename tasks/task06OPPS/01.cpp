// Class and object

#include <iostream>
#include <string>
using namespace std;

class Book {
    public: 
        int book_id;
        string book_name;
        int price;

        Book(int book_id, string book_name, int price) {
            this->book_id = book_id;
            this->book_name = book_name;
            this->price = price;
        }
        void display() {
            cout << "Book Details:" << endl;
            cout << "Id: " << book_id << endl;
            cout << "Name: " << book_name << endl;
            cout << "Price: ₹" << price << endl << endl;
        }
};

int main() {
    
    Book b1(1, "Book 1", 500);
    Book b2(2, "Book 2", 700);
    Book b3(3, "Book 3", 600);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}