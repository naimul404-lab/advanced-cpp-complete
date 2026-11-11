#include <iostream>
#include <string>
#include <vector>

struct Product {
    int id;
    std::string name;
    int quantity;
    double price;
};

int main() {
    std::vector<Product> inventory = {
        {1, "Laptop", 5, 1200.0},
        {2, "Mouse", 20, 25.0},
        {3, "Keyboard", 15, 45.0}
    };

    int choice = 0;
    while (choice != 4) {
        std::cout << "\nInventory Management System\n1. View Items\n2. Add Stock\n3. Sell Item\n4. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            for (const auto& item : inventory) {
                std::cout << "ID: " << item.id
                          << " | Name: " << item.name
                          << " | Quantity: " << item.quantity
                          << " | Price: $" << item.price << std::endl;
            }
        } else if (choice == 2) {
            int id, qty;
            std::cout << "Enter product ID: ";
            std::cin >> id;
            std::cout << "Enter quantity to add: ";
            std::cin >> qty;

            for (auto& item : inventory) {
                if (item.id == id) {
                    item.quantity += qty;
                    std::cout << "Stock added." << std::endl;
                    break;
                }
            }
        } else if (choice == 3) {
            int id, qty;
            std::cout << "Enter product ID: ";
            std::cin >> id;
            std::cout << "Enter quantity sold: ";
            std::cin >> qty;

            for (auto& item : inventory) {
                if (item.id == id) {
                    if (item.quantity >= qty) {
                        item.quantity -= qty;
                        std::cout << "Sale processed." << std::endl;
                    } else {
                        std::cout << "Not enough stock." << std::endl;
                    }
                    break;
                }
            }
        } else if (choice == 4) {
            std::cout << "Goodbye!" << std::endl;
        } else {
            std::cout << "Invalid option." << std::endl;
        }
    }

    return 0;
}
