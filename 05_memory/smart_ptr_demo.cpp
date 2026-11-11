#include <iostream>
#include <memory>
#include <vector>

int main() {
    std::unique_ptr<int> p1 = std::make_unique<int>(42);
    std::cout << "unique_ptr value: " << *p1 << std::endl;

    std::shared_ptr<int> p2 = std::make_shared<int>(100);
    std::shared_ptr<int> p3 = p2;
    std::cout << "shared_ptr count: " << p2.use_count() << std::endl;
    std::cout << "shared_ptr value: " << *p2 << std::endl;

    std::weak_ptr<int> weak = p2;
    std::cout << "weak count: " << weak.use_count() << std::endl;

    std::vector<std::shared_ptr<int>> items;
    items.push_back(p2);
    items.push_back(p3);
    std::cout << "items size: " << items.size() << std::endl;

    return 0;
}
