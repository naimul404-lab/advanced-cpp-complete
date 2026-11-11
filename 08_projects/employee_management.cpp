#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Employee {
    int id;
    std::string name;
    std::string role;
    double salary;
};

int main() {
    std::vector<Employee> employees = {
        {101, "Alice", "Engineer", 85000},
        {102, "Bob", "Designer", 78000},
        {103, "Charlie", "Manager", 95000}
    };

    while (true) {
        std::cout << "\nEmployee Management System\n"
                  << "1. View employees\n2. Add employee\n3. Delete employee\n4. Exit\nSelect: ";
        int choice = 0;
        if (!(std::cin >> choice)) {
            std::cerr << "Invalid input.\n";
            return 1;
        }

        if (choice == 1) {
            for (const auto& e : employees) {
                std::cout << "ID: " << e.id << " | Name: " << e.name
                          << " | Role: " << e.role << " | Salary: $" << e.salary << '\n';
            }
        } else if (choice == 2) {
            Employee e{};
            std::cout << "Enter ID: ";
            if (!(std::cin >> e.id)) return 1;
            std::cout << "Enter name and role (one word each): ";
            if (!(std::cin >> e.name >> e.role)) return 1;
            std::cout << "Enter salary: ";
            if (!(std::cin >> e.salary) || e.salary < 0.0) {
                std::cerr << "Invalid salary.\n";
                return 1;
            }
            employees.push_back(e);
            std::cout << "Employee added.\n";
        } else if (choice == 3) {
            int id = 0;
            std::cout << "Enter employee ID to delete: ";
            if (!(std::cin >> id)) return 1;
            const auto it = std::find_if(employees.begin(), employees.end(),
                                         [id](const Employee& e) { return e.id == id; });
            if (it != employees.end()) {
                employees.erase(it);
                std::cout << "Employee deleted.\n";
            } else {
                std::cout << "Employee not found.\n";
            }
        } else if (choice == 4) {
            return 0;
        } else {
            std::cout << "Invalid choice.\n";
        }
    }
}
