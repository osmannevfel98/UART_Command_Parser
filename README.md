# UART_Command_Parser

This project is a simple UART command parser written in **modern C++** using **object-oriented programming**. It simulates serial input handling and command processing, commonly seen in embedded systems.

## Purpose

To demonstrate how incoming commands (as if from a UART interface) can be parsed and executed using a clean, modular C++ design — fully portable to embedded targets (e.g., STM32, ESP32) and compatible with CLion.

## Key Features

- Parses commands like: `LED:ON`, `MOTOR:SPEED,1500`, `TEMP:READ`
- Modular class structure (`Command`, `CommandParser`, `SerialInterface`)
- Real-time command entry via standard input (terminal)
- Easily extensible to support more commands
- Designed for CLion / CMake-based builds

## Build & Run Instructions

1. Open the project in **CLion**.
2. Build the project with default settings.
3. Run the program in CLion's terminal or any terminal.

You will see a prompt like:

```bash
Enter commands (type END to quit):
```

Type commands one by one:

```bash
LED:ON
TEMP:READ
MOTOR:SPEED,1800
END
```

# Example Output
```bash
[EXECUTE] Command: LED | Parameters: ON 
[EXECUTE] Command: TEMP | Parameters: READ 
[EXECUTE] Command: MOTOR | Parameters: SPEED 1800 
```
