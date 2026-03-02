// 4. Product Inventory System

// Create a class Product with private members:

// productId
// productName
// price

// Functions:

// addProduct() → input product details
// writeProduct() → store data into product.txt using ofstream
// readProduct() → read product list using ifstream

// Use exception handling to:

// Throw an exception if the price is less than 0.


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Product {
    private:
        int productId;
        string productName;
        int price;
    public:
        void addProduct(int id, string name, int p) {
            try {
                if(p <= 0) throw p;
                productId = id;
                productName = name;
                price = p;
                cout << "Product created successfully" << endl;
            }
            catch (int price){
                cout << "Price should be greater than 0, it can't be " << price << endl;
            }
        }
        friend void writeProduct(Product &p);
};

void writeProduct(Product &p) {
    ofstream file;
    file.open("product.txt", ios::app);
    if(file.is_open()) {
        file << "Product id: " << p.productId << endl;
        file << "Product name: " << p.productName << endl;
        file << "Product price: " << p.price << endl << endl;
        file.close();
    }
}

void readProduct() {
    string line;
    ifstream file;
    file.open("product.txt");
    if(file.is_open()) {
        while(getline(file,line)){
            cout << line << endl;
        }
        file.close();
    }
}

int main() {

    Product p1;
    p1.addProduct(1, "Mobile", 45000);
    Product p2;
    p2.addProduct(2, "Car", 500000);
    Product p3;
    p3.addProduct(2, "Car", -500000);


    writeProduct(p1);
    writeProduct(p2);

    readProduct();

    return 0;
}