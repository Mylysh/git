#include <iostream>
using namespace std;

int main (){

    float weight, height, bmi;

    cout << "Get weight in kg :";
    cin >> weight;

    cout << "Get height in meter :";
    cin >> height;

    bmi = weight/(height*height);

    if (bmi < 18.5){

        cout << "Your weight category is : Underweight " << endl;

    }

    else if (bmi < 25 || bmi > 18.5)


    return 0;
}