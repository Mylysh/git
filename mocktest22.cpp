#include <iostream>
#include <string>
using namespace std;

class Publisher{
    private:

    string companyName;
    string country;

    public:

    Publisher (string name, string c){
        
        companyName = name;
        country = c;
    }

    void displayPublisher(){

        cout << "Name of Publisher : " << companyName << endl;
        cout << "Country : " << country << endl;
    }
};

class Book
{
private:
    Publisher publisher;
    string title;
    int bookID;
    float price;

public:
    // Constructor to initialize all member variables
    Book(string a_title, int a_bookID, float a_price, Publisher p) : publisher(p)
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

    void displayPublisherInfo(){
        publisher.displayPublisher();
    }
};

int main()
{
    Publisher p1("Tech Books Publishing", "Malaysia");
    Book b1("Object Oriented Program", 7001, 89.50, p1);

    cout << "Book Information" << endl;
    b1.displayTitleID();
    cout << "Price : " << b1.getPrice() << endl << endl;

    cout << "Publisher Information" << endl;
    b1.displayPublisherInfo();

    return 0;
}