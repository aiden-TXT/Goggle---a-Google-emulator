#include <iostream>
#include <algorithm>
#include <string>

namespace Utils {
    std::string toLowerCase(const std::string& str) {
        std::string lowerStr = str;
        std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        return lowerStr;
    }

    void clearScreen() {
        #ifdef _WIN32
            std::system("cls");
        #else
            std::system("clear");
        #endif
    }

    void pause() {
        std::cout << "Press Enter to continue...";
        std::cin.get();
    }
}
