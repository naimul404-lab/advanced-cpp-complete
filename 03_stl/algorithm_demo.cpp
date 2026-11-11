#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> values = {12, 4, 6, 2, 8, 9};

    auto max_it = std::max_element(values.begin(), values.end());
    auto min_it = std::min_element(values.begin(), values.end());

    std::cout << "Max: " << *max_it << std::endl;
    std::cout << "Min: " << *min_it << std::endl;

    std::sort(values.begin(), values.end());
    std::cout << "Sorted values: ";
    for (int v : values) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
