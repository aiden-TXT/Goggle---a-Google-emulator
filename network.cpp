#include <iostream>
#include <string>
#include <map>

class Network {
private:
    std::map<std::string, std::string> mockWebData = {
        {"google.com", "Welcome to Google!"},
        {"github.com", "GitHub: Where developers build software"},
        {"cplusplus.com", "Learn C++ programming"}
    };

public:
    std::string fetchPage(const std::string& url) {
        if (mockWebData.find(url) != mockWebData.end()) {
            return mockWebData[url];
        } else {
            return "404 Not Found";
        }
    }
};
