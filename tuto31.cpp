#include <iostream>
using namespace std;

class Book{

    private:
    string title;
    string currency;
    float price;

    public:
    Book(string a_title, float a_price, string a_currency);
    float getPrice();
    string getTitle();
    void showPriceTitle();


};

Book :: Book(string a_title, float a_price, string a_currency){

    title = a_title;
    currency = a_currency;
    price = a_price;

};

float Book :: getPrice(){

    if (currency == "RM"){
        return price;
    }

    else if (currency == "USD"){
        return price * 4.75;
    }

    return price;
};

string Book :: getTitle(){

    return title;
};

void Book :: showPriceTitle(){

    cout << "Title of book : " << title << endl;
    cout << " Price in RM = " << getPrice();
};

int main (){

    Book b1("C++ is Fun", 50.0, "RM");
    cout << "\n I just bought the book " << b1.getTitle() << endl;
    b1.showPriceTitle();

    cout << endl;
    Book b2("Snow White", 50.0, "USD");
    cout << "\n I just bought the book " << b2.getTitle() << endl;
    b2.showPriceTitle();
    

}


