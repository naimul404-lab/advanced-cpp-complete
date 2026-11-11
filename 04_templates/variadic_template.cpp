#include <iostream>

template <typename T>
T add_all(T value) {
    return value;
}

template <typename T, typename... Args>
T add_all(T first, Args... rest) {
    return first + add_all(rest...);
}

int main() {
    std::cout << add_all(1, 2, 3, 4, 5) << std::endl;
    std::cout << add_all(1.5, 2.5, 3.5) << std::endl;
    return 0;
}
