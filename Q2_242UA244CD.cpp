#include <iostream>
#include <string>
using namespace std;

class Owner{

    private:
    string name;
    string phoneNumber;

    public:
    Owner(string n, string num){
        name = n;
        phoneNumber = num;
    }
    
    void displayOwner(){
        cout << "Owner Name: " << name << endl;
        cout << "Phone: " << phoneNumber << endl;
    }
};

class Car
{
private:
    Owner owner;
    string model;
    int year;
    float price;

public:
    // Constructor to initialize model, year, and price
    Car(string a_model, int a_year, float a_price, Owner own) : owner(own)
    {
        model = a_model;
        year = a_year;
        price = a_price;
    }

    // Return the car's model
    string getModel()
    {
        return model;
    }

    // Display car's model and year
    void displayYearModel()
    {
        cout << "Model: " << model << "\t" << "Year: " << year << endl;
    }

    // Return the car's price
    float getPrice()
    {
        return price;
    }

    // Update the car's price
    void setPrice(float a_price)
    {
        price = a_price;
    }

    void showOwnerInfo(){
        owner.displayOwner();
    }
};

class SpecialCar{

    private:
    string owner2;
    Car car;
    

public:
    // Constructor to initialize model, year, and price
    SpecialCar(string own2, Car c) : car(c) {
        owner2 = own2;
    }

    void showOwnerInfo(){
        car.showOwnerInfo();
        cout << "Second Owner: " << owner2;
    }
};


int main()
{
    Owner o1("Michael Coder", "019-8765432");
    Car c1("Honda Civic", 2022, 75000.00, o1);
    SpecialCar c2("Damian Hardung", c1);
   
    
    c1.displayYearModel();
    c2.showOwnerInfo();


    return 0;
}
