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
        std::cout << "\nEmployee Management System\n";
        std::cout << "1. View employees\n2. Add employee\n3. Delete employee\n4. Exit\nSelect: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            for (const auto& e : employees) {
                std::cout << "ID: " << e.id
                          << " | Name: " << e.name
                          << " | Role: " << e.role
                          << " | Salary: $" << e.salary << "\n";
            }
        } else if (choice == 2) {
            Employee e{};
            std::cout << "Enter ID: ";
            std::cin >> e.id;
            std::cout << "Enter name: ";
            std::cin >> e.name;
            std::cout << "Enter role: ";
            std::cin >> e.role;
            std::cout << "Enter salary: ";
            std::cin >> e.salary;
            employees.push_back(e);
            std::cout << "Employee added." << std::endl;
        } else if (choice == 3) {
            int id;
            std::cout << "Enter employee ID to delete: ";
            std::cin >> id;

            auto it = std::find_if(employees.begin(), employees.end(), [id](const Employee& e) {
                return e.id == id;
            });

            if (it != employees.end()) {
                employees.erase(it);
                std::cout << "Employee deleted." << std::endl;
            } else {
                std::cout << "Employee not found." << std::endl;
            }
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice." << std::endl;
        }
    }

    return 0;
}
