#include <iostream>
#include <map>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string holderName;
    double balance;

public:
    BankAccount(std::string acc, std::string name, double initialBalance)
        : accountNumber(std::move(acc)), holderName(std::move(name)), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << std::endl;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    void display() const {
        std::cout << "Account: " << accountNumber
                  << " | Holder: " << holderName
                  << " | Balance: $" << balance << std::endl;
    }
};

int main() {
    std::map<std::string, BankAccount> accounts = {
        {"A101", BankAccount("A101", "Alice", 1500.0)},
        {"B202", BankAccount("B202", "Bob", 2300.0)}
    };

    int choice = 0;
    while (choice != 4) {
        std::cout << "\nBanking System\n1. View Accounts\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            for (const auto& [id, acc] : accounts) {
                std::cout << "ID: " << id << " | ";
                acc.display();
            }
        } else if (choice == 2) {
            std::string accNo;
            double amount;
            std::cout << "Enter account number: ";
            std::cin >> accNo;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            if (accounts.find(accNo) != accounts.end()) {
                accounts[accNo].deposit(amount);
            } else {
                std::cout << "Account not found." << std::endl;
            }
        } else if (choice == 3) {
            std::string accNo;
            double amount;
            std::cout << "Enter account number: ";
            std::cin >> accNo;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            if (accounts.find(accNo) != accounts.end()) {
                accounts[accNo].withdraw(amount);
            } else {
                std::cout << "Account not found." << std::endl;
            }
        } else if (choice == 4) {
            std::cout << "Goodbye!" << std::endl;
        } else {
            std::cout << "Invalid option." << std::endl;
        }
    }

    return 0;
}
