#include <iostream>
using namespace std;

class Purchase{

    private:
    int qty;
    float price;
    string itemName;
    float total;

    public:
    Purchase(string name, int quantity, float p);
    void set_data(string name, int quantity, float p); 
    void calculate();
    void printf();

    
};

    Purchase :: Purchase(string name, int quantity, float p){

        itemName = name;
        qty = quantity;
        price = p;
    };

    void Purchase :: set_data(string name, int quantity, float p){

        itemName = name;
        qty = quantity;
        price = p;

    };

    void Purchase :: calculate(){
        total = price*qty;

    };

    void Purchase :: printf(){
        
        cout << "------------------------" << endl;
        cout << "\tRECEIPT\t" << endl;
        cout << "------------------------" << endl;
        cout << "Name\t\t: " << itemName << endl;
        cout << "Quantity\t: " << qty << endl;
        cout << "Price\t\t: RM " << price << endl;
        cout << "Payment\t\t: RM " << total << endl;

    };


int main (){

    Purchase p1("", 0, 0.0);

    string name;
    int quantity;
    float price;

    cout << "------------------------" << endl;
    cout << "\tWELCOME\t" << endl;
    cout << "------------------------" << endl;
    cout << "Enter item\t: ";
    cin >> name;
    cout << "Enter quantity\t: ";
    cin >> quantity;
    cout << "Enter price\t: RM ";
    cin >> price;

    p1.set_data(name, quantity, price);
    p1.calculate();
    p1.printf();

    return 0;   

};