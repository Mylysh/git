#include <iostream>
using namespace std;

class Purchase{

    private:
    int total_qty = 0, qty;
    float price;
    string itemName;
    float total = 0, subtotal;

    public:
    Purchase(string name, int quantity, float p);
    void set_data(string name, int quantity, float p); 
    void calculate();
    void printf();
    void printtotal();
    int getTotalItem(){
        total_qty = total_qty + qty;
        return total_qty; 
       

    };

    float getTotalPrice(){
        total = total + subtotal;
        return total;
    };

    
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
        
        subtotal = price*qty;
        

    };

    void Purchase :: printf(){
        
        cout << "========================" << endl;
        cout << "Subtotal : RM " << subtotal << endl;
        cout << "========================" << endl;

    };

    void Purchase :: printtotal(){

        cout << "========================" << endl;
        cout << "\tGRAND TOTAL\t" << endl;
        cout << "========================" << endl;
        cout << "Total number of items\t:" << total_qty << endl;
        cout << "Total amount to be paid\t: RM" << total << endl;
        

    }


int main (){

    Purchase p1("", 0, 0.0);

    string name;
    int quantity;
    float price;

    cout << "========================" << endl;
    cout << "\tWELCOME\t" << endl;
    cout << "========================" << endl;
    
    while (true){

    cout << "Enter item <'Q' to quit > : ";
    cin >> name;

    if (name == "Q" || name == "q"){
        break;
    }
    cout << "Enter quantity\t: ";
    cin >> quantity;
    cout << "Enter price\t: RM ";
    cin >> price;

    p1.set_data(name, quantity, price);
    p1.calculate();
    p1.printf();
    p1.getTotalItem();
    p1.getTotalPrice();
};


p1.printtotal();

    return 0;   

};