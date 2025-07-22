//
// Created by OSMAN on 21.07.2025.
//
#include "../inc/Command.h"
#include <sstream>
#include <iostream>

Command::Command(const std::string& input) {
    valid = false;

    size_t colonPos = input.find(':');
    if (colonPos == std::string::npos || colonPos == 0) {
        return;
    }

    name = input.substr(0, colonPos);
    std::string paramsStr = input.substr(colonPos + 1);

    std::stringstream ss(paramsStr);
    std::string token;
    while (std::getline(ss, token, ',')) {
        parameters.push_back(token);
    }

    valid = true;
}

bool Command::isValid() const {
    return valid;
}

void Command::execute() const {
    std::cout << "[EXECUTE] Command: " << name;
    if (!parameters.empty()) {
        std::cout << " | Parameters: ";
        for (const auto& p : parameters) {
            std::cout << p << " ";
        }
    }
    std::cout << std::endl;
}

std::string Command::getName() const {
    return name;
}

std::vector<std::string> Command::getParameters() const {
    return parameters;
}