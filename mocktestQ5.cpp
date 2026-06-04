#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    string getTitle() {
        return title;
    }

    int getPages() {
        return pages;
    }
};

int main()
{
    Book b1("C++ Basics", 120);

    cout << "Title: " << b1.getTitle() << endl;
    cout << "Pages: " << b1.getPages() << endl;

    return 0;
}