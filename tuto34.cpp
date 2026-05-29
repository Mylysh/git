#include <iostream>
using namespace std;

void displayVector(float *a_array, int numElem);
void getInputIntoVector(float *a_array, int numElem);

int main (){

    int num;
    float *myArray = new float[num];

    cout << " Enter how many numbers to enter >> ";
    cin >> num;
    cout << endl;
    getInputIntoVector(myArray, num);
    displayVector(myArray, num);
    

}

void getInputIntoVector(float *a_array, int numElem){

    for (int i = 0; i < numElem; i++){

        printf(" Enter element A[%d] = ", i);
        cin >> a_array[i];
        cout << endl;

    }

    cout << " Number of elements in array = " << numElem << endl;
    cout << endl;


}

void displayVector(float *a_array, int numElem){

    cout << " Display data in array" << endl;

    for (int m = 0; m < numElem; m++){
    cout << a_array[m] << "\t";
    }

}
