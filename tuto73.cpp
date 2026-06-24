#include <iostream>
using namespace std;

class Person {  

    protected:

    string name;
    string address;

    public:
    Person(string n, string a){
        name = n;
        address = a;
    }
};

class Package{

    protected:

    Person sender;
    Person recipient;
    double weight;
    double cost_per_kg;

    public:
    Package(Person s, Person r, double w, double cost) : sender(s), recipient(r) {
        

        if (w > 0){
            weight = w;
        }

        else{
            weight = 0;
        }

        if (cost > 0){
            cost_per_kg = cost;
        }

        else{
            cost_per_kg = 0;
        }
    }

    double calculateCost(){
        double totalcost;
        totalcost = weight*cost_per_kg;
        return totalcost;
    }
};

class TwoDayPackage : public Package{

    protected:
    double flatfee;

    public:
    TwoDayPackage(Person s, Person r, double w, double cost, double ff) : Package(s,r,w,cost){
        flatfee = ff;
    }

    double calculateCost(){
        double total;

        total = Package::calculateCost() + flatfee;
        return total;
    }

};

int main (){
    Package pkg1(Person("Ali", "Jalan 123"), Person("Lim", "Cyberjaya"), 1.5, 50);
    cout << "\n The cost of package pkg1 = " << pkg1.calculateCost();
    cout << endl;

    TwoDayPackage pkg2(Person("Ali", "Jalan 123"), Person("Lim", "Cyberjaya"), 1.5, 50, 10);
    cout << "\n The cost of package pkg2 = " << pkg2.calculateCost();
    cout << endl;

    system("pause");
    return 1;
}