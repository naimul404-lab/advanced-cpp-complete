#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

namespace {
constexpr const char* dataFile = "expenses.csv";

bool readAmount(double& amount) {
    if (!(std::cin >> amount) || amount <= 0.0) {
        std::cerr << "Enter a valid amount greater than zero.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return true;
}

void listExpenses() {
    std::ifstream input(dataFile);
    if (!input) {
        std::cout << "No expenses saved yet.\n";
        return;
    }

    std::string line;
    double total = 0.0;
    bool found = false;
    std::cout << "Date, description, amount\n";
    while (std::getline(input, line)) {
        if (line.empty()) continue;
        std::cout << line << '\n';
        const auto comma = line.rfind(',');
        if (comma != std::string::npos) {
            try {
                total += std::stod(line.substr(comma + 1));
                found = true;
            } catch (const std::exception&) {
                std::cerr << "Skipping malformed record: " << line << '\n';
            }
        }
    }
    if (found) {
        std::cout << "Total: $" << std::fixed << std::setprecision(2) << total << '\n';
    }
}
}

int main() {
    while (true) {
        std::cout << "\nExpense Tracker\n1. Add expense\n2. List expenses\n3. Exit\nChoice: ";
        int choice = 0;
        if (!(std::cin >> choice)) {
            std::cerr << "Please enter a menu number.\n";
            return 1;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 1) {
            std::string date;
            std::string description;
            double amount = 0.0;
            std::cout << "Date (for example 2026-01-31): ";
            std::getline(std::cin, date);
            std::cout << "Description: ";
            std::getline(std::cin, description);
            std::cout << "Amount: ";
            if (!readAmount(amount)) continue;

            // Keep each record on one line and avoid corrupting the simple CSV-like format.
            for (char& ch : date) if (ch == ',' || ch == '\n' || ch == '\r') ch = ' ';
            for (char& ch : description) if (ch == ',' || ch == '\n' || ch == '\r') ch = ' ';
            std::ofstream output(dataFile, std::ios::app);
            if (!output) {
                std::cerr << "Could not open " << dataFile << " for writing.\n";
                continue;
            }
            output << date << ',' << description << ',' << std::fixed << std::setprecision(2) << amount << '\n';
            if (!output) {
                std::cerr << "Failed while saving the expense.\n";
            } else {
                std::cout << "Expense saved in " << dataFile << ".\n";
            }
        } else if (choice == 2) {
            listExpenses();
        } else if (choice == 3) {
            return 0;
        } else {
            std::cout << "Choose 1, 2, or 3.\n";
        }
    }
}
