#include <iostream>
#include <string>
using namespace std;

class ContactInfo{

    private:
    string address;
    string phoneNumber;

    public:
    ContactInfo(string a, string num){
        address = a;
        phoneNumber = num;
    }

    void displayContact(){
        cout << "Address : " << address <<endl;
        cout << "Phone Number : " << phoneNumber << endl;

    }
};

class Student{

    private:
    ContactInfo contact;
    string name;
    int id;
    float gpa;

    public:
    Student (string a_name, int a_id, float a_gpa, ContactInfo c) : contact(c){

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
    void showContactInfo(){

        contact.displayContact();
        

    }

    float getGPA(){
        return gpa;
    }

    void setGPA(float a_gpa){
        gpa = a_gpa;

    }
    

};



int main (){
    ContactInfo c1 ("No 789 , Clean Street, Kuala Lumpur, Malaysia", "603-8765123");
    Student s1("Amir Khan", 567891, 3.99, c1);
    cout << "\nStudent Name: " << s1.getName() << endl;
    s1.displayIDName();
    s1.showContactInfo();

    return 0; 
}
