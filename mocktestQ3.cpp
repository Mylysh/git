#include <iostream>
#include <string>
using namespace std;

class Counter {
private:
    string name;
    static int count;

public:
    Counter(string n) {
        name = n;
        count++;
        cout << name << " created" << endl;
    }

    void showCount() {
        cout << "Total objects: " << count << endl;
    }
};

int Counter::count = 0;

int main()
{
    Counter c1("First");
    c1.showCount();

    Counter c2("Second");
    c2.showCount();

    Counter c3("Third");
    c1.showCount();

    return 0;
}