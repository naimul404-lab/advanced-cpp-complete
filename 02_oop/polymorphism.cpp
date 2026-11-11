#include <iostream>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const {
        std::cout << "Drawing a shape" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

int main() {
    Shape* shapes[] = {new Circle(), new Rectangle(), new Circle()};

    for (Shape* s : shapes) {
        s->draw();
    }

    for (Shape* s : shapes) {
        delete s;
    }

    return 0;
}
