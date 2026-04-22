#include <iostream>
using namespace std;

int main() {

    int num1, num2, option;

    while (true) {
        cout << "Simple calculator" << endl;
        cout << "Enter option: 1)+ 2)- 3)* 4)/ 5) mod(x1,x2) -1) Exit  Your selection -> ";
        cin >> option;
        cout << endl;

        if (option == -1) {
            cout << "Exiting..." << endl;
            break;
        }

        cout << "Enter first number : ";
        cin >> num1;
        cout << endl;
        cout << "Enter second number : ";
        cin >> num2;
        cout << endl;

        switch (option) {
            case 1:
                cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case 2:
                cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case 3:
                cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case 4:
                if (num2 == 0) cout << "Error: Division by zero!" << endl;
                else cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                break;
            case 5:
                if (num2 == 0) cout << "Error: Modulo by zero!" << endl;
                else cout << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
        }

        cout << "Press any key to continue . . ." << endl;
        cout << endl;
    }

    return 0;
}