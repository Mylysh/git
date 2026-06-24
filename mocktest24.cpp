#include <iostream>
#include <string>
using namespace std;

// ================= Person =================
class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// ================= Department =================
class Department
{
private:
    string departmentName;
    string location;

public:
    Department(string d, string l)
    {
        departmentName = d;
        location = l;
    }

    void displayDepartment()
    {
        cout << "Department Name: " << departmentName << endl;
        cout << "Location: " << location << endl;
    }
};

// ================= Employee =================
class Employee : public Person
{
private:
    int employeeID;
    float salary;

public:
    Employee(string n, int a, int id, float s)
        : Person(n, a)
    {
        employeeID = id;
        salary = s;
    }

    void displayEmployee()
    {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }

    void setSalary(float s)
    {
        salary = s;
    }
};

// ================= Manager =================
class Manager : public Employee
{
private:
    string level;
    Department department;

public:
    Manager(string n,
            int a,
            int id,
            float s,
            string lvl,
            Department dept)
        : Employee(n, a, id, s),
          department(dept)
    {
        level = lvl;
    }

    void displayManager()
    {
        cout << "Manager Information\n" << endl;

        displayEmployee();

        cout << "\nLevel: " << level << endl;

        cout << "\nDepartment Information" << endl;
        department.displayDepartment();
    }
};

// ================= Main =================
int main()
{
    Department dept(
        "Information Technology",
        "Cyberjaya");

    Manager obj(
        "Sarah Lim",
        45,
        8801,
        9200,
        "Senior Manager",
        dept);

    obj.displayManager();

    cout << "\n\nAfter Salary Update\n" << endl;

    obj.setSalary(10000);

    obj.displayManager();

    return 0;
}