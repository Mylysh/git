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

if (bmi < 18.5){
    cout << "Your weight category is : Underweight" << endl;
}

else if (bmi >= 18.5 && bmi <= 24.9){
    cout << "Your weight category is : Normal" << endl; 
}

else if (bmi >= 25 && bmi <= 29.9){
    cout << "Your weight category is : Overweight" << endl; 
}

else if (bmi >= 30 && bmi <= 34.9){
    cout << "Your weight category is : Medically Obese I" << endl;

}

else if (bmi >= 35 && bmi <= 39.9){
    cout << "Your weight category is : Medically Obese II" << endl; 
}

else {
    cout << "Your weight category is : Medically Obese III (Extreme Obesity)" << endl; 

}

    return 0;
}