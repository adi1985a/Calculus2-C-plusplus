# Matrix Operations Program

## Overview
This C++ console application, authored by Adrian Lesniak, provides a menu-driven interface for matrix operations. It generates random 8x8 (A) and 5x8 (B) matrices, displays them, calculates the arithmetic mean below A's main diagonal, computes column sums and row maximums for B, and supports saving/loading matrices to/from files. It features colored output and Windows-specific console functions.

## Features
- **Matrix Operations**:
  - `wpisanie_tablicy`: Fills matrices with random numbers (0.0 to 5.0).
  - `wypisz`: Displays matrices with formatted output (fixed precision).
  - `srednia_aryt`: Calculates mean of elements below A's main diagonal.
  - `tabela_C`: Computes column sums for matrix B.
  - `tabela_D`: Finds maximum values in each row of matrix B.
- **File I/O**:
  - `saveToFile`: Saves matrices to `matrix_A.txt` and `matrix_B.txt`.
  - `loadFromFile`: Loads matrices from files, with error handling.
- **Interface**:
  - `displayHeader`: Shows program title, author, and feature list.
  - Menu options: generate matrices, display matrices, calculate mean, column sums, row maximums, save/load matrices, exit.
  - Colored output (cyan, green, yellow, white, red, magenta) using Windows console API.
- **Utilities**:
  - `clearScreen`: Clears console (Windows-specific `cls`).
  - `setColor`: Sets console text color.
  - `waitForKeypress`: Pauses for user input to return to menu.
- **Main Program**:
  - Loops until user selects exit (0).
  - Handles invalid menu choices with error messages.

## Requirements
- C++ compiler (e.g., g++, MSVC) with C++11 or later
- Windows OS (for `<windows.h>`, `SetConsoleTextAttribute`, `system("cls")`)
- Standard C++ libraries: `<iostream>`, `<ctime>`, `<cstdlib>`, `<iomanip>`, `<fstream>`, `<windows.h>`, `<limits>`
- Operating system: Windows (due to console functions)
- Write permissions for `matrix_A.txt` and `matrix_B.txt`

## Setup
1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```
2. Save the provided code as `matrix_operations.cpp`.
3. Compile the program:
   ```bash
   g++ matrix_operations.cpp -o matrix_operations
   ```
4. Run the program:
   ```bash
   .\matrix_operations
   ```

## Usage
1. Compile and run the program using the steps above.
2. **Interface**:
   - Displays header with program details and menu options:
     1. Generate new matrices
     2. Display matrices
     3. Calculate arithmetic mean
     4. Calculate column sums (Table C)
     5. Find row maximums (Table D)
     6. Save matrices to file
     7. Load matrices from file
     0. Exit
3. **Input**:
   - Enter 0–7 to select an option.
   - Invalid inputs trigger error messages and retry prompts.
4. **Output**:
   - Option 1: Confirms matrix generation.
   - Option 2: Shows matrices A (8x8) and B (5x8) with aligned numbers (e.g., "3.2 4.7 ...").
   - Option 3: Displays mean below A's diagonal (e.g., "Arithmetic mean: 2.5").
   - Option 4: Shows column sums for B (e.g., "Table C: 12.3 15.7 ...").
   - Option 5: Shows row maximums for B (e.g., "Table D: 4.9 5.0 ...").
   - Option 6: Confirms saving to `matrix_A.txt` and `matrix_B.txt`.
   - Option 7: Loads and confirms matrices from files.
5. **Actions**:
   - Press any key to return to menu after each operation.
   - Select 0 to exit.

## File Structure
- `matrix_operations.cpp`: Main C++ source file with program logic.
- `matrix_A.txt`: Output file for matrix A data (created/overwritten).
- `matrix_B.txt`: Output file for matrix B data (created/overwritten).
- `README.md`: This file, providing project documentation.

## Notes
- Windows-specific due to `<windows.h>` and `system("cls")`; adapt for other OS (e.g., `system("clear")`, ANSI colors).
- Random numbers use `rand()` seeded with `time(NULL)`; limited to 0.0–5.0.
- No input validation for file operations; assumes correct file format.
- Extend by adding more matrix operations (e.g., transpose, determinant), error logging, or cross-platform support.
- Ensure write permissions for `matrix_A.txt` and `matrix_B.txt`.
- No external dependencies beyond standard C++ libraries.

## Contributing
Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make changes and commit (`git commit -m "Add feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact
For questions or feedback, open an issue on GitHub or contact the repository owner.