#include <iostream>
#include <string>

template <typename T>
T max_value(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << max_value(10, 20) << std::endl;
    std::cout << max_value(3.5, 7.2) << std::endl;
    std::cout << max_value(std::string("apple"), std::string("banana")) << std::endl;
    return 0;
}
