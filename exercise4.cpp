#include <iostream>
using namespace std;

int main (){

    int numInt;

    cout << " Enter number of integer numbers to store >>";
    cin >> numInt;

    int* myArray = new int[numInt];

    for (int i = 0; i < numInt; i++){

        printf("\nEnter myArray[%d] :", i);
        cin >> myArray[i];

        cout << endl;

    }
    delete [] myArray;
}