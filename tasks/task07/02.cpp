// Library Book Management

// Create a class Book with private members:

// bookId
// title
// author

// Functions:

// addBook() → input book information
// saveBook() → write book details into library.txt using ofstream
// displayBooks() → read book details using ifstream

// Use exception handling to:

// Handle the error if file does not exist or cannot be opened.


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Book {
    private:
        int bookId;
        string bookName;
        string author;
    public:
        void addBook(int id, string name, string auth) {
                bookId = id;
                bookName = name;
                author = auth;
                cout << "Book created successfully" << endl;
        }
        friend void saveBook(Book &p);
};

void saveBook(Book &book) {
    ofstream file;
    try {
        file.open("library.txt", ios::app);
        file << "Book id: " << book.bookId << endl;
        file << "Book name: " << book.bookName << endl;
        file << "Book Author: " << book.author << endl << endl;
        file.close();
        cout << book.bookName << " Saved successfully" << endl;
    }
    catch (...) {
        cout << "Something went's wrong" << endl;
    }
}

void displayBooks() {
    string line;
    ifstream file;
    try {
        file.open("library.txt");
        if(!file.is_open()) {
            string err = "File Does't exist";
            throw err;
        }
        while(getline(file,line)){
            cout << line << endl;
        }
        file.close();
    }
    catch (string err) {
        cout << err << endl;
    }
}

int main() {

    Book b1;
    b1.addBook(1, "Book1", "author1");

    Book b2;
    b2.addBook(2, "Book2", "author2");

    Book b3;
    b3.addBook(3, "Book3", "author3");

    saveBook(b1);
    saveBook(b2);
    saveBook(b3);

    displayBooks();

    return 0;
}