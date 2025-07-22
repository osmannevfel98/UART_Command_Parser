cmake_minimum_required(VERSION 3.31)
project(UART_Command_Parser)

set(CMAKE_CXX_STANDARD 11)

add_executable(UART_Command_Parser main.cpp
        src/Command.cpp
        src/CommandParser.cpp
        src/SerialInterface.cpp
        inc/Command.h
        inc/CommandParser.h
        inc/SerialInterface.h)
