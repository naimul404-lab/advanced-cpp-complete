#include <iostream>
#include <string>
#include <vector>

class ATM {
public:
    void run() {
        double balance = 1000.0;
        int choice = 0;

        while (choice != 4) {
            std::cout << "\nATM Menu\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoose: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Balance: $" << balance << std::endl;
                    break;
                case 2: {
                    double amount;
                    std::cout << "Enter amount to deposit: ";
                    std::cin >> amount;
                    balance += amount;
                    break;
                }
                case 3: {
                    double amount;
                    std::cout << "Enter amount to withdraw: ";
                    std::cin >> amount;
                    if (amount > balance) {
                        std::cout << "Insufficient funds." << std::endl;
                    } else {
                        balance -= amount;
                    }
                    break;
                }
                case 4:
                    std::cout << "Thank you!" << std::endl;
                    break;
                default:
                    std::cout << "Invalid choice." << std::endl;
            }
        }
    }
};

int main() {
    ATM atm;
    atm.run();
    return 0;
}
