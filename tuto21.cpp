#include <iostream>
using namespace std;

int factorial (int num);

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "\n Factorial of " << x << "= " << factorial(x) << endl;

    return 0; 
}

int factorial (int num){
    int result = 1;
    for (num; num > 1; num--){
        result = result * num;
    
    
    }

    return result;
}