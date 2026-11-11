#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: word_counter <text-file>\n";
        return 2;
    }

    std::ifstream input(argv[1]);
    if (!input) {
        std::cerr << "Could not open file: " << argv[1] << '\n';
        return 1;
    }

    std::size_t lines = 0;
    std::size_t words = 0;
    std::size_t characters = 0;
    std::string line;
    while (std::getline(input, line)) {
        ++lines;
        characters += line.size();
        std::size_t position = 0;
        while (position < line.size()) {
            position = line.find_first_not_of(" \t\r\n\f\v", position);
            if (position == std::string::npos) break;
            ++words;
            position = line.find_first_of(" \t\r\n\f\v", position);
            if (position == std::string::npos) break;
        }
    }

    if (input.bad()) {
        std::cerr << "An error occurred while reading the file.\n";
        return 1;
    }

    std::cout << "Lines: " << lines << '\n'
              << "Words: " << words << '\n'
              << "Characters (excluding line endings): " << characters << '\n';
    return 0;
}
