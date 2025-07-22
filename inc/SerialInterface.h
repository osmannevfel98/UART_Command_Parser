//
// Created by OSMAN on 21.07.2025.
//

#ifndef SERIALINTERFACE_H
#define SERIALINTERFACE_H

#include <vector>
#include <string>

class SerialInterface {
public:
    std::vector<std::string> readCommandsFromFile(const std::string& filename);
    std::vector<std::string> readCommandsFromStdin();
};

#endif // SERIALINTERFACE_H

