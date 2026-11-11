#include <iostream>
#include <map>
#include <string>
#include <utility>

class BankAccount {
private:
    std::string accountNumber_;
    std::string holderName_;
    double balance_;

public:
    BankAccount(std::string accountNumber, std::string holderName, double initialBalance)
        : accountNumber_(std::move(accountNumber)), holderName_(std::move(holderName)), balance_(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0.0) {
            balance_ += amount;
            std::cout << "Deposited: $" << amount << '\n';
        } else {
            std::cout << "Amount must be positive.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0.0) {
            std::cout << "Amount must be positive.\n";
        } else if (amount > balance_) {
            std::cout << "Insufficient funds.\n";
        } else {
            balance_ -= amount;
            std::cout << "Withdrawn: $" << amount << '\n';
        }
    }

    void display() const {
        std::cout << "Account: " << accountNumber_ << " | Holder: " << holderName_
                  << " | Balance: $" << balance_ << '\n';
    }
};

int main() {
    std::map<std::string, BankAccount> accounts;
    accounts.emplace("A101", BankAccount("A101", "Alice", 1500.0));
    accounts.emplace("B202", BankAccount("B202", "Bob", 2300.0));

    int choice = 0;
    while (choice != 4) {
        std::cout << "\nBanking System (simulation)\n1. View accounts\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        if (!(std::cin >> choice)) return 1;
        if (choice == 1) {
            for (const auto& [id, account] : accounts) {
                std::cout << "ID: " << id << " | ";
                account.display();
            }
        } else if (choice == 2 || choice == 3) {
            std::string accountNumber;
            double amount = 0.0;
            std::cout << "Enter account number: ";
            if (!(std::cin >> accountNumber)) return 1;
            std::cout << "Enter amount: ";
            if (!(std::cin >> amount)) return 1;
            const auto it = accounts.find(accountNumber);
            if (it == accounts.end()) {
                std::cout << "Account not found.\n";
            } else if (choice == 2) {
                it->second.deposit(amount);
            } else {
                it->second.withdraw(amount);
            }
        } else if (choice != 4) {
            std::cout << "Invalid option.\n";
        }
    }
    return 0;
}
