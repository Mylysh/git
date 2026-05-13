#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Purchase {
private:
    int qty;
    float price;
    string itemName;
    float total;

public:
    Purchase(string name, int quantity, float p);
    void set_data(string name, int quantity, float p);
    void calculate();
    void print();
    float getTotal();
    int getQty();
};

// Constructor
Purchase::Purchase(string name, int quantity, float p) {
    itemName = name;
    qty = quantity;
    price = p;
    total = 0;
}

// set_data function
void Purchase::set_data(string name, int quantity, float p) {
    itemName = name;
    qty = quantity;
    price = p;
}

// calculate function
void Purchase::calculate() {
    total = qty * price;
}

// print function (subtotal per item)
void Purchase::print() {
    cout << "==============================" << endl;
    cout << "Subtotal : RM " << fixed << setprecision(2) << total << endl;
    cout << "==============================" << endl;
}

// Getter for total
float Purchase::getTotal() {
    return total;
}

// Getter for qty
int Purchase::getQty() {
    return qty;
}

int main() {
    string name;
    int quantity;
    float price;
    float grandTotal = 0;
    int totalItems = 0;

    cout << "==============================" << endl;
    cout << "            WELCOME           " << endl;
    cout << "==============================" << endl;

    while (true) {
        cout << "Enter item ('Q' to quit) : ";
        cin >> name;

        if (name == "Q" || name == "q") {
            cout << "==============================" << endl;
            break;
        }

        cout << "Enter quantity : ";
        cin >> quantity;
        cout << "Enter price    : RM ";
        cin >> price;

        Purchase p1(name, quantity, price);
        p1.set_data(name, quantity, price);
        p1.calculate();
        p1.print();

        grandTotal += p1.getTotal();
        totalItems += p1.getQty();
    }

    cout << "          GRAND TOTAL         " << endl;
    cout << "==============================" << endl;
    cout << "Total number of items  :" << totalItems << endl;
    cout << "Total amount to be paid: RM" << fixed << setprecision(2) << grandTotal << endl;

    return 0;
}