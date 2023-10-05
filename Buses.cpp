#include <iostream>

class Bus {
private:
    int capacity;

public:
    // Parameterized constructor
    Bus(int capacity) {
        this->capacity = capacity;
    }

    int calculateTotalChildren(int numberOfBuses) {
        return capacity * numberOfBuses;
    }
};

int main() {
    // Create a Bus object with a capacity of 48 children
    Bus bus(48);

    // Calculate how many children three buses can carry
    int numberOfBuses = 3;
    int totalChildren = bus.calculateTotalChildren(numberOfBuses);

    std::cout << "Three buses can carry a total of " << totalChildren << " children." << std::endl;

    return 0;
}
