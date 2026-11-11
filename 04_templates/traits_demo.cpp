#include <iostream>
#include <type_traits>

template <typename T>
struct IsInt : std::false_type {};

template <>
struct IsInt<int> : std::true_type {};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is int? " << IsInt<int>::value << std::endl;
    std::cout << "Is double? " << IsInt<double>::value << std::endl;

    std::cout << "Is signed int? " << std::is_signed<int>::value << std::endl;
    std::cout << "Is floating point? " << std::is_floating_point<double>::value << std::endl;

    return 0;
}
