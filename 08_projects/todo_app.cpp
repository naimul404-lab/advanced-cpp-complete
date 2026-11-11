#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> tasks = {"Learn templates", "Practice STL", "Build a small project"};
    int choice = 0;

    while (choice != 4) {
        std::cout << "\nTODO App\n";
        std::cout << "1. View tasks\n2. Add task\n3. Remove task\n4. Exit\nChoose: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                for (size_t i = 0; i < tasks.size(); ++i) {
                    std::cout << i + 1 << ". " << tasks[i] << std::endl;
                }
                break;
            case 2: {
                std::string task;
                std::cout << "Enter task: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                tasks.push_back(task);
                std::cout << "Task added." << std::endl;
                break;
            }
            case 3: {
                int index;
                std::cout << "Enter task number to remove: ";
                std::cin >> index;
                if (index > 0 && static_cast<size_t>(index) <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    std::cout << "Task removed." << std::endl;
                } else {
                    std::cout << "Invalid index." << std::endl;
                }
                break;
            }
            case 4:
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid option." << std::endl;
        }
    }

    return 0;
}
