#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int den = 1) {
        numerator = num;
        denominator = den;
    }

    Fraction add(Fraction f) {
        int newNumerator   = (numerator * f.denominator) + (f.numerator * denominator);
        int newDenominator = denominator * f.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction multiply(Fraction f) {
        int newNumerator   = numerator   * f.numerator;
        int newDenominator = denominator * f.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(1, 2);
    Fraction result;

    cout << "f1: ";
    f1.display();

    cout << "f2: ";
    f2.display();

    cout << "f1 + f2: ";
    result = f1.add(f2);
    result.display();

    cout << "f1 * f2: ";
    result = f1.multiply(f2);
    result.display();

    return 0;
}
