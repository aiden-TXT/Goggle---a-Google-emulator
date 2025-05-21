#include <iostream>
#include <string>

class UI {
public:
    void displayMenu() {
        std::cout << "===== Google Simulator =====\n";
        std::cout << "1. Perform Search\n";
        std::cout << "2. Run a Program\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
    }

    void getUserInput(std::string& input) {
        std::getline(std::cin, input);
    }
};
