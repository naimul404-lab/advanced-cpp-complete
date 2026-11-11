#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> marks = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 95}
    };

    for (const auto& [name, score] : marks) {
        std::cout << name << ": " << score << std::endl;
    }

    std::cout << "Alice score: " << marks["Alice"] << std::endl;
    return 0;
}
