﻿#include <iostream>
using namespace std;
int board[8][8];

void setQueen(int i, int j) {
    for (int b = 0; b <= 7; ++b) {
        ++board[b][j];
        ++board[i][b];
        int sh;
        sh = j - i + b;
        if (sh >= 0 && sh <= 7) {
            ++board[b][sh];
        }
        sh = i + j - b;
        if (sh >= 0 && sh <= 7) {
            ++board[b][sh];
        }
    }
    board[i][j] = -1;
}

void resetQueen(int i, int j) {
    for (int b = 0; b <= 7; ++b) {
        --board[b][j];
        --board[i][b];
        int sh;
        sh = j - i + b;
        if (sh >= 0 && sh <= 7) {
            --board[b][sh];
        }
        sh = i + j - b;
        if (sh >= 0 && sh <= 7) {
            --board[b][sh];
        }
    }
    board[i][j] = 0;
}

bool tryQueen(int i) {
    bool result = false;
    for (int j = 0; j <= 7; ++j) {
        if (board[i][j] == 0) {
            setQueen(i, j);
            if (i == 7) {
                result = true;
            }
            else {
                result = tryQueen(i + 1);
                if (!result) {
                    resetQueen(i, j);
                }
            }
        }
    }
    return result;
}

int main() {
    for (int i = 0; i <= 7; ++i) {
        for (int j = 0; j <= 7; ++j) {
            board[i][j] = 0;
        }
    }

    tryQueen(0);

    for (int i = 0; i <= 7; ++i) {
        for (int j = 0; j <= 7; ++j) {
            if (board[i][j] == -1) {
                cout << " Q";
            }
            else {
                cout << "[]";
            }
        }
        cout << endl;
    }

    return 0;
}

				