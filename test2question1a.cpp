#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string model;
    int year;
    float price;

public:
    // Constructor to initialize model, year, and price
    Car(string a_model, int a_year, float a_price)
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
};

int main()
{
    Car c1("Toyota Vios", 2020, 75000.00);
    cout << "\nCar Model: " << c1.getModel() << endl;
    c1.displayYearModel();

    return 0;
}
