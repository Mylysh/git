#include <iostream>
using namespace std;

class BankAccount {
    private:
        double balance;

    public:
        BankAccount(){
            balance = 0.0;
        }

        void Deposit(double amount);
        void Withdraw(double amount);
        double GetBalance();
    };

    void BankAccount :: Deposit(double amount){
        balance = balance + amount;
    }

    void BankAccount :: Withdraw(double amount){
        balance = balance - amount;

        if (balance < 0){
            cout << "Insufficient funds." << endl;
            balance = balance + amount;
        }

        else{
            balance = balance;
        }
    }

    double BankAccount :: GetBalance(){

        return balance;

    }
 
int main (){

    BankAccount b1;

    b1.Deposit(1000.00);
    cout << "Current balance : " << b1.GetBalance() << endl;
    
    b1.Withdraw(500.00);
    cout << "Current balance : " << b1.GetBalance() << endl;

    b1.Withdraw(600.00);
    cout << "Current balance : " << b1.GetBalance() << endl;


}