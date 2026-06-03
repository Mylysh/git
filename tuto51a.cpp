#include <iostream>
using namespace std;

class Fraction{
    private:
    int numerator, denominator;

    public:
    Fraction(int num = 0, int denom = 1){
        numerator = num;
        denominator = denom;
    };

    Fraction add(Fraction f){
        int newNum = (numerator * f.denominator) + (f.numerator * denominator);
        int newDenom = (denominator * f.denominator);

        return Fraction (newNum, newDenom);

    };

    Fraction multiply (Fraction f){
        int newNum = (numerator * f.numerator);
        int newDenom = (denominator * f.denominator);    
        return Fraction (newNum, newDenom);

    };

    void display(){
        cout << numerator << "/" << denominator << endl;
    };


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
}