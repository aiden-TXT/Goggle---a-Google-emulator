#ifndef NETWORK_H
#define NETWORK_H

#include <string>
#include <map>

class Network {
public:
    std::string fetchPage(const std::string& url);
};

#endif // NETWORK_H
