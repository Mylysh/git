#include <iostream>
using namespace std;

int main () {

    int option, num1, num2;
    
    while (true){
    cout << "Simple Calculator" << endl;
    cout << "Enter option: 1)+ 2)- 3)* 4)/ 5) mod(x1,x2) -1) Exit\tYour selection -> ";
    cin >> option;
    
    if (option == -1){
        break;
    }

    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    switch (option){
        
        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; 
            break;
        
        case 2:
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; 
            break;
        
        case 3:
            cout << num1 << " x " << num2 << " = " << num1 * num2 << endl; 
            break;
        
        case 4:
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; 
            break;
        
        case 5:
            cout << num1 << " % " << num2 << " = " << num1 % num2 << endl; 
            break; 

        default :
            cout << "Invalid selection. Please enter the correct selection!" << endl; 
    }

     
}
return 0;
}