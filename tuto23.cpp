#include <iostream>
using namespace std;
void drawBox (int w);
void drawFullLine(int w);
void drawEmptyLine(int w);


int main (){

    int width;

    while (true){
    cout << "Enter the length of the side the square between 1 to 20" << endl;
    cout << "<any other value to end>: ";
    cin >> width;

    if (width < 1 || width > 20){
        cout << "Ending program. Only integer values between 1 and 20 accepted" << endl;
        break;
    }

    drawBox(width);

   
}
    return 0;
}

void drawFullLine (int w){
    for (int n = 0; n < w; n++){
        cout << "* ";
        
    }
    cout << endl;

}

void drawEmptyLine(int w){
    cout << "* ";
    for (int m = 0; m < w-2; m++){
        cout << "  ";
    }
    cout << "* ";
    cout << endl;
}

void drawBox(int w){
    if (w == 1){
        cout << "*" << endl;
        return;
    }

    drawFullLine(w);
    for (int j = 0; j < w-2; j++){
        drawEmptyLine(w);
    }
    drawFullLine(w);
}