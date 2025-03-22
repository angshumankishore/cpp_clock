# Real-Time Clock Display in C++

## Overview
This is a simple C++ program that continuously displays the current local time in `HH:MM:SS` format. The time updates every second, clearing the console screen before each update.

## Features
- Fetches the current system time.
- Displays the time in real-time with automatic updates.
- Clears the console before each update for a clean display.

## Requirements
- A C++ compiler (e.g., `g++`).
- A Unix-like operating system (Linux/macOS) or Windows with a compatible terminal.

## Compilation & Execution
### Linux/macOS:
1. Open a terminal and navigate to the directory containing the source file.
2. Compile the program using:
   ```sh
   g++ -o clock clock.cpp
   ```
3. Run the program:
   ```sh
   ./clock
   ```

### Windows (Using MinGW):
1. Open a terminal and navigate to the source file location.
2. Compile the program:
   ```sh
   g++ -o clock.exe clock.cpp
   ```
3. Run the program:
   ```sh
   clock.exe
   ```

## How It Works
1. The program enters an infinite loop.
2. It retrieves the current system time using `time(0)` and `localtime()`.
3. It clears the console using `[H[J` (ANSI escape sequence).
4. The formatted time is printed in `HH:MM:SS` format.
5. The program waits for 1 second using `sleep(1)`, then repeats.

## Notes
- The program uses `[H[J` to clear the console, which works in Unix-like terminals. On Windows, use `system("cls")` instead.
- To stop the program, press `Ctrl + C`.

## License
This project is open-source and available under the MIT License.
