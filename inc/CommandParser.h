//
// Created by OSMAN on 21.07.2025.
//

#ifndef COMMANDPARSER_H
#define COMMANDPARSER_H

#include "Command.h"
#include <string>

class CommandParser {
public:
    static Command parse(const std::string& input);
};

#endif // COMMANDPARSER_H
