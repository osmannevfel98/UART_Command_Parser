#include "inc/SerialInterface.h"
#include "inc/CommandParser.h"
#include <iostream>

int main() {
    SerialInterface serial;
    auto commands = serial.readCommandsFromStdin();

    for (const auto& line : commands) {
        Command cmd = CommandParser::parse(line);
        if (cmd.isValid()) {
            cmd.execute();
        } else {
            std::cerr << "[ERROR] Invalid command: " << line << std::endl;
        }
    }

    return 0;
}