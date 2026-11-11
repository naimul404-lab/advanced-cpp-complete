#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream out("output.txt");
    out << "Hello from C++ file I/O!" << std::endl;
    out.close();

    std::ifstream in("output.txt");
    std::string line;

    if (in.is_open()) {
        while (std::getline(in, line)) {
            std::cout << line << std::endl;
        }
        in.close();
    } else {
        std::cerr << "Unable to open file" << std::endl;
    }

    return 0;
}
