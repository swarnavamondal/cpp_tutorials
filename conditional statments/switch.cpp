#include <iostream>

int main() {
    int choice;

    std::cout << "Enter a number (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You selected case 1." << std::endl;
            break;
        case 2:
            std::cout << "You selected case 2." << std::endl;
            break;
        case 3:
            std::cout << "You selected case 3." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please select a number between 1 and 3." << std::endl;
            break;
    }

    return 0;
}