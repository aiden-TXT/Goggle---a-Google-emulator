#include <iostream>
#include <vector>

class Security {
private:
    std::vector<std::string> blockedCommands = {"rm", "shutdown", "format"};

public:
    bool isSafeCommand(const std::string& command) {
        for (const auto& blocked : blockedCommands) {
            if (command.find(blocked) != std::string::npos) {
                return false;
            }
        }
        return true;
    }
};
