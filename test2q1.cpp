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
        cout << "Name : "<< name << "\nID : " << id << endl;
    }

    float getGPA(){
        return gpa;
    }

    void setGPA(float a_gpa){

    }
    

};

class ContactInfo{

    private:
    string address;
    string phoneNumber;

    public:

    ContactInfo( string a , string n){
        address = a;
        phoneNumber = n;
    }

    void displayContact(){
        cout << "Address : " << address << endl;
        cout << "Phone Number : " << phoneNumber << endl;

    }
};

int main (){
    Student s1("Alice", 1001, 3.8);
    ContactInfo c1("123 Street Cyberjaya Malaysia", "603-83124311");
    cout << "\nStudent Name: " << s1.getName() << endl;
    s1.displayIDName();
    c1.displayContact();

    return 0; 
}
