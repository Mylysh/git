#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    int bookID;
    float price;

public:
    // Constructor to initialize all member variables
    Book(string a_title, int a_bookID, float a_price)
    {
        title = a_title;
        bookID = a_bookID;
        price = a_price;
    }

    // Return the book title
    string getTitle()
    {
        return title;
    }

    // Display the title and book ID
    void displayTitleID()
    {
        cout << "Title : " << title << endl;
        cout << "Book ID : " << bookID << endl;
    }

    // Return the price
    float getPrice()
    {
        return price;
    }

    // Update the price
    void setPrice(float a_price)
    {
        price = a_price;
    }
};

int main()
{
    Book b1("C++ Fundamentals", 501, 59.90);

    cout << "Book Title: " << b1.getTitle() << endl;
    b1.displayTitleID();

    return 0;
}