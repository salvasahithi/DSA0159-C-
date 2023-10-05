#include <iostream>

class Plastic {
private:
    int costPrice;
    int sellingPrice;

public:
    // Default constructor
    Plastic() {
        costPrice = 10;  // Cost price of 1 kg plastic
        sellingPrice = 12;  // Selling price of 1 kg plastic
    }

    int calculateProfit() {
        return sellingPrice - costPrice;
    }
};

int main() {
    // Create a Plastic object
    Plastic plastic;

    // Calculate the profit earned on selling 1 kg plastic
    int profit = plastic.calculateProfit();

    std::cout << "Kiran earned ₹" << profit << " by selling 1 kg of plastic." << std::endl;

    return 0;
}
