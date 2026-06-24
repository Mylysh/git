#include <iostream>
#include <string>
using namespace std;

class Student{

    private:
    string name;
    int id;
    float gpa;

    public:
    Student (string a_name, int a_id, float a_gpa){

        name = a_name;
        id = a_id; 
        gpa = a_gpa;
    }

    string getName(){
        return name;

    }

    void displayIDName(){
        cout << "Name : "<< name << "\tID : " << id;
    }

    float getGPA(){
        return gpa;
    }

    void setGPA(float a_gpa){

    }
    

};

int main (){
    Student s1("Alice", 1001, 3.8);
    cout << "\nStudent Name: " << s1.getName() << endl;
    s1.displayIDName();

    return 0; 
}
