#include <iostream>
#include <string>
using namespace std;

class Product{

    private:
    string name;
    int pax;
    float price, total;

    public:
    Product (string p_name, int p_pax, float p_price){

        name = p_name;
        pax = p_pax;
        price = p_price;
    }

    void applyDiscount (float discount){
        total = (pax*price) - discount;
    }

    void print(){
        cout << "Name: " << name << endl;
        cout << "Quantity: " << pax << endl;
        cout << "Final Total: RM" << total << endl;

    }

};

int main()
{
    Product p1("Notebook", 4, 3.50);
    Product p2("Pen", 10, 1.20);

    p1.applyDiscount(2.00);
    p2.applyDiscount(1.50);

    cout << "Product 1" << endl;
    p1.print();

    cout << endl;

    cout << "Product 2" << endl;
    p2.print();

    return 0;
}