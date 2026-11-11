#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int id;
    double gpa;
};

int main() {
    std::vector<Student> students = {
        {"Alice", 101, 3.8},
        {"Bob", 102, 3.5},
        {"Charlie", 103, 4.0}
    };

    for (const auto& s : students) {
        std::cout << "Name: " << s.name
                  << " | ID: " << s.id
                  << " | GPA: " << s.gpa << std::endl;
    }

    return 0;
}
