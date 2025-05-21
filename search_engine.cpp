#include <iostream>
#include <vector>
#include <string>

class SearchEngine {
public:
    void search(std::string query) {
        std::vector<std::string> database = {"Hello World", "Google Simulator", "C++ Programming", "Search Engine Development"};

        std::cout << "Results for: " << query << "\n";
        for (const auto& entry : database) {
            if (entry.find(query) != std::string::npos) {
                std::cout << "- " << entry << "\n";
            }
        }
    }
};

int main() {
    SearchEngine googleSim;
    std::string query;
    std::cout << "Enter search query: ";
    std::getline(std::cin, query);
    googleSim.search(query);
    return 0;
}
