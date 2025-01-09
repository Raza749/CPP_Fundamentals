#include <iostream>

using namespace std;

// class
class BankAccount
{
private:
    string accountNumber;
    double accountBalance;

public:
    BankAccount(string iban, double initialBalance)
    {
        accountNumber = iban;
        accountBalance = initialBalance;
    }

    // getter
    double getAccountBalance() const
    {
        return accountBalance;
    }

    // Method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            // accountBalance = accountBalance + amount;
            accountBalance += amount;
            cout << "Deposited amount: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    };

    // Method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= accountBalance)
        {
            // accountBalance -= amount;
            accountBalance = accountBalance - amount;
            cout << "Withdraw amount: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawn amount." << endl;
        }
    };
};

int main()
{
    BankAccount aliAccount("987654323", 81000);

    // Check account balance
    cout << "Initial account balance: " << aliAccount.getAccountBalance() << endl;

    // Deposit amount
    aliAccount.deposit(980);

    // Check account balance again
    cout << "Account balance after deposit: " << aliAccount.getAccountBalance() << endl;

    // Withdraw amount
    aliAccount.withdraw(100);

    // Check account balance again
    cout << "Account balance after withdrawal: " << aliAccount.getAccountBalance() << endl;

    return 0;
}