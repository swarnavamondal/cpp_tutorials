#include <iostream>

int main() {
    // Demonstrating a nested for loop
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            std::cout << "i = " << i << ", j = " << j << std::endl;
        }
    }
    return 0;
}