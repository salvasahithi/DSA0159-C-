#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}
    Number operator-() {
        return Number(-value);
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num1(5);
    Number num2 = -num1; 

    std::cout << "Original Number: ";
    num1.display();

    std::cout << "Negated Number: ";
    num2.display();

    return 0;
}
