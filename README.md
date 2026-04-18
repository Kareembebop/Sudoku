# High-Performance Sudoku Engine (C++)

A robust, console-based implementation of the Sudoku puzzle built with Modern C++. [cite_start]This project demonstrates a modular, object-oriented design (OOP) and leverages the C++ Standard Template Library (STL) to create a decoupled architecture[cite: 7, 8]. [cite_start]The core logic is isolated from the user interface, ensuring the engine can be extended with a GUI (e.g., Qt) in the future with minimal changes[cite: 12].

## 🚀 Key Features
* [cite_start]**Modular OOP Architecture:** Distinct separation between board logic, the solver engine, and the game controller[cite: 19].
* [cite_start]**Recursive Backtracking Solver:** An automated solver capable of completing any valid 9x9 puzzle or detecting unsolvability[cite: 41, 69].
* [cite_start]**Input Validation:** Real-time checking for row, column, and $3 \times 3$ grid constraints to ensure move validity[cite: 35, 65].
* [cite_start]**File Persistence:** Support for loading initial puzzles from files and saving current game states[cite: 31, 52, 53].
* [cite_start]**Interactive Console UI:** A neat ASCII grid display using `.` for empty cells and numbered coordinates for easy navigation[cite: 28, 36].

## 🏗️ Technical Architecture
[cite_start]The project is divided into specific modules to ensure a clean **Separation of Concerns**[cite: 19]:

- [cite_start]**`SudokuBoard`**: Manages the 9x9 grid storage (`std::vector<std::vector<int>>`) and performs validity checks[cite: 61, 65, 85].
- [cite_start]**`SudokuSolver`**: Encapsulates the backtracking algorithm to solve puzzles efficiently[cite: 67, 69].
- [cite_start]**`SudokuGame`**: Coordinates the game loop, presents the menu, and handles error-checking for user moves[cite: 70, 72, 74].
- [cite_start]**`SudokuGenerator` (Optional)**: Handles the creation of unique puzzles with varying difficulty levels[cite: 57, 78].

## 💻 Technical Details
- [cite_start]**Language:** C++ (Standard Template Library)[cite: 8].
- [cite_start]**Data Structure:** 2D Vector (`std::vector<std::vector<int>>`)[cite: 85].
- [cite_start]**Build System:** CMake[cite: 24].
- [cite_start]**Algorithm:** Depth-First Search / Recursive Backtracking[cite: 18, 41].

## 🛠️ Build & Run Instructions
Ensure you have a C++ compiler and CMake installed on your system.

```bash
# 1. Create a build directory
mkdir build && cd build

# 2. Configure the project with CMake
cmake ..

# 3. Compile the project
make

# 4. Run the application
./SudokuGame
