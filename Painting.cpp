#include <iostream>

int main() {
    int painting1_age = 4200;
    int painting2_age = 8500;
    int painting3_age = 1000;
    int painting4_age = 1300;

    if (painting1_age < painting2_age && painting1_age < painting3_age && painting1_age < painting4_age) {
        std::cout << "The oldest painting is " << painting1_age << " years old." << std::endl;
    }
    else if (painting2_age < painting1_age && painting2_age < painting3_age && painting2_age < painting4_age) {
        std::cout << "The oldest painting is " << painting2_age << " years old." << std::endl;
    }
    else if (painting3_age < painting1_age && painting3_age < painting2_age && painting3_age < painting4_age) {
        std::cout << "The oldest painting is " << painting3_age << " years old." << std::endl;
    }
    else {
        std::cout << "The oldest painting is " << painting4_age << " years old." << std::endl;
    }

    return 0;
}
