//
// Created by OSMAN on 21.07.2025.
//
#include "../inc/SerialInterface.h"
#include <fstream>
#include <iostream>

std::vector<std::string> SerialInterface::readCommandsFromFile(const std::string& filename) {
    std::vector<std::string> commands;
    std::ifstream file(filename);
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Could not open file: " << filename << std::endl;
        return commands;
    }

    while (std::getline(file, line)) {
        if (!line.empty()) {
            commands.push_back(line);
        }
    }

    return commands;
}

std::vector<std::string> SerialInterface::readCommandsFromStdin() {
    std::vector<std::string> commands;
    std::string line;
    std::cout << "Enter commands (type END to finish):\n";
    while (true) {
        std::getline(std::cin, line);
        if (line == "END") break;
        if (!line.empty()) {
            commands.push_back(line);
        }
    }
    return commands;
}