#ifndef SECURITY_H
#define SECURITY_H

#include <string>
#include <vector>

class Security {
public:
    bool isSafeCommand(const std::string& command);
};

#endif // SECURITY_H
