#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() {
        if (imaginary < 0) {
            std::cout << real << " - " << -imaginary << "i" << std::endl;
        } else {
            std::cout << real << " + " << imaginary << "i" << std::endl;
        }
    }
};

int main() {
    Complex num1(3, 4);
    Complex num2(1, -2);

    Complex sum = num1 + num2; 

    std::cout << "Number 1: ";
    num1.display();

    std::cout << "Number 2: ";
    num2.display();

    std::cout << "Sum: ";
    sum.display();

    return 0;
}
