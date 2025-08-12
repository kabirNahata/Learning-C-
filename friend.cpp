#include <iostream>

class Customer {
private:
    std::string name;
    double accountBalance;

public:
    Customer(std::string n, double balance) : name(n), accountBalance(balance) {}

    // Declare the Loan class as a friend
    friend class Loan;
};

class Loan {
public:
    void approveLoan(Customer& c, double loanAmount) {
        if (c.accountBalance >= loanAmount * 0.5) {
            std::cout << "Loan of $" << loanAmount << " approved for " << c.name << "." << std::endl;
        } else {
            std::cout << "Loan of $" << loanAmount << " denied for " << c.name << "." << std::endl;
        }
    }
};

int main() {
    Customer alice("Alice", 2000.0);
    Loan carLoan;
    carLoan.approveLoan(alice, 1000.0);
    return 0;
}