#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee{

    private: 
    string name;
    double salary;

    public:
    Employee () {};
    Employee(string name, double a_salary){
        this-> name = name;
        salary = a_salary;
    }

    string getName(){
        return name;
    }

    void setName(string a_name){

        name = a_name;

    }

    double getSalary(){
        return salary;
    }

    void setSalary(double a_salary){ salary = a_salary;}

    void displayStaffInformation(){

        cout << "Name : " << name;
        cout << ", Salary = RM" << salary << endl;

    }

    void incrementSalary(float a_rate){
        if (salary < 2000){
            salary = salary + (salary*a_rate);
        }

        else{
            cout << name << "Staff is not qualified for salary increment";
        }

    }
};

class Company{

    private:

    int numberOfStaff = 0;
    Employee* staffList;

    public:

    Company () {
        numberOfStaff = 0;
        staffList = nullptr;
    }

    void getDataFromFile (string filename){
        fstream mfile;
        mfile.open(filename);

        if (!mfile){
            cout << "Could not open file " << filename << "." << endl;
            return;
        }

        string line;
        numberOfStaff = 0;
        while (getline(mfile, line)){
            numberOfStaff++;
        }
            staffList = new Employee[numberOfStaff];




    mfile.close();  
    mfile.open(filename);

    for (int n = 0 ; n < numberOfStaff; n++){
        getline(mfile,line);
        staffList[n].setName(line);
    }
    
    return;

    }

    void getSalaryFromFile(string filename){
        fstream ffile;
        ffile.open(filename);

        if (!ffile){
            cout << "Could not open file " << filename << "." << endl;
            return;
        }

        string line;
        int i=0;
        while (getline(ffile, line) && i < numberOfStaff){
            staffList[i].setSalary(stof(line));
            i++;
        }

        for (int j = 0; j < numberOfStaff; j++){
            staffList[j].displayStaffInformation();
        }

        ffile.close();
    }

    void showAllStaff(){
    cout << "List of staff" << endl;
    int count=0;

    for (int m = 0; m < numberOfStaff; m++){
            cout<< staffList[m].getName() << endl;
            count++;

    }
    cout << "Number of staff = " << count;
}

};

int main () {
    Employee e1 = Employee("Nurazlan", 1800);
    e1.displayStaffInformation();
    e1.incrementSalary(0.20);
    cout << "\nAfter salary increment" << endl;
    e1.displayStaffInformation();
    Employee e2 = Employee("Donald James", 3500);
    e2.incrementSalary(0.20);

    Company astro;
    cout << "\n\nReading staff name form text file " << endl;
    astro.getDataFromFile("staff.txt");
    astro.showAllStaff();
    cout << endl;
    cout << "\nReading salary from text file " << endl;
    astro.getSalaryFromFile("salary.txt");

    cout << "\n\n" ;

}