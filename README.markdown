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

## 🖼️ Screenshots

**Coming soon!**

_This section will be updated with screenshots showcasing the main menu, matrix display, outputs for mean calculation, column sums, row maximums, and examples of the saved matrix files._

## ⚙️ System Requirements

*   **Operating System**: Windows (due to dependencies like `<windows.h>` for `SetConsoleTextAttribute` and `system("cls")`).
*   **C++ Compiler**: A C++ compiler supporting C++11 or later (e.g., g++, MSVC).
*   **Standard C++ Libraries**: `<iostream>`, `<vector>` (if used for matrices, though description implies fixed-size 2D arrays), `<ctime>`, `<cstdlib>`, `<iomanip>`, `<fstream>`, `<limits>`.
*   **Write Permissions**: The application needs write permissions in its execution directory to create/overwrite `matrix_A.txt` and `matrix_B.txt`.

## 🛠️ Installation and Setup

1.  **Clone the Repository**:
    ```bash
    git clone <repository-url>
    cd <repository-directory>
    ```
    (Replace `<repository-url>` and `<repository-directory>` with your specific details)

2.  **Save Main Code**:
    Ensure your main program logic (including all matrix operation functions, UI functions, and `main()`) is saved as `matrix_operations.cpp` (or your chosen main file name) in the project directory. *(The description implies a single-file structure for the core logic, with utilities potentially inlined or also within this file if no separate `utils.h` is mandated by the actual code for this project).*

3.  **Compile the Program**:
    Open a terminal (Command Prompt, PowerShell, etc.) in the project directory.
    **Example using g++ (MinGW):**
    ```bash
    g++ matrix_operations.cpp -o matrix_operations.exe -std=c++11 -static-libgcc -static-libstdc++
    ```
    *(Adjust if you have separate utility `.cpp` files that need to be compiled and linked).*

4.  **Run the Program**:
    ```bash
    .\matrix_operations.exe
    ```
    (or `matrix_operations.exe` in CMD)

## 💡 Usage Guide

1.  Compile and run `matrix_operations.exe` as detailed above.
2.  **Interface**:
    *   The program will display a header with program details and then the main menu:
        1.  Generate new matrices (A: 8x8, B: 5x8)
        2.  Display matrices A and B
        3.  Calculate arithmetic mean below main diagonal of matrix A
        4.  Calculate column sums for matrix B (Table C)
        5.  Find row maximums for matrix B (Table D)
        6.  Save matrices to file
        7.  Load matrices from file
        0.  Exit
3.  **Input**:
    *   Select a menu option (0–7) by typing the number and pressing Enter.
    *   Invalid menu inputs will trigger an error message and re-display the menu.
4.  **Output**:
    *   **Option 1 (Generate)**: Confirms that new random matrices A and B have been generated.
    *   **Option 2 (Display)**: Shows the contents of matrix A (8x8) and matrix B (5x8) with neatly aligned numbers (e.g., "3.20 4.70 ...").
    *   **Option 3 (Mean for A)**: Displays the calculated arithmetic mean of elements below A's main diagonal (e.g., "Arithmetic mean of elements below main diagonal of matrix A: 2.50").
    *   **Option 4 (Column Sums for B)**: Shows the sums for each column of matrix B, labeled as Table C (e.g., "Table C (Column Sums for B): 12.30 15.70 ...").
    *   **Option 5 (Row Maximums for B)**: Displays the maximum value found in each row of matrix B, labeled as Table D (e.g., "Table D (Row Maximums for B): 4.90 5.00 ...").
    *   **Option 6 (Save)**: Confirms that matrices A and B have been saved to `matrix_A.txt` and `matrix_B.txt` respectively.
    *   **Option 7 (Load)**: Confirms successful loading of matrices from files, or an error message if files are not found or cannot be read.
5.  **Actions**:
    *   After each operation and display of results, you will be prompted to press any key to return to the main menu.
    *   Select option `0` from the main menu to exit the application.

## 🗂️ File Structure & Data Persistence

*   `matrix_operations.cpp`: The main C++ source file containing all program logic, including matrix generation, operations, UI management, and file handling.
*   `matrix_A.txt`: A plain text file where the data for matrix A is stored. Created or overwritten by the "Save" operation and read by the "Load" operation.
*   `matrix_B.txt`: A plain text file where the data for matrix B is stored. Created or overwritten by the "Save" operation and read by the "Load" operation.
*   `README.md`: This documentation file.

## 📝 Technical Notes

*   **Windows Specifics**: The project heavily relies on Windows-specific headers (`<windows.h>`) and functions (`SetConsoleTextAttribute`, `system("cls")`, potentially `_getch()`) for console appearance and interaction. Adapting for true cross-platform compatibility would require using ANSI escape codes for colors, `system("clear")` for screen clearing on Unix-like systems, or a cross-platform library like ncurses.
*   **Random Number Generation**: Uses `rand()` seeded with `time(NULL)` to generate floating-point numbers, typically scaled to the range 0.0 to 5.0. For more uniform or cryptographically secure random numbers, C++11 `<random>` utilities are preferred.
*   **Matrix Representation**: Matrices A (8x8) and B (5x8) are likely implemented as fixed-size 2D C-style arrays (e.g., `float matrixA[8][8];`) or `std::array<std::array<float, 8>, 8>`.
*   **File Format for Matrices**: The `.txt` files for matrices will store the numbers in a way that allows them to be easily read back, likely space-separated values per row, with each row on a new line.
*   **Input Validation for File Ops**: The description notes "no input validation for file operations; assumes correct file format." Robust applications would include checks for file integrity and correct formatting upon loading.
*   **Potential Enhancements**: Could be extended by adding more complex matrix operations (e.g., multiplication, transpose, determinant, inverse), implementing error logging to a separate file, improving cross-platform support, or adding more sophisticated input validation for file data.

## 🤝 Contributing

Contributions to **MatrixMaestro** are highly encouraged! If you have ideas for adding new matrix operations, improving the efficiency of existing algorithms, enhancing cross-platform compatibility, or refining the user interface:

1.  Fork the repository.
2.  Create a new branch for your feature (`git checkout -b feature/YourMatrixEnhancement`).
3.  Make your changes and commit them (`git commit -m 'Feature: Implement YourMatrixEnhancement'`).
4.  Push to the branch (`git push origin feature/YourMatrixEnhancement`).
5.  Open a Pull Request.

Please ensure your code is well-commented and adheres to good C++ practices.

## 📃 License

This project is licensed under the **MIT License**.
(If you have a `LICENSE` file in your repository, refer to it: `See the LICENSE file for details.`)

## 📧 Contact

Created by **Adrian Lesniak**.
For questions, feedback, or issues, please open an issue on the GitHub repository or contact the repository owner.

---
📐 _Manipulating matrices with precision and clarity!_
