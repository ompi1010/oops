#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    Complex operator+( Complex other)  {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-( Complex other)  {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }

    Complex operator--() {
        --real;
        --imag;
        return *this;
    }

    bool operator==( Complex other)  {
        return (real == other.real) && (imag == other.imag);
    }

    void display()  {
        std::cout << "(" << real << " + " << imag << "i)" << std::endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(1.0, -2.0);

    // Addition
    Complex result_add = c1 + c2;
    std::cout << "Addition: ";
    result_add.display();

    // Subtraction
    Complex result_sub = c1 - c2;
    std::cout << "Subtraction: ";
    result_sub.display();

    // Prefix Increment
    // Complex result_inc = ++c1;
    // std::cout << "Prefix Increment: ";
    // result_inc.display();

    // // Prefix Decrement
    // Complex result_dec = --c2;
    // std::cout << "Prefix Decrement: ";
    // result_dec.display();

    // Equality Comparison
    bool equal = (c1 == c2);
    std::cout << "Equality Comparison: " << (equal ? "Equal" : "Not Equal") << std::endl;

    return 0;
}
