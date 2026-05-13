#include <iostream>
using namespace std;

int main () {
    int marks [] = {74, 43, 58, 60, 90, 64, 70};
    int i=0, sum = 0;

    do{
        sum = sum + marks[i];
        ++i;

    }
    while (i<7);

    cout << sum;
    
    return 0;
}