#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string name;
    int employeeID;
    float salary;

    public:
    Employee(string n, int id, float s){

        name = n;
        employeeID = id;
        salary = s;
    } 

    string getName(){
        return name;
    }

    int getEmployeeID(){
        return employeeID;
    }
    float getSalary(){
        return salary;
    
    }
    void displayEmployee(){
        cout << "Name : " << name << endl;
        cout << "Employee ID : " << employeeID << endl;
        cout << "Salary : " << salary << endl << endl;
        

    }

};

class Office {

    private: 
    string roomNumber;
    string buildingName;

    public:
    Office(string r, string b){
        roomNumber = r;
        buildingName = b;
    }

    void displayOffice(){

        cout << "Room Number : " << roomNumber << endl;
        cout << "Building Name : " << buildingName << endl;
    }

};

class Lecturer : public Employee {

    private:
    Office office;
    string subject;

    public:
    Lecturer(string n, int id, float s, string subj, Office off) : Employee(n,id,s), office(off){

        subject = subj;
    }

    void displayLecturer(){
        displayEmployee();
        cout << "Subject : " << subject << endl << endl;
        office.displayOffice();
    }
};

int main(){

    Office o1 ("B-12-03", "Engineering Block");
    Lecturer l1("Dr Ali", 9001, 6500.00,  "Object Oriented Programming", o1);

    cout << "Lecturer Information" << endl << endl;
    l1.displayLecturer();

}