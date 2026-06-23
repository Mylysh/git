#include <iostream>
using namespace std;

class Employee{
    protected:
    string e_name;
    string store_company;
    string store_department;
    unsigned int e_ID;
    double annualSalary;

    public:
    Employee (string name, unsigned int id, double salary){
        e_name = name;
        e_ID = id;
        annualSalary = salary;
    }

    void SetCompanyName(string company){
        store_company = company;

    }

    string GetCompanyName(){
        return store_company;
    }

    void SetDepartmentName(string department){
        store_department = department;
    }

    string GetDepartmentName(){
        return store_department;
    }

    string GetEmployeeName(){
        return e_name;
    }

    unsigned int GetEmployeeId(){
        return e_ID;
    }

    double GetAnnualSalary(){
        return annualSalary;
    }
};

class Manager : public Employee{
    protected:
    unsigned int num_exec;
    double bonus;

    public:
    Manager(string name, unsigned int id, double salary) : Employee(name, id, salary){}

    void setNumExecutives(unsigned int  num){
        num_exec = num;
    }

    double calculateBonus(){

        bonus = GetAnnualSalary() * (num_exec * 0.15);
        return bonus;
    }
  
};

class Engineer : public Employee{

    protected: 
    unsigned int num_tech;
    double bonustech;

    public:

    Engineer (string name, unsigned int id, double salary) : Employee(name, id, salary){}
    ~Engineer(){};

    void setNumTechnicians(unsigned int ntech){
        num_tech = ntech;
    }

    double calculateBonus(){
        
        bonustech = GetAnnualSalary() * (num_tech * 0.1);
        return bonustech;

    }
};

int main (){

    string company, department;
    string name;
    unsigned int id, numExec, numTech;
    double salary;

    cout << ("Please enter the name of the company: ");
    getline (cin, company);

    cout << ("Please enter the name of the departnent: ");
    getline (cin, department);

    cout << ("Enter name: ");
    getline (cin, name);

    cout << ("Enter id: ");
    cin >> id;

    cout << ("Enter salary: ");
    cin >> salary;

    Manager m(name, id , salary);

    m.SetCompanyName(company);
    m.SetDepartmentName(department);

    cout << ("Enter number of executives handled: ");
    cin >> numExec;
    cout << endl;

    cin.ignore();

    m.setNumExecutives(numExec);

    cout << ("Please enter the name of the company: ");
    getline (cin, company);

    cout << ("Please enter the name of the departnent: ");
    getline (cin, department);

    cout << ("Enter name: ");
    getline (cin, name);

    cout << ("Enter id: ");
    cin >> id;

    cout << ("Enter salary: ");
    cin >> salary;


    Engineer e(name, id , salary);

    e.SetCompanyName(company);
    e.SetDepartmentName(department);

    cout << ("Enter number of executives handled: ");
    cin >> numTech;
    cout << endl << endl;

    e.setNumTechnicians(numTech);

    cout << "Manager" << endl << endl;
    
    cout << "Name: " << m.GetEmployeeName() << endl;
    cout << "ID: " << m.GetEmployeeId() << endl;
    cout << "Company Name: " << m.GetCompanyName() << endl;
    cout << "Depertment Name: " << m.GetDepartmentName() << endl;
    cout << "Annual Salary: " << m.GetAnnualSalary() << endl;
    cout << "Bonus received: " << m.calculateBonus() << endl << endl;

    cout << "Engineer" << endl << endl;

    cout << "Name: " << e.GetEmployeeName() << endl;
    cout << "ID: " << e.GetEmployeeId() << endl;
    cout << "Company Name: " << e.GetCompanyName() << endl;
    cout << "Depertment Name: " << e.GetDepartmentName() << endl;
    cout << "Annual Salary: " << e.GetAnnualSalary() << endl;
    cout << "Bonus received: " << e.calculateBonus() << endl;   



}

