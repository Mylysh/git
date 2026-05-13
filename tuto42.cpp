#include <iostream>
using namespace std;

class Temperature
{
private:
    double tempCel;
    double tempFar;

public:
    Temperature(); // default constructor

    Temperature(char unit, double value); // parameterized constructor

    double getCels();
    double getFar();
    void equal(Temperature obj);
};

// Default constructor: 0°C = 32°F
Temperature::Temperature() {
    tempCel = 0.0;
    tempFar = 32.0;
}

// Parameterized constructor
Temperature::Temperature(char unit, double value) {
    if (unit == 'C') {
        tempCel = value;
        tempFar = (tempCel * 9.0 / 5.0) + 32.0;
    }
    else if (unit == 'F') {
        tempFar = value;
        tempCel = (tempFar - 32.0) * 5.0 / 9.0;
    }
    else {
        // Invalid input — default to 0C / 32F
        tempCel = 0.0;
        tempFar = 32.0;
    }
}

double Temperature::getCels() {
    return tempCel;
}

double Temperature::getFar() {
    return tempFar;
}

void Temperature::equal(Temperature obj) {
    tempCel = obj.tempCel;
    tempFar = obj.tempFar;
}

// Driver program
int main()
{
    Temperature t1('C', 100), t2('F', 100);

    cout << "t1 = " << t1.getCels() << " C\n";
    cout << "t1 = " << t1.getFar()  << " F\n";

    cout << "t2 = " << t2.getCels() << " C\n";
    cout << "t2 = " << t2.getFar()  << " F\n";

    t1.equal(t2);    // assign value in t2 to t1
    cout << "After assigning t2 to t1" << endl;

    cout << "t1 = " << t1.getCels() << " C\n";
    cout << "t1 = " << t1.getFar()  << " F\n";

    return 0;
}