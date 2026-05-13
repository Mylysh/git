#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // i) Deposit
    void Deposit(double amount) {
        balance += amount;
        cout << "Deposit: RM" << amount << endl;
    }

    // ii) Withdraw
    void Withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient fund" << endl;
        } else {
            balance -= amount;
            cout << "Withdraw: RM" << amount << endl;
        }
    }

    // iii) GetBalance
    double GetBalance() {
        return balance;
    }
};

// iv) main()
int main() {

    BankAccount account(1000);

    cout << "Initial Balance: RM" << account.GetBalance() << endl;

    account.Withdraw(500);
    cout << "Current Balance: RM" << account.GetBalance() << endl;

    account.Withdraw(400);
    cout << "Current Balance: RM" << account.GetBalance() << endl;

    return 0;
}