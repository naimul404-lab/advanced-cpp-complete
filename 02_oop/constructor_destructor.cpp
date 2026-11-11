#include <iostream>

class Counter {
private:
    int value_;

public:
    Counter(int value = 0) : value_(value) {
        std::cout << "Constructor called with value: " << value_ << std::endl;
    }

    ~Counter() {
        std::cout << "Destructor called for value: " << value_ << std::endl;
    }

    void increment() {
        ++value_;
    }

    int get() const {
        return value_;
    }
};

int main() {
    Counter c1(5);
    c1.increment();
    std::cout << "Value: " << c1.get() << std::endl;
    return 0;
}
