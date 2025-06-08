# 🔢🧮 MatrixMaestro: C++ Array Operations & Analysis 📊
_A C++ console application for generating, displaying, analyzing, and managing 2D matrices with various mathematical operations._

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B%2011%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

## 📋 Table of Contents
1.  [Overview](#-overview)
2.  [Key Features & Matrix Operations](#-key-features--matrix-operations)
3.  [Screenshots](#-screenshots)
4.  [System Requirements](#-system-requirements)
5.  [Installation and Setup](#️-installation-and-setup)
6.  [Usage Guide](#️-usage-guide)
7.  [File Structure & Data Persistence](#-file-structure--data-persistence)
8.  [Technical Notes](#-technical-notes)
9.  [Contributing](#-contributing)
10. [License](#-license)
11. [Contact](#-contact)

## 📄 Overview

**MatrixMaestro**, developed by Adrian Lesniak, is a C++ console application designed to perform a variety of operations on two-dimensional matrices (arrays). The program can generate random matrices (an 8x8 matrix 'A' and a 5x8 matrix 'B'), display them with formatted output, and execute specific analyses: calculating the arithmetic mean of elements below matrix A's main diagonal, computing column sums for matrix B (Table C), and finding the maximum value in each row of matrix B (Table D). Additionally, it supports saving the generated matrices to text files (`matrix_A.txt`, `matrix_B.txt`) and loading them back. The application features a colorful, menu-driven interface and leverages Windows-specific console functions for an enhanced user experience.

## ✨ Key Features & Matrix Operations

*   🎲 **Matrix Generation & Display**:
    *   `wpisanie_tablicy`: Fills matrix A (8x8) and matrix B (5x8) with pseudo-random floating-point numbers (typically in the range 0.0 to 5.0).
    *   `wypisz`: Displays the contents of matrices A and B with aligned, fixed-precision formatting for easy readability.
*   📊 **Matrix Analysis**:
    *   `srednia_aryt` (for Matrix A): Calculates and displays the arithmetic mean of all elements located below the main diagonal of the 8x8 matrix A.
    *   `tabela_C` (for Matrix B): Computes and displays the sum of elements for each column in the 5x8 matrix B.
    *   `tabela_D` (for Matrix B): Finds and displays the maximum value for each row in the 5x8 matrix B.
*   💾 **File Input/Output**:
    *   `saveToFile`: Saves the current contents of matrix A to `matrix_A.txt` and matrix B to `matrix_B.txt`.
    *   `loadFromFile`: Loads matrix data from `matrix_A.txt` and `matrix_B.txt` into the program's A and B matrices, with basic error handling for file opening.
*   🖥️ **Interactive Console Interface**:
    *   `displayHeader`: Shows a program title, author credit, and a list of available features/operations.
    *   **Menu System**: Provides a clear, numbered menu for users to select operations (generate, display, analyze, save, load, exit).
    *   **Colorful Output**: Utilizes Windows console API (`SetConsoleTextAttribute`) for distinct colors (cyan, green, yellow, white, red, magenta) to improve UI clarity and user engagement.
*   🛠️ **Utility Functions**:
    *   `clearScreen`: Clears the console window (using `system("cls")` on Windows).
    *   `setColor`: Sets the text color in the console.
    *   `waitForKeypress`: Pauses program execution, prompting the user to press any key before returning to the main menu.
*   ⚙️ **Robust Operation**:
    *   The main program loop continues until the user chooses to exit (option 0).
    *   Handles invalid menu choices with informative error messages.



# 🔢🧮 MatrixMaestro: C++ Array Operations & Analysis 📊

_A C++ console application for generating, displaying, analyzing, and managing 2D matrices with various mathematical operations._

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B%2011%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

---

## 📄 Overview

**MatrixMaestro** is a C++ console application by Adrian Lesniak for working with two matrices:
- Matrix **A**: 8x8
- Matrix **B**: 5x8

The program allows you to generate random matrices, display them, calculate the arithmetic mean below the main diagonal (A), compute column sums (B), find row maximums (B), and save/load matrices from files. The interface is menu-driven and uses Windows console colors for clarity.

![Demo GIF](screenshots/1.gif)
---

## ✨ Key Features

- **Matrix Generation & Display**
  - Generate random floating-point numbers (0.0–5.0) for matrices A and B.
  - Display matrices with aligned, fixed-precision formatting.

- **Matrix Analysis**
  - Calculate the arithmetic mean of elements below the main diagonal of matrix A.
  - Compute column sums for matrix B (Table C).
  - Find the maximum value in each row of matrix B (Table D).

- **File Operations**
  - Save matrices A and B to `matrix_A.txt` and `matrix_B.txt`.
  - Load matrices from these files, with error handling.

- **User Interface**
  - Colorful, menu-driven console interface (Windows only).
  - Clear error messages for invalid input or file errors.

---

## 🖥️ System Requirements

- **OS:** Windows (uses `<windows.h>`)
- **Compiler:** C++11 or newer (e.g., g++, MSVC)
- **Permissions:** Write access to the program directory for saving/loading files

---

## 🖼️ Screenshots

_Screenshots showcasing the main menu, matrix display, outputs for mean calculation, column sums, row maximums, and examples of the saved matrix files._

<p align="center">
  <img src="screenshots\1.jpg" width="300"/>
  <img src="screenshots\2.jpg" width="300"/>
  <img src="screenshots\3.jpg" width="300"/>
  <img src="screenshots\4.jpg" width="300"/>
  <img src="screenshots\5.jpg" width="300"/>
  <img src="screenshots\6.jpg" width="300"/>
  <img src="screenshots\7.jpg" width="300"/>
  <img src="screenshots\8.jpg" width="300"/>
</p>


## 🛠️ Installation & Setup

1. **Clone the repository**
    ```bash
    git clone <repository-url>
    cd <repository-directory>
    ```
2. **Compile**
    ```bash
    g++ main.cpp -o matrix_maestro.exe -std=c++11 -static-libgcc -static-libstdc++
    ```
3. **Run**
    ```bash
    .\matrix_maestro.exe
    ```

---

## 💡 Usage Guide

- On launch, you'll see a menu:
    1. Generate new matrices
    2. Display matrices
    3. Calculate arithmetic mean below main diagonal (A)
    4. Calculate column sums (B, Table C)
    5. Find row maximums (B, Table D)
    6. Save matrices to file
    7. Load matrices from file
    0. Exit

- Enter a number (0–7) and press Enter.
- After each operation, press any key to return to the menu.
- Matrices are saved as space-separated values, one row per line.

---

## 🗂️ File Structure

- `main.cpp` — Main source file with all logic
- `matrix_A.txt` — Saved data for matrix A
- `matrix_B.txt` — Saved data for matrix B
- `README.md` — This documentation

---

## 📝 Technical Notes

- Uses `rand()` seeded with `time(NULL)` for random numbers.
- Matrices are fixed-size C-style arrays.
- File operations assume correct format; basic error handling is included.
- Uses Windows API for colored output and screen clearing.

---

## 🤝 Contributing

Contributions are welcome! Please fork the repo, create a feature branch, and open a pull request.

---

## 📃 License

MIT License. See the LICENSE file for details.

---

## 📧 Contact

Created by **Adrian Lesniak**.  
For questions or feedback, open an issue on GitHub.

---
📐 _Manipulating matrices with precision and clarity!_
