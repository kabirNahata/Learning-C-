// Custom Exception Class

#include <iostream>
#include <string>
using namespace std;

class InsufficientFundsException {
    string message;
public:
    InsufficientFundsException(string msg) : message(msg) {}
    string what() { return message; }
};

class ATM {
    double balance;
public:
    ATM(double initialBalance) : balance(initialBalance) {}
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException("Withdrawal failed: Insufficient funds.");
        }
        balance -= amount;
        cout << "Withdrawal successful. New balance: " << balance << "\n";
    }
};

int main() {
    ATM myATM(5000);

    try {
        myATM.withdraw(2000); // OK
        myATM.withdraw(4000); // Will throw exception
         
    }
    catch (InsufficientFundsException &ex) {
        cout << "Exception caught: " << ex.what() << "\n";
    }
}