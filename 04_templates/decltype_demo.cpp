#include <iostream>
#include <type_traits>

int main() {
    int x = 10;
    decltype(x) y = 20;
    decltype((x)) z = x;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    static_assert(std::is_same_v<decltype(x), int>);
    std::cout << "Type check passed." << std::endl;

    return 0;
}
