#include <iostream>
using namespace std;

class Temperature{

    private:
    double tempCel;
    double tempFar;

    public:
    Temperature();
    Temperature(char temp, double noTemp);
    double getCels();
    double getFar();
    void equal(Temperature obj);


};

Temperature :: Temperature (){

    tempCel = 0;
    tempFar = 32;
};

Temperature :: Temperature(char temp, double noTemp){

    if (temp == 'C'){

        tempCel = noTemp;
        tempFar = (9.0/5.0*noTemp) + 32;
    }

    else if (temp == 'F'){

        tempFar = noTemp;
        tempCel = (noTemp - 32)*5/9;

    }
};

double Temperature :: getCels(){
    return tempCel;
};

double Temperature :: getFar(){
    return tempFar;
};

void Temperature :: equal(Temperature obj){
    tempCel = obj.tempCel;
    tempFar = obj.tempFar;
};

int main(){
    
    Temperature t1 ('C', 100), t2('F', 100);
    cout << "t1 = " << t1.getCels() << "C\n";
    cout << "t1 = " << t1.getFar() << "F\n";

    cout << "t2 = " << t2.getCels() << "C\n";
    cout << "t2 = " << t2.getFar() << "F\n";

    t1.equal(t2);
    cout << "After assigning t2 to t1" << endl;

    cout << "t1 = " << t1.getCels() << "C\n";
    cout << "t1 = " << t1.getFar() << "F\n";

    return 0;
    
}

