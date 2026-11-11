#include <array>
#include <iostream>

namespace {
constexpr char empty = ' ';

void printBoard(const std::array<char, 9>& board) {
    std::cout << '\n';
    for (int row = 0; row < 3; ++row) {
        std::cout << ' ' << board[row * 3] << " | " << board[row * 3 + 1]
                  << " | " << board[row * 3 + 2] << '\n';
        if (row != 2) {
            std::cout << "---+---+---\n";
        }
    }
    std::cout << '\n';
}

bool hasWon(const std::array<char, 9>& board, char mark) {
    constexpr int lines[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };
    for (const auto& line : lines) {
        if (board[line[0]] == mark && board[line[1]] == mark && board[line[2]] == mark) {
            return true;
        }
    }
    return false;
}
}

int main() {
    std::array<char, 9> board;
    board.fill(empty);
    char current = 'X';

    for (int turn = 0; turn < 9; ++turn) {
        printBoard(board);
        std::cout << "Player " << current << ", choose a cell (1-9): ";
        int cell = 0;
        if (!(std::cin >> cell)) {
            std::cerr << "Please enter a number.\n";
            return 1;
        }
        if (cell < 1 || cell > 9 || board[static_cast<std::size_t>(cell - 1)] != empty) {
            std::cout << "That cell is unavailable; try again.\n";
            --turn;
            continue;
        }

        board[static_cast<std::size_t>(cell - 1)] = current;
        if (hasWon(board, current)) {
            printBoard(board);
            std::cout << "Player " << current << " wins!\n";
            return 0;
        }
        current = current == 'X' ? 'O' : 'X';
    }

    printBoard(board);
    std::cout << "It's a draw!\n";
    return 0;
}
