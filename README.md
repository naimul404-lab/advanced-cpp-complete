# Advanced C++ Learning and Project Pack

A practical C++17 learning repository with standalone examples and console projects. It covers language fundamentals, object-oriented design, STL, templates, memory management, concurrency, file I/O, and project structure.

## Build

Requirements: a C++17 compiler and CMake 3.16 or newer.

```bash
cmake -S . -B build
cmake --build build --parallel
```

Each example is a separate executable. Run one from the build directory, for example:

```bash
./build/tic_tac_toe
./build/expense_tracker
```

On Windows, executables have the `.exe` extension. IDE users can open this directory in an IDE with CMake support.

## Project pack

- `calculator`: arithmetic calculator with division-by-zero handling
- `todo_app`: in-memory task list
- `atm_simulator`: basic ATM menu simulation (demo only; not a real banking system)
- `student_management`: simple student records demonstration
- `employee_management`: employee records demonstration
- `banking_system`: in-memory account/deposit/withdraw simulation (demo only)
- `library_management`: borrow/return book demonstration
- `inventory_system`: stock management demonstration
- `tic_tac_toe`: two-player terminal game
- `expense_tracker`: add/list expenses, saved to a local CSV-style file
- `word_counter`: count words, lines, and characters in a text file

These are educational console applications, not production-ready financial or data-management systems. Data files are local to the current working directory.

## Learning examples

Examples are grouped in `01_basics/` through `07_file_io/`. Each source file can be read independently. CMake target names are listed in `CMakeLists.txt`.

## Multi-language examples

The repository also contains introductory examples in several other languages. CMake builds only the C++ targets; other language examples need their respective toolchains.

## License

MIT. See `LICENSE`.
