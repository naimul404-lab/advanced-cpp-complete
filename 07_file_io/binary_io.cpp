#include <fstream>
#include <iostream>
#include <string>

struct Record {
    int id;
    char name[20];
};

int main() {
    Record r{42, "Alice"};

    std::ofstream out("records.bin", std::ios::binary);
    out.write(reinterpret_cast<const char*>(&r), sizeof(r));
    out.close();

    Record copy{};
    std::ifstream in("records.bin", std::ios::binary);
    in.read(reinterpret_cast<char*>(&copy), sizeof(copy));

    std::cout << "ID: " << copy.id << "\nName: " << copy.name << std::endl;
    return 0;
}
