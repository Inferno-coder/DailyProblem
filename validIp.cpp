#include <iostream>
#include <string>
#include <sstream>
#include <vector>

bool isValidIPv4(const std::string& ipAddress) {
    std::istringstream ss(ipAddress);
    std::string token;
    std::vector<std::string> ipParts;

    while (std::getline(ss, token, '.')) {
        ipParts.push_back(token);
    }

    if (ipParts.size() != 4) {
        return false;
    }

    for (const std::string& part : ipParts) {
        if (part.empty() || part.length() > 3) {
            return false;
        }

        for (char c : part) {
            if (!std::isdigit(c)) {
                return false;
            }
        }

        int num = std::stoi(part);
        if (num < 0 || num > 255) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string ipAddress = "192.168.0.1";
    bool isValid = isValidIPv4(ipAddress);

    if (isValid) {
        std::cout << "The IP address is valid." << std::endl;
    } else {
        std::cout << "The IP address is not valid." << std::endl;
    }

    return 0;
}
