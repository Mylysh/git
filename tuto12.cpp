#include <iostream>
using namespace std;

int main (){

double weight, height, bmi;

cout << "Get weight in kg :";
cin >> weight;
cout << "Get height in meter :";
cin >> height;

bmi = weight/(height*height);

cout << "Your bmi = " << bmi << endl;


    return 0;
}