#include <iostream>
#include <string>

class Person {
private:
    std::string name_;
    int age_;

public:
    Person(std::string name, int age) : name_(std::move(name)), age_(age) {}

    void introduce() const {
        std::cout << "Hi, I am " << name_ << " and I am " << age_ << " years old." << std::endl;
    }

    void setAge(int age) {
        age_ = age;
    }

    int getAge() const {
        return age_;
    }
};

int main() {
    Person p("Alice", 28);
    p.introduce();
    p.setAge(29);
    std::cout << "Updated age: " << p.getAge() << std::endl;
    return 0;
}
