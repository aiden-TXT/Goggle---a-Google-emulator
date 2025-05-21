#include <iostream>
#include <cstdlib>

class ExecutionManager {
public:
    void runProgram(const std::string& programPath) {
        std::cout << "Running program: " << programPath << std::endl;
        std::system(("g++ " + programPath + " -o output && ./output").c_str());
    }
};

int main() {
    ExecutionManager executor;
    std::string programPath;
    std::cout << "Enter C++ program path to execute: ";
    std::cin >> programPath;
    executor.runProgram(programPath);
    return 0;
}
