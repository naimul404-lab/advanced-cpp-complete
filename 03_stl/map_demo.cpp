#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scoreBoard;
    scoreBoard["Alice"] = 90;
    scoreBoard["Bob"] = 85;
    scoreBoard["Charlie"] = 95;

    for (const auto& [name, score] : scoreBoard) {
        std::cout << name << ": " << score << std::endl;
    }

    return 0;
}
