#include <iostream>
#include <string>
using namespace std;

class MovieTicket{
    private:
    string name;
    int pax;
    float price, total;

    public:
    MovieTicket(string m_name, int m_pax, float m_price){

        name = m_name;
        pax = m_pax;
        price = m_price;

    }

    void calculateTotal(){

        total = pax*price;

    }

    void print(){

        cout << "Movie: " << name << endl;
        cout << "Quantity: " << pax << endl;
        cout << "Total: RM" << total << endl;

    }
};

int main()
{
    MovieTicket t1("Avengers", 2, 18.50);
    MovieTicket t2("Frozen", 3, 15.00);

    cout << "Ticket 1" << endl;
    t1.calculateTotal();
    t1.print();

    cout << endl;

    cout << "Ticket 2" << endl;
    t2.calculateTotal();
    t2.print();

    return 0;
}