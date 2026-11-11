#include <iostream>
#include <string>
#include <type_traits>

int main() {
    int a = 10;
    double b = 5.75;
    auto c = static_cast<double>(a) / b;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

    constexpr int limit = 100;
    static_assert(limit > 0, "limit must be positive");

    enum class Color { Red, Green, Blue };
    Color color = Color::Green;

    std::cout << "Color enum value: " << static_cast<int>(color) << std::endl;

    std::string name = "C++";
    std::cout << "Language: " << name << std::endl;

    return 0;
}
