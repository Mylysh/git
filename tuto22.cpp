#include <iostream>
using namespace std;

int main (){

    int num_side;
    
    while (true){
    cout << "Enter the length of the side of the square between 1 to 20" << endl;
    cout << "<any other value to end>:";
    cin >> num_side;

    if (num_side < 1 || num_side > 20){
        cout << "Ending program. Only integer values between 1 and 20 accepted" << endl;
        break;
    }
    
    for (int i = 0; i <num_side; i++){
        for(int j = 0; j < num_side; j++){
            cout << "*";
            
        }
        cout << endl;   
    }
}



}