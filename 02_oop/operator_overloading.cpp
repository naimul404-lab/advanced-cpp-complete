#include <iostream>

class Complex {
private:
    double real_;
    double imag_;

public:
    Complex(double r = 0.0, double i = 0.0) : real_(r), imag_(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real_ + other.real_, imag_ + other.imag_);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real_ - other.real_, imag_ - other.imag_);
    }

    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real_ << "+" << c.imag_ << "i";
        return os;
    }
};

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.0, 4.0);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    Complex c = a + b;
    std::cout << "a + b = " << c << std::endl;

    Complex d = a - b;
    std::cout << "a - b = " << d << std::endl;

    return 0;
}
