#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int mark;

public:
    Student(string n, int m) {
        name = n;
        mark = m;
    }

    string getName(){
        return name;
    }

    int getMark(){
        return mark;
    }

};

int main()
{
    Student s1("Ali", 80);
    Student s2("Maya", 95);

    cout << s1.getName() << " scored " << s1.getMark() << endl;
    cout << s2.getName() << " scored " << s2.getMark() << endl;

    return 0;
}