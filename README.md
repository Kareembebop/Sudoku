# High-Performance Sudoku Engine (C++)

A robust, console-based implementation of the Sudoku puzzle built with Modern C++. This project demonstrates a modular, object-oriented design (OOP) and leverages the C++ Standard Template Library (STL) to create a decoupled architecture. The core logic is isolated from the user interface, ensuring the engine can be extended with a GUI (e.g., Qt) in the future with minimal changes.

## 🚀 Key Features
* **Modular OOP Architecture:** Distinct separation between board logic, the solver engine, and the game controller.
* **Recursive Backtracking Solver:** An automated solver capable of completing any valid 9x9 puzzle or detecting unsolvability.
* **Input Validation:** Real-time checking for row, column, and 3x3 grid constraints to ensure move validity.
* **File Persistence:** Support for loading initial puzzles from files and saving current game states.
* **Interactive Console UI:** A neat ASCII grid display using `.` for empty cells and numbered coordinates for easy navigation.

## 🏗️ Technical Architecture
The project is divided into specific modules to ensure a clean **Separation of Concerns**:

- **`SudokuBoard`**: Manages the 9x9 grid storage (`std::vector<std::vector<int>>`) and performs validity checks.
- **`SudokuSolver`**: Encapsulates the backtracking algorithm to solve puzzles efficiently.
- **`SudokuGame`**: Coordinates the game loop, presents the menu, and handles error-checking for user moves.
- **`SudokuGenerator` (Optional)**: Handles the creation of unique puzzles with varying difficulty levels.

## 💻 Technical Details
- **Language:** C++ (Standard Template Library).
- **Data Structure:** 2D Vector (`std::vector<std::vector<int>>`).
- **Build System:** CMake.
- **Algorithm:** Depth-First Search / Recursive Backtracking.

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
