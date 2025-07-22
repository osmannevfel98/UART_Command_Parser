//
// Created by OSMAN on 21.07.2025.
//

#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>

class Command {
private:
    std::string name;
    std::vector<std::string> parameters;
    bool valid;

public:
    Command(const std::string& input);

    bool isValid() const;
    void execute() const;

    std::string getName() const;
    std::vector<std::string> getParameters() const;
};

#endif // COMMAND_H
