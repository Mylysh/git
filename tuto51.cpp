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
   