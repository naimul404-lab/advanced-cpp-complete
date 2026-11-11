#include <iostream>
#include <string>
#include <vector>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool available;
};

int main() {
    std::vector<Book> books = {
        {1, "C++ Primer", "Lippman", true},
        {2, "Clean Code", "Robert Martin", true},
        {3, "Design Patterns", "Gamma", false}
    };

    int choice = 0;
    while (choice != 4) {
        std::cout << "\nLibrary Management System\n1. Show Books\n2. Borrow Book\n3. Return Book\n4. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            for (const auto& b : books) {
                std::cout << "ID: " << b.id
                          << " | Title: " << b.title
                          << " | Author: " << b.author
                          << " | Available: " << (b.available ? "Yes" : "No") << std::endl;
            }
        } else if (choice == 2) {
            int id;
            std::cout << "Enter book ID to borrow: ";
            std::cin >> id;
            for (auto& b : books) {
                if (b.id == id) {
                    if (b.available) {
                        b.available = false;
                        std::cout << "Book borrowed successfully." << std::endl;
                    } else {
                        std::cout << "Book is not available." << std::endl;
                    }
                }
            }
        } else if (choice == 3) {
            int id;
            std::cout << "Enter book ID to return: ";
            std::cin >> id;
            for (auto& b : books) {
                if (b.id == id) {
                    if (!b.available) {
                        b.available = true;
                        std::cout << "Book returned successfully." << std::endl;
                    } else {
                        std::cout << "Book is already available." << std::endl;
                    }
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
