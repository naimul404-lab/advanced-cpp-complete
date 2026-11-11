#include <iostream>

template <typename T>
class Box {
private:
    T value_;

public:
    explicit Box(T value) : value_(value) {}

    T get() const { return value_; }

    void set(T value) { value_ = value; }
};

int main() {
    Box<int> intBox(42);
    Box<double> doubleBox(3.14);

    std::cout << intBox.get() << std::endl;
    std::cout << doubleBox.get() << std::endl;

    intBox.set(100);
    std::cout << intBox.get() << std::endl;
    return 0;
}
