# Advanced Project Pack

All projects are standalone C++17 console programs built with CMake from the repository root:

```bash
cmake -S . -B build
cmake --build build --parallel
```

Run an executable from the build directory. Programs that save data create their data file in the process's current working directory. Keep a backup before editing or removing those demo files.

| Project | Demonstrates |
| --- | --- |
| Calculator | Input, selection, and arithmetic validation |
| TODO app | Vectors, menu loops, and basic task operations |
| ATM simulator | Classes and menu-driven state (simulation only) |
| Student management | Structures and collections |
| Employee management | Searching and collection updates |
| Banking system | Encapsulation and account operations (simulation only) |
| Library management | Record updates and availability state |
| Inventory system | Quantity and stock operations |
| Tic-tac-toe | 2D arrays, input validation, and game logic |
| Expense tracker | Input validation and simple local persistence |
| Word counter | Text-file processing and stream state |

These are learning exercises. They do not provide robust persistence, authentication, accounting, or production safeguards.
